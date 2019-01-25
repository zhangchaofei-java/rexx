

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "monitor.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace monitor {

namespace {

const ::google::protobuf::Descriptor* Hello_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Hello_reflection_ = NULL;
const ::google::protobuf::Descriptor* Register_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Register_reflection_ = NULL;
const ::google::protobuf::Descriptor* Peer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Peer_reflection_ = NULL;
const ::google::protobuf::Descriptor* GlueManager_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GlueManager_reflection_ = NULL;
const ::google::protobuf::Descriptor* PeerManager_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PeerManager_reflection_ = NULL;
const ::google::protobuf::Descriptor* RexxStatus_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RexxStatus_reflection_ = NULL;
const ::google::protobuf::Descriptor* LedgerStatus_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LedgerStatus_reflection_ = NULL;
const ::google::protobuf::Descriptor* SystemProperty_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SystemProperty_reflection_ = NULL;
const ::google::protobuf::Descriptor* SystemResource_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SystemResource_reflection_ = NULL;
const ::google::protobuf::Descriptor* Partition_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Partition_reflection_ = NULL;
const ::google::protobuf::Descriptor* CPU_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CPU_reflection_ = NULL;
const ::google::protobuf::Descriptor* SystemStatus_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SystemStatus_reflection_ = NULL;
const ::google::protobuf::Descriptor* AlertStatus_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AlertStatus_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* MONITOR_MESSAGE_TYPE_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_monitor_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_monitor_2eproto() {
  protobuf_AddDesc_monitor_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "monitor.proto");
  GOOGLE_CHECK(file != NULL);
  Hello_descriptor_ = file->message_type(0);
  static const int Hello_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, service_version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, connection_timeout_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, timestamp_),
  };
  Hello_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Hello_descriptor_,
      Hello::default_instance_,
      Hello_offsets_,
      -1,
      -1,
      -1,
      sizeof(Hello),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, _is_default_instance_));
  Register_descriptor_ = file->message_type(1);
  static const int Register_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Register, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Register, blockchain_version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Register, data_version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Register, timestamp_),
  };
  Register_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Register_descriptor_,
      Register::default_instance_,
      Register_offsets_,
      -1,
      -1,
      -1,
      sizeof(Register),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Register, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Register, _is_default_instance_));
  Peer_descriptor_ = file->message_type(2);
  static const int Peer_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Peer, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Peer, delay_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Peer, active_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Peer, ip_address_),
  };
  Peer_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Peer_descriptor_,
      Peer::default_instance_,
      Peer_offsets_,
      -1,
      -1,
      -1,
      sizeof(Peer),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Peer, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Peer, _is_default_instance_));
  GlueManager_descriptor_ = file->message_type(3);
  static const int GlueManager_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GlueManager, system_current_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GlueManager, process_uptime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GlueManager, system_uptime_),
  };
  GlueManager_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GlueManager_descriptor_,
      GlueManager::default_instance_,
      GlueManager_offsets_,
      -1,
      -1,
      -1,
      sizeof(GlueManager),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GlueManager, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GlueManager, _is_default_instance_));
  PeerManager_descriptor_ = file->message_type(4);
  static const int PeerManager_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PeerManager, peer_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PeerManager, peer_),
  };
  PeerManager_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PeerManager_descriptor_,
      PeerManager::default_instance_,
      PeerManager_offsets_,
      -1,
      -1,
      -1,
      sizeof(PeerManager),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PeerManager, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PeerManager, _is_default_instance_));
  RexxStatus_descriptor_ = file->message_type(5);
  static const int RexxStatus_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RexxStatus, glue_manager_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RexxStatus, peer_manager_),
  };
  RexxStatus_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RexxStatus_descriptor_,
      RexxStatus::default_instance_,
      RexxStatus_offsets_,
      -1,
      -1,
      -1,
      sizeof(RexxStatus),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RexxStatus, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RexxStatus, _is_default_instance_));
  LedgerStatus_descriptor_ = file->message_type(6);
  static const int LedgerStatus_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerStatus, ledger_header_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerStatus, transaction_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerStatus, account_count_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerStatus, timestamp_),
  };
  LedgerStatus_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      LedgerStatus_descriptor_,
      LedgerStatus::default_instance_,
      LedgerStatus_offsets_,
      -1,
      -1,
      -1,
      sizeof(LedgerStatus),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerStatus, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerStatus, _is_default_instance_));
  SystemProperty_descriptor_ = file->message_type(7);
  static const int SystemProperty_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProperty, host_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProperty, os_version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProperty, startup_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProperty, os_bit_),
  };
  SystemProperty_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SystemProperty_descriptor_,
      SystemProperty::default_instance_,
      SystemProperty_offsets_,
      -1,
      -1,
      -1,
      sizeof(SystemProperty),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProperty, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProperty, _is_default_instance_));
  SystemResource_descriptor_ = file->message_type(8);
  static const int SystemResource_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemResource, available_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemResource, total_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemResource, used_percent_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemResource, description_),
  };
  SystemResource_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SystemResource_descriptor_,
      SystemResource::default_instance_,
      SystemResource_offsets_,
      -1,
      -1,
      -1,
      sizeof(SystemResource),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemResource, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemResource, _is_default_instance_));
  Partition_descriptor_ = file->message_type(9);
  static const int Partition_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Partition, total_bytes_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Partition, partition_),
  };
  Partition_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Partition_descriptor_,
      Partition::default_instance_,
      Partition_offsets_,
      -1,
      -1,
      -1,
      sizeof(Partition),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Partition, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Partition, _is_default_instance_));
  CPU_descriptor_ = file->message_type(10);
  static const int CPU_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CPU, used_percent_),
  };
  CPU_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      CPU_descriptor_,
      CPU::default_instance_,
      CPU_offsets_,
      -1,
      -1,
      -1,
      sizeof(CPU),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CPU, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CPU, _is_default_instance_));
  SystemStatus_descriptor_ = file->message_type(11);
  static const int SystemStatus_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemStatus, property_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemStatus, memory_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemStatus, cpu_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemStatus, partitions_),
  };
  SystemStatus_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SystemStatus_descriptor_,
      SystemStatus::default_instance_,
      SystemStatus_offsets_,
      -1,
      -1,
      -1,
      sizeof(SystemStatus),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemStatus, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemStatus, _is_default_instance_));
  AlertStatus_descriptor_ = file->message_type(12);
  static const int AlertStatus_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AlertStatus, ledger_sequence_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AlertStatus, node_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AlertStatus, system_),
  };
  AlertStatus_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AlertStatus_descriptor_,
      AlertStatus::default_instance_,
      AlertStatus_offsets_,
      -1,
      -1,
      -1,
      sizeof(AlertStatus),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AlertStatus, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AlertStatus, _is_default_instance_));
  MONITOR_MESSAGE_TYPE_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_monitor_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Hello_descriptor_, &Hello::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Register_descriptor_, &Register::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Peer_descriptor_, &Peer::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GlueManager_descriptor_, &GlueManager::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PeerManager_descriptor_, &PeerManager::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RexxStatus_descriptor_, &RexxStatus::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      LedgerStatus_descriptor_, &LedgerStatus::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SystemProperty_descriptor_, &SystemProperty::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SystemResource_descriptor_, &SystemResource::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Partition_descriptor_, &Partition::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CPU_descriptor_, &CPU::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SystemStatus_descriptor_, &SystemStatus::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AlertStatus_descriptor_, &AlertStatus::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_monitor_2eproto() {
  delete Hello::default_instance_;
  delete Hello_reflection_;
  delete Register::default_instance_;
  delete Register_reflection_;
  delete Peer::default_instance_;
  delete Peer_reflection_;
  delete GlueManager::default_instance_;
  delete GlueManager_reflection_;
  delete PeerManager::default_instance_;
  delete PeerManager_reflection_;
  delete RexxStatus::default_instance_;
  delete RexxStatus_reflection_;
  delete LedgerStatus::default_instance_;
  delete LedgerStatus_reflection_;
  delete SystemProperty::default_instance_;
  delete SystemProperty_reflection_;
  delete SystemResource::default_instance_;
  delete SystemResource_reflection_;
  delete Partition::default_instance_;
  delete Partition_reflection_;
  delete CPU::default_instance_;
  delete CPU_reflection_;
  delete SystemStatus::default_instance_;
  delete SystemStatus_reflection_;
  delete AlertStatus::default_instance_;
  delete AlertStatus_reflection_;
}

void protobuf_AddDesc_monitor_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_monitor_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protocol::protobuf_AddDesc_chain_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rmonitor.proto\022\007monitor\032\013chain.proto\"O\n"
    "\005Hello\022\027\n\017service_version\030\001 \001(\003\022\032\n\022conne"
    "ction_timeout\030\002 \001(\003\022\021\n\ttimestamp\030\003 \001(\003\"["
    "\n\010Register\022\n\n\002id\030\001 \001(\t\022\032\n\022blockchain_ver"
    "sion\030\002 \001(\t\022\024\n\014data_version\030\003 \001(\003\022\021\n\ttime"
    "stamp\030\004 \001(\003\"E\n\004Peer\022\n\n\002id\030\001 \001(\t\022\r\n\005delay"
    "\030\002 \001(\003\022\016\n\006active\030\003 \001(\010\022\022\n\nip_address\030\004 \001"
    "(\t\"Y\n\013GlueManager\022\033\n\023system_current_time"
    "\030\001 \001(\t\022\026\n\016process_uptime\030\002 \001(\t\022\025\n\rsystem"
    "_uptime\030\003 \001(\t\";\n\013PeerManager\022\017\n\007peer_id\030"
    "\001 \001(\t\022\033\n\004peer\030\002 \003(\0132\r.monitor.Peer\"d\n\nBu"
    "moStatus\022*\n\014glue_manager\030\001 \001(\0132\024.monitor"
    ".GlueManager\022*\n\014peer_manager\030\002 \001(\0132\024.mon"
    "itor.PeerManager\"\201\001\n\014LedgerStatus\022-\n\rled"
    "ger_header\030\001 \001(\0132\026.protocol.LedgerHeader"
    "\022\030\n\020transaction_size\030\002 \001(\003\022\025\n\raccount_co"
    "unt\030\003 \001(\003\022\021\n\ttimestamp\030\004 \001(\003\"]\n\016SystemPr"
    "operty\022\021\n\thost_name\030\001 \001(\t\022\022\n\nos_version\030"
    "\002 \001(\t\022\024\n\014startup_time\030\003 \001(\003\022\016\n\006os_bit\030\004 "
    "\001(\t\"]\n\016SystemResource\022\021\n\tavailable\030\001 \001(\003"
    "\022\r\n\005total\030\002 \001(\003\022\024\n\014used_percent\030\003 \001(\001\022\023\n"
    "\013description\030\004 \001(\t\"L\n\tPartition\022\023\n\013total"
    "_bytes\030\001 \001(\003\022*\n\tpartition\030\002 \003(\0132\027.monito"
    "r.SystemResource\"\033\n\003CPU\022\024\n\014used_percent\030"
    "\001 \001(\001\"\245\001\n\014SystemStatus\022)\n\010property\030\001 \001(\013"
    "2\027.monitor.SystemProperty\022\'\n\006memory\030\002 \001("
    "\0132\027.monitor.SystemResource\022\031\n\003cpu\030\003 \001(\0132"
    "\014.monitor.CPU\022&\n\npartitions\030\004 \001(\0132\022.moni"
    "tor.Partition\"^\n\013AlertStatus\022\027\n\017ledger_s"
    "equence\030\001 \001(\003\022\017\n\007node_id\030\002 \001(\t\022%\n\006system"
    "\030\003 \001(\0132\025.monitor.SystemStatus*\264\002\n\024MONITO"
    "R_MESSAGE_TYPE\022\030\n\024MONITOR_MSGTYPE_NONE\020\000"
    "\022\031\n\025MONITOR_MSGTYPE_HELLO\020\036\022\034\n\030MONITOR_M"
    "SGTYPE_REGISTER\020\037\022\030\n\024MONITOR_MSGTYPE_BUM"
    "O\020 \022\032\n\026MONITOR_MSGTYPE_LEDGER\020!\022\032\n\026MONIT"
    "OR_MSGTYPE_SYSTEM\020\"\022\031\n\025MONITOR_MSGTYPE_A"
    "LERT\020#\022\032\n\026MONITOR_MSGTYPE_NOTICE\020$\022%\n!MO"
    "NITOR_MSGTYPE_ACCOUNT_EXCEPTION\020%\022\031\n\025MON"
    "ITOR_MSGTYPE_ERROR\020\'B\"\n io.rexx.sdk.core"
    ".extend.protobufb\006proto3", 1584);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "monitor.proto", &protobuf_RegisterTypes);
  Hello::default_instance_ = new Hello();
  Register::default_instance_ = new Register();
  Peer::default_instance_ = new Peer();
  GlueManager::default_instance_ = new GlueManager();
  PeerManager::default_instance_ = new PeerManager();
  RexxStatus::default_instance_ = new RexxStatus();
  LedgerStatus::default_instance_ = new LedgerStatus();
  SystemProperty::default_instance_ = new SystemProperty();
  SystemResource::default_instance_ = new SystemResource();
  Partition::default_instance_ = new Partition();
  CPU::default_instance_ = new CPU();
  SystemStatus::default_instance_ = new SystemStatus();
  AlertStatus::default_instance_ = new AlertStatus();
  Hello::default_instance_->InitAsDefaultInstance();
  Register::default_instance_->InitAsDefaultInstance();
  Peer::default_instance_->InitAsDefaultInstance();
  GlueManager::default_instance_->InitAsDefaultInstance();
  PeerManager::default_instance_->InitAsDefaultInstance();
  RexxStatus::default_instance_->InitAsDefaultInstance();
  LedgerStatus::default_instance_->InitAsDefaultInstance();
  SystemProperty::default_instance_->InitAsDefaultInstance();
  SystemResource::default_instance_->InitAsDefaultInstance();
  Partition::default_instance_->InitAsDefaultInstance();
  CPU::default_instance_->InitAsDefaultInstance();
  SystemStatus::default_instance_->InitAsDefaultInstance();
  AlertStatus::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_monitor_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_monitor_2eproto {
  StaticDescriptorInitializer_monitor_2eproto() {
    protobuf_AddDesc_monitor_2eproto();
  }
} static_descriptor_initializer_monitor_2eproto_;
const ::google::protobuf::EnumDescriptor* MONITOR_MESSAGE_TYPE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MONITOR_MESSAGE_TYPE_descriptor_;
}
bool MONITOR_MESSAGE_TYPE_IsValid(int value) {
  switch(value) {
    case 0:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 39:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Hello::kServiceVersionFieldNumber;
const int Hello::kConnectionTimeoutFieldNumber;
const int Hello::kTimestampFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Hello::Hello()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:monitor.Hello)
}

