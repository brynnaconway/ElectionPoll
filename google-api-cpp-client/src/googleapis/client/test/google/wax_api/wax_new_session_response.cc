// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Wax API (wax/v1)
// Description:
//   Apiary system integration testing backend API.
// Classes:
//   WaxNewSessionResponse
// Documentation:
//   http://go/apiarytesting/wax-api

#include "google/wax_api/wax_new_session_response.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_wax_api {
using namespace googleapis;


// Object factory method (static).
WaxNewSessionResponse* WaxNewSessionResponse::New() {
  return new client::JsonCppCapsule<WaxNewSessionResponse>;
}

// Standard immutable constructor.
WaxNewSessionResponse::WaxNewSessionResponse(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
WaxNewSessionResponse::WaxNewSessionResponse(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
WaxNewSessionResponse::~WaxNewSessionResponse() {
}
}  // namespace google_wax_api
