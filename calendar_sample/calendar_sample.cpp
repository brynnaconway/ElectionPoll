// Calendar Sample that works with Google API

class CalendarSample {
		public:
				static utl::Status Startup(int argc, char* argc[]);
				void Run();
		private:
				// gets authorization to access user's personal calendar data
				util::Status Authorize();

				// Prints some current calendar data to the console to show the effects
				// from the calls that the sample has made.
				void ShowCalendars();

				// Demonstrates adding a new resource. For this example, it is a calendar.
				// Returns a proxy to the calendar added in the Calendar Service (cloud).
				// We only really need the ID so that's all we return.
				string AddCalendar();

				// Demonstrates adding an embedded resource.
				// For this example it is a calendar event.
				//
				// This takes a calendar ID such as that returned by AddCalendar().
				// We'll take a configured event as input and modify its ID with the
				// ID assigned by the Calendar Service (cloud). We could have just returned
				// the ID as in the case of Calendar but we are doing it differently for
				// demonstration purposes.
				void AddEvent(const string& calendar_id, Event* event);

				// Demonstrates using a ServiceRequestPager to list all the events on the
				// given calendar.
				void PageThroughAllEvents(const string& calendar_id, int events_per_page);

				// Demonstrates deleting a resource. For this example, it is a calendar.
				// We are deleting the calendar in the Calendar Service (cloud) that
				// has the given calendar_id.
				void DeleteCalendar(const string& calendar_id);

				// Demonstrates getting a resource.
				// For this example, it is a calendar event.
				// Returns the final status for the request. If not ok() then event wasn't
				// populated.
				util::Status GetEvent(
								const string& calendar_id, const StringPiece& event_id, Event* event);

				// Demonstrates patching a resource.
				// For this example, it is a calendar event.
				void PatchEvent(const string& calendar_id, const Event& event);

				// Demonstrates updating a resource.
				// For this example, it is a calendar event.
				void UpdateEvent(const string& calendar_id, const Event& event);

				OAuth2Credential credential_;
				static scoped_ptr<CalendarService> service_;
				static scoped_ptr<OAuth2AuthorizationFlow> flow_;
				static scoped_ptr<HttpTransportLayerConfig> config_;
};

util::Status CalendarSample::Startup(int argc, char* argv[]) {
		if ((argc < 2) || (argc > 3)) {
				string error =
						StrCat("Invalid Usage:\n",
										argv[0], " <client_secrets_file> [<cacerts_path>]\n");
				return StatusInvalidArgument(error);
		}

		// Set up HttpTransportLayer.
		util::Status status;
		config_.reset(new HttpTransportLayerConfig);
		googleapis_client::HttpTransportFactory* factory =
				new googleapis_client::CurlHttpTransportFactory(config_.get());
		config_->ResetDefaultTransportFactory(factory);
		if (argc > 2) {
				config_->mutable_default_transport_options()->set_cacerts_path(argv[2]);
		}

		// Set up OAuth 2.0 flow for getting credentials to access personal data.
		const StringPiece client_secrets_file = argv[1];
		flow_.reset(OAuth2AuthorizationFlow::MakeFlowFromClientSecretsPath(
								client_secrets_file, config_->NewDefaultTransportOrDie(), &status));
		if (!status.ok()) return status;

		flow_->set_default_scopes(CalendarService::SCOPES::CALENDAR);
		flow_->mutable_client_spec()->set_redirect_uri(
						OAuth2AuthorizationFlow::kOutOfBandUrl);
		flow_->set_authorization_code_callback(
						NewPermanentCallback(&PromptShellForAuthorizationCode, flow_.get()));

		string home_path;
		status = FileCredentialStoreFactory::GetSystemHomeDirectoryStorePath(
						&home_path);
		if (status.ok()) {
				FileCredentialStoreFactory store_factory(home_path);
				// Use a credential store to save the credentials between runs so that
				// we dont need to get permission again the next time we run. We are
				// going to encrypt the data in the store, but leave it to the OS to
				// protect access since we do not authenticate users in this sample.
#if HAVE_OPENSSL
				OpenSslCodecFactory* openssl_factory = new OpenSslCodecFactory;
				status = openssl_factory->SetPassphrase(
								flow_->client_spec().client_secret());
				if (!status.ok()) return status;
				store_factory.set_codec_factory(openssl_factory);
#endif

				flow_->ResetCredentialStore(
								store_factory.NewCredentialStore("CalendarSample", &status));
		}
		if (!status.ok()) return status;

		// Now we'll initialize the calendar service proxy that we'll use
		// to interact with the calendar from this sample program.
		HttpTransport* transport = config_->NewDefaultTransport(&status);
		if (!status.ok()) return status;

		service_.reset(new CalendarService(transport));
		return status;
}
static util::Status PromptShellForAuthorizationCode(
				OAuth2AuthorizationFlow* flow,
				const OAuth2RequestOptions& options,
				string* authorization_code) {
		string url = flow->GenerateAuthorizationCodeRequestUrlWithOptions(options);
		cout << "Enter the following URL into a browser:\n" << url << endl;
		cout << endl;
		cout << "Enter the browser's response to confirm authorization: ";

		authorization_code->clear();
		cin >> *authorization_code;
		if (authorization_code->empty()) {
				return StatusCanceled("Canceled");
		} else {
				return StatusOk();
		}
}
util::Status CalendarSample::Authorize() {
		cout
				<< endl
				<< "Welcome to the Google APIs for C++ CalendarSample.\n"
				<< "  You will need to authorize this program to look at your calendar.\n"
				<< "  If you would like to save these credentials between runs\n"
				<< "  (or restore from an earlier run) then enter a User ID.\n"
				<< "  Otherwise just press return.\n"
				<< endl
				<< "  ID: ";
		string id;
		std::getline(cin, id);
		if (!id.empty()) {
				util::Status status = ValidateUserName(id);
				if (!status.ok()) {
						return status;
				}
		}

		OAuth2RequestOptions options;
		options.user_id = id;
		util::Status status =
				flow_->RefreshCredentialWithOptions(options, &credential_);
		if (!status.ok()) {
				return status;
		}

		credential_.set_flow(flow_.get());
		cout << "Authorized " << id << endl;
		return StatusOk();
}

