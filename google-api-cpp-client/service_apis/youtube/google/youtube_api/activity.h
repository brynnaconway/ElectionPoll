// Copyright 2010 Google Inc.
//
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
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_YOUTUBE_API_ACTIVITY_H_
#define  GOOGLE_YOUTUBE_API_ACTIVITY_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/activity_content_details.h"
#include "google/youtube_api/activity_snippet.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * An activity resource contains information about an action that a particular
 * channel, or user, has taken on YouTube.The actions reported in activity feeds
 * include rating a video, sharing a video, marking a video as a favorite,
 * commenting on a video, uploading a video, and so forth. Each activity
 * resource identifies the type of action, the channel associated with the
 * action, and the resource(s) associated with the action, such as the video
 * that was rated or uploaded.
 *
 * @ingroup DataObject
 */
class Activity : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Activity* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Activity(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Activity(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Activity();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::Activity</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::Activity");
  }

  /**
   * Determine if the '<code>contentDetails</code>' attribute was set.
   *
   * @return true if the '<code>contentDetails</code>' attribute was set.
   */
  bool has_content_details() const {
    return Storage().isMember("contentDetails");
  }

  /**
   * Clears the '<code>contentDetails</code>' attribute.
   */
  void clear_content_details() {
    MutableStorage()->removeMember("contentDetails");
  }


  /**
   * Get a reference to the value of the '<code>contentDetails</code>'
   * attribute.
   */
  const ActivityContentDetails get_content_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>contentDetails</code>'
   * property.
   *
   * The contentDetails object contains information about the content associated
   * with the activity. For example, if the snippet.type value is videoRated,
   * then the contentDetails object's content identifies the rated video.
   *
   * @return The result can be modified to change the attribute value.
   */
  ActivityContentDetails mutable_contentDetails();

  /**
   * Determine if the '<code>etag</code>' attribute was set.
   *
   * @return true if the '<code>etag</code>' attribute was set.
   */
  bool has_etag() const {
    return Storage().isMember("etag");
  }

  /**
   * Clears the '<code>etag</code>' attribute.
   */
  void clear_etag() {
    MutableStorage()->removeMember("etag");
  }


  /**
   * Get the value of the '<code>etag</code>' attribute.
   */
  const StringPiece get_etag() const {
    const Json::Value& v = Storage("etag");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>etag</code>' attribute.
   *
   * Etag of this resource.
   *
   * @param[in] value The new value.
   */
  void set_etag(const StringPiece& value) {
    *MutableStorage("etag") = value.data();
  }

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  const StringPiece get_id() const {
    const Json::Value& v = Storage("id");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * The ID that YouTube uses to uniquely identify the activity.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
  }

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * Identifies what kind of resource this is. Value: the fixed string
   * "youtube#activity".
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>snippet</code>' attribute was set.
   *
   * @return true if the '<code>snippet</code>' attribute was set.
   */
  bool has_snippet() const {
    return Storage().isMember("snippet");
  }

  /**
   * Clears the '<code>snippet</code>' attribute.
   */
  void clear_snippet() {
    MutableStorage()->removeMember("snippet");
  }


  /**
   * Get a reference to the value of the '<code>snippet</code>' attribute.
   */
  const ActivitySnippet get_snippet() const;

  /**
   * Gets a reference to a mutable value of the '<code>snippet</code>' property.
   *
   * The snippet object contains basic details about the activity, including the
   * activity's type and group ID.
   *
   * @return The result can be modified to change the attribute value.
   */
  ActivitySnippet mutable_snippet();

 private:
  void operator=(const Activity&);
};  // Activity
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_ACTIVITY_H_