void Hello::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Hello::Hello(const Hello& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:monitor.Hello)
}

void Hello::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  service_version_ = GOOGLE_LONGLONG(0);
  connection_timeout_ = GOOGLE_LONGLONG(0);
  timestamp_ = GOOGLE_LONGLONG(0);
}

Hello::~Hello() {
  // @@protoc_insertion_point(destructor:monitor.Hello)
  SharedDtor();
}

void Hello::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Hello::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Hello::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Hello_descriptor_;
}

const Hello& Hello::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_monitor_2eproto();
  return *default_instance_;
}

Hello* Hello::default_instance_ = NULL;

Hello* Hello::New(::google::protobuf::Arena* arena) const {
  Hello* n = new Hello;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Hello::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.Hello)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Hello, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Hello*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(service_version_, timestamp_);

#undef ZR_HELPER_
#undef ZR_

}

bool Hello::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:monitor.Hello)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 service_version = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &service_version_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_connection_timeout;
        break;
      }

      // optional int64 connection_timeout = 2;
      case 2: {
        if (tag == 16) {
         parse_connection_timeout:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &connection_timeout_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_timestamp;
        break;
      }

      // optional int64 timestamp = 3;
      case 3: {
        if (tag == 24) {
         parse_timestamp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &timestamp_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:monitor.Hello)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:monitor.Hello)
  return false;
#undef DO_
}

void Hello::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:monitor.Hello)
  // optional int64 service_version = 1;
  if (this->service_version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->service_version(), output);
  }

  // optional int64 connection_timeout = 2;
  if (this->connection_timeout() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->connection_timeout(), output);
  }

  // optional int64 timestamp = 3;
  if (this->timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->timestamp(), output);
  }

  // @@protoc_insertion_point(serialize_end:monitor.Hello)
}

::google::protobuf::uint8* Hello::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.Hello)
  // optional int64 service_version = 1;
  if (this->service_version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->service_version(), target);
  }

  // optional int64 connection_timeout = 2;
  if (this->connection_timeout() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->connection_timeout(), target);
  }

  // optional int64 timestamp = 3;
  if (this->timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->timestamp(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:monitor.Hello)
  return target;
}

int Hello::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.Hello)
  int total_size = 0;

  // optional int64 service_version = 1;
  if (this->service_version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->service_version());
  }

  // optional int64 connection_timeout = 2;
  if (this->connection_timeout() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->connection_timeout());
  }

  // optional int64 timestamp = 3;
  if (this->timestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->timestamp());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Hello::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.Hello)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Hello* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Hello>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.Hello)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.Hello)
    MergeFrom(*source);
  }
}

void Hello::MergeFrom(const Hello& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.Hello)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.service_version() != 0) {
    set_service_version(from.service_version());
  }
  if (from.connection_timeout() != 0) {
    set_connection_timeout(from.connection_timeout());
  }
  if (from.timestamp() != 0) {
    set_timestamp(from.timestamp());
  }
}

void Hello::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.Hello)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Hello::CopyFrom(const Hello& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.Hello)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Hello::IsInitialized() const {

  return true;
}

void Hello::Swap(Hello* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Hello::InternalSwap(Hello* other) {
  std::swap(service_version_, other->service_version_);
  std::swap(connection_timeout_, other->connection_timeout_);
  std::swap(timestamp_, other->timestamp_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Hello::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Hello_descriptor_;
  metadata.reflection = Hello_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Hello

// optional int64 service_version = 1;
void Hello::clear_service_version() {
  service_version_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Hello::service_version() const {
  // @@protoc_insertion_point(field_get:monitor.Hello.service_version)
  return service_version_;
}
 void Hello::set_service_version(::google::protobuf::int64 value) {
  
  service_version_ = value;
  // @@protoc_insertion_point(field_set:monitor.Hello.service_version)
}

// optional int64 connection_timeout = 2;
void Hello::clear_connection_timeout() {
  connection_timeout_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Hello::connection_timeout() const {
  // @@protoc_insertion_point(field_get:monitor.Hello.connection_timeout)
  return connection_timeout_;
}
 void Hello::set_connection_timeout(::google::protobuf::int64 value) {
  
  connection_timeout_ = value;
  // @@protoc_insertion_point(field_set:monitor.Hello.connection_timeout)
}

// optional int64 timestamp = 3;
void Hello::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Hello::timestamp() const {
  // @@protoc_insertion_point(field_get:monitor.Hello.timestamp)
  return timestamp_;
}
 void Hello::set_timestamp(::google::protobuf::int64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:monitor.Hello.timestamp)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Register::kIdFieldNumber;
const int Register::kBlockchainVersionFieldNumber;
const int Register::kDataVersionFieldNumber;
const int Register::kTimestampFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Register::Register()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:monitor.Register)
}

void Register::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Register::Register(const Register& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:monitor.Register)
}

void Register::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  blockchain_version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_version_ = GOOGLE_LONGLONG(0);
  timestamp_ = GOOGLE_LONGLONG(0);
}

Register::~Register() {
  // @@protoc_insertion_point(destructor:monitor.Register)
  SharedDtor();
}

void Register::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  blockchain_version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Register::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Register::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Register_descriptor_;
}

const Register& Register::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_monitor_2eproto();
  return *default_instance_;
}

Register* Register::default_instance_ = NULL;

Register* Register::New(::google::protobuf::Arena* arena) const {
  Register* n = new Register;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Register::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.Register)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Register, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Register*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(data_version_, timestamp_);
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  blockchain_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool Register::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:monitor.Register)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->id().data(), this->id().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "monitor.Register.id"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_blockchain_version;
        break;
      }

      // optional string blockchain_version = 2;
      case 2: {
        if (tag == 18) {
         parse_blockchain_version:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_blockchain_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->blockchain_version().data(), this->blockchain_version().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "monitor.Register.blockchain_version"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_data_version;
        break;
      }

      // optional int64 data_version = 3;
      case 3: {
        if (tag == 24) {
         parse_data_version:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &data_version_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_timestamp;
        break;
      }

      // optional int64 timestamp = 4;
      case 4: {
        if (tag == 32) {
         parse_timestamp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &timestamp_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:monitor.Register)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:monitor.Register)
  return false;
#undef DO_
}

void Register::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:monitor.Register)
  // optional string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.Register.id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // optional string blockchain_version = 2;
  if (this->blockchain_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->blockchain_version().data(), this->blockchain_version().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.Register.blockchain_version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->blockchain_version(), output);
  }

  // optional int64 data_version = 3;
  if (this->data_version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->data_version(), output);
  }

  // optional int64 timestamp = 4;
  if (this->timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->timestamp(), output);
  }

  // @@protoc_insertion_point(serialize_end:monitor.Register)
}

::google::protobuf::uint8* Register::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.Register)
  // optional string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.Register.id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }

  // optional string blockchain_version = 2;
  if (this->blockchain_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->blockchain_version().data(), this->blockchain_version().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.Register.blockchain_version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->blockchain_version(), target);
  }

  // optional int64 data_version = 3;
  if (this->data_version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->data_version(), target);
  }

  // optional int64 timestamp = 4;
  if (this->timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->timestamp(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:monitor.Register)
  return target;
}

int Register::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.Register)
  int total_size = 0;

  // optional string id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->id());
  }

  // optional string blockchain_version = 2;
  if (this->blockchain_version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->blockchain_version());
  }

  // optional int64 data_version = 3;
  if (this->data_version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->data_version());
  }

  // optional int64 timestamp = 4;
  if (this->timestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->timestamp());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Register::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.Register)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Register* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Register>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.Register)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.Register)
    MergeFrom(*source);
  }
}

void Register::MergeFrom(const Register& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.Register)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.blockchain_version().size() > 0) {

    blockchain_version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.blockchain_version_);
  }
  if (from.data_version() != 0) {
    set_data_version(from.data_version());
  }
  if (from.timestamp() != 0) {
    set_timestamp(from.timestamp());
  }
}

void Register::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.Register)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Register::CopyFrom(const Register& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.Register)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Register::IsInitialized() const {

  return true;
}

void Register::Swap(Register* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Register::InternalSwap(Register* other) {
  id_.Swap(&other->id_);
  blockchain_version_.Swap(&other->blockchain_version_);
  std::swap(data_version_, other->data_version_);
  std::swap(timestamp_, other->timestamp_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Register::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Register_descriptor_;
  metadata.reflection = Register_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Register

// optional string id = 1;
void Register::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Register::id() const {
  // @@protoc_insertion_point(field_get:monitor.Register.id)
  return id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Register::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:monitor.Register.id)
}
 void Register::set_id(const char* value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:monitor.Register.id)
}
 void Register::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:monitor.Register.id)
}
 ::std::string* Register::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:monitor.Register.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Register::release_id() {
  // @@protoc_insertion_point(field_release:monitor.Register.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Register::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:monitor.Register.id)
}

// optional string blockchain_version = 2;
void Register::clear_blockchain_version() {
  blockchain_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Register::blockchain_version() const {
  // @@protoc_insertion_point(field_get:monitor.Register.blockchain_version)
  return blockchain_version_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Register::set_blockchain_version(const ::std::string& value) {
  
  blockchain_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:monitor.Register.blockchain_version)
}
 void Register::set_blockchain_version(const char* value) {
  
  blockchain_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:monitor.Register.blockchain_version)
}
 void Register::set_blockchain_version(const char* value, size_t size) {
  
  blockchain_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:monitor.Register.blockchain_version)
}
 ::std::string* Register::mutable_blockchain_version() {
  
  // @@protoc_insertion_point(field_mutable:monitor.Register.blockchain_version)
  return blockchain_version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Register::release_blockchain_version() {
  // @@protoc_insertion_point(field_release:monitor.Register.blockchain_version)
  
  return blockchain_version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Register::set_allocated_blockchain_version(::std::string* blockchain_version) {
  if (blockchain_version != NULL) {
    
  } else {
    
  }
  blockchain_version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), blockchain_version);
  // @@protoc_insertion_point(field_set_allocated:monitor.Register.blockchain_version)
}

