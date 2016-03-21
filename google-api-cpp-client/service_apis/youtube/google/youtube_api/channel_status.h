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
#ifndef  GOOGLE_YOUTUBE_API_CHANNEL_STATUS_H_
#define  GOOGLE_YOUTUBE_API_CHANNEL_STATUS_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * JSON template for the status part of a channel.
 *
 * @ingroup DataObject
 */
class ChannelStatus : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ChannelStatus* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelStatus(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelStatus(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ChannelStatus();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::ChannelStatus</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::ChannelStatus");
  }

  /**
   * Determine if the '<code>isLinked</code>' attribute was set.
   *
   * @return true if the '<code>isLinked</code>' attribute was set.
   */
  bool has_is_linked() const {
    return Storage().isMember("isLinked");
  }

  /**
   * Clears the '<code>isLinked</code>' attribute.
   */
  void clear_is_linked() {
    MutableStorage()->removeMember("isLinked");
  }


  /**
   * Get the value of the '<code>isLinked</code>' attribute.
   */
  bool get_is_linked() const {
    const Json::Value& storage = Storage("isLinked");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>isLinked</code>' attribute.
   *
   * If true, then the user is linked to either a YouTube username or G+
   * account. Otherwise, the user doesn't have a public YouTube identity.
   *
   * @param[in] value The new value.
   */
  void set_is_linked(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("isLinked"));
  }

  /**
   * Determine if the '<code>longUploadsStatus</code>' attribute was set.
   *
   * @return true if the '<code>longUploadsStatus</code>' attribute was set.
   */
  bool has_long_uploads_status() const {
    return Storage().isMember("longUploadsStatus");
  }

  /**
   * Clears the '<code>longUploadsStatus</code>' attribute.
   */
  void clear_long_uploads_status() {
    MutableStorage()->removeMember("longUploadsStatus");
  }


  /**
   * Get the value of the '<code>longUploadsStatus</code>' attribute.
   */
  const StringPiece get_long_uploads_status() const {
    const Json::Value& v = Storage("longUploadsStatus");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>longUploadsStatus</code>' attribute.
   *
   * The long uploads status of this channel. See.
   *
   * @param[in] value The new value.
   */
  void set_long_uploads_status(const StringPiece& value) {
    *MutableStorage("longUploadsStatus") = value.data();
  }

  /**
   * Determine if the '<code>privacyStatus</code>' attribute was set.
   *
   * @return true if the '<code>privacyStatus</code>' attribute was set.
   */
  bool has_privacy_status() const {
    return Storage().isMember("privacyStatus");
  }

  /**
   * Clears the '<code>privacyStatus</code>' attribute.
   */
  void clear_privacy_status() {
    MutableStorage()->removeMember("privacyStatus");
  }


  /**
   * Get the value of the '<code>privacyStatus</code>' attribute.
   */
  const StringPiece get_privacy_status() const {
    const Json::Value& v = Storage("privacyStatus");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>privacyStatus</code>' attribute.
   *
   * Privacy status of the channel.
   *
   * @param[in] value The new value.
   */
  void set_privacy_status(const StringPiece& value) {
    *MutableStorage("privacyStatus") = value.data();
  }

 private:
  void operator=(const ChannelStatus&);
};  // ChannelStatus
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_CHANNEL_STATUS_H_
