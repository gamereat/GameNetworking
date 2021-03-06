// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SyncTimeMessage.proto

#ifndef PROTOBUF_SyncTimeMessage_2eproto__INCLUDED
#define PROTOBUF_SyncTimeMessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace SyncTimeMessage {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_SyncTimeMessage_2eproto();
void protobuf_AssignDesc_SyncTimeMessage_2eproto();
void protobuf_ShutdownFile_SyncTimeMessage_2eproto();

class ConnectTime;
class ServerConnectConfirm;
class ClientConfirmConnect;

// ===================================================================

class ConnectTime : public ::google::protobuf::Message {
 public:
  ConnectTime();
  virtual ~ConnectTime();

  ConnectTime(const ConnectTime& from);

  inline ConnectTime& operator=(const ConnectTime& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ConnectTime& default_instance();

  void Swap(ConnectTime* other);

  // implements Message ----------------------------------------------

  ConnectTime* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ConnectTime& from);
  void MergeFrom(const ConnectTime& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required float clientTimeSinceEpoch = 1;
  inline bool has_clienttimesinceepoch() const;
  inline void clear_clienttimesinceepoch();
  static const int kClientTimeSinceEpochFieldNumber = 1;
  inline float clienttimesinceepoch() const;
  inline void set_clienttimesinceepoch(float value);

  // required float timeTakeToReciveLastMessage = 2;
  inline bool has_timetaketorecivelastmessage() const;
  inline void clear_timetaketorecivelastmessage();
  static const int kTimeTakeToReciveLastMessageFieldNumber = 2;
  inline float timetaketorecivelastmessage() const;
  inline void set_timetaketorecivelastmessage(float value);

  // @@protoc_insertion_point(class_scope:SyncTimeMessage.ConnectTime)
 private:
  inline void set_has_clienttimesinceepoch();
  inline void clear_has_clienttimesinceepoch();
  inline void set_has_timetaketorecivelastmessage();
  inline void clear_has_timetaketorecivelastmessage();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  float clienttimesinceepoch_;
  float timetaketorecivelastmessage_;
  friend void  protobuf_AddDesc_SyncTimeMessage_2eproto();
  friend void protobuf_AssignDesc_SyncTimeMessage_2eproto();
  friend void protobuf_ShutdownFile_SyncTimeMessage_2eproto();

  void InitAsDefaultInstance();
  static ConnectTime* default_instance_;
};
// -------------------------------------------------------------------

class ServerConnectConfirm : public ::google::protobuf::Message {
 public:
  ServerConnectConfirm();
  virtual ~ServerConnectConfirm();

  ServerConnectConfirm(const ServerConnectConfirm& from);

  inline ServerConnectConfirm& operator=(const ServerConnectConfirm& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ServerConnectConfirm& default_instance();

  void Swap(ServerConnectConfirm* other);

  // implements Message ----------------------------------------------

  ServerConnectConfirm* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ServerConnectConfirm& from);
  void MergeFrom(const ServerConnectConfirm& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required float serverStartTime = 1;
  inline bool has_serverstarttime() const;
  inline void clear_serverstarttime();
  static const int kServerStartTimeFieldNumber = 1;
  inline float serverstarttime() const;
  inline void set_serverstarttime(float value);

  // required float serverTimeSinceEpoch = 2;
  inline bool has_servertimesinceepoch() const;
  inline void clear_servertimesinceepoch();
  static const int kServerTimeSinceEpochFieldNumber = 2;
  inline float servertimesinceepoch() const;
  inline void set_servertimesinceepoch(float value);

  // required int32 playerNumber = 3;
  inline bool has_playernumber() const;
  inline void clear_playernumber();
  static const int kPlayerNumberFieldNumber = 3;
  inline ::google::protobuf::int32 playernumber() const;
  inline void set_playernumber(::google::protobuf::int32 value);

  // required int32 playersConnected = 4;
  inline bool has_playersconnected() const;
  inline void clear_playersconnected();
  static const int kPlayersConnectedFieldNumber = 4;
  inline ::google::protobuf::int32 playersconnected() const;
  inline void set_playersconnected(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:SyncTimeMessage.ServerConnectConfirm)
 private:
  inline void set_has_serverstarttime();
  inline void clear_has_serverstarttime();
  inline void set_has_servertimesinceepoch();
  inline void clear_has_servertimesinceepoch();
  inline void set_has_playernumber();
  inline void clear_has_playernumber();
  inline void set_has_playersconnected();
  inline void clear_has_playersconnected();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  float serverstarttime_;
  float servertimesinceepoch_;
  ::google::protobuf::int32 playernumber_;
  ::google::protobuf::int32 playersconnected_;
  friend void  protobuf_AddDesc_SyncTimeMessage_2eproto();
  friend void protobuf_AssignDesc_SyncTimeMessage_2eproto();
  friend void protobuf_ShutdownFile_SyncTimeMessage_2eproto();

  void InitAsDefaultInstance();
  static ServerConnectConfirm* default_instance_;
};
// -------------------------------------------------------------------

class ClientConfirmConnect : public ::google::protobuf::Message {
 public:
  ClientConfirmConnect();
  virtual ~ClientConfirmConnect();