// optional int64 data_version = 3;
void Register::clear_data_version() {
  data_version_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Register::data_version() const {
  // @@protoc_insertion_point(field_get:monitor.Register.data_version)
  return data_version_;
}
 void Register::set_data_version(::google::protobuf::int64 value) {
  
  data_version_ = value;
  // @@protoc_insertion_point(field_set:monitor.Register.data_version)
}

// optional int64 timestamp = 4;
void Register::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Register::timestamp() const {
  // @@protoc_insertion_point(field_get:monitor.Register.timestamp)
  return timestamp_;
}
 void Register::set_timestamp(::google::protobuf::int64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:monitor.Register.timestamp)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Peer::kIdFieldNumber;
const int Peer::kDelayFieldNumber;
const int Peer::kActiveFieldNumber;
const int Peer::kIpAddressFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Peer::Peer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:monitor.Peer)
}

void Peer::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Peer::Peer(const Peer& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:monitor.Peer)
}

void Peer::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  delay_ = GOOGLE_LONGLONG(0);
  active_ = false;
  ip_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Peer::~Peer() {
  // @@protoc_insertion_point(destructor:monitor.Peer)
  SharedDtor();
}

void Peer::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ip_address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Peer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Peer::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Peer_descriptor_;
}

const Peer& Peer::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_monitor_2eproto();
  return *default_instance_;
}

Peer* Peer::default_instance_ = NULL;

Peer* Peer::New(::google::protobuf::Arena* arena) const {
  Peer* n = new Peer;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Peer::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.Peer)
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  delay_ = GOOGLE_LONGLONG(0);
  active_ = false;
  ip_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool Peer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:monitor.Peer)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->id().data(), this->id().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "monitor.Peer.id"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_delay;
        break;
      }

      // optional int64 delay = 2;
      case 2: {
        if (tag == 16) {
         parse_delay:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &delay_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_active;
        break;
      }

      // optional bool active = 3;
      case 3: {
        if (tag == 24) {
         parse_active:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &active_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_ip_address;
        break;
      }

      // optional string ip_address = 4;
      case 4: {
        if (tag == 34) {
         parse_ip_address:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->ip_address().data(), this->ip_address().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "monitor.Peer.ip_address"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:monitor.Peer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:monitor.Peer)
  return false;
#undef DO_
}

void Peer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:monitor.Peer)
  // optional string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.Peer.id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // optional int64 delay = 2;
  if (this->delay() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->delay(), output);
  }

  // optional bool active = 3;
  if (this->active() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->active(), output);
  }

  // optional string ip_address = 4;
  if (this->ip_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip_address().data(), this->ip_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.Peer.ip_address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->ip_address(), output);
  }

  // @@protoc_insertion_point(serialize_end:monitor.Peer)
}

::google::protobuf::uint8* Peer::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.Peer)
  // optional string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.Peer.id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }

  // optional int64 delay = 2;
  if (this->delay() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->delay(), target);
  }

  // optional bool active = 3;
  if (this->active() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->active(), target);
  }

  // optional string ip_address = 4;
  if (this->ip_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip_address().data(), this->ip_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.Peer.ip_address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->ip_address(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:monitor.Peer)
  return target;
}

int Peer::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.Peer)
  int total_size = 0;

  // optional string id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->id());
  }

  // optional int64 delay = 2;
  if (this->delay() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->delay());
  }

  // optional bool active = 3;
  if (this->active() != 0) {
    total_size += 1 + 1;
  }

  // optional string ip_address = 4;
  if (this->ip_address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->ip_address());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Peer::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.Peer)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Peer* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Peer>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.Peer)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.Peer)
    MergeFrom(*source);
  }
}

void Peer::MergeFrom(const Peer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.Peer)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.delay() != 0) {
    set_delay(from.delay());
  }
  if (from.active() != 0) {
    set_active(from.active());
  }
  if (from.ip_address().size() > 0) {

    ip_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ip_address_);
  }
}

void Peer::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.Peer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Peer::CopyFrom(const Peer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.Peer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Peer::IsInitialized() const {

  return true;
}

void Peer::Swap(Peer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Peer::InternalSwap(Peer* other) {
  id_.Swap(&other->id_);
  std::swap(delay_, other->delay_);
  std::swap(active_, other->active_);
  ip_address_.Swap(&other->ip_address_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Peer::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Peer_descriptor_;
  metadata.reflection = Peer_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Peer

// optional string id = 1;
void Peer::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Peer::id() const {
  // @@protoc_insertion_point(field_get:monitor.Peer.id)
  return id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Peer::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:monitor.Peer.id)
}
 void Peer::set_id(const char* value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:monitor.Peer.id)
}
 void Peer::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:monitor.Peer.id)
}
 ::std::string* Peer::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:monitor.Peer.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Peer::release_id() {
  // @@protoc_insertion_point(field_release:monitor.Peer.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Peer::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:monitor.Peer.id)
}

// optional int64 delay = 2;
void Peer::clear_delay() {
  delay_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Peer::delay() const {
  // @@protoc_insertion_point(field_get:monitor.Peer.delay)
  return delay_;
}
 void Peer::set_delay(::google::protobuf::int64 value) {
  
  delay_ = value;
  // @@protoc_insertion_point(field_set:monitor.Peer.delay)
}

// optional bool active = 3;
void Peer::clear_active() {
  active_ = false;
}
 bool Peer::active() const {
  // @@protoc_insertion_point(field_get:monitor.Peer.active)
  return active_;
}
 void Peer::set_active(bool value) {
  
  active_ = value;
  // @@protoc_insertion_point(field_set:monitor.Peer.active)
}

// optional string ip_address = 4;
void Peer::clear_ip_address() {
  ip_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Peer::ip_address() const {
  // @@protoc_insertion_point(field_get:monitor.Peer.ip_address)
  return ip_address_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Peer::set_ip_address(const ::std::string& value) {
  
  ip_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:monitor.Peer.ip_address)
}
 void Peer::set_ip_address(const char* value) {
  
  ip_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:monitor.Peer.ip_address)
}
 void Peer::set_ip_address(const char* value, size_t size) {
  
  ip_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:monitor.Peer.ip_address)
}
 ::std::string* Peer::mutable_ip_address() {
  
  // @@protoc_insertion_point(field_mutable:monitor.Peer.ip_address)
  return ip_address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Peer::release_ip_address() {
  // @@protoc_insertion_point(field_release:monitor.Peer.ip_address)
  
  return ip_address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Peer::set_allocated_ip_address(::std::string* ip_address) {
  if (ip_address != NULL) {
    
  } else {
    
  }
  ip_address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip_address);
  // @@protoc_insertion_point(field_set_allocated:monitor.Peer.ip_address)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GlueManager::kSystemCurrentTimeFieldNumber;
const int GlueManager::kProcessUptimeFieldNumber;
const int GlueManager::kSystemUptimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GlueManager::GlueManager()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:monitor.GlueManager)
}

void GlueManager::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

GlueManager::GlueManager(const GlueManager& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:monitor.GlueManager)
}

void GlueManager::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  system_current_time_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  process_uptime_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  system_uptime_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

GlueManager::~GlueManager() {
  // @@protoc_insertion_point(destructor:monitor.GlueManager)
  SharedDtor();
}

void GlueManager::SharedDtor() {
  system_current_time_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  process_uptime_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  system_uptime_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void GlueManager::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GlueManager::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GlueManager_descriptor_;
}

const GlueManager& GlueManager::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_monitor_2eproto();
  return *default_instance_;
}

GlueManager* GlueManager::default_instance_ = NULL;

GlueManager* GlueManager::New(::google::protobuf::Arena* arena) const {
  GlueManager* n = new GlueManager;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GlueManager::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.GlueManager)
  system_current_time_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  process_uptime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  system_uptime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool GlueManager::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:monitor.GlueManager)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string system_current_time = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_system_current_time()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->system_current_time().data(), this->system_current_time().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "monitor.GlueManager.system_current_time"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_process_uptime;
        break;
      }

      // optional string process_uptime = 2;
      case 2: {
        if (tag == 18) {
         parse_process_uptime:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_process_uptime()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->process_uptime().data(), this->process_uptime().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "monitor.GlueManager.process_uptime"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_system_uptime;
        break;
      }

      // optional string system_uptime = 3;
      case 3: {
        if (tag == 26) {
         parse_system_uptime:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_system_uptime()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->system_uptime().data(), this->system_uptime().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "monitor.GlueManager.system_uptime"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:monitor.GlueManager)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:monitor.GlueManager)
  return false;
#undef DO_
}

void GlueManager::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:monitor.GlueManager)
  // optional string system_current_time = 1;
  if (this->system_current_time().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->system_current_time().data(), this->system_current_time().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.GlueManager.system_current_time");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->system_current_time(), output);
  }

  // optional string process_uptime = 2;
  if (this->process_uptime().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->process_uptime().data(), this->process_uptime().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.GlueManager.process_uptime");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->process_uptime(), output);
  }

  // optional string system_uptime = 3;
  if (this->system_uptime().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->system_uptime().data(), this->system_uptime().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.GlueManager.system_uptime");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->system_uptime(), output);
  }

  // @@protoc_insertion_point(serialize_end:monitor.GlueManager)
}

::google::protobuf::uint8* GlueManager::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.GlueManager)
  // optional string system_current_time = 1;
  if (this->system_current_time().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->system_current_time().data(), this->system_current_time().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.GlueManager.system_current_time");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->system_current_time(), target);
  }

  // optional string process_uptime = 2;
  if (this->process_uptime().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->process_uptime().data(), this->process_uptime().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.GlueManager.process_uptime");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->process_uptime(), target);
  }

  // optional string system_uptime = 3;
  if (this->system_uptime().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->system_uptime().data(), this->system_uptime().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.GlueManager.system_uptime");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->system_uptime(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:monitor.GlueManager)
  return target;
}

int GlueManager::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.GlueManager)
  int total_size = 0;

  // optional string system_current_time = 1;
  if (this->system_current_time().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->system_current_time());
  }

  // optional string process_uptime = 2;
  if (this->process_uptime().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->process_uptime());
  }

  // optional string system_uptime = 3;
  if (this->system_uptime().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->system_uptime());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GlueManager::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.GlueManager)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const GlueManager* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const GlueManager>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.GlueManager)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.GlueManager)
    MergeFrom(*source);
  }
}

void GlueManager::MergeFrom(const GlueManager& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.GlueManager)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.system_current_time().size() > 0) {

    system_current_time_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.system_current_time_);
  }
  if (from.process_uptime().size() > 0) {

    process_uptime_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.process_uptime_);
  }
  if (from.system_uptime().size() > 0) {

    system_uptime_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.system_uptime_);
  }
}

void GlueManager::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.GlueManager)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GlueManager::CopyFrom(const GlueManager& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.GlueManager)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GlueManager::IsInitialized() const {

  return true;
}

