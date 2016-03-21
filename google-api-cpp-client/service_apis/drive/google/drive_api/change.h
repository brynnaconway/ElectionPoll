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
//   Drive API (drive/v2)
// Generated from:
//   Version: v2
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_DRIVE_API_CHANGE_H_
#define  GOOGLE_DRIVE_API_CHANGE_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/drive_api/file.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_drive_api {
using namespace googleapis;

/**
 * Representation of a change to a file.
 *
 * @ingroup DataObject
 */
class Change : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Change* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Change(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Change(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Change();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_drive_api::Change</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_drive_api::Change");
  }

  /**
   * Determine if the '<code>deleted</code>' attribute was set.
   *
   * @return true if the '<code>deleted</code>' attribute was set.
   */
  bool has_deleted() const {
    return Storage().isMember("deleted");
  }

  /**
   * Clears the '<code>deleted</code>' attribute.
   */
  void clear_deleted() {
    MutableStorage()->removeMember("deleted");
  }


  /**
   * Get the value of the '<code>deleted</code>' attribute.
   */
  bool get_deleted() const {
    const Json::Value& storage = Storage("deleted");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>deleted</code>' attribute.
   *
   * Whether the file has been deleted.
   *
   * @param[in] value The new value.
   */
  void set_deleted(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("deleted"));
  }

  /**
   * Determine if the '<code>file</code>' attribute was set.
   *
   * @return true if the '<code>file</code>' attribute was set.
   */
  bool has_file() const {
    return Storage().isMember("file");
  }

  /**
   * Clears the '<code>file</code>' attribute.
   */
  void clear_file() {
    MutableStorage()->removeMember("file");
  }


  /**
   * Get a reference to the value of the '<code>file</code>' attribute.
   */
  const File get_file() const;

  /**
   * Gets a reference to a mutable value of the '<code>file</code>' property.
   *
   * The updated state of the file. Present if the file has not been deleted.
   *
   * @return The result can be modified to change the attribute value.
   */
  File mutable_file();

  /**
   * Determine if the '<code>fileId</code>' attribute was set.
   *
   * @return true if the '<code>fileId</code>' attribute was set.
   */
  bool has_file_id() const {
    return Storage().isMember("fileId");
  }

  /**
   * Clears the '<code>fileId</code>' attribute.
   */
  void clear_file_id() {
    MutableStorage()->removeMember("fileId");
  }


  /**
   * Get the value of the '<code>fileId</code>' attribute.
   */
  const StringPiece get_file_id() const {
    const Json::Value& v = Storage("fileId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>fileId</code>' attribute.
   *
   * The ID of the file associated with this change.
   *
   * @param[in] value The new value.
   */
  void set_file_id(const StringPiece& value) {
    *MutableStorage("fileId") = value.data();
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
  int64 get_id() const {
    const Json::Value& storage = Storage("id");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * The ID of the change.
   *
   * @param[in] value The new value.
   */
  void set_id(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("id"));
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
   * This is always drive#change.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>modificationDate</code>' attribute was set.
   *
   * @return true if the '<code>modificationDate</code>' attribute was set.
   */
  bool has_modification_date() const {
    return Storage().isMember("modificationDate");
  }

  /**
   * Clears the '<code>modificationDate</code>' attribute.
   */
  void clear_modification_date() {
    MutableStorage()->removeMember("modificationDate");
  }


  /**
   * Get the value of the '<code>modificationDate</code>' attribute.
   */
  client::DateTime get_modification_date() const {
    const Json::Value& storage = Storage("modificationDate");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>modificationDate</code>' attribute.
   *
   * The time of this modification.
   *
   * @param[in] value The new value.
   */
  void set_modification_date(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("modificationDate"));
  }

  /**
   * Determine if the '<code>selfLink</code>' attribute was set.
   *
   * @return true if the '<code>selfLink</code>' attribute was set.
   */
  bool has_self_link() const {
    return Storage().isMember("selfLink");
  }

  /**
   * Clears the '<code>selfLink</code>' attribute.
   */
  void clear_self_link() {
    MutableStorage()->removeMember("selfLink");
  }


  /**
   * Get the value of the '<code>selfLink</code>' attribute.
   */
  const StringPiece get_self_link() const {
    const Json::Value& v = Storage("selfLink");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>selfLink</code>' attribute.
   *
   * A link back to this change.
   *
   * @param[in] value The new value.
   */
  void set_self_link(const StringPiece& value) {
    *MutableStorage("selfLink") = value.data();
  }

 private:
  void operator=(const Change&);
};  // Change
}  // namespace google_drive_api
#endif  // GOOGLE_DRIVE_API_CHANGE_H_
