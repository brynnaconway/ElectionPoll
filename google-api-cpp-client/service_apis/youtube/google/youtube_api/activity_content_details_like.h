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
#ifndef  GOOGLE_YOUTUBE_API_ACTIVITY_CONTENT_DETAILS_LIKE_H_
#define  GOOGLE_YOUTUBE_API_ACTIVITY_CONTENT_DETAILS_LIKE_H_

#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/resource_id.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Information about a resource that received a positive (like) rating.
 *
 * @ingroup DataObject
 */
class ActivityContentDetailsLike : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ActivityContentDetailsLike* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ActivityContentDetailsLike(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ActivityContentDetailsLike(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ActivityContentDetailsLike();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::ActivityContentDetailsLike</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::ActivityContentDetailsLike");
  }

  /**
   * Determine if the '<code>resourceId</code>' attribute was set.
   *
   * @return true if the '<code>resourceId</code>' attribute was set.
   */
  bool has_resource_id() const {
    return Storage().isMember("resourceId");
  }

  /**
   * Clears the '<code>resourceId</code>' attribute.
   */
  void clear_resource_id() {
    MutableStorage()->removeMember("resourceId");
  }


  /**
   * Get a reference to the value of the '<code>resourceId</code>' attribute.
   */
  const ResourceId get_resource_id() const;

  /**
   * Gets a reference to a mutable value of the '<code>resourceId</code>'
   * property.
   *
   * The resourceId object contains information that identifies the rated
   * resource.
   *
   * @return The result can be modified to change the attribute value.
   */
  ResourceId mutable_resourceId();

 private:
  void operator=(const ActivityContentDetailsLike&);
};  // ActivityContentDetailsLike
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_ACTIVITY_CONTENT_DETAILS_LIKE_H_