void GlueManager::Swap(GlueManager* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GlueManager::InternalSwap(GlueManager* other) {
  system_current_time_.Swap(&other->system_current_time_);
  process_uptime_.Swap(&other->process_uptime_);
  system_uptime_.Swap(&other->system_uptime_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GlueManager::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GlueManager_descriptor_;
  metadata.reflection = GlueManager_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GlueManager

// optional string system_current_time = 1;
void GlueManager::clear_system_current_time() {
  system_current_time_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& GlueManager::system_current_time() const {
  // @@protoc_insertion_point(field_get:monitor.GlueManager.system_current_time)
  return system_current_time_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void GlueManager::set_system_current_time(const ::std::string& value) {
  
  system_current_time_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:monitor.GlueManager.system_current_time)
}
 void GlueManager::set_system_current_time(const char* value) {
  
  system_current_time_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:monitor.GlueManager.system_current_time)
}
 void GlueManager::set_system_current_time(const char* value, size_t size) {
  
  system_current_time_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:monitor.GlueManager.system_current_time)
}
 ::std::string* GlueManager::mutable_system_current_time() {
  
  // @@protoc_insertion_point(field_mutable:monitor.GlueManager.system_current_time)
  return system_current_time_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* GlueManager::release_system_current_time() {
  // @@protoc_insertion_point(field_release:monitor.GlueManager.system_current_time)
  
  return system_current_time_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void GlueManager::set_allocated_system_current_time(::std::string* system_current_time) {
  if (system_current_time != NULL) {
    
  } else {
    
  }
  system_current_time_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), system_current_time);
  // @@protoc_insertion_point(field_set_allocated:monitor.GlueManager.system_current_time)
}

// optional string process_uptime = 2;
void GlueManager::clear_process_uptime() {
  process_uptime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& GlueManager::process_uptime() const {
  // @@protoc_insertion_point(field_get:monitor.GlueManager.process_uptime)
  return process_uptime_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void GlueManager::set_process_uptime(const ::std::string& value) {
  
  process_uptime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:monitor.GlueManager.process_uptime)
}
 void GlueManager::set_process_uptime(const char* value) {
  
  process_uptime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:monitor.GlueManager.process_uptime)
}
 void GlueManager::set_process_uptime(const char* value, size_t size) {
  
  process_uptime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:monitor.GlueManager.process_uptime)
}
 ::std::string* GlueManager::mutable_process_uptime() {
  
  // @@protoc_insertion_point(field_mutable:monitor.GlueManager.process_uptime)
  return process_uptime_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* GlueManager::release_process_uptime() {
  // @@protoc_insertion_point(field_release:monitor.GlueManager.process_uptime)
  
  return process_uptime_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void GlueManager::set_allocated_process_uptime(::std::string* process_uptime) {
  if (process_uptime != NULL) {
    
  } else {
    
  }
  process_uptime_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), process_uptime);
  // @@protoc_insertion_point(field_set_allocated:monitor.GlueManager.process_uptime)
}

// optional string system_uptime = 3;
void GlueManager::clear_system_uptime() {
  system_uptime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& GlueManager::system_uptime() const {
  // @@protoc_insertion_point(field_get:monitor.GlueManager.system_uptime)
  return system_uptime_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void GlueManager::set_system_uptime(const ::std::string& value) {
  
  system_uptime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:monitor.GlueManager.system_uptime)
}
 void GlueManager::set_system_uptime(const char* value) {
  
  system_uptime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:monitor.GlueManager.system_uptime)
}
 void GlueManager::set_system_uptime(const char* value, size_t size) {
  
  system_uptime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:monitor.GlueManager.system_uptime)
}
 ::std::string* GlueManager::mutable_system_uptime() {
  
  // @@protoc_insertion_point(field_mutable:monitor.GlueManager.system_uptime)
  return system_uptime_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* GlueManager::release_system_uptime() {
  // @@protoc_insertion_point(field_release:monitor.GlueManager.system_uptime)
  
  return system_uptime_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void GlueManager::set_allocated_system_uptime(::std::string* system_uptime) {
  if (system_uptime != NULL) {
    
  } else {
    
  }
  system_uptime_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), system_uptime);
  // @@protoc_insertion_point(field_set_allocated:monitor.GlueManager.system_uptime)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PeerManager::kPeerIdFieldNumber;
const int PeerManager::kPeerFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PeerManager::PeerManager()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:monitor.PeerManager)
}

void PeerManager::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

PeerManager::PeerManager(const PeerManager& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:monitor.PeerManager)
}

void PeerManager::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  peer_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PeerManager::~PeerManager() {
  // @@protoc_insertion_point(destructor:monitor.PeerManager)
  SharedDtor();
}

void PeerManager::SharedDtor() {
  peer_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void PeerManager::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PeerManager::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PeerManager_descriptor_;
}

const PeerManager& PeerManager::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_monitor_2eproto();
  return *default_instance_;
}

PeerManager* PeerManager::default_instance_ = NULL;

PeerManager* PeerManager::New(::google::protobuf::Arena* arena) const {
  PeerManager* n = new PeerManager;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PeerManager::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.PeerManager)
  peer_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  peer_.Clear();
}

bool PeerManager::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:monitor.PeerManager)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string peer_id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_peer_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->peer_id().data(), this->peer_id().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "monitor.PeerManager.peer_id"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_peer;
        break;
      }

      // repeated .monitor.Peer peer = 2;
      case 2: {
        if (tag == 18) {
         parse_peer:
          DO_(input->IncrementRecursionDepth());
         parse_loop_peer:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_peer()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_peer;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:monitor.PeerManager)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:monitor.PeerManager)
  return false;
#undef DO_
}

void PeerManager::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:monitor.PeerManager)
  // optional string peer_id = 1;
  if (this->peer_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->peer_id().data(), this->peer_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.PeerManager.peer_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->peer_id(), output);
  }

  // repeated .monitor.Peer peer = 2;
  for (unsigned int i = 0, n = this->peer_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->peer(i), output);
  }

  // @@protoc_insertion_point(serialize_end:monitor.PeerManager)
}

::google::protobuf::uint8* PeerManager::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.PeerManager)
  // optional string peer_id = 1;
  if (this->peer_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->peer_id().data(), this->peer_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.PeerManager.peer_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->peer_id(), target);
  }

  // repeated .monitor.Peer peer = 2;
  for (unsigned int i = 0, n = this->peer_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->peer(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:monitor.PeerManager)
  return target;
}

int PeerManager::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.PeerManager)
  int total_size = 0;

  // optional string peer_id = 1;
  if (this->peer_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->peer_id());
  }

  // repeated .monitor.Peer peer = 2;
  total_size += 1 * this->peer_size();
  for (int i = 0; i < this->peer_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->peer(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PeerManager::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.PeerManager)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PeerManager* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PeerManager>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.PeerManager)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.PeerManager)
    MergeFrom(*source);
  }
}

void PeerManager::MergeFrom(const PeerManager& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.PeerManager)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  peer_.MergeFrom(from.peer_);
  if (from.peer_id().size() > 0) {

    peer_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.peer_id_);
  }
}

void PeerManager::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.PeerManager)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PeerManager::CopyFrom(const PeerManager& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.PeerManager)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PeerManager::IsInitialized() const {

  return true;
}

void PeerManager::Swap(PeerManager* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PeerManager::InternalSwap(PeerManager* other) {
  peer_id_.Swap(&other->peer_id_);
  peer_.UnsafeArenaSwap(&other->peer_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PeerManager::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PeerManager_descriptor_;
  metadata.reflection = PeerManager_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PeerManager

// optional string peer_id = 1;
void PeerManager::clear_peer_id() {
  peer_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PeerManager::peer_id() const {
  // @@protoc_insertion_point(field_get:monitor.PeerManager.peer_id)
  return peer_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PeerManager::set_peer_id(const ::std::string& value) {
  
  peer_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:monitor.PeerManager.peer_id)
}
 void PeerManager::set_peer_id(const char* value) {
  
  peer_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:monitor.PeerManager.peer_id)
}
 void PeerManager::set_peer_id(const char* value, size_t size) {
  
  peer_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:monitor.PeerManager.peer_id)
}
 ::std::string* PeerManager::mutable_peer_id() {
  
  // @@protoc_insertion_point(field_mutable:monitor.PeerManager.peer_id)
  return peer_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PeerManager::release_peer_id() {
  // @@protoc_insertion_point(field_release:monitor.PeerManager.peer_id)
  
  return peer_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PeerManager::set_allocated_peer_id(::std::string* peer_id) {
  if (peer_id != NULL) {
    
  } else {
    
  }
  peer_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), peer_id);
  // @@protoc_insertion_point(field_set_allocated:monitor.PeerManager.peer_id)
}

// repeated .monitor.Peer peer = 2;
int PeerManager::peer_size() const {
  return peer_.size();
}
void PeerManager::clear_peer() {
  peer_.Clear();
}
const ::monitor::Peer& PeerManager::peer(int index) const {
  // @@protoc_insertion_point(field_get:monitor.PeerManager.peer)
  return peer_.Get(index);
}
::monitor::Peer* PeerManager::mutable_peer(int index) {
  // @@protoc_insertion_point(field_mutable:monitor.PeerManager.peer)
  return peer_.Mutable(index);
}
::monitor::Peer* PeerManager::add_peer() {
  // @@protoc_insertion_point(field_add:monitor.PeerManager.peer)
  return peer_.Add();
}
::google::protobuf::RepeatedPtrField< ::monitor::Peer >*
PeerManager::mutable_peer() {
  // @@protoc_insertion_point(field_mutable_list:monitor.PeerManager.peer)
  return &peer_;
}
const ::google::protobuf::RepeatedPtrField< ::monitor::Peer >&
PeerManager::peer() const {
  // @@protoc_insertion_point(field_list:monitor.PeerManager.peer)
  return peer_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RexxStatus::kGlueManagerFieldNumber;
const int RexxStatus::kPeerManagerFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RexxStatus::RexxStatus()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:monitor.RexxStatus)
}

void RexxStatus::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  glue_manager_ = const_cast< ::monitor::GlueManager*>(&::monitor::GlueManager::default_instance());
  peer_manager_ = const_cast< ::monitor::PeerManager*>(&::monitor::PeerManager::default_instance());
}

RexxStatus::RexxStatus(const RexxStatus& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:monitor.RexxStatus)
}

void RexxStatus::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  glue_manager_ = NULL;
  peer_manager_ = NULL;
}

RexxStatus::~RexxStatus() {
  // @@protoc_insertion_point(destructor:monitor.RexxStatus)
  SharedDtor();
}

void RexxStatus::SharedDtor() {
  if (this != default_instance_) {
    delete glue_manager_;
    delete peer_manager_;
  }
}

void RexxStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RexxStatus::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RexxStatus_descriptor_;
}

const RexxStatus& RexxStatus::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_monitor_2eproto();
  return *default_instance_;
}

RexxStatus* RexxStatus::default_instance_ = NULL;

RexxStatus* RexxStatus::New(::google::protobuf::Arena* arena) const {
  RexxStatus* n = new RexxStatus;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RexxStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.RexxStatus)
  if (GetArenaNoVirtual() == NULL && glue_manager_ != NULL) delete glue_manager_;
  glue_manager_ = NULL;
  if (GetArenaNoVirtual() == NULL && peer_manager_ != NULL) delete peer_manager_;
  peer_manager_ = NULL;
}

bool RexxStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:monitor.RexxStatus)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .monitor.GlueManager glue_manager = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_glue_manager()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_peer_manager;
        break;
      }

      // optional .monitor.PeerManager peer_manager = 2;
      case 2: {
        if (tag == 18) {
         parse_peer_manager:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_peer_manager()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:monitor.RexxStatus)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:monitor.RexxStatus)
  return false;
#undef DO_
}

void RexxStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:monitor.RexxStatus)
  // optional .monitor.GlueManager glue_manager = 1;
  if (this->has_glue_manager()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->glue_manager_, output);
  }

  // optional .monitor.PeerManager peer_manager = 2;
  if (this->has_peer_manager()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->peer_manager_, output);
  }

  // @@protoc_insertion_point(serialize_end:monitor.RexxStatus)
}

::google::protobuf::uint8* RexxStatus::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.RexxStatus)
  // optional .monitor.GlueManager glue_manager = 1;
  if (this->has_glue_manager()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->glue_manager_, false, target);
  }

  // optional .monitor.PeerManager peer_manager = 2;
  if (this->has_peer_manager()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->peer_manager_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:monitor.RexxStatus)
  return target;
}

int RexxStatus::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.RexxStatus)
  int total_size = 0;

  // optional .monitor.GlueManager glue_manager = 1;
  if (this->has_glue_manager()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->glue_manager_);
  }

  // optional .monitor.PeerManager peer_manager = 2;
  if (this->has_peer_manager()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->peer_manager_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RexxStatus::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.RexxStatus)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const RexxStatus* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RexxStatus>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.RexxStatus)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.RexxStatus)
    MergeFrom(*source);
  }
}

void RexxStatus::MergeFrom(const RexxStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.RexxStatus)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_glue_manager()) {
    mutable_glue_manager()->::monitor::GlueManager::MergeFrom(from.glue_manager());
  }
  if (from.has_peer_manager()) {
    mutable_peer_manager()->::monitor::PeerManager::MergeFrom(from.peer_manager());
  }
}