static util::Status ValidateUserName(const string& name) {
		if (name.find("/") != string::npos) {
				return StatusInvalidArgument("UserNames cannot contain '/'");
		} else if (name == "." || name == "..") {
				return StatusInvalidArgument(
								StrCat("'", name, "' is not a valid UserName"));
		}
		return StatusOk();
}

string CalendarSample::AddCalendar() {
		scoped_ptr<Calendar> calendar(Calendar::New());
		calendar->set_summary("Calendar added by CalendarSample");

		scoped_ptr<CalendarsResource_InsertMethod> method(
						service_->get_calendars().NewInsertMethod(&credential_, *calendar));

		if (!method->ExecuteAndParseResponse(calendar.get()).ok()) {
				DisplayError(method.get());
				return "";
		}

		string result = calendar->get_id().as_string();
		cout << "Added new calendar ID=" << result << ":" << endl;
		Display("  ", *calendar);
		cout << endl;

		return result;
}
alendarSample::AddEvent(const string& calendar_id, Event* event) {
		scoped_ptr<EventsResource_InsertMethod> method(
						service_->get_events().NewInsertMethod(
								&credential_, calendar_id, *event));

		if (!method->ExecuteAndParseResponse(event).ok()) {
				DisplayError(method.get());
				return;
		}

		cout << "Added new event ID=" << event->get_id() << ":" << endl;
		Display("  ", *event);
		cout << endl;
}

teTime now;
scoped_ptr<Event> event(Event::New());
event->set_summary("Calendar event added by CalendarSample");
event->mutable_start().set_date_time(now);
event->mutable_end().set_date_time(DateTime(now.ToEpochTime() + 60 * 60));

cout << endl << kSampleStepPrefix << "Add Calendar Event" << endl;
AddEvent(calendar_id, event.get());

CalendarSample::ShowCalendars() {
		scoped_ptr<CalendarListResource_ListMethod> method(
						service_->get_calendarList().NewListMethod(&credential_));

		scoped_ptr<CalendarList> calendar_list(CalendarList::New());
		if (!method->ExecuteAndParseResponse(calendar_list.get()).ok()) {
				DisplayError(method.get());
				return;
		}
		DisplayList<CalendarList, CalendarListEntry>(
						"", "CalendarList", *calendar_list);
		cout << endl;
}

util::Status CalendarSample::GetEvent(
				const string& calendar_id, const StringPiece& event_id, Event* event) {
		scoped_ptr<EventsResource_GetMethod> method(
						service_->get_events().NewGetMethod(
								&credential_, calendar_id, event_id));

		return method->ExecuteAndParseResponse(event);
}
void CalendarSample::PatchEvent(
				const string& calendar_id, const Event& event) {
		scoped_ptr<EventsResource_PatchMethod> method(
						service_->get_events().NewPatchMethod(
								&credential_, calendar_id, event.get_id(), event));

		if (!method->Execute().ok()) {
				DisplayError(method.get());
				return;
		}

		scoped_ptr<Event> cloud_event(Event::New());
		util::Status status =
				GetEvent(calendar_id, event.get_id(), cloud_event.get());
		if (status.ok()) {
				cout << "Patched event:" << endl;
				Display("  ", *cloud_event);
		} else {
				cout << "** Could not get patched event: "
						<< status.error_message() << endl;
		}
		cout << endl;
}

void CalendarSample::UpdateEvent(
				    const string& calendar_id, const Event& event) {
		  scoped_ptr<EventsResource_UpdateMethod> method(
						        service_->get_events().NewUpdateMethod(
										          &credential_, calendar_id, event.get_id(), event));

		    if (!method->Execute().ok()) {
					    DisplayError(method.get());
						    return;
							  }

			  scoped_ptr<Event> cloud_event(Event::New());
			    util::Status status =
						        GetEvent(calendar_id, event.get_id(), cloud_event.get());
				  if (status.ok()) {
						      cout << "Updated event:" << endl;
							      Display("  ", *cloud_event);
								    } else {
											    cout << "** Could not get updated event: "
														         << status.error_message() << endl;
												  }
				    cout << endl;
}

void CalendarSample::DeleteCalendar(const string& id) {
		  scoped_ptr<CalendarsResource_DeleteMethod> method(
						        service_->get_calendars().NewDeleteMethod(&credential_, id));

		    if (!method->Execute().ok()) {
					    DisplayError(method.get());
						    return;
							  }
			  cout << "Deleted ID=" << id << endl;
			    cout << endl;
}