  ClientConfirmConnect(const ClientConfirmConnect& from);

  inline ClientConfirmConnect& operator=(const ClientConfirmConnect& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ClientConfirmConnect& default_instance();

  void Swap(ClientConfirmConnect* other);

  // implements Message ----------------------------------------------

  ClientConfirmConnect* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ClientConfirmConnect& from);
  void MergeFrom(const ClientConfirmConnect& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .SyncTimeMessage.ConnectTime connectTime = 2;
  inline bool has_connecttime() const;
  inline void clear_connecttime();
  static const int kConnectTimeFieldNumber = 2;
  inline const ::SyncTimeMessage::ConnectTime& connecttime() const;
  inline ::SyncTimeMessage::ConnectTime* mutable_connecttime();
  inline ::SyncTimeMessage::ConnectTime* release_connecttime();
  inline void set_allocated_connecttime(::SyncTimeMessage::ConnectTime* connecttime);

  // required int32 clientNumber = 1;
  inline bool has_clientnumber() const;
  inline void clear_clientnumber();
  static const int kClientNumberFieldNumber = 1;
  inline ::google::protobuf::int32 clientnumber() const;
  inline void set_clientnumber(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:SyncTimeMessage.ClientConfirmConnect)
 private:
  inline void set_has_connecttime();
  inline void clear_has_connecttime();
  inline void set_has_clientnumber();
  inline void clear_has_clientnumber();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::SyncTimeMessage::ConnectTime* connecttime_;
  ::google::protobuf::int32 clientnumber_;
  friend void  protobuf_AddDesc_SyncTimeMessage_2eproto();
  friend void protobuf_AssignDesc_SyncTimeMessage_2eproto();
  friend void protobuf_ShutdownFile_SyncTimeMessage_2eproto();

  void InitAsDefaultInstance();
  static ClientConfirmConnect* default_instance_;
};
// ===================================================================


// ===================================================================

// ConnectTime

// required float clientTimeSinceEpoch = 1;
inline bool ConnectTime::has_clienttimesinceepoch() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ConnectTime::set_has_clienttimesinceepoch() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ConnectTime::clear_has_clienttimesinceepoch() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ConnectTime::clear_clienttimesinceepoch() {
  clienttimesinceepoch_ = 0;
  clear_has_clienttimesinceepoch();
}
inline float ConnectTime::clienttimesinceepoch() const {
  // @@protoc_insertion_point(field_get:SyncTimeMessage.ConnectTime.clientTimeSinceEpoch)
  return clienttimesinceepoch_;
}
inline void ConnectTime::set_clienttimesinceepoch(float value) {
  set_has_clienttimesinceepoch();
  clienttimesinceepoch_ = value;
  // @@protoc_insertion_point(field_set:SyncTimeMessage.ConnectTime.clientTimeSinceEpoch)
}

// required float timeTakeToReciveLastMessage = 2;
inline bool ConnectTime::has_timetaketorecivelastmessage() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ConnectTime::set_has_timetaketorecivelastmessage() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ConnectTime::clear_has_timetaketorecivelastmessage() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ConnectTime::clear_timetaketorecivelastmessage() {
  timetaketorecivelastmessage_ = 0;
  clear_has_timetaketorecivelastmessage();
}
inline float ConnectTime::timetaketorecivelastmessage() const {
  // @@protoc_insertion_point(field_get:SyncTimeMessage.ConnectTime.timeTakeToReciveLastMessage)
  return timetaketorecivelastmessage_;
}
inline void ConnectTime::set_timetaketorecivelastmessage(float value) {
  set_has_timetaketorecivelastmessage();
  timetaketorecivelastmessage_ = value;
  // @@protoc_insertion_point(field_set:SyncTimeMessage.ConnectTime.timeTakeToReciveLastMessage)
}

// -------------------------------------------------------------------

// ServerConnectConfirm

// required float serverStartTime = 1;
inline bool ServerConnectConfirm::has_serverstarttime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ServerConnectConfirm::set_has_serverstarttime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ServerConnectConfirm::clear_has_serverstarttime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ServerConnectConfirm::clear_serverstarttime() {
  serverstarttime_ = 0;
  clear_has_serverstarttime();
}
inline float ServerConnectConfirm::serverstarttime() const {
  // @@protoc_insertion_point(field_get:SyncTimeMessage.ServerConnectConfirm.serverStartTime)
  return serverstarttime_;
}
inline void ServerConnectConfirm::set_serverstarttime(float value) {
  set_has_serverstarttime();
  serverstarttime_ = value;
  // @@protoc_insertion_point(field_set:SyncTimeMessage.ServerConnectConfirm.serverStartTime)
}

// required float serverTimeSinceEpoch = 2;
inline bool ServerConnectConfirm::has_servertimesinceepoch() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ServerConnectConfirm::set_has_servertimesinceepoch() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ServerConnectConfirm::clear_has_servertimesinceepoch() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ServerConnectConfirm::clear_servertimesinceepoch() {
  servertimesinceepoch_ = 0;
  clear_has_servertimesinceepoch();
}
inline float ServerConnectConfirm::servertimesinceepoch() const {
  // @@protoc_insertion_point(field_get:SyncTimeMessage.ServerConnectConfirm.serverTimeSinceEpoch)
  return servertimesinceepoch_;
}
inline void ServerConnectConfirm::set_servertimesinceepoch(float value) {
  set_has_servertimesinceepoch();
  servertimesinceepoch_ = value;
  // @@protoc_insertion_point(field_set:SyncTimeMessage.ServerConnectConfirm.serverTimeSinceEpoch)
}

// required int32 playerNumber = 3;
inline bool ServerConnectConfirm::has_playernumber() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ServerConnectConfirm::set_has_playernumber() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ServerConnectConfirm::clear_has_playernumber() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ServerConnectConfirm::clear_playernumber() {
  playernumber_ = 0;
  clear_has_playernumber();
}
inline ::google::protobuf::int32 ServerConnectConfirm::playernumber() const {
  // @@protoc_insertion_point(field_get:SyncTimeMessage.ServerConnectConfirm.playerNumber)
  return playernumber_;
}
inline void ServerConnectConfirm::set_playernumber(::google::protobuf::int32 value) {
  set_has_playernumber();
  playernumber_ = value;
  // @@protoc_insertion_point(field_set:SyncTimeMessage.ServerConnectConfirm.playerNumber)
}

// required int32 playersConnected = 4;
inline bool ServerConnectConfirm::has_playersconnected() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ServerConnectConfirm::set_has_playersconnected() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ServerConnectConfirm::clear_has_playersconnected() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ServerConnectConfirm::clear_playersconnected() {
  playersconnected_ = 0;
  clear_has_playersconnected();
}
inline ::google::protobuf::int32 ServerConnectConfirm::playersconnected() const {
  // @@protoc_insertion_point(field_get:SyncTimeMessage.ServerConnectConfirm.playersConnected)
  return playersconnected_;
}
inline void ServerConnectConfirm::set_playersconnected(::google::protobuf::int32 value) {
  set_has_playersconnected();
  playersconnected_ = value;
  // @@protoc_insertion_point(field_set:SyncTimeMessage.ServerConnectConfirm.playersConnected)
}

// -------------------------------------------------------------------

// ClientConfirmConnect

// required .SyncTimeMessage.ConnectTime connectTime = 2;
inline bool ClientConfirmConnect::has_connecttime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ClientConfirmConnect::set_has_connecttime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ClientConfirmConnect::clear_has_connecttime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ClientConfirmConnect::clear_connecttime() {
  if (connecttime_ != NULL) connecttime_->::SyncTimeMessage::ConnectTime::Clear();
  clear_has_connecttime();
}
inline const ::SyncTimeMessage::ConnectTime& ClientConfirmConnect::connecttime() const {
  // @@protoc_insertion_point(field_get:SyncTimeMessage.ClientConfirmConnect.connectTime)
  return connecttime_ != NULL ? *connecttime_ : *default_instance_->connecttime_;
}
inline ::SyncTimeMessage::ConnectTime* ClientConfirmConnect::mutable_connecttime() {
  set_has_connecttime();
  if (connecttime_ == NULL) connecttime_ = new ::SyncTimeMessage::ConnectTime;
  // @@protoc_insertion_point(field_mutable:SyncTimeMessage.ClientConfirmConnect.connectTime)
  return connecttime_;
}
inline ::SyncTimeMessage::ConnectTime* ClientConfirmConnect::release_connecttime() {
  clear_has_connecttime();
  ::SyncTimeMessage::ConnectTime* temp = connecttime_;
  connecttime_ = NULL;
  return temp;
}
inline void ClientConfirmConnect::set_allocated_connecttime(::SyncTimeMessage::ConnectTime* connecttime) {
  delete connecttime_;
  connecttime_ = connecttime;
  if (connecttime) {
    set_has_connecttime();
  } else {
    clear_has_connecttime();
  }
  // @@protoc_insertion_point(field_set_allocated:SyncTimeMessage.ClientConfirmConnect.connectTime)
}

// required int32 clientNumber = 1;
inline bool ClientConfirmConnect::has_clientnumber() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ClientConfirmConnect::set_has_clientnumber() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ClientConfirmConnect::clear_has_clientnumber() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ClientConfirmConnect::clear_clientnumber() {
  clientnumber_ = 0;
  clear_has_clientnumber();
}
inline ::google::protobuf::int32 ClientConfirmConnect::clientnumber() const {
  // @@protoc_insertion_point(field_get:SyncTimeMessage.ClientConfirmConnect.clientNumber)
  return clientnumber_;
}
inline void ClientConfirmConnect::set_clientnumber(::google::protobuf::int32 value) {
  set_has_clientnumber();
  clientnumber_ = value;
  // @@protoc_insertion_point(field_set:SyncTimeMessage.ClientConfirmConnect.clientNumber)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace SyncTimeMessage

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SyncTimeMessage_2eproto__INCLUDED