void RexxStatus::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.RexxStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RexxStatus::CopyFrom(const RexxStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.RexxStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RexxStatus::IsInitialized() const {

  return true;
}

void RexxStatus::Swap(RexxStatus* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RexxStatus::InternalSwap(RexxStatus* other) {
  std::swap(glue_manager_, other->glue_manager_);
  std::swap(peer_manager_, other->peer_manager_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RexxStatus::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RexxStatus_descriptor_;
  metadata.reflection = RexxStatus_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RexxStatus

// optional .monitor.GlueManager glue_manager = 1;
bool RexxStatus::has_glue_manager() const {
  return !_is_default_instance_ && glue_manager_ != NULL;
}
void RexxStatus::clear_glue_manager() {
  if (GetArenaNoVirtual() == NULL && glue_manager_ != NULL) delete glue_manager_;
  glue_manager_ = NULL;
}
const ::monitor::GlueManager& RexxStatus::glue_manager() const {
  // @@protoc_insertion_point(field_get:monitor.RexxStatus.glue_manager)
  return glue_manager_ != NULL ? *glue_manager_ : *default_instance_->glue_manager_;
}
::monitor::GlueManager* RexxStatus::mutable_glue_manager() {
  
  if (glue_manager_ == NULL) {
    glue_manager_ = new ::monitor::GlueManager;
  }
  // @@protoc_insertion_point(field_mutable:monitor.RexxStatus.glue_manager)
  return glue_manager_;
}
::monitor::GlueManager* RexxStatus::release_glue_manager() {
  // @@protoc_insertion_point(field_release:monitor.RexxStatus.glue_manager)
  
  ::monitor::GlueManager* temp = glue_manager_;
  glue_manager_ = NULL;
  return temp;
}
void RexxStatus::set_allocated_glue_manager(::monitor::GlueManager* glue_manager) {
  delete glue_manager_;
  glue_manager_ = glue_manager;
  if (glue_manager) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:monitor.RexxStatus.glue_manager)
}

// optional .monitor.PeerManager peer_manager = 2;
bool RexxStatus::has_peer_manager() const {
  return !_is_default_instance_ && peer_manager_ != NULL;
}
void RexxStatus::clear_peer_manager() {
  if (GetArenaNoVirtual() == NULL && peer_manager_ != NULL) delete peer_manager_;
  peer_manager_ = NULL;
}
const ::monitor::PeerManager& RexxStatus::peer_manager() const {
  // @@protoc_insertion_point(field_get:monitor.RexxStatus.peer_manager)
  return peer_manager_ != NULL ? *peer_manager_ : *default_instance_->peer_manager_;
}
::monitor::PeerManager* RexxStatus::mutable_peer_manager() {
  
  if (peer_manager_ == NULL) {
    peer_manager_ = new ::monitor::PeerManager;
  }
  // @@protoc_insertion_point(field_mutable:monitor.RexxStatus.peer_manager)
  return peer_manager_;
}
::monitor::PeerManager* RexxStatus::release_peer_manager() {
  // @@protoc_insertion_point(field_release:monitor.RexxStatus.peer_manager)
  
  ::monitor::PeerManager* temp = peer_manager_;
  peer_manager_ = NULL;
  return temp;
}
void RexxStatus::set_allocated_peer_manager(::monitor::PeerManager* peer_manager) {
  delete peer_manager_;
  peer_manager_ = peer_manager;
  if (peer_manager) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:monitor.RexxStatus.peer_manager)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LedgerStatus::kLedgerHeaderFieldNumber;
const int LedgerStatus::kTransactionSizeFieldNumber;
const int LedgerStatus::kAccountCountFieldNumber;
const int LedgerStatus::kTimestampFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LedgerStatus::LedgerStatus()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:monitor.LedgerStatus)
}

void LedgerStatus::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  ledger_header_ = const_cast< ::protocol::LedgerHeader*>(&::protocol::LedgerHeader::default_instance());
}

LedgerStatus::LedgerStatus(const LedgerStatus& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:monitor.LedgerStatus)
}

void LedgerStatus::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  ledger_header_ = NULL;
  transaction_size_ = GOOGLE_LONGLONG(0);
  account_count_ = GOOGLE_LONGLONG(0);
  timestamp_ = GOOGLE_LONGLONG(0);
}

LedgerStatus::~LedgerStatus() {
  // @@protoc_insertion_point(destructor:monitor.LedgerStatus)
  SharedDtor();
}

void LedgerStatus::SharedDtor() {
  if (this != default_instance_) {
    delete ledger_header_;
  }
}

void LedgerStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LedgerStatus::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LedgerStatus_descriptor_;
}

const LedgerStatus& LedgerStatus::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_monitor_2eproto();
  return *default_instance_;
}

LedgerStatus* LedgerStatus::default_instance_ = NULL;

LedgerStatus* LedgerStatus::New(::google::protobuf::Arena* arena) const {
  LedgerStatus* n = new LedgerStatus;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LedgerStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.LedgerStatus)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(LedgerStatus, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<LedgerStatus*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(transaction_size_, timestamp_);
  if (GetArenaNoVirtual() == NULL && ledger_header_ != NULL) delete ledger_header_;
  ledger_header_ = NULL;

#undef ZR_HELPER_
#undef ZR_

}

bool LedgerStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:monitor.LedgerStatus)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.LedgerHeader ledger_header = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ledger_header()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_transaction_size;
        break;
      }

      // optional int64 transaction_size = 2;
      case 2: {
        if (tag == 16) {
         parse_transaction_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &transaction_size_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_account_count;
        break;
      }

      // optional int64 account_count = 3;
      case 3: {
        if (tag == 24) {
         parse_account_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &account_count_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_timestamp;
        break;
      }

      // optional int64 timestamp = 4;
      case 4: {
        if (tag == 32) {
         parse_timestamp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &timestamp_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:monitor.LedgerStatus)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:monitor.LedgerStatus)
  return false;
#undef DO_
}

void LedgerStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:monitor.LedgerStatus)
  // optional .protocol.LedgerHeader ledger_header = 1;
  if (this->has_ledger_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->ledger_header_, output);
  }

  // optional int64 transaction_size = 2;
  if (this->transaction_size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->transaction_size(), output);
  }

  // optional int64 account_count = 3;
  if (this->account_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->account_count(), output);
  }

  // optional int64 timestamp = 4;
  if (this->timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->timestamp(), output);
  }

  // @@protoc_insertion_point(serialize_end:monitor.LedgerStatus)
}

::google::protobuf::uint8* LedgerStatus::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.LedgerStatus)
  // optional .protocol.LedgerHeader ledger_header = 1;
  if (this->has_ledger_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->ledger_header_, false, target);
  }

  // optional int64 transaction_size = 2;
  if (this->transaction_size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->transaction_size(), target);
  }

  // optional int64 account_count = 3;
  if (this->account_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->account_count(), target);
  }

  // optional int64 timestamp = 4;
  if (this->timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->timestamp(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:monitor.LedgerStatus)
  return target;
}

int LedgerStatus::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.LedgerStatus)
  int total_size = 0;

  // optional .protocol.LedgerHeader ledger_header = 1;
  if (this->has_ledger_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ledger_header_);
  }

  // optional int64 transaction_size = 2;
  if (this->transaction_size() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->transaction_size());
  }

  // optional int64 account_count = 3;
  if (this->account_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->account_count());
  }

  // optional int64 timestamp = 4;
  if (this->timestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->timestamp());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LedgerStatus::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.LedgerStatus)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const LedgerStatus* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const LedgerStatus>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.LedgerStatus)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.LedgerStatus)
    MergeFrom(*source);
  }
}

void LedgerStatus::MergeFrom(const LedgerStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.LedgerStatus)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_ledger_header()) {
    mutable_ledger_header()->::protocol::LedgerHeader::MergeFrom(from.ledger_header());
  }
  if (from.transaction_size() != 0) {
    set_transaction_size(from.transaction_size());
  }
  if (from.account_count() != 0) {
    set_account_count(from.account_count());
  }
  if (from.timestamp() != 0) {
    set_timestamp(from.timestamp());
  }
}

void LedgerStatus::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.LedgerStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LedgerStatus::CopyFrom(const LedgerStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.LedgerStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LedgerStatus::IsInitialized() const {

  return true;
}

void LedgerStatus::Swap(LedgerStatus* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LedgerStatus::InternalSwap(LedgerStatus* other) {
  std::swap(ledger_header_, other->ledger_header_);
  std::swap(transaction_size_, other->transaction_size_);
  std::swap(account_count_, other->account_count_);
  std::swap(timestamp_, other->timestamp_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LedgerStatus::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LedgerStatus_descriptor_;
  metadata.reflection = LedgerStatus_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LedgerStatus

// optional .protocol.LedgerHeader ledger_header = 1;
bool LedgerStatus::has_ledger_header() const {
  return !_is_default_instance_ && ledger_header_ != NULL;
}
void LedgerStatus::clear_ledger_header() {
  if (GetArenaNoVirtual() == NULL && ledger_header_ != NULL) delete ledger_header_;
  ledger_header_ = NULL;
}
const ::protocol::LedgerHeader& LedgerStatus::ledger_header() const {
  // @@protoc_insertion_point(field_get:monitor.LedgerStatus.ledger_header)
  return ledger_header_ != NULL ? *ledger_header_ : *default_instance_->ledger_header_;
}
::protocol::LedgerHeader* LedgerStatus::mutable_ledger_header() {
  
  if (ledger_header_ == NULL) {
    ledger_header_ = new ::protocol::LedgerHeader;
  }
  // @@protoc_insertion_point(field_mutable:monitor.LedgerStatus.ledger_header)
  return ledger_header_;
}
::protocol::LedgerHeader* LedgerStatus::release_ledger_header() {
  // @@protoc_insertion_point(field_release:monitor.LedgerStatus.ledger_header)
  
  ::protocol::LedgerHeader* temp = ledger_header_;
  ledger_header_ = NULL;
  return temp;
}
void LedgerStatus::set_allocated_ledger_header(::protocol::LedgerHeader* ledger_header) {
  delete ledger_header_;
  ledger_header_ = ledger_header;
  if (ledger_header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:monitor.LedgerStatus.ledger_header)
}

// optional int64 transaction_size = 2;
void LedgerStatus::clear_transaction_size() {
  transaction_size_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 LedgerStatus::transaction_size() const {
  // @@protoc_insertion_point(field_get:monitor.LedgerStatus.transaction_size)
  return transaction_size_;
}
 void LedgerStatus::set_transaction_size(::google::protobuf::int64 value) {
  
  transaction_size_ = value;
  // @@protoc_insertion_point(field_set:monitor.LedgerStatus.transaction_size)
}

// optional int64 account_count = 3;
void LedgerStatus::clear_account_count() {
  account_count_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 LedgerStatus::account_count() const {
  // @@protoc_insertion_point(field_get:monitor.LedgerStatus.account_count)
  return account_count_;
}
 void LedgerStatus::set_account_count(::google::protobuf::int64 value) {
  
  account_count_ = value;
  // @@protoc_insertion_point(field_set:monitor.LedgerStatus.account_count)
}

// optional int64 timestamp = 4;
void LedgerStatus::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 LedgerStatus::timestamp() const {
  // @@protoc_insertion_point(field_get:monitor.LedgerStatus.timestamp)
  return timestamp_;
}
 void LedgerStatus::set_timestamp(::google::protobuf::int64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:monitor.LedgerStatus.timestamp)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SystemProperty::kHostNameFieldNumber;
const int SystemProperty::kOsVersionFieldNumber;
const int SystemProperty::kStartupTimeFieldNumber;
const int SystemProperty::kOsBitFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SystemProperty::SystemProperty()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:monitor.SystemProperty)
}

void SystemProperty::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

SystemProperty::SystemProperty(const SystemProperty& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:monitor.SystemProperty)
}

void SystemProperty::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  host_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  os_version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  startup_time_ = GOOGLE_LONGLONG(0);
  os_bit_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

SystemProperty::~SystemProperty() {
  // @@protoc_insertion_point(destructor:monitor.SystemProperty)
  SharedDtor();
}

void SystemProperty::SharedDtor() {
  host_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  os_version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  os_bit_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void SystemProperty::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SystemProperty::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SystemProperty_descriptor_;
}

const SystemProperty& SystemProperty::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_monitor_2eproto();
  return *default_instance_;
}

SystemProperty* SystemProperty::default_instance_ = NULL;

SystemProperty* SystemProperty::New(::google::protobuf::Arena* arena) const {
  SystemProperty* n = new SystemProperty;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SystemProperty::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.SystemProperty)
  host_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  os_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  startup_time_ = GOOGLE_LONGLONG(0);
  os_bit_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool SystemProperty::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:monitor.SystemProperty)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string host_name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_host_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->host_name().data(), this->host_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "monitor.SystemProperty.host_name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_os_version;
        break;
      }

      // optional string os_version = 2;
      case 2: {
        if (tag == 18) {
         parse_os_version:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_os_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->os_version().data(), this->os_version().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "monitor.SystemProperty.os_version"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_startup_time;
        break;
      }

      // optional int64 startup_time = 3;
      case 3: {
        if (tag == 24) {
         parse_startup_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &startup_time_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_os_bit;
        break;
      }

      // optional string os_bit = 4;
      case 4: {
        if (tag == 34) {
         parse_os_bit:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_os_bit()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->os_bit().data(), this->os_bit().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "monitor.SystemProperty.os_bit"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:monitor.SystemProperty)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:monitor.SystemProperty)
  return false;
#undef DO_
}

void SystemProperty::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:monitor.SystemProperty)
  // optional string host_name = 1;
  if (this->host_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->host_name().data(), this->host_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.SystemProperty.host_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->host_name(), output);
  }

  // optional string os_version = 2;
  if (this->os_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->os_version().data(), this->os_version().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.SystemProperty.os_version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->os_version(), output);
  }

  // optional int64 startup_time = 3;
  if (this->startup_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->startup_time(), output);
  }

  // optional string os_bit = 4;
  if (this->os_bit().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->os_bit().data(), this->os_bit().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.SystemProperty.os_bit");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->os_bit(), output);
  }

  // @@protoc_insertion_point(serialize_end:monitor.SystemProperty)
}

::google::protobuf::uint8* SystemProperty::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.SystemProperty)
  // optional string host_name = 1;
  if (this->host_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->host_name().data(), this->host_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.SystemProperty.host_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->host_name(), target);
  }

  // optional string os_version = 2;
  if (this->os_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->os_version().data(), this->os_version().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.SystemProperty.os_version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->os_version(), target);
  }

  // optional int64 startup_time = 3;
  if (this->startup_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->startup_time(), target);
  }

  // optional string os_bit = 4;
  if (this->os_bit().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->os_bit().data(), this->os_bit().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.SystemProperty.os_bit");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->os_bit(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:monitor.SystemProperty)
  return target;
}

int SystemProperty::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.SystemProperty)
  int total_size = 0;

  // optional string host_name = 1;
  if (this->host_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->host_name());
  }

  // optional string os_version = 2;
  if (this->os_version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->os_version());
  }

  // optional int64 startup_time = 3;
  if (this->startup_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->startup_time());
  }

  // optional string os_bit = 4;
  if (this->os_bit().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->os_bit());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SystemProperty::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.SystemProperty)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SystemProperty* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SystemProperty>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.SystemProperty)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.SystemProperty)
    MergeFrom(*source);
  }
}

void SystemProperty::MergeFrom(const SystemProperty& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.SystemProperty)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.host_name().size() > 0) {

    host_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.host_name_);
  }
  if (from.os_version().size() > 0) {

    os_version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.os_version_);
  }
  if (from.startup_time() != 0) {
    set_startup_time(from.startup_time());
  }
  if (from.os_bit().size() > 0) {

    os_bit_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.os_bit_);
  }
}

void SystemProperty::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.SystemProperty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SystemProperty::CopyFrom(const SystemProperty& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.SystemProperty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SystemProperty::IsInitialized() const {

  return true;
}

void SystemProperty::Swap(SystemProperty* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SystemProperty::InternalSwap(SystemProperty* other) {
  host_name_.Swap(&other->host_name_);
  os_version_.Swap(&other->os_version_);
  std::swap(startup_time_, other->startup_time_);
  os_bit_.Swap(&other->os_bit_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SystemProperty::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SystemProperty_descriptor_;
  metadata.reflection = SystemProperty_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SystemProperty

// optional string host_name = 1;
void SystemProperty::clear_host_name() {
  host_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& SystemProperty::host_name() const {
  // @@protoc_insertion_point(field_get:monitor.SystemProperty.host_name)
  return host_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SystemProperty::set_host_name(const ::std::string& value) {
  
  host_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:monitor.SystemProperty.host_name)
}
 void SystemProperty::set_host_name(const char* value) {
  
  host_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:monitor.SystemProperty.host_name)
}
 void SystemProperty::set_host_name(const char* value, size_t size) {
  
  host_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:monitor.SystemProperty.host_name)
}
 ::std::string* SystemProperty::mutable_host_name() {
  
  // @@protoc_insertion_point(field_mutable:monitor.SystemProperty.host_name)
  return host_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* SystemProperty::release_host_name() {
  // @@protoc_insertion_point(field_release:monitor.SystemProperty.host_name)
  
  return host_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SystemProperty::set_allocated_host_name(::std::string* host_name) {
  if (host_name != NULL) {
    
  } else {
    
  }
  host_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), host_name);
  // @@protoc_insertion_point(field_set_allocated:monitor.SystemProperty.host_name)
}

// optional string os_version = 2;
void SystemProperty::clear_os_version() {
  os_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& SystemProperty::os_version() const {
  // @@protoc_insertion_point(field_get:monitor.SystemProperty.os_version)
  return os_version_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SystemProperty::set_os_version(const ::std::string& value) {
  
  os_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:monitor.SystemProperty.os_version)
}
 void SystemProperty::set_os_version(const char* value) {
  
  os_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:monitor.SystemProperty.os_version)
}
 void SystemProperty::set_os_version(const char* value, size_t size) {
  
  os_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:monitor.SystemProperty.os_version)
}
 ::std::string* SystemProperty::mutable_os_version() {
  
  // @@protoc_insertion_point(field_mutable:monitor.SystemProperty.os_version)
  return os_version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* SystemProperty::release_os_version() {
  // @@protoc_insertion_point(field_release:monitor.SystemProperty.os_version)
  
  return os_version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SystemProperty::set_allocated_os_version(::std::string* os_version) {
  if (os_version != NULL) {
    
  } else {
    
  }
  os_version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), os_version);
  // @@protoc_insertion_point(field_set_allocated:monitor.SystemProperty.os_version)
}

// optional int64 startup_time = 3;
void SystemProperty::clear_startup_time() {
  startup_time_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 SystemProperty::startup_time() const {
  // @@protoc_insertion_point(field_get:monitor.SystemProperty.startup_time)
  return startup_time_;
}
 void SystemProperty::set_startup_time(::google::protobuf::int64 value) {
  
  startup_time_ = value;
  // @@protoc_insertion_point(field_set:monitor.SystemProperty.startup_time)
}

// optional string os_bit = 4;
void SystemProperty::clear_os_bit() {
  os_bit_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& SystemProperty::os_bit() const {
  // @@protoc_insertion_point(field_get:monitor.SystemProperty.os_bit)
  return os_bit_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SystemProperty::set_os_bit(const ::std::string& value) {
  
  os_bit_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:monitor.SystemProperty.os_bit)
}
 void SystemProperty::set_os_bit(const char* value) {
  
  os_bit_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:monitor.SystemProperty.os_bit)
}
 void SystemProperty::set_os_bit(const char* value, size_t size) {
  
  os_bit_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:monitor.SystemProperty.os_bit)
}
 ::std::string* SystemProperty::mutable_os_bit() {
  
  // @@protoc_insertion_point(field_mutable:monitor.SystemProperty.os_bit)
  return os_bit_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* SystemProperty::release_os_bit() {
  // @@protoc_insertion_point(field_release:monitor.SystemProperty.os_bit)
  
  return os_bit_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SystemProperty::set_allocated_os_bit(::std::string* os_bit) {
  if (os_bit != NULL) {
    
  } else {
    
  }
  os_bit_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), os_bit);
  // @@protoc_insertion_point(field_set_allocated:monitor.SystemProperty.os_bit)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SystemResource::kAvailableFieldNumber;
const int SystemResource::kTotalFieldNumber;
const int SystemResource::kUsedPercentFieldNumber;
const int SystemResource::kDescriptionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SystemResource::SystemResource()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:monitor.SystemResource)
}

void SystemResource::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

SystemResource::SystemResource(const SystemResource& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:monitor.SystemResource)
}

void SystemResource::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  available_ = GOOGLE_LONGLONG(0);
  total_ = GOOGLE_LONGLONG(0);
  used_percent_ = 0;
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

SystemResource::~SystemResource() {
  // @@protoc_insertion_point(destructor:monitor.SystemResource)
  SharedDtor();
}

void SystemResource::SharedDtor() {
  description_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void SystemResource::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SystemResource::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SystemResource_descriptor_;
}

const SystemResource& SystemResource::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_monitor_2eproto();
  return *default_instance_;
}

SystemResource* SystemResource::default_instance_ = NULL;

SystemResource* SystemResource::New(::google::protobuf::Arena* arena) const {
  SystemResource* n = new SystemResource;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SystemResource::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.SystemResource)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(SystemResource, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<SystemResource*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(available_, used_percent_);
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool SystemResource::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:monitor.SystemResource)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 available = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &available_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_total;
        break;
      }

      // optional int64 total = 2;
      case 2: {
        if (tag == 16) {
         parse_total:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &total_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_used_percent;
        break;
      }

      // optional double used_percent = 3;
      case 3: {
        if (tag == 25) {
         parse_used_percent:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &used_percent_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_description;
        break;
      }

      // optional string description = 4;
      case 4: {
        if (tag == 34) {
         parse_description:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->description().data(), this->description().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "monitor.SystemResource.description"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:monitor.SystemResource)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:monitor.SystemResource)
  return false;
#undef DO_
}

void SystemResource::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:monitor.SystemResource)
  // optional int64 available = 1;
  if (this->available() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->available(), output);
  }

  // optional int64 total = 2;
  if (this->total() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->total(), output);
  }

  // optional double used_percent = 3;
  if (this->used_percent() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->used_percent(), output);
  }

  // optional string description = 4;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), this->description().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.SystemResource.description");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->description(), output);
  }

  // @@protoc_insertion_point(serialize_end:monitor.SystemResource)
}

::google::protobuf::uint8* SystemResource::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.SystemResource)
  // optional int64 available = 1;
  if (this->available() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->available(), target);
  }

  // optional int64 total = 2;
  if (this->total() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->total(), target);
  }

  // optional double used_percent = 3;
  if (this->used_percent() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->used_percent(), target);
  }

  // optional string description = 4;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), this->description().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.SystemResource.description");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->description(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:monitor.SystemResource)
  return target;
}

int SystemResource::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.SystemResource)
  int total_size = 0;

  // optional int64 available = 1;
  if (this->available() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->available());
  }

  // optional int64 total = 2;
  if (this->total() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->total());
  }

  // optional double used_percent = 3;
  if (this->used_percent() != 0) {
    total_size += 1 + 8;
  }

  // optional string description = 4;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->description());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SystemResource::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.SystemResource)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SystemResource* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SystemResource>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.SystemResource)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.SystemResource)
    MergeFrom(*source);
  }
}

void SystemResource::MergeFrom(const SystemResource& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.SystemResource)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.available() != 0) {
    set_available(from.available());
  }
  if (from.total() != 0) {
    set_total(from.total());
  }
  if (from.used_percent() != 0) {
    set_used_percent(from.used_percent());
  }
  if (from.description().size() > 0) {

    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
}

void SystemResource::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.SystemResource)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SystemResource::CopyFrom(const SystemResource& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.SystemResource)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SystemResource::IsInitialized() const {

  return true;
}

void SystemResource::Swap(SystemResource* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SystemResource::InternalSwap(SystemResource* other) {
  std::swap(available_, other->available_);
  std::swap(total_, other->total_);
  std::swap(used_percent_, other->used_percent_);
  description_.Swap(&other->description_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SystemResource::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SystemResource_descriptor_;
  metadata.reflection = SystemResource_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SystemResource

// optional int64 available = 1;
void SystemResource::clear_available() {
  available_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 SystemResource::available() const {
  // @@protoc_insertion_point(field_get:monitor.SystemResource.available)
  return available_;
}
 void SystemResource::set_available(::google::protobuf::int64 value) {
  
  available_ = value;
  // @@protoc_insertion_point(field_set:monitor.SystemResource.available)
}

// optional int64 total = 2;
void SystemResource::clear_total() {
  total_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 SystemResource::total() const {
  // @@protoc_insertion_point(field_get:monitor.SystemResource.total)
  return total_;
}
 void SystemResource::set_total(::google::protobuf::int64 value) {
  
  total_ = value;
  // @@protoc_insertion_point(field_set:monitor.SystemResource.total)
}

// optional double used_percent = 3;
void SystemResource::clear_used_percent() {
  used_percent_ = 0;
}
 double SystemResource::used_percent() const {
  // @@protoc_insertion_point(field_get:monitor.SystemResource.used_percent)
  return used_percent_;
}
 void SystemResource::set_used_percent(double value) {
  
  used_percent_ = value;
  // @@protoc_insertion_point(field_set:monitor.SystemResource.used_percent)
}

// optional string description = 4;
void SystemResource::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& SystemResource::description() const {
  // @@protoc_insertion_point(field_get:monitor.SystemResource.description)
  return description_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SystemResource::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:monitor.SystemResource.description)
}
 void SystemResource::set_description(const char* value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:monitor.SystemResource.description)
}
 void SystemResource::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:monitor.SystemResource.description)
}
 ::std::string* SystemResource::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:monitor.SystemResource.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* SystemResource::release_description() {
  // @@protoc_insertion_point(field_release:monitor.SystemResource.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SystemResource::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:monitor.SystemResource.description)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Partition::kTotalBytesFieldNumber;
const int Partition::kPartitionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Partition::Partition()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:monitor.Partition)
}

void Partition::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Partition::Partition(const Partition& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:monitor.Partition)
}

void Partition::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  total_bytes_ = GOOGLE_LONGLONG(0);
}

Partition::~Partition() {
  // @@protoc_insertion_point(destructor:monitor.Partition)
  SharedDtor();
}

void Partition::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Partition::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Partition::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Partition_descriptor_;
}

const Partition& Partition::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_monitor_2eproto();
  return *default_instance_;
}

Partition* Partition::default_instance_ = NULL;

Partition* Partition::New(::google::protobuf::Arena* arena) const {
  Partition* n = new Partition;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Partition::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.Partition)
  total_bytes_ = GOOGLE_LONGLONG(0);
  partition_.Clear();
}

bool Partition::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:monitor.Partition)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 total_bytes = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &total_bytes_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_partition;
        break;
      }

      // repeated .monitor.SystemResource partition = 2;
      case 2: {
        if (tag == 18) {
         parse_partition:
          DO_(input->IncrementRecursionDepth());
         parse_loop_partition:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_partition()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_partition;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:monitor.Partition)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:monitor.Partition)
  return false;
#undef DO_
}

void Partition::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:monitor.Partition)
  // optional int64 total_bytes = 1;
  if (this->total_bytes() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->total_bytes(), output);
  }

  // repeated .monitor.SystemResource partition = 2;
  for (unsigned int i = 0, n = this->partition_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->partition(i), output);
  }

  // @@protoc_insertion_point(serialize_end:monitor.Partition)
}

::google::protobuf::uint8* Partition::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.Partition)
  // optional int64 total_bytes = 1;
  if (this->total_bytes() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->total_bytes(), target);
  }

  // repeated .monitor.SystemResource partition = 2;
  for (unsigned int i = 0, n = this->partition_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->partition(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:monitor.Partition)
  return target;
}

int Partition::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.Partition)
  int total_size = 0;

  // optional int64 total_bytes = 1;
  if (this->total_bytes() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->total_bytes());
  }

  // repeated .monitor.SystemResource partition = 2;
  total_size += 1 * this->partition_size();
  for (int i = 0; i < this->partition_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->partition(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Partition::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.Partition)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Partition* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Partition>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.Partition)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.Partition)
    MergeFrom(*source);
  }
}

void Partition::MergeFrom(const Partition& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.Partition)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  partition_.MergeFrom(from.partition_);
  if (from.total_bytes() != 0) {
    set_total_bytes(from.total_bytes());
  }
}

void Partition::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.Partition)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Partition::CopyFrom(const Partition& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.Partition)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Partition::IsInitialized() const {

  return true;
}

void Partition::Swap(Partition* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Partition::InternalSwap(Partition* other) {
  std::swap(total_bytes_, other->total_bytes_);
  partition_.UnsafeArenaSwap(&other->partition_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Partition::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Partition_descriptor_;
  metadata.reflection = Partition_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Partition

// optional int64 total_bytes = 1;
void Partition::clear_total_bytes() {
  total_bytes_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Partition::total_bytes() const {
  // @@protoc_insertion_point(field_get:monitor.Partition.total_bytes)
  return total_bytes_;
}
 void Partition::set_total_bytes(::google::protobuf::int64 value) {
  
  total_bytes_ = value;
  // @@protoc_insertion_point(field_set:monitor.Partition.total_bytes)
}

// repeated .monitor.SystemResource partition = 2;
int Partition::partition_size() const {
  return partition_.size();
}
void Partition::clear_partition() {
  partition_.Clear();
}
const ::monitor::SystemResource& Partition::partition(int index) const {
  // @@protoc_insertion_point(field_get:monitor.Partition.partition)
  return partition_.Get(index);
}
::monitor::SystemResource* Partition::mutable_partition(int index) {
  // @@protoc_insertion_point(field_mutable:monitor.Partition.partition)
  return partition_.Mutable(index);
}
::monitor::SystemResource* Partition::add_partition() {
  // @@protoc_insertion_point(field_add:monitor.Partition.partition)
  return partition_.Add();
}
::google::protobuf::RepeatedPtrField< ::monitor::SystemResource >*
Partition::mutable_partition() {
  // @@protoc_insertion_point(field_mutable_list:monitor.Partition.partition)
  return &partition_;
}
const ::google::protobuf::RepeatedPtrField< ::monitor::SystemResource >&
Partition::partition() const {
  // @@protoc_insertion_point(field_list:monitor.Partition.partition)
  return partition_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CPU::kUsedPercentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CPU::CPU()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:monitor.CPU)
}

void CPU::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

CPU::CPU(const CPU& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:monitor.CPU)
}

void CPU::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  used_percent_ = 0;
}

CPU::~CPU() {
  // @@protoc_insertion_point(destructor:monitor.CPU)
  SharedDtor();
}

void CPU::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CPU::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CPU::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CPU_descriptor_;
}

const CPU& CPU::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_monitor_2eproto();
  return *default_instance_;
}

CPU* CPU::default_instance_ = NULL;

CPU* CPU::New(::google::protobuf::Arena* arena) const {
  CPU* n = new CPU;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CPU::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.CPU)
  used_percent_ = 0;
}

bool CPU::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:monitor.CPU)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double used_percent = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &used_percent_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:monitor.CPU)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:monitor.CPU)
  return false;
#undef DO_
}

void CPU::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:monitor.CPU)
  // optional double used_percent = 1;
  if (this->used_percent() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->used_percent(), output);
  }

  // @@protoc_insertion_point(serialize_end:monitor.CPU)
}

::google::protobuf::uint8* CPU::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.CPU)
  // optional double used_percent = 1;
  if (this->used_percent() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->used_percent(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:monitor.CPU)
  return target;
}

int CPU::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.CPU)
  int total_size = 0;

  // optional double used_percent = 1;
  if (this->used_percent() != 0) {
    total_size += 1 + 8;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CPU::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.CPU)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const CPU* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const CPU>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.CPU)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.CPU)
    MergeFrom(*source);
  }
}

void CPU::MergeFrom(const CPU& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.CPU)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.used_percent() != 0) {
    set_used_percent(from.used_percent());
  }
}

void CPU::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.CPU)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CPU::CopyFrom(const CPU& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.CPU)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CPU::IsInitialized() const {

  return true;
}

void CPU::Swap(CPU* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CPU::InternalSwap(CPU* other) {
  std::swap(used_percent_, other->used_percent_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CPU::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CPU_descriptor_;
  metadata.reflection = CPU_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CPU

// optional double used_percent = 1;
void CPU::clear_used_percent() {
  used_percent_ = 0;
}
 double CPU::used_percent() const {
  // @@protoc_insertion_point(field_get:monitor.CPU.used_percent)
  return used_percent_;
}
 void CPU::set_used_percent(double value) {
  
  used_percent_ = value;
  // @@protoc_insertion_point(field_set:monitor.CPU.used_percent)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SystemStatus::kPropertyFieldNumber;
const int SystemStatus::kMemoryFieldNumber;
const int SystemStatus::kCpuFieldNumber;
const int SystemStatus::kPartitionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SystemStatus::SystemStatus()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:monitor.SystemStatus)
}

void SystemStatus::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  property_ = const_cast< ::monitor::SystemProperty*>(&::monitor::SystemProperty::default_instance());
  memory_ = const_cast< ::monitor::SystemResource*>(&::monitor::SystemResource::default_instance());
  cpu_ = const_cast< ::monitor::CPU*>(&::monitor::CPU::default_instance());
  partitions_ = const_cast< ::monitor::Partition*>(&::monitor::Partition::default_instance());
}

SystemStatus::SystemStatus(const SystemStatus& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:monitor.SystemStatus)
}

void SystemStatus::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  property_ = NULL;
  memory_ = NULL;
  cpu_ = NULL;
  partitions_ = NULL;
}

SystemStatus::~SystemStatus() {
  // @@protoc_insertion_point(destructor:monitor.SystemStatus)
  SharedDtor();
}

void SystemStatus::SharedDtor() {
  if (this != default_instance_) {
    delete property_;
    delete memory_;
    delete cpu_;
    delete partitions_;
  }
}

void SystemStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SystemStatus::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SystemStatus_descriptor_;
}

const SystemStatus& SystemStatus::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_monitor_2eproto();
  return *default_instance_;
}

SystemStatus* SystemStatus::default_instance_ = NULL;

SystemStatus* SystemStatus::New(::google::protobuf::Arena* arena) const {
  SystemStatus* n = new SystemStatus;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SystemStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.SystemStatus)
  if (GetArenaNoVirtual() == NULL && property_ != NULL) delete property_;
  property_ = NULL;
  if (GetArenaNoVirtual() == NULL && memory_ != NULL) delete memory_;
  memory_ = NULL;
  if (GetArenaNoVirtual() == NULL && cpu_ != NULL) delete cpu_;
  cpu_ = NULL;
  if (GetArenaNoVirtual() == NULL && partitions_ != NULL) delete partitions_;
  partitions_ = NULL;
}

bool SystemStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:monitor.SystemStatus)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .monitor.SystemProperty property = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_property()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_memory;
        break;
      }

      // optional .monitor.SystemResource memory = 2;
      case 2: {
        if (tag == 18) {
         parse_memory:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_memory()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_cpu;
        break;
      }

      // optional .monitor.CPU cpu = 3;
      case 3: {
        if (tag == 26) {
         parse_cpu:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_cpu()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_partitions;
        break;
      }

      // optional .monitor.Partition partitions = 4;
      case 4: {
        if (tag == 34) {
         parse_partitions:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_partitions()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:monitor.SystemStatus)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:monitor.SystemStatus)
  return false;
#undef DO_
}

void SystemStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:monitor.SystemStatus)
  // optional .monitor.SystemProperty property = 1;
  if (this->has_property()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->property_, output);
  }

  // optional .monitor.SystemResource memory = 2;
  if (this->has_memory()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->memory_, output);
  }

  // optional .monitor.CPU cpu = 3;
  if (this->has_cpu()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->cpu_, output);
  }

  // optional .monitor.Partition partitions = 4;
  if (this->has_partitions()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->partitions_, output);
  }

  // @@protoc_insertion_point(serialize_end:monitor.SystemStatus)
}

::google::protobuf::uint8* SystemStatus::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.SystemStatus)
  // optional .monitor.SystemProperty property = 1;
  if (this->has_property()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->property_, false, target);
  }

  // optional .monitor.SystemResource memory = 2;
  if (this->has_memory()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->memory_, false, target);
  }

  // optional .monitor.CPU cpu = 3;
  if (this->has_cpu()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->cpu_, false, target);
  }

  // optional .monitor.Partition partitions = 4;
  if (this->has_partitions()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->partitions_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:monitor.SystemStatus)
  return target;
}

int SystemStatus::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.SystemStatus)
  int total_size = 0;

  // optional .monitor.SystemProperty property = 1;
  if (this->has_property()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->property_);
  }

  // optional .monitor.SystemResource memory = 2;
  if (this->has_memory()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->memory_);
  }

  // optional .monitor.CPU cpu = 3;
  if (this->has_cpu()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->cpu_);
  }

  // optional .monitor.Partition partitions = 4;
  if (this->has_partitions()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->partitions_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SystemStatus::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.SystemStatus)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SystemStatus* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SystemStatus>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.SystemStatus)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.SystemStatus)
    MergeFrom(*source);
  }
}

void SystemStatus::MergeFrom(const SystemStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.SystemStatus)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_property()) {
    mutable_property()->::monitor::SystemProperty::MergeFrom(from.property());
  }
  if (from.has_memory()) {
    mutable_memory()->::monitor::SystemResource::MergeFrom(from.memory());
  }
  if (from.has_cpu()) {
    mutable_cpu()->::monitor::CPU::MergeFrom(from.cpu());
  }
  if (from.has_partitions()) {
    mutable_partitions()->::monitor::Partition::MergeFrom(from.partitions());
  }
}

void SystemStatus::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.SystemStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SystemStatus::CopyFrom(const SystemStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.SystemStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SystemStatus::IsInitialized() const {

  return true;
}

void SystemStatus::Swap(SystemStatus* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SystemStatus::InternalSwap(SystemStatus* other) {
  std::swap(property_, other->property_);
  std::swap(memory_, other->memory_);
  std::swap(cpu_, other->cpu_);
  std::swap(partitions_, other->partitions_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SystemStatus::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SystemStatus_descriptor_;
  metadata.reflection = SystemStatus_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SystemStatus

// optional .monitor.SystemProperty property = 1;
bool SystemStatus::has_property() const {
  return !_is_default_instance_ && property_ != NULL;
}
void SystemStatus::clear_property() {
  if (GetArenaNoVirtual() == NULL && property_ != NULL) delete property_;
  property_ = NULL;
}
const ::monitor::SystemProperty& SystemStatus::property() const {
  // @@protoc_insertion_point(field_get:monitor.SystemStatus.property)
  return property_ != NULL ? *property_ : *default_instance_->property_;
}
::monitor::SystemProperty* SystemStatus::mutable_property() {
  
  if (property_ == NULL) {
    property_ = new ::monitor::SystemProperty;
  }
  // @@protoc_insertion_point(field_mutable:monitor.SystemStatus.property)
  return property_;
}
::monitor::SystemProperty* SystemStatus::release_property() {
  // @@protoc_insertion_point(field_release:monitor.SystemStatus.property)
  
  ::monitor::SystemProperty* temp = property_;
  property_ = NULL;
  return temp;
}
void SystemStatus::set_allocated_property(::monitor::SystemProperty* property) {
  delete property_;
  property_ = property;
  if (property) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:monitor.SystemStatus.property)
}

// optional .monitor.SystemResource memory = 2;
bool SystemStatus::has_memory() const {
  return !_is_default_instance_ && memory_ != NULL;
}
void SystemStatus::clear_memory() {
  if (GetArenaNoVirtual() == NULL && memory_ != NULL) delete memory_;
  memory_ = NULL;
}
const ::monitor::SystemResource& SystemStatus::memory() const {
  // @@protoc_insertion_point(field_get:monitor.SystemStatus.memory)
  return memory_ != NULL ? *memory_ : *default_instance_->memory_;
}
::monitor::SystemResource* SystemStatus::mutable_memory() {
  
  if (memory_ == NULL) {
    memory_ = new ::monitor::SystemResource;
  }
  // @@protoc_insertion_point(field_mutable:monitor.SystemStatus.memory)
  return memory_;
}
::monitor::SystemResource* SystemStatus::release_memory() {
  // @@protoc_insertion_point(field_release:monitor.SystemStatus.memory)
  
  ::monitor::SystemResource* temp = memory_;
  memory_ = NULL;
  return temp;
}
void SystemStatus::set_allocated_memory(::monitor::SystemResource* memory) {
  delete memory_;
  memory_ = memory;
  if (memory) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:monitor.SystemStatus.memory)
}

// optional .monitor.CPU cpu = 3;
bool SystemStatus::has_cpu() const {
  return !_is_default_instance_ && cpu_ != NULL;
}
void SystemStatus::clear_cpu() {
  if (GetArenaNoVirtual() == NULL && cpu_ != NULL) delete cpu_;
  cpu_ = NULL;
}
const ::monitor::CPU& SystemStatus::cpu() const {
  // @@protoc_insertion_point(field_get:monitor.SystemStatus.cpu)
  return cpu_ != NULL ? *cpu_ : *default_instance_->cpu_;
}
::monitor::CPU* SystemStatus::mutable_cpu() {
  
  if (cpu_ == NULL) {
    cpu_ = new ::monitor::CPU;
  }
  // @@protoc_insertion_point(field_mutable:monitor.SystemStatus.cpu)
  return cpu_;
}
::monitor::CPU* SystemStatus::release_cpu() {
  // @@protoc_insertion_point(field_release:monitor.SystemStatus.cpu)
  
  ::monitor::CPU* temp = cpu_;
  cpu_ = NULL;
  return temp;
}
void SystemStatus::set_allocated_cpu(::monitor::CPU* cpu) {
  delete cpu_;
  cpu_ = cpu;
  if (cpu) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:monitor.SystemStatus.cpu)
}

// optional .monitor.Partition partitions = 4;
bool SystemStatus::has_partitions() const {
  return !_is_default_instance_ && partitions_ != NULL;
}
void SystemStatus::clear_partitions() {
  if (GetArenaNoVirtual() == NULL && partitions_ != NULL) delete partitions_;
  partitions_ = NULL;
}
const ::monitor::Partition& SystemStatus::partitions() const {
  // @@protoc_insertion_point(field_get:monitor.SystemStatus.partitions)
  return partitions_ != NULL ? *partitions_ : *default_instance_->partitions_;
}
::monitor::Partition* SystemStatus::mutable_partitions() {
  
  if (partitions_ == NULL) {
    partitions_ = new ::monitor::Partition;
  }
  // @@protoc_insertion_point(field_mutable:monitor.SystemStatus.partitions)
  return partitions_;
}
::monitor::Partition* SystemStatus::release_partitions() {
  // @@protoc_insertion_point(field_release:monitor.SystemStatus.partitions)
  
  ::monitor::Partition* temp = partitions_;
  partitions_ = NULL;
  return temp;
}
void SystemStatus::set_allocated_partitions(::monitor::Partition* partitions) {
  delete partitions_;
  partitions_ = partitions;
  if (partitions) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:monitor.SystemStatus.partitions)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AlertStatus::kLedgerSequenceFieldNumber;
const int AlertStatus::kNodeIdFieldNumber;
const int AlertStatus::kSystemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AlertStatus::AlertStatus()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:monitor.AlertStatus)
}

void AlertStatus::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  system_ = const_cast< ::monitor::SystemStatus*>(&::monitor::SystemStatus::default_instance());
}

AlertStatus::AlertStatus(const AlertStatus& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:monitor.AlertStatus)
}

void AlertStatus::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ledger_sequence_ = GOOGLE_LONGLONG(0);
  node_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  system_ = NULL;
}

AlertStatus::~AlertStatus() {
  // @@protoc_insertion_point(destructor:monitor.AlertStatus)
  SharedDtor();
}

void AlertStatus::SharedDtor() {
  node_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete system_;
  }
}

void AlertStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AlertStatus::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AlertStatus_descriptor_;
}

const AlertStatus& AlertStatus::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_monitor_2eproto();
  return *default_instance_;
}

AlertStatus* AlertStatus::default_instance_ = NULL;

AlertStatus* AlertStatus::New(::google::protobuf::Arena* arena) const {
  AlertStatus* n = new AlertStatus;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AlertStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.AlertStatus)
  ledger_sequence_ = GOOGLE_LONGLONG(0);
  node_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && system_ != NULL) delete system_;
  system_ = NULL;
}

bool AlertStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:monitor.AlertStatus)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 ledger_sequence = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &ledger_sequence_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_node_id;
        break;
      }

      // optional string node_id = 2;
      case 2: {
        if (tag == 18) {
         parse_node_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_node_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->node_id().data(), this->node_id().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "monitor.AlertStatus.node_id"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_system;
        break;
      }

      // optional .monitor.SystemStatus system = 3;
      case 3: {
        if (tag == 26) {
         parse_system:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_system()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:monitor.AlertStatus)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:monitor.AlertStatus)
  return false;
#undef DO_
}

void AlertStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:monitor.AlertStatus)
  // optional int64 ledger_sequence = 1;
  if (this->ledger_sequence() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->ledger_sequence(), output);
  }

  // optional string node_id = 2;
  if (this->node_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->node_id().data(), this->node_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.AlertStatus.node_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->node_id(), output);
  }

  // optional .monitor.SystemStatus system = 3;
  if (this->has_system()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->system_, output);
  }

  // @@protoc_insertion_point(serialize_end:monitor.AlertStatus)
}

::google::protobuf::uint8* AlertStatus::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.AlertStatus)
  // optional int64 ledger_sequence = 1;
  if (this->ledger_sequence() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->ledger_sequence(), target);
  }

  // optional string node_id = 2;
  if (this->node_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->node_id().data(), this->node_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "monitor.AlertStatus.node_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->node_id(), target);
  }

  // optional .monitor.SystemStatus system = 3;
  if (this->has_system()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->system_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:monitor.AlertStatus)
  return target;
}

int AlertStatus::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.AlertStatus)
  int total_size = 0;

  // optional int64 ledger_sequence = 1;
  if (this->ledger_sequence() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->ledger_sequence());
  }

  // optional string node_id = 2;
  if (this->node_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->node_id());
  }

  // optional .monitor.SystemStatus system = 3;
  if (this->has_system()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->system_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AlertStatus::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.AlertStatus)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const AlertStatus* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AlertStatus>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.AlertStatus)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.AlertStatus)
    MergeFrom(*source);
  }
}

void AlertStatus::MergeFrom(const AlertStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.AlertStatus)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.ledger_sequence() != 0) {
    set_ledger_sequence(from.ledger_sequence());
  }
  if (from.node_id().size() > 0) {

    node_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.node_id_);
  }
  if (from.has_system()) {
    mutable_system()->::monitor::SystemStatus::MergeFrom(from.system());
  }
}

void AlertStatus::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.AlertStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AlertStatus::CopyFrom(const AlertStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.AlertStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AlertStatus::IsInitialized() const {

  return true;
}

void AlertStatus::Swap(AlertStatus* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AlertStatus::InternalSwap(AlertStatus* other) {
  std::swap(ledger_sequence_, other->ledger_sequence_);
  node_id_.Swap(&other->node_id_);
  std::swap(system_, other->system_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AlertStatus::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AlertStatus_descriptor_;
  metadata.reflection = AlertStatus_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AlertStatus

// optional int64 ledger_sequence = 1;
void AlertStatus::clear_ledger_sequence() {
  ledger_sequence_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 AlertStatus::ledger_sequence() const {
  // @@protoc_insertion_point(field_get:monitor.AlertStatus.ledger_sequence)
  return ledger_sequence_;
}
 void AlertStatus::set_ledger_sequence(::google::protobuf::int64 value) {
  
  ledger_sequence_ = value;
  // @@protoc_insertion_point(field_set:monitor.AlertStatus.ledger_sequence)
}

// optional string node_id = 2;
void AlertStatus::clear_node_id() {
  node_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& AlertStatus::node_id() const {
  // @@protoc_insertion_point(field_get:monitor.AlertStatus.node_id)
  return node_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AlertStatus::set_node_id(const ::std::string& value) {
  
  node_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:monitor.AlertStatus.node_id)
}
 void AlertStatus::set_node_id(const char* value) {
  
  node_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:monitor.AlertStatus.node_id)
}
 void AlertStatus::set_node_id(const char* value, size_t size) {
  
  node_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:monitor.AlertStatus.node_id)
}
 ::std::string* AlertStatus::mutable_node_id() {
  
  // @@protoc_insertion_point(field_mutable:monitor.AlertStatus.node_id)
  return node_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* AlertStatus::release_node_id() {
  // @@protoc_insertion_point(field_release:monitor.AlertStatus.node_id)
  
  return node_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AlertStatus::set_allocated_node_id(::std::string* node_id) {
  if (node_id != NULL) {
    
  } else {
    
  }
  node_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), node_id);
  // @@protoc_insertion_point(field_set_allocated:monitor.AlertStatus.node_id)
}

// optional .monitor.SystemStatus system = 3;
bool AlertStatus::has_system() const {
  return !_is_default_instance_ && system_ != NULL;
}
void AlertStatus::clear_system() {
  if (GetArenaNoVirtual() == NULL && system_ != NULL) delete system_;
  system_ = NULL;
}
const ::monitor::SystemStatus& AlertStatus::system() const {
  // @@protoc_insertion_point(field_get:monitor.AlertStatus.system)
  return system_ != NULL ? *system_ : *default_instance_->system_;
}
::monitor::SystemStatus* AlertStatus::mutable_system() {
  
  if (system_ == NULL) {
    system_ = new ::monitor::SystemStatus;
  }
  // @@protoc_insertion_point(field_mutable:monitor.AlertStatus.system)
  return system_;
}
::monitor::SystemStatus* AlertStatus::release_system() {
  // @@protoc_insertion_point(field_release:monitor.AlertStatus.system)
  
  ::monitor::SystemStatus* temp = system_;
  system_ = NULL;
  return temp;
}
void AlertStatus::set_allocated_system(::monitor::SystemStatus* system) {
  delete system_;
  system_ = system;
  if (system) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:monitor.AlertStatus.system)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace monitor

// @@protoc_insertion_point(global_scope)
