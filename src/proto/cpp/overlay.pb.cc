

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "overlay.pb.h"

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

namespace protocol {

namespace {

const ::google::protobuf::Descriptor* Hello_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Hello_reflection_ = NULL;
const ::google::protobuf::Descriptor* HelloResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HelloResponse_reflection_ = NULL;
const ::google::protobuf::Descriptor* Peer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Peer_reflection_ = NULL;
const ::google::protobuf::Descriptor* Peers_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Peers_reflection_ = NULL;
const ::google::protobuf::Descriptor* GetLedgers_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GetLedgers_reflection_ = NULL;
const ::google::protobuf::Descriptor* Ledgers_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Ledgers_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Ledgers_SyncCode_descriptor_ = NULL;
const ::google::protobuf::Descriptor* DontHave_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DontHave_reflection_ = NULL;
const ::google::protobuf::Descriptor* LedgerUpgradeNotify_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LedgerUpgradeNotify_reflection_ = NULL;
const ::google::protobuf::Descriptor* EntryList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EntryList_reflection_ = NULL;
const ::google::protobuf::Descriptor* ChainHello_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ChainHello_reflection_ = NULL;
const ::google::protobuf::Descriptor* ChainStatus_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ChainStatus_reflection_ = NULL;
const ::google::protobuf::Descriptor* ChainPeerMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ChainPeerMessage_reflection_ = NULL;
const ::google::protobuf::Descriptor* ChainSubscribeTx_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ChainSubscribeTx_reflection_ = NULL;
const ::google::protobuf::Descriptor* ChainResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ChainResponse_reflection_ = NULL;
const ::google::protobuf::Descriptor* ChainTxStatus_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ChainTxStatus_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* ChainTxStatus_TxStatus_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* OVERLAY_MESSAGE_TYPE_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ChainMessageType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_overlay_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_overlay_2eproto() {
  protobuf_AddDesc_overlay_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "overlay.proto");
  GOOGLE_CHECK(file != NULL);
  Hello_descriptor_ = file->message_type(0);
  static const int Hello_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, network_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, ledger_version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, overlay_version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, rexx_version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, listening_port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, node_address_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, node_rand_),
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
  HelloResponse_descriptor_ = file->message_type(1);
  static const int HelloResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HelloResponse, error_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HelloResponse, error_desc_),
  };
  HelloResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      HelloResponse_descriptor_,
      HelloResponse::default_instance_,
      HelloResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(HelloResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HelloResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HelloResponse, _is_default_instance_));
  Peer_descriptor_ = file->message_type(2);
  static const int Peer_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Peer, ip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Peer, port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Peer, num_failures_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Peer, next_attempt_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Peer, active_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Peer, connection_id_),
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
  Peers_descriptor_ = file->message_type(3);
  static const int Peers_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Peers, peers_),
  };
  Peers_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Peers_descriptor_,
      Peers::default_instance_,
      Peers_offsets_,
      -1,
      -1,
      -1,
      sizeof(Peers),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Peers, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Peers, _is_default_instance_));
  GetLedgers_descriptor_ = file->message_type(4);
  static const int GetLedgers_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetLedgers, begin_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetLedgers, end_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetLedgers, timestamp_),
  };
  GetLedgers_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GetLedgers_descriptor_,
      GetLedgers::default_instance_,
      GetLedgers_offsets_,
      -1,
      -1,
      -1,
      sizeof(GetLedgers),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetLedgers, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetLedgers, _is_default_instance_));
  Ledgers_descriptor_ = file->message_type(5);
  static const int Ledgers_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ledgers, values_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ledgers, sync_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ledgers, max_seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ledgers, proof_),
  };
  Ledgers_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Ledgers_descriptor_,
      Ledgers::default_instance_,
      Ledgers_offsets_,
      -1,
      -1,
      -1,
      sizeof(Ledgers),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ledgers, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ledgers, _is_default_instance_));
  Ledgers_SyncCode_descriptor_ = Ledgers_descriptor_->enum_type(0);
  DontHave_descriptor_ = file->message_type(6);
  static const int DontHave_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DontHave, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DontHave, hash_),
  };
  DontHave_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      DontHave_descriptor_,
      DontHave::default_instance_,
      DontHave_offsets_,
      -1,
      -1,
      -1,
      sizeof(DontHave),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DontHave, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DontHave, _is_default_instance_));
  LedgerUpgradeNotify_descriptor_ = file->message_type(7);
  static const int LedgerUpgradeNotify_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerUpgradeNotify, nonce_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerUpgradeNotify, upgrade_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerUpgradeNotify, signature_),
  };
  LedgerUpgradeNotify_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      LedgerUpgradeNotify_descriptor_,
      LedgerUpgradeNotify::default_instance_,
      LedgerUpgradeNotify_offsets_,
      -1,
      -1,
      -1,
      sizeof(LedgerUpgradeNotify),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerUpgradeNotify, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerUpgradeNotify, _is_default_instance_));
  EntryList_descriptor_ = file->message_type(8);
  static const int EntryList_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntryList, entry_),
  };
  EntryList_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      EntryList_descriptor_,
      EntryList::default_instance_,
      EntryList_offsets_,
      -1,
      -1,
      -1,
      sizeof(EntryList),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntryList, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntryList, _is_default_instance_));
  ChainHello_descriptor_ = file->message_type(9);
  static const int ChainHello_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainHello, api_list_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainHello, timestamp_),
  };
  ChainHello_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ChainHello_descriptor_,
      ChainHello::default_instance_,
      ChainHello_offsets_,
      -1,
      -1,
      -1,
      sizeof(ChainHello),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainHello, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainHello, _is_default_instance_));
  ChainStatus_descriptor_ = file->message_type(10);
  static const int ChainStatus_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainStatus, self_addr_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainStatus, ledger_version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainStatus, monitor_version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainStatus, rexx_version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainStatus, timestamp_),
  };
  ChainStatus_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ChainStatus_descriptor_,
      ChainStatus::default_instance_,
      ChainStatus_offsets_,
      -1,
      -1,
      -1,
      sizeof(ChainStatus),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainStatus, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainStatus, _is_default_instance_));
  ChainPeerMessage_descriptor_ = file->message_type(11);
  static const int ChainPeerMessage_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainPeerMessage, src_peer_addr_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainPeerMessage, des_peer_addrs_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainPeerMessage, data_),
  };
  ChainPeerMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ChainPeerMessage_descriptor_,
      ChainPeerMessage::default_instance_,
      ChainPeerMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(ChainPeerMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainPeerMessage, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainPeerMessage, _is_default_instance_));
  ChainSubscribeTx_descriptor_ = file->message_type(12);
  static const int ChainSubscribeTx_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainSubscribeTx, address_),
  };
  ChainSubscribeTx_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ChainSubscribeTx_descriptor_,
      ChainSubscribeTx::default_instance_,
      ChainSubscribeTx_offsets_,
      -1,
      -1,
      -1,
      sizeof(ChainSubscribeTx),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainSubscribeTx, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainSubscribeTx, _is_default_instance_));
  ChainResponse_descriptor_ = file->message_type(13);
  static const int ChainResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainResponse, error_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainResponse, error_desc_),
  };
  ChainResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ChainResponse_descriptor_,
      ChainResponse::default_instance_,
      ChainResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(ChainResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainResponse, _is_default_instance_));
  ChainTxStatus_descriptor_ = file->message_type(14);
  static const int ChainTxStatus_offsets_[9] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainTxStatus, status_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainTxStatus, tx_hash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainTxStatus, source_address_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainTxStatus, source_account_seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainTxStatus, ledger_seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainTxStatus, new_account_seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainTxStatus, error_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainTxStatus, error_desc_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainTxStatus, timestamp_),
  };
  ChainTxStatus_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ChainTxStatus_descriptor_,
      ChainTxStatus::default_instance_,
      ChainTxStatus_offsets_,
      -1,
      -1,
      -1,
      sizeof(ChainTxStatus),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainTxStatus, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChainTxStatus, _is_default_instance_));
  ChainTxStatus_TxStatus_descriptor_ = ChainTxStatus_descriptor_->enum_type(0);
  OVERLAY_MESSAGE_TYPE_descriptor_ = file->enum_type(0);
  ChainMessageType_descriptor_ = file->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_overlay_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Hello_descriptor_, &Hello::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      HelloResponse_descriptor_, &HelloResponse::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Peer_descriptor_, &Peer::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Peers_descriptor_, &Peers::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GetLedgers_descriptor_, &GetLedgers::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Ledgers_descriptor_, &Ledgers::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      DontHave_descriptor_, &DontHave::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      LedgerUpgradeNotify_descriptor_, &LedgerUpgradeNotify::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      EntryList_descriptor_, &EntryList::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ChainHello_descriptor_, &ChainHello::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ChainStatus_descriptor_, &ChainStatus::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ChainPeerMessage_descriptor_, &ChainPeerMessage::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ChainSubscribeTx_descriptor_, &ChainSubscribeTx::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ChainResponse_descriptor_, &ChainResponse::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ChainTxStatus_descriptor_, &ChainTxStatus::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_overlay_2eproto() {
  delete Hello::default_instance_;
  delete Hello_reflection_;
  delete HelloResponse::default_instance_;
  delete HelloResponse_reflection_;
  delete Peer::default_instance_;
  delete Peer_reflection_;
  delete Peers::default_instance_;
  delete Peers_reflection_;
  delete GetLedgers::default_instance_;
  delete GetLedgers_reflection_;
  delete Ledgers::default_instance_;
  delete Ledgers_reflection_;
  delete DontHave::default_instance_;
  delete DontHave_reflection_;
  delete LedgerUpgradeNotify::default_instance_;
  delete LedgerUpgradeNotify_reflection_;
  delete EntryList::default_instance_;
  delete EntryList_reflection_;
  delete ChainHello::default_instance_;
  delete ChainHello_reflection_;
  delete ChainStatus::default_instance_;
  delete ChainStatus_reflection_;
  delete ChainPeerMessage::default_instance_;
  delete ChainPeerMessage_reflection_;
  delete ChainSubscribeTx::default_instance_;
  delete ChainSubscribeTx_reflection_;
  delete ChainResponse::default_instance_;
  delete ChainResponse_reflection_;
  delete ChainTxStatus::default_instance_;
  delete ChainTxStatus_reflection_;
}

void protobuf_AddDesc_overlay_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_overlay_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protocol::protobuf_AddDesc_common_2eproto();
  ::protocol::protobuf_AddDesc_chain_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\roverlay.proto\022\010protocol\032\014common.proto\032"
    "\013chain.proto\"\243\001\n\005Hello\022\022\n\nnetwork_id\030\001 \001"
    "(\003\022\026\n\016ledger_version\030\002 \001(\003\022\027\n\017overlay_ve"
    "rsion\030\003 \001(\003\022\024\n\014rexx_version\030\004 \001(\t\022\026\n\016lis"
    "tening_port\030\005 \001(\003\022\024\n\014node_address\030\006 \001(\t\022"
    "\021\n\tnode_rand\030\007 \001(\t\"L\n\rHelloResponse\022\'\n\ne"
    "rror_code\030\001 \001(\0162\023.protocol.ERRORCODE\022\022\n\n"
    "error_desc\030\002 \001(\t\"}\n\004Peer\022\n\n\002ip\030\001 \001(\t\022\014\n\004"
    "port\030\002 \001(\003\022\024\n\014num_failures\030\003 \001(\003\022\031\n\021next"
    "_attempt_time\030\004 \001(\003\022\023\n\013active_time\030\005 \001(\003"
    "\022\025\n\rconnection_id\030\006 \001(\003\"&\n\005Peers\022\035\n\005peer"
    "s\030\001 \003(\0132\016.protocol.Peer\";\n\nGetLedgers\022\r\n"
    "\005begin\030\001 \001(\003\022\013\n\003end\030\002 \001(\003\022\021\n\ttimestamp\030\003"
    " \001(\003\"\337\001\n\007Ledgers\022(\n\006values\030\001 \003(\0132\030.proto"
    "col.ConsensusValue\022-\n\tsync_code\030\002 \001(\0162\032."
    "protocol.Ledgers.SyncCode\022\017\n\007max_seq\030\003 \001"
    "(\003\022\r\n\005proof\030\004 \001(\014\"[\n\010SyncCode\022\006\n\002OK\020\000\022\017\n"
    "\013OUT_OF_SYNC\020\001\022\022\n\016OUT_OF_LEDGERS\020\002\022\010\n\004BU"
    "SY\020\003\022\n\n\006REFUSE\020\004\022\014\n\010INTERNAL\020\005\"&\n\010DontHa"
    "ve\022\014\n\004type\030\001 \001(\003\022\014\n\004hash\030\002 \001(\014\"v\n\023Ledger"
    "UpgradeNotify\022\r\n\005nonce\030\001 \001(\003\022(\n\007upgrade\030"
    "\002 \001(\0132\027.protocol.LedgerUpgrade\022&\n\tsignat"
    "ure\030\003 \001(\0132\023.protocol.Signature\"\032\n\tEntryL"
    "ist\022\r\n\005entry\030\001 \003(\014\"M\n\nChainHello\022,\n\010api_"
    "list\030\001 \003(\0162\032.protocol.ChainMessageType\022\021"
    "\n\ttimestamp\030\002 \001(\003\"z\n\013ChainStatus\022\021\n\tself"
    "_addr\030\001 \001(\t\022\026\n\016ledger_version\030\002 \001(\003\022\027\n\017m"
    "onitor_version\030\003 \001(\003\022\024\n\014rexx_version\030\004 \001"
    "(\t\022\021\n\ttimestamp\030\005 \001(\003\"O\n\020ChainPeerMessag"
    "e\022\025\n\rsrc_peer_addr\030\001 \001(\t\022\026\n\016des_peer_add"
    "rs\030\002 \003(\t\022\014\n\004data\030\003 \001(\014\"#\n\020ChainSubscribe"
    "Tx\022\017\n\007address\030\001 \003(\t\"7\n\rChainResponse\022\022\n\n"
    "error_code\030\001 \001(\005\022\022\n\nerror_desc\030\002 \001(\t\"\325\002\n"
    "\rChainTxStatus\0220\n\006status\030\001 \001(\0162 .protoco"
    "l.ChainTxStatus.TxStatus\022\017\n\007tx_hash\030\002 \001("
    "\t\022\026\n\016source_address\030\003 \001(\t\022\032\n\022source_acco"
    "unt_seq\030\004 \001(\003\022\022\n\nledger_seq\030\005 \001(\003\022\027\n\017new"
    "_account_seq\030\006 \001(\003\022\'\n\nerror_code\030\007 \001(\0162\023"
    ".protocol.ERRORCODE\022\022\n\nerror_desc\030\010 \001(\t\022"
    "\021\n\ttimestamp\030\t \001(\003\"P\n\010TxStatus\022\r\n\tUNDEFI"
    "NED\020\000\022\r\n\tCONFIRMED\020\001\022\013\n\007PENDING\020\002\022\014\n\010COM"
    "PLETE\020\003\022\013\n\007FAILURE\020\004*\203\002\n\024OVERLAY_MESSAGE"
    "_TYPE\022\030\n\024OVERLAY_MSGTYPE_NONE\020\000\022\030\n\024OVERL"
    "AY_MSGTYPE_PING\020\001\022\031\n\025OVERLAY_MSGTYPE_HEL"
    "LO\020\002\022\031\n\025OVERLAY_MSGTYPE_PEERS\020\003\022\037\n\033OVERL"
    "AY_MSGTYPE_TRANSACTION\020\004\022\033\n\027OVERLAY_MSGT"
    "YPE_LEDGERS\020\005\022\030\n\024OVERLAY_MSGTYPE_PBFT\020\006\022"
    ")\n%OVERLAY_MSGTYPE_LEDGER_UPGRADE_NOTIFY"
    "\020\007*\372\001\n\020ChainMessageType\022\023\n\017CHAIN_TYPE_NO"
    "NE\020\000\022\017\n\013CHAIN_HELLO\020\n\022\023\n\017CHAIN_TX_STATUS"
    "\020\013\022\025\n\021CHAIN_PEER_ONLINE\020\014\022\026\n\022CHAIN_PEER_"
    "OFFLINE\020\r\022\026\n\022CHAIN_PEER_MESSAGE\020\016\022\033\n\027CHA"
    "IN_SUBMITTRANSACTION\020\017\022\027\n\023CHAIN_LEDGER_H"
    "EADER\020\020\022\026\n\022CHAIN_SUBSCRIBE_TX\020\021\022\026\n\022CHAIN"
    "_TX_ENV_STORE\020\022B\"\n io.rexx.sdk.core.exte"
    "nd.protobufb\006proto3", 2219);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "overlay.proto", &protobuf_RegisterTypes);
  Hello::default_instance_ = new Hello();
  HelloResponse::default_instance_ = new HelloResponse();
  Peer::default_instance_ = new Peer();
  Peers::default_instance_ = new Peers();
  GetLedgers::default_instance_ = new GetLedgers();
  Ledgers::default_instance_ = new Ledgers();
  DontHave::default_instance_ = new DontHave();
  LedgerUpgradeNotify::default_instance_ = new LedgerUpgradeNotify();
  EntryList::default_instance_ = new EntryList();
  ChainHello::default_instance_ = new ChainHello();
  ChainStatus::default_instance_ = new ChainStatus();
  ChainPeerMessage::default_instance_ = new ChainPeerMessage();
  ChainSubscribeTx::default_instance_ = new ChainSubscribeTx();
  ChainResponse::default_instance_ = new ChainResponse();
  ChainTxStatus::default_instance_ = new ChainTxStatus();
  Hello::default_instance_->InitAsDefaultInstance();
  HelloResponse::default_instance_->InitAsDefaultInstance();
  Peer::default_instance_->InitAsDefaultInstance();
  Peers::default_instance_->InitAsDefaultInstance();
  GetLedgers::default_instance_->InitAsDefaultInstance();
  Ledgers::default_instance_->InitAsDefaultInstance();
  DontHave::default_instance_->InitAsDefaultInstance();
  LedgerUpgradeNotify::default_instance_->InitAsDefaultInstance();
  EntryList::default_instance_->InitAsDefaultInstance();
  ChainHello::default_instance_->InitAsDefaultInstance();
  ChainStatus::default_instance_->InitAsDefaultInstance();
  ChainPeerMessage::default_instance_->InitAsDefaultInstance();
  ChainSubscribeTx::default_instance_->InitAsDefaultInstance();
  ChainResponse::default_instance_->InitAsDefaultInstance();
  ChainTxStatus::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_overlay_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_overlay_2eproto {
  StaticDescriptorInitializer_overlay_2eproto() {
    protobuf_AddDesc_overlay_2eproto();
  }
} static_descriptor_initializer_overlay_2eproto_;
const ::google::protobuf::EnumDescriptor* OVERLAY_MESSAGE_TYPE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OVERLAY_MESSAGE_TYPE_descriptor_;
}
bool OVERLAY_MESSAGE_TYPE_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ChainMessageType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ChainMessageType_descriptor_;
}
bool ChainMessageType_IsValid(int value) {
  switch(value) {
    case 0:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Hello::kNetworkIdFieldNumber;
const int Hello::kLedgerVersionFieldNumber;
const int Hello::kOverlayVersionFieldNumber;
const int Hello::kRexxVersionFieldNumber;
const int Hello::kListeningPortFieldNumber;
const int Hello::kNodeAddressFieldNumber;
const int Hello::kNodeRandFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Hello::Hello()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Hello)
}

void Hello::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Hello::Hello(const Hello& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Hello)
}

void Hello::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  network_id_ = GOOGLE_LONGLONG(0);
  ledger_version_ = GOOGLE_LONGLONG(0);
  overlay_version_ = GOOGLE_LONGLONG(0);
  rexx_version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  listening_port_ = GOOGLE_LONGLONG(0);
  node_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  node_rand_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Hello::~Hello() {
  // @@protoc_insertion_point(destructor:protocol.Hello)
  SharedDtor();
}

void Hello::SharedDtor() {
  rexx_version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  node_address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  node_rand_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
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
  if (default_instance_ == NULL) protobuf_AddDesc_overlay_2eproto();
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
// @@protoc_insertion_point(message_clear_start:protocol.Hello)
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

  ZR_(network_id_, overlay_version_);
  rexx_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  listening_port_ = GOOGLE_LONGLONG(0);
  node_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  node_rand_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool Hello::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Hello)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 network_id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &network_id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_ledger_version;
        break;
      }

      // optional int64 ledger_version = 2;
      case 2: {
        if (tag == 16) {
         parse_ledger_version:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &ledger_version_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_overlay_version;
        break;
      }

      // optional int64 overlay_version = 3;
      case 3: {
        if (tag == 24) {
         parse_overlay_version:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &overlay_version_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_rexx_version;
        break;
      }

      // optional string rexx_version = 4;
      case 4: {
        if (tag == 34) {
         parse_rexx_version:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_rexx_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->rexx_version().data(), this->rexx_version().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.Hello.rexx_version"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_listening_port;
        break;
      }

      // optional int64 listening_port = 5;
      case 5: {
        if (tag == 40) {
         parse_listening_port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &listening_port_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_node_address;
        break;
      }

      // optional string node_address = 6;
      case 6: {
        if (tag == 50) {
         parse_node_address:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_node_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->node_address().data(), this->node_address().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.Hello.node_address"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_node_rand;
        break;
      }

      // optional string node_rand = 7;
      case 7: {
        if (tag == 58) {
         parse_node_rand:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_node_rand()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->node_rand().data(), this->node_rand().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.Hello.node_rand"));
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
  // @@protoc_insertion_point(parse_success:protocol.Hello)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Hello)
  return false;
#undef DO_
}

void Hello::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Hello)
  // optional int64 network_id = 1;
  if (this->network_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->network_id(), output);
  }

  // optional int64 ledger_version = 2;
  if (this->ledger_version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->ledger_version(), output);
  }

  // optional int64 overlay_version = 3;
  if (this->overlay_version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->overlay_version(), output);
  }

  // optional string rexx_version = 4;
  if (this->rexx_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->rexx_version().data(), this->rexx_version().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Hello.rexx_version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->rexx_version(), output);
  }

  // optional int64 listening_port = 5;
  if (this->listening_port() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->listening_port(), output);
  }

  // optional string node_address = 6;
  if (this->node_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->node_address().data(), this->node_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Hello.node_address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->node_address(), output);
  }

  // optional string node_rand = 7;
  if (this->node_rand().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->node_rand().data(), this->node_rand().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Hello.node_rand");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->node_rand(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Hello)
}

::google::protobuf::uint8* Hello::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Hello)
  // optional int64 network_id = 1;
  if (this->network_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->network_id(), target);
  }

  // optional int64 ledger_version = 2;
  if (this->ledger_version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->ledger_version(), target);
  }

  // optional int64 overlay_version = 3;
  if (this->overlay_version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->overlay_version(), target);
  }

  // optional string rexx_version = 4;
  if (this->rexx_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->rexx_version().data(), this->rexx_version().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Hello.rexx_version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->rexx_version(), target);
  }

  // optional int64 listening_port = 5;
  if (this->listening_port() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->listening_port(), target);
  }

  // optional string node_address = 6;
  if (this->node_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->node_address().data(), this->node_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Hello.node_address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->node_address(), target);
  }

  // optional string node_rand = 7;
  if (this->node_rand().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->node_rand().data(), this->node_rand().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Hello.node_rand");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->node_rand(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Hello)
  return target;
}

int Hello::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Hello)
  int total_size = 0;

  // optional int64 network_id = 1;
  if (this->network_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->network_id());
  }

  // optional int64 ledger_version = 2;
  if (this->ledger_version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->ledger_version());
  }

  // optional int64 overlay_version = 3;
  if (this->overlay_version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->overlay_version());
  }

  // optional string rexx_version = 4;
  if (this->rexx_version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->rexx_version());
  }

  // optional int64 listening_port = 5;
  if (this->listening_port() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->listening_port());
  }

  // optional string node_address = 6;
  if (this->node_address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->node_address());
  }

  // optional string node_rand = 7;
  if (this->node_rand().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->node_rand());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Hello::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Hello)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Hello* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Hello>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Hello)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Hello)
    MergeFrom(*source);
  }
}

void Hello::MergeFrom(const Hello& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Hello)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.network_id() != 0) {
    set_network_id(from.network_id());
  }
  if (from.ledger_version() != 0) {
    set_ledger_version(from.ledger_version());
  }
  if (from.overlay_version() != 0) {
    set_overlay_version(from.overlay_version());
  }
  if (from.rexx_version().size() > 0) {

    rexx_version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.rexx_version_);
  }
  if (from.listening_port() != 0) {
    set_listening_port(from.listening_port());
  }
  if (from.node_address().size() > 0) {

    node_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.node_address_);
  }
  if (from.node_rand().size() > 0) {

    node_rand_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.node_rand_);
  }
}

void Hello::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Hello)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Hello::CopyFrom(const Hello& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Hello)
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
  std::swap(network_id_, other->network_id_);
  std::swap(ledger_version_, other->ledger_version_);
  std::swap(overlay_version_, other->overlay_version_);
  rexx_version_.Swap(&other->rexx_version_);
  std::swap(listening_port_, other->listening_port_);
  node_address_.Swap(&other->node_address_);
  node_rand_.Swap(&other->node_rand_);
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

// optional int64 network_id = 1;
void Hello::clear_network_id() {
  network_id_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Hello::network_id() const {
  // @@protoc_insertion_point(field_get:protocol.Hello.network_id)
  return network_id_;
}
 void Hello::set_network_id(::google::protobuf::int64 value) {
  
  network_id_ = value;
  // @@protoc_insertion_point(field_set:protocol.Hello.network_id)
}

// optional int64 ledger_version = 2;
void Hello::clear_ledger_version() {
  ledger_version_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Hello::ledger_version() const {
  // @@protoc_insertion_point(field_get:protocol.Hello.ledger_version)
  return ledger_version_;
}
 void Hello::set_ledger_version(::google::protobuf::int64 value) {
  
  ledger_version_ = value;
  // @@protoc_insertion_point(field_set:protocol.Hello.ledger_version)
}

// optional int64 overlay_version = 3;
void Hello::clear_overlay_version() {
  overlay_version_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Hello::overlay_version() const {
  // @@protoc_insertion_point(field_get:protocol.Hello.overlay_version)
  return overlay_version_;
}
 void Hello::set_overlay_version(::google::protobuf::int64 value) {
  
  overlay_version_ = value;
  // @@protoc_insertion_point(field_set:protocol.Hello.overlay_version)
}

// optional string rexx_version = 4;
void Hello::clear_rexx_version() {
  rexx_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Hello::rexx_version() const {
  // @@protoc_insertion_point(field_get:protocol.Hello.rexx_version)
  return rexx_version_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Hello::set_rexx_version(const ::std::string& value) {
  
  rexx_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Hello.rexx_version)
}
 void Hello::set_rexx_version(const char* value) {
  
  rexx_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Hello.rexx_version)
}
 void Hello::set_rexx_version(const char* value, size_t size) {
  
  rexx_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Hello.rexx_version)
}
 ::std::string* Hello::mutable_rexx_version() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Hello.rexx_version)
  return rexx_version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Hello::release_rexx_version() {
  // @@protoc_insertion_point(field_release:protocol.Hello.rexx_version)
  
  return rexx_version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Hello::set_allocated_rexx_version(::std::string* rexx_version) {
  if (rexx_version != NULL) {
    
  } else {
    
  }
  rexx_version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), rexx_version);
  // @@protoc_insertion_point(field_set_allocated:protocol.Hello.rexx_version)
}

// optional int64 listening_port = 5;
void Hello::clear_listening_port() {
  listening_port_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Hello::listening_port() const {
  // @@protoc_insertion_point(field_get:protocol.Hello.listening_port)
  return listening_port_;
}
 void Hello::set_listening_port(::google::protobuf::int64 value) {
  
  listening_port_ = value;
  // @@protoc_insertion_point(field_set:protocol.Hello.listening_port)
}

// optional string node_address = 6;
void Hello::clear_node_address() {
  node_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Hello::node_address() const {
  // @@protoc_insertion_point(field_get:protocol.Hello.node_address)
  return node_address_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Hello::set_node_address(const ::std::string& value) {
  
  node_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Hello.node_address)
}
 void Hello::set_node_address(const char* value) {
  
  node_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Hello.node_address)
}
 void Hello::set_node_address(const char* value, size_t size) {
  
  node_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Hello.node_address)
}
 ::std::string* Hello::mutable_node_address() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Hello.node_address)
  return node_address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Hello::release_node_address() {
  // @@protoc_insertion_point(field_release:protocol.Hello.node_address)
  
  return node_address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Hello::set_allocated_node_address(::std::string* node_address) {
  if (node_address != NULL) {
    
  } else {
    
  }
  node_address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), node_address);
  // @@protoc_insertion_point(field_set_allocated:protocol.Hello.node_address)
}

// optional string node_rand = 7;
void Hello::clear_node_rand() {
  node_rand_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Hello::node_rand() const {
  // @@protoc_insertion_point(field_get:protocol.Hello.node_rand)
  return node_rand_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Hello::set_node_rand(const ::std::string& value) {
  
  node_rand_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Hello.node_rand)
}
 void Hello::set_node_rand(const char* value) {
  
  node_rand_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Hello.node_rand)
}
 void Hello::set_node_rand(const char* value, size_t size) {
  
  node_rand_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Hello.node_rand)
}
 ::std::string* Hello::mutable_node_rand() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Hello.node_rand)
  return node_rand_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Hello::release_node_rand() {
  // @@protoc_insertion_point(field_release:protocol.Hello.node_rand)
  
  return node_rand_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Hello::set_allocated_node_rand(::std::string* node_rand) {
  if (node_rand != NULL) {
    
  } else {
    
  }
  node_rand_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), node_rand);
  // @@protoc_insertion_point(field_set_allocated:protocol.Hello.node_rand)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HelloResponse::kErrorCodeFieldNumber;
const int HelloResponse::kErrorDescFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HelloResponse::HelloResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.HelloResponse)
}

void HelloResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

HelloResponse::HelloResponse(const HelloResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.HelloResponse)
}

void HelloResponse::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  error_code_ = 0;
  error_desc_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

HelloResponse::~HelloResponse() {
  // @@protoc_insertion_point(destructor:protocol.HelloResponse)
  SharedDtor();
}

void HelloResponse::SharedDtor() {
  error_desc_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void HelloResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HelloResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HelloResponse_descriptor_;
}

const HelloResponse& HelloResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_overlay_2eproto();
  return *default_instance_;
}

HelloResponse* HelloResponse::default_instance_ = NULL;

HelloResponse* HelloResponse::New(::google::protobuf::Arena* arena) const {
  HelloResponse* n = new HelloResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HelloResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.HelloResponse)
  error_code_ = 0;
  error_desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool HelloResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.HelloResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.ERRORCODE error_code = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_error_code(static_cast< ::protocol::ERRORCODE >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_error_desc;
        break;
      }

      // optional string error_desc = 2;
      case 2: {
        if (tag == 18) {
         parse_error_desc:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_error_desc()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->error_desc().data(), this->error_desc().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.HelloResponse.error_desc"));
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
  // @@protoc_insertion_point(parse_success:protocol.HelloResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.HelloResponse)
  return false;
#undef DO_
}

void HelloResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.HelloResponse)
  // optional .protocol.ERRORCODE error_code = 1;
  if (this->error_code() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->error_code(), output);
  }

  // optional string error_desc = 2;
  if (this->error_desc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->error_desc().data(), this->error_desc().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.HelloResponse.error_desc");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->error_desc(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.HelloResponse)
}

::google::protobuf::uint8* HelloResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.HelloResponse)
  // optional .protocol.ERRORCODE error_code = 1;
  if (this->error_code() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->error_code(), target);
  }

  // optional string error_desc = 2;
  if (this->error_desc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->error_desc().data(), this->error_desc().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.HelloResponse.error_desc");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->error_desc(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.HelloResponse)
  return target;
}

int HelloResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.HelloResponse)
  int total_size = 0;

  // optional .protocol.ERRORCODE error_code = 1;
  if (this->error_code() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->error_code());
  }

  // optional string error_desc = 2;
  if (this->error_desc().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->error_desc());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HelloResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.HelloResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const HelloResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const HelloResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.HelloResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.HelloResponse)
    MergeFrom(*source);
  }
}

void HelloResponse::MergeFrom(const HelloResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.HelloResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.error_code() != 0) {
    set_error_code(from.error_code());
  }
  if (from.error_desc().size() > 0) {

    error_desc_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.error_desc_);
  }
}

void HelloResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.HelloResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HelloResponse::CopyFrom(const HelloResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.HelloResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HelloResponse::IsInitialized() const {

  return true;
}

void HelloResponse::Swap(HelloResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HelloResponse::InternalSwap(HelloResponse* other) {
  std::swap(error_code_, other->error_code_);
  error_desc_.Swap(&other->error_desc_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata HelloResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HelloResponse_descriptor_;
  metadata.reflection = HelloResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HelloResponse

// optional .protocol.ERRORCODE error_code = 1;
void HelloResponse::clear_error_code() {
  error_code_ = 0;
}
 ::protocol::ERRORCODE HelloResponse::error_code() const {
  // @@protoc_insertion_point(field_get:protocol.HelloResponse.error_code)
  return static_cast< ::protocol::ERRORCODE >(error_code_);
}
 void HelloResponse::set_error_code(::protocol::ERRORCODE value) {
  
  error_code_ = value;
  // @@protoc_insertion_point(field_set:protocol.HelloResponse.error_code)
}

// optional string error_desc = 2;
void HelloResponse::clear_error_desc() {
  error_desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& HelloResponse::error_desc() const {
  // @@protoc_insertion_point(field_get:protocol.HelloResponse.error_desc)
  return error_desc_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void HelloResponse::set_error_desc(const ::std::string& value) {
  
  error_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.HelloResponse.error_desc)
}
 void HelloResponse::set_error_desc(const char* value) {
  
  error_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.HelloResponse.error_desc)
}
 void HelloResponse::set_error_desc(const char* value, size_t size) {
  
  error_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.HelloResponse.error_desc)
}
 ::std::string* HelloResponse::mutable_error_desc() {
  
  // @@protoc_insertion_point(field_mutable:protocol.HelloResponse.error_desc)
  return error_desc_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* HelloResponse::release_error_desc() {
  // @@protoc_insertion_point(field_release:protocol.HelloResponse.error_desc)
  
  return error_desc_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void HelloResponse::set_allocated_error_desc(::std::string* error_desc) {
  if (error_desc != NULL) {
    
  } else {
    
  }
  error_desc_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error_desc);
  // @@protoc_insertion_point(field_set_allocated:protocol.HelloResponse.error_desc)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Peer::kIpFieldNumber;
const int Peer::kPortFieldNumber;
const int Peer::kNumFailuresFieldNumber;
const int Peer::kNextAttemptTimeFieldNumber;
const int Peer::kActiveTimeFieldNumber;
const int Peer::kConnectionIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Peer::Peer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Peer)
}

void Peer::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Peer::Peer(const Peer& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Peer)
}

void Peer::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  port_ = GOOGLE_LONGLONG(0);
  num_failures_ = GOOGLE_LONGLONG(0);
  next_attempt_time_ = GOOGLE_LONGLONG(0);
  active_time_ = GOOGLE_LONGLONG(0);
  connection_id_ = GOOGLE_LONGLONG(0);
}

Peer::~Peer() {
  // @@protoc_insertion_point(destructor:protocol.Peer)
  SharedDtor();
}

void Peer::SharedDtor() {
  ip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
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
  if (default_instance_ == NULL) protobuf_AddDesc_overlay_2eproto();
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
// @@protoc_insertion_point(message_clear_start:protocol.Peer)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Peer, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Peer*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(port_, connection_id_);
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool Peer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Peer)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string ip = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->ip().data(), this->ip().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.Peer.ip"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_port;
        break;
      }

      // optional int64 port = 2;
      case 2: {
        if (tag == 16) {
         parse_port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &port_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_num_failures;
        break;
      }

      // optional int64 num_failures = 3;
      case 3: {
        if (tag == 24) {
         parse_num_failures:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &num_failures_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_next_attempt_time;
        break;
      }

      // optional int64 next_attempt_time = 4;
      case 4: {
        if (tag == 32) {
         parse_next_attempt_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &next_attempt_time_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_active_time;
        break;
      }

      // optional int64 active_time = 5;
      case 5: {
        if (tag == 40) {
         parse_active_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &active_time_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_connection_id;
        break;
      }

      // optional int64 connection_id = 6;
      case 6: {
        if (tag == 48) {
         parse_connection_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &connection_id_)));

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
  // @@protoc_insertion_point(parse_success:protocol.Peer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Peer)
  return false;
#undef DO_
}

void Peer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Peer)
  // optional string ip = 1;
  if (this->ip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Peer.ip");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->ip(), output);
  }

  // optional int64 port = 2;
  if (this->port() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->port(), output);
  }

  // optional int64 num_failures = 3;
  if (this->num_failures() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->num_failures(), output);
  }

  // optional int64 next_attempt_time = 4;
  if (this->next_attempt_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->next_attempt_time(), output);
  }

  // optional int64 active_time = 5;
  if (this->active_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->active_time(), output);
  }

  // optional int64 connection_id = 6;
  if (this->connection_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->connection_id(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Peer)
}

::google::protobuf::uint8* Peer::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Peer)
  // optional string ip = 1;
  if (this->ip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Peer.ip");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->ip(), target);
  }

  // optional int64 port = 2;
  if (this->port() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->port(), target);
  }

  // optional int64 num_failures = 3;
  if (this->num_failures() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->num_failures(), target);
  }

  // optional int64 next_attempt_time = 4;
  if (this->next_attempt_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->next_attempt_time(), target);
  }

  // optional int64 active_time = 5;
  if (this->active_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->active_time(), target);
  }

  // optional int64 connection_id = 6;
  if (this->connection_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, this->connection_id(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Peer)
  return target;
}

int Peer::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Peer)
  int total_size = 0;

  // optional string ip = 1;
  if (this->ip().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->ip());
  }

  // optional int64 port = 2;
  if (this->port() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->port());
  }

  // optional int64 num_failures = 3;
  if (this->num_failures() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->num_failures());
  }

  // optional int64 next_attempt_time = 4;
  if (this->next_attempt_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->next_attempt_time());
  }

  // optional int64 active_time = 5;
  if (this->active_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->active_time());
  }

  // optional int64 connection_id = 6;
  if (this->connection_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->connection_id());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Peer::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Peer)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Peer* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Peer>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Peer)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Peer)
    MergeFrom(*source);
  }
}

void Peer::MergeFrom(const Peer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Peer)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.ip().size() > 0) {

    ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ip_);
  }
  if (from.port() != 0) {
    set_port(from.port());
  }
  if (from.num_failures() != 0) {
    set_num_failures(from.num_failures());
  }
  if (from.next_attempt_time() != 0) {
    set_next_attempt_time(from.next_attempt_time());
  }
  if (from.active_time() != 0) {
    set_active_time(from.active_time());
  }
  if (from.connection_id() != 0) {
    set_connection_id(from.connection_id());
  }
}

void Peer::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Peer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Peer::CopyFrom(const Peer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Peer)
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
  ip_.Swap(&other->ip_);
  std::swap(port_, other->port_);
  std::swap(num_failures_, other->num_failures_);
  std::swap(next_attempt_time_, other->next_attempt_time_);
  std::swap(active_time_, other->active_time_);
  std::swap(connection_id_, other->connection_id_);
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

// optional string ip = 1;
void Peer::clear_ip() {
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Peer::ip() const {
  // @@protoc_insertion_point(field_get:protocol.Peer.ip)
  return ip_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Peer::set_ip(const ::std::string& value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Peer.ip)
}
 void Peer::set_ip(const char* value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Peer.ip)
}
 void Peer::set_ip(const char* value, size_t size) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Peer.ip)
}
 ::std::string* Peer::mutable_ip() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Peer.ip)
  return ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Peer::release_ip() {
  // @@protoc_insertion_point(field_release:protocol.Peer.ip)
  
  return ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Peer::set_allocated_ip(::std::string* ip) {
  if (ip != NULL) {
    
  } else {
    
  }
  ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip);
  // @@protoc_insertion_point(field_set_allocated:protocol.Peer.ip)
}

// optional int64 port = 2;
void Peer::clear_port() {
  port_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Peer::port() const {
  // @@protoc_insertion_point(field_get:protocol.Peer.port)
  return port_;
}
 void Peer::set_port(::google::protobuf::int64 value) {
  
  port_ = value;
  // @@protoc_insertion_point(field_set:protocol.Peer.port)
}

// optional int64 num_failures = 3;
void Peer::clear_num_failures() {
  num_failures_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Peer::num_failures() const {
  // @@protoc_insertion_point(field_get:protocol.Peer.num_failures)
  return num_failures_;
}
 void Peer::set_num_failures(::google::protobuf::int64 value) {
  
  num_failures_ = value;
  // @@protoc_insertion_point(field_set:protocol.Peer.num_failures)
}

// optional int64 next_attempt_time = 4;
void Peer::clear_next_attempt_time() {
  next_attempt_time_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Peer::next_attempt_time() const {
  // @@protoc_insertion_point(field_get:protocol.Peer.next_attempt_time)
  return next_attempt_time_;
}
 void Peer::set_next_attempt_time(::google::protobuf::int64 value) {
  
  next_attempt_time_ = value;
  // @@protoc_insertion_point(field_set:protocol.Peer.next_attempt_time)
}

// optional int64 active_time = 5;
void Peer::clear_active_time() {
  active_time_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Peer::active_time() const {
  // @@protoc_insertion_point(field_get:protocol.Peer.active_time)
  return active_time_;
}
 void Peer::set_active_time(::google::protobuf::int64 value) {
  
  active_time_ = value;
  // @@protoc_insertion_point(field_set:protocol.Peer.active_time)
}

// optional int64 connection_id = 6;
void Peer::clear_connection_id() {
  connection_id_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Peer::connection_id() const {
  // @@protoc_insertion_point(field_get:protocol.Peer.connection_id)
  return connection_id_;
}
 void Peer::set_connection_id(::google::protobuf::int64 value) {
  
  connection_id_ = value;
  // @@protoc_insertion_point(field_set:protocol.Peer.connection_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Peers::kPeersFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Peers::Peers()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Peers)
}

void Peers::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Peers::Peers(const Peers& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Peers)
}

void Peers::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

Peers::~Peers() {
  // @@protoc_insertion_point(destructor:protocol.Peers)
  SharedDtor();
}

void Peers::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Peers::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Peers::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Peers_descriptor_;
}

const Peers& Peers::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_overlay_2eproto();
  return *default_instance_;
}

Peers* Peers::default_instance_ = NULL;

Peers* Peers::New(::google::protobuf::Arena* arena) const {
  Peers* n = new Peers;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Peers::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Peers)
  peers_.Clear();
}

bool Peers::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Peers)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .protocol.Peer peers = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_peers:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_peers()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_peers;
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
  // @@protoc_insertion_point(parse_success:protocol.Peers)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Peers)
  return false;
#undef DO_
}

void Peers::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Peers)
  // repeated .protocol.Peer peers = 1;
  for (unsigned int i = 0, n = this->peers_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->peers(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Peers)
}

::google::protobuf::uint8* Peers::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Peers)
  // repeated .protocol.Peer peers = 1;
  for (unsigned int i = 0, n = this->peers_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->peers(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Peers)
  return target;
}

int Peers::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Peers)
  int total_size = 0;

  // repeated .protocol.Peer peers = 1;
  total_size += 1 * this->peers_size();
  for (int i = 0; i < this->peers_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->peers(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Peers::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Peers)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Peers* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Peers>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Peers)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Peers)
    MergeFrom(*source);
  }
}

void Peers::MergeFrom(const Peers& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Peers)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  peers_.MergeFrom(from.peers_);
}

void Peers::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Peers)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Peers::CopyFrom(const Peers& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Peers)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Peers::IsInitialized() const {

  return true;
}

void Peers::Swap(Peers* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Peers::InternalSwap(Peers* other) {
  peers_.UnsafeArenaSwap(&other->peers_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Peers::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Peers_descriptor_;
  metadata.reflection = Peers_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Peers

// repeated .protocol.Peer peers = 1;
int Peers::peers_size() const {
  return peers_.size();
}
void Peers::clear_peers() {
  peers_.Clear();
}
const ::protocol::Peer& Peers::peers(int index) const {
  // @@protoc_insertion_point(field_get:protocol.Peers.peers)
  return peers_.Get(index);
}
::protocol::Peer* Peers::mutable_peers(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.Peers.peers)
  return peers_.Mutable(index);
}
::protocol::Peer* Peers::add_peers() {
  // @@protoc_insertion_point(field_add:protocol.Peers.peers)
  return peers_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::Peer >*
Peers::mutable_peers() {
  // @@protoc_insertion_point(field_mutable_list:protocol.Peers.peers)
  return &peers_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::Peer >&
Peers::peers() const {
  // @@protoc_insertion_point(field_list:protocol.Peers.peers)
  return peers_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GetLedgers::kBeginFieldNumber;
const int GetLedgers::kEndFieldNumber;
const int GetLedgers::kTimestampFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetLedgers::GetLedgers()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.GetLedgers)
}

void GetLedgers::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

GetLedgers::GetLedgers(const GetLedgers& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.GetLedgers)
}

void GetLedgers::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  begin_ = GOOGLE_LONGLONG(0);
  end_ = GOOGLE_LONGLONG(0);
  timestamp_ = GOOGLE_LONGLONG(0);
}

GetLedgers::~GetLedgers() {
  // @@protoc_insertion_point(destructor:protocol.GetLedgers)
  SharedDtor();
}

void GetLedgers::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GetLedgers::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetLedgers::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GetLedgers_descriptor_;
}

const GetLedgers& GetLedgers::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_overlay_2eproto();
  return *default_instance_;
}

GetLedgers* GetLedgers::default_instance_ = NULL;

GetLedgers* GetLedgers::New(::google::protobuf::Arena* arena) const {
  GetLedgers* n = new GetLedgers;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GetLedgers::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.GetLedgers)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(GetLedgers, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<GetLedgers*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(begin_, timestamp_);

#undef ZR_HELPER_
#undef ZR_

}

bool GetLedgers::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.GetLedgers)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 begin = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &begin_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_end;
        break;
      }

      // optional int64 end = 2;
      case 2: {
        if (tag == 16) {
         parse_end:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &end_)));

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
  // @@protoc_insertion_point(parse_success:protocol.GetLedgers)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.GetLedgers)
  return false;
#undef DO_
}

void GetLedgers::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.GetLedgers)
  // optional int64 begin = 1;
  if (this->begin() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->begin(), output);
  }

  // optional int64 end = 2;
  if (this->end() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->end(), output);
  }

  // optional int64 timestamp = 3;
  if (this->timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->timestamp(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.GetLedgers)
}

::google::protobuf::uint8* GetLedgers::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.GetLedgers)
  // optional int64 begin = 1;
  if (this->begin() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->begin(), target);
  }

  // optional int64 end = 2;
  if (this->end() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->end(), target);
  }

  // optional int64 timestamp = 3;
  if (this->timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->timestamp(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.GetLedgers)
  return target;
}

int GetLedgers::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.GetLedgers)
  int total_size = 0;

  // optional int64 begin = 1;
  if (this->begin() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->begin());
  }

  // optional int64 end = 2;
  if (this->end() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->end());
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

void GetLedgers::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.GetLedgers)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const GetLedgers* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const GetLedgers>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.GetLedgers)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.GetLedgers)
    MergeFrom(*source);
  }
}

void GetLedgers::MergeFrom(const GetLedgers& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.GetLedgers)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.begin() != 0) {
    set_begin(from.begin());
  }
  if (from.end() != 0) {
    set_end(from.end());
  }
  if (from.timestamp() != 0) {
    set_timestamp(from.timestamp());
  }
}

void GetLedgers::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.GetLedgers)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetLedgers::CopyFrom(const GetLedgers& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.GetLedgers)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetLedgers::IsInitialized() const {

  return true;
}

void GetLedgers::Swap(GetLedgers* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetLedgers::InternalSwap(GetLedgers* other) {
  std::swap(begin_, other->begin_);
  std::swap(end_, other->end_);
  std::swap(timestamp_, other->timestamp_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GetLedgers::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GetLedgers_descriptor_;
  metadata.reflection = GetLedgers_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GetLedgers

// optional int64 begin = 1;
void GetLedgers::clear_begin() {
  begin_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 GetLedgers::begin() const {
  // @@protoc_insertion_point(field_get:protocol.GetLedgers.begin)
  return begin_;
}
 void GetLedgers::set_begin(::google::protobuf::int64 value) {
  
  begin_ = value;
  // @@protoc_insertion_point(field_set:protocol.GetLedgers.begin)
}

// optional int64 end = 2;
void GetLedgers::clear_end() {
  end_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 GetLedgers::end() const {
  // @@protoc_insertion_point(field_get:protocol.GetLedgers.end)
  return end_;
}
 void GetLedgers::set_end(::google::protobuf::int64 value) {
  
  end_ = value;
  // @@protoc_insertion_point(field_set:protocol.GetLedgers.end)
}

// optional int64 timestamp = 3;
void GetLedgers::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 GetLedgers::timestamp() const {
  // @@protoc_insertion_point(field_get:protocol.GetLedgers.timestamp)
  return timestamp_;
}
 void GetLedgers::set_timestamp(::google::protobuf::int64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:protocol.GetLedgers.timestamp)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* Ledgers_SyncCode_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Ledgers_SyncCode_descriptor_;
}
bool Ledgers_SyncCode_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Ledgers_SyncCode Ledgers::OK;
const Ledgers_SyncCode Ledgers::OUT_OF_SYNC;
const Ledgers_SyncCode Ledgers::OUT_OF_LEDGERS;
const Ledgers_SyncCode Ledgers::BUSY;
const Ledgers_SyncCode Ledgers::REFUSE;
const Ledgers_SyncCode Ledgers::INTERNAL;
const Ledgers_SyncCode Ledgers::SyncCode_MIN;
const Ledgers_SyncCode Ledgers::SyncCode_MAX;
const int Ledgers::SyncCode_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Ledgers::kValuesFieldNumber;
const int Ledgers::kSyncCodeFieldNumber;
const int Ledgers::kMaxSeqFieldNumber;
const int Ledgers::kProofFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Ledgers::Ledgers()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Ledgers)
}

void Ledgers::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Ledgers::Ledgers(const Ledgers& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Ledgers)
}

void Ledgers::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  sync_code_ = 0;
  max_seq_ = GOOGLE_LONGLONG(0);
  proof_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Ledgers::~Ledgers() {
  // @@protoc_insertion_point(destructor:protocol.Ledgers)
  SharedDtor();
}

void Ledgers::SharedDtor() {
  proof_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Ledgers::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Ledgers::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Ledgers_descriptor_;
}

const Ledgers& Ledgers::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_overlay_2eproto();
  return *default_instance_;
}

Ledgers* Ledgers::default_instance_ = NULL;

Ledgers* Ledgers::New(::google::protobuf::Arena* arena) const {
  Ledgers* n = new Ledgers;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Ledgers::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Ledgers)
  sync_code_ = 0;
  max_seq_ = GOOGLE_LONGLONG(0);
  proof_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  values_.Clear();
}

bool Ledgers::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Ledgers)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .protocol.ConsensusValue values = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_values:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_values()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_values;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(16)) goto parse_sync_code;
        break;
      }

      // optional .protocol.Ledgers.SyncCode sync_code = 2;
      case 2: {
        if (tag == 16) {
         parse_sync_code:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_sync_code(static_cast< ::protocol::Ledgers_SyncCode >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_max_seq;
        break;
      }

      // optional int64 max_seq = 3;
      case 3: {
        if (tag == 24) {
         parse_max_seq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &max_seq_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_proof;
        break;
      }

      // optional bytes proof = 4;
      case 4: {
        if (tag == 34) {
         parse_proof:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_proof()));
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
  // @@protoc_insertion_point(parse_success:protocol.Ledgers)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Ledgers)
  return false;
#undef DO_
}

void Ledgers::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Ledgers)
  // repeated .protocol.ConsensusValue values = 1;
  for (unsigned int i = 0, n = this->values_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->values(i), output);
  }

  // optional .protocol.Ledgers.SyncCode sync_code = 2;
  if (this->sync_code() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->sync_code(), output);
  }

  // optional int64 max_seq = 3;
  if (this->max_seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->max_seq(), output);
  }

  // optional bytes proof = 4;
  if (this->proof().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->proof(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Ledgers)
}

::google::protobuf::uint8* Ledgers::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Ledgers)
  // repeated .protocol.ConsensusValue values = 1;
  for (unsigned int i = 0, n = this->values_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->values(i), false, target);
  }

  // optional .protocol.Ledgers.SyncCode sync_code = 2;
  if (this->sync_code() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->sync_code(), target);
  }

  // optional int64 max_seq = 3;
  if (this->max_seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->max_seq(), target);
  }

  // optional bytes proof = 4;
  if (this->proof().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->proof(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Ledgers)
  return target;
}

int Ledgers::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Ledgers)
  int total_size = 0;

  // optional .protocol.Ledgers.SyncCode sync_code = 2;
  if (this->sync_code() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->sync_code());
  }

  // optional int64 max_seq = 3;
  if (this->max_seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->max_seq());
  }

  // optional bytes proof = 4;
  if (this->proof().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->proof());
  }

  // repeated .protocol.ConsensusValue values = 1;
  total_size += 1 * this->values_size();
  for (int i = 0; i < this->values_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->values(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Ledgers::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Ledgers)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Ledgers* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Ledgers>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Ledgers)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Ledgers)
    MergeFrom(*source);
  }
}

void Ledgers::MergeFrom(const Ledgers& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Ledgers)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  values_.MergeFrom(from.values_);
  if (from.sync_code() != 0) {
    set_sync_code(from.sync_code());
  }
  if (from.max_seq() != 0) {
    set_max_seq(from.max_seq());
  }
  if (from.proof().size() > 0) {

    proof_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.proof_);
  }
}

void Ledgers::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Ledgers)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Ledgers::CopyFrom(const Ledgers& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Ledgers)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Ledgers::IsInitialized() const {

  return true;
}

void Ledgers::Swap(Ledgers* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Ledgers::InternalSwap(Ledgers* other) {
  values_.UnsafeArenaSwap(&other->values_);
  std::swap(sync_code_, other->sync_code_);
  std::swap(max_seq_, other->max_seq_);
  proof_.Swap(&other->proof_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Ledgers::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Ledgers_descriptor_;
  metadata.reflection = Ledgers_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Ledgers

// repeated .protocol.ConsensusValue values = 1;
int Ledgers::values_size() const {
  return values_.size();
}
void Ledgers::clear_values() {
  values_.Clear();
}
const ::protocol::ConsensusValue& Ledgers::values(int index) const {
  // @@protoc_insertion_point(field_get:protocol.Ledgers.values)
  return values_.Get(index);
}
::protocol::ConsensusValue* Ledgers::mutable_values(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.Ledgers.values)
  return values_.Mutable(index);
}
::protocol::ConsensusValue* Ledgers::add_values() {
  // @@protoc_insertion_point(field_add:protocol.Ledgers.values)
  return values_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::ConsensusValue >*
Ledgers::mutable_values() {
  // @@protoc_insertion_point(field_mutable_list:protocol.Ledgers.values)
  return &values_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::ConsensusValue >&
Ledgers::values() const {
  // @@protoc_insertion_point(field_list:protocol.Ledgers.values)
  return values_;
}

// optional .protocol.Ledgers.SyncCode sync_code = 2;
void Ledgers::clear_sync_code() {
  sync_code_ = 0;
}
 ::protocol::Ledgers_SyncCode Ledgers::sync_code() const {
  // @@protoc_insertion_point(field_get:protocol.Ledgers.sync_code)
  return static_cast< ::protocol::Ledgers_SyncCode >(sync_code_);
}
 void Ledgers::set_sync_code(::protocol::Ledgers_SyncCode value) {
  
  sync_code_ = value;
  // @@protoc_insertion_point(field_set:protocol.Ledgers.sync_code)
}

// optional int64 max_seq = 3;
void Ledgers::clear_max_seq() {
  max_seq_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Ledgers::max_seq() const {
  // @@protoc_insertion_point(field_get:protocol.Ledgers.max_seq)
  return max_seq_;
}
 void Ledgers::set_max_seq(::google::protobuf::int64 value) {
  
  max_seq_ = value;
  // @@protoc_insertion_point(field_set:protocol.Ledgers.max_seq)
}

// optional bytes proof = 4;
void Ledgers::clear_proof() {
  proof_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Ledgers::proof() const {
  // @@protoc_insertion_point(field_get:protocol.Ledgers.proof)
  return proof_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Ledgers::set_proof(const ::std::string& value) {
  
  proof_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Ledgers.proof)
}
 void Ledgers::set_proof(const char* value) {
  
  proof_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Ledgers.proof)
}
 void Ledgers::set_proof(const void* value, size_t size) {
  
  proof_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Ledgers.proof)
}
 ::std::string* Ledgers::mutable_proof() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Ledgers.proof)
  return proof_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Ledgers::release_proof() {
  // @@protoc_insertion_point(field_release:protocol.Ledgers.proof)
  
  return proof_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Ledgers::set_allocated_proof(::std::string* proof) {
  if (proof != NULL) {
    
  } else {
    
  }
  proof_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), proof);
  // @@protoc_insertion_point(field_set_allocated:protocol.Ledgers.proof)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DontHave::kTypeFieldNumber;
const int DontHave::kHashFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DontHave::DontHave()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.DontHave)
}

void DontHave::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

DontHave::DontHave(const DontHave& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.DontHave)
}

void DontHave::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_ = GOOGLE_LONGLONG(0);
  hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

DontHave::~DontHave() {
  // @@protoc_insertion_point(destructor:protocol.DontHave)
  SharedDtor();
}

void DontHave::SharedDtor() {
  hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void DontHave::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DontHave::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DontHave_descriptor_;
}

const DontHave& DontHave::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_overlay_2eproto();
  return *default_instance_;
}

DontHave* DontHave::default_instance_ = NULL;

DontHave* DontHave::New(::google::protobuf::Arena* arena) const {
  DontHave* n = new DontHave;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DontHave::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.DontHave)
  type_ = GOOGLE_LONGLONG(0);
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool DontHave::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.DontHave)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 type = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &type_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_hash;
        break;
      }

      // optional bytes hash = 2;
      case 2: {
        if (tag == 18) {
         parse_hash:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_hash()));
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
  // @@protoc_insertion_point(parse_success:protocol.DontHave)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.DontHave)
  return false;
#undef DO_
}

void DontHave::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.DontHave)
  // optional int64 type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->type(), output);
  }

  // optional bytes hash = 2;
  if (this->hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->hash(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.DontHave)
}

::google::protobuf::uint8* DontHave::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.DontHave)
  // optional int64 type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->type(), target);
  }

  // optional bytes hash = 2;
  if (this->hash().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->hash(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.DontHave)
  return target;
}

int DontHave::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.DontHave)
  int total_size = 0;

  // optional int64 type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->type());
  }

  // optional bytes hash = 2;
  if (this->hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->hash());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DontHave::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.DontHave)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const DontHave* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const DontHave>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.DontHave)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.DontHave)
    MergeFrom(*source);
  }
}

void DontHave::MergeFrom(const DontHave& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.DontHave)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.hash().size() > 0) {

    hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.hash_);
  }
}

void DontHave::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.DontHave)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DontHave::CopyFrom(const DontHave& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.DontHave)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DontHave::IsInitialized() const {

  return true;
}

void DontHave::Swap(DontHave* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DontHave::InternalSwap(DontHave* other) {
  std::swap(type_, other->type_);
  hash_.Swap(&other->hash_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata DontHave::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DontHave_descriptor_;
  metadata.reflection = DontHave_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// DontHave

// optional int64 type = 1;
void DontHave::clear_type() {
  type_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 DontHave::type() const {
  // @@protoc_insertion_point(field_get:protocol.DontHave.type)
  return type_;
}
 void DontHave::set_type(::google::protobuf::int64 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:protocol.DontHave.type)
}

// optional bytes hash = 2;
void DontHave::clear_hash() {
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& DontHave::hash() const {
  // @@protoc_insertion_point(field_get:protocol.DontHave.hash)
  return hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DontHave::set_hash(const ::std::string& value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.DontHave.hash)
}
 void DontHave::set_hash(const char* value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.DontHave.hash)
}
 void DontHave::set_hash(const void* value, size_t size) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.DontHave.hash)
}
 ::std::string* DontHave::mutable_hash() {
  
  // @@protoc_insertion_point(field_mutable:protocol.DontHave.hash)
  return hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* DontHave::release_hash() {
  // @@protoc_insertion_point(field_release:protocol.DontHave.hash)
  
  return hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DontHave::set_allocated_hash(::std::string* hash) {
  if (hash != NULL) {
    
  } else {
    
  }
  hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hash);
  // @@protoc_insertion_point(field_set_allocated:protocol.DontHave.hash)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LedgerUpgradeNotify::kNonceFieldNumber;
const int LedgerUpgradeNotify::kUpgradeFieldNumber;
const int LedgerUpgradeNotify::kSignatureFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LedgerUpgradeNotify::LedgerUpgradeNotify()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.LedgerUpgradeNotify)
}

void LedgerUpgradeNotify::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  upgrade_ = const_cast< ::protocol::LedgerUpgrade*>(&::protocol::LedgerUpgrade::default_instance());
  signature_ = const_cast< ::protocol::Signature*>(&::protocol::Signature::default_instance());
}

LedgerUpgradeNotify::LedgerUpgradeNotify(const LedgerUpgradeNotify& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.LedgerUpgradeNotify)
}

void LedgerUpgradeNotify::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  nonce_ = GOOGLE_LONGLONG(0);
  upgrade_ = NULL;
  signature_ = NULL;
}

LedgerUpgradeNotify::~LedgerUpgradeNotify() {
  // @@protoc_insertion_point(destructor:protocol.LedgerUpgradeNotify)
  SharedDtor();
}

void LedgerUpgradeNotify::SharedDtor() {
  if (this != default_instance_) {
    delete upgrade_;
    delete signature_;
  }
}

void LedgerUpgradeNotify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LedgerUpgradeNotify::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LedgerUpgradeNotify_descriptor_;
}

const LedgerUpgradeNotify& LedgerUpgradeNotify::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_overlay_2eproto();
  return *default_instance_;
}

LedgerUpgradeNotify* LedgerUpgradeNotify::default_instance_ = NULL;

LedgerUpgradeNotify* LedgerUpgradeNotify::New(::google::protobuf::Arena* arena) const {
  LedgerUpgradeNotify* n = new LedgerUpgradeNotify;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LedgerUpgradeNotify::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.LedgerUpgradeNotify)
  nonce_ = GOOGLE_LONGLONG(0);
  if (GetArenaNoVirtual() == NULL && upgrade_ != NULL) delete upgrade_;
  upgrade_ = NULL;
  if (GetArenaNoVirtual() == NULL && signature_ != NULL) delete signature_;
  signature_ = NULL;
}

bool LedgerUpgradeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.LedgerUpgradeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 nonce = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &nonce_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_upgrade;
        break;
      }

      // optional .protocol.LedgerUpgrade upgrade = 2;
      case 2: {
        if (tag == 18) {
         parse_upgrade:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_upgrade()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_signature;
        break;
      }

      // optional .protocol.Signature signature = 3;
      case 3: {
        if (tag == 26) {
         parse_signature:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_signature()));
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
  // @@protoc_insertion_point(parse_success:protocol.LedgerUpgradeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.LedgerUpgradeNotify)
  return false;
#undef DO_
}

void LedgerUpgradeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.LedgerUpgradeNotify)
  // optional int64 nonce = 1;
  if (this->nonce() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->nonce(), output);
  }

  // optional .protocol.LedgerUpgrade upgrade = 2;
  if (this->has_upgrade()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->upgrade_, output);
  }

  // optional .protocol.Signature signature = 3;
  if (this->has_signature()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->signature_, output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.LedgerUpgradeNotify)
}

::google::protobuf::uint8* LedgerUpgradeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.LedgerUpgradeNotify)
  // optional int64 nonce = 1;
  if (this->nonce() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->nonce(), target);
  }

  // optional .protocol.LedgerUpgrade upgrade = 2;
  if (this->has_upgrade()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->upgrade_, false, target);
  }

  // optional .protocol.Signature signature = 3;
  if (this->has_signature()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->signature_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.LedgerUpgradeNotify)
  return target;
}

int LedgerUpgradeNotify::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.LedgerUpgradeNotify)
  int total_size = 0;

  // optional int64 nonce = 1;
  if (this->nonce() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->nonce());
  }

  // optional .protocol.LedgerUpgrade upgrade = 2;
  if (this->has_upgrade()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->upgrade_);
  }

  // optional .protocol.Signature signature = 3;
  if (this->has_signature()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->signature_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LedgerUpgradeNotify::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.LedgerUpgradeNotify)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const LedgerUpgradeNotify* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const LedgerUpgradeNotify>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.LedgerUpgradeNotify)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.LedgerUpgradeNotify)
    MergeFrom(*source);
  }
}

void LedgerUpgradeNotify::MergeFrom(const LedgerUpgradeNotify& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.LedgerUpgradeNotify)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.nonce() != 0) {
    set_nonce(from.nonce());
  }
  if (from.has_upgrade()) {
    mutable_upgrade()->::protocol::LedgerUpgrade::MergeFrom(from.upgrade());
  }
  if (from.has_signature()) {
    mutable_signature()->::protocol::Signature::MergeFrom(from.signature());
  }
}

void LedgerUpgradeNotify::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.LedgerUpgradeNotify)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LedgerUpgradeNotify::CopyFrom(const LedgerUpgradeNotify& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.LedgerUpgradeNotify)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LedgerUpgradeNotify::IsInitialized() const {

  return true;
}

void LedgerUpgradeNotify::Swap(LedgerUpgradeNotify* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LedgerUpgradeNotify::InternalSwap(LedgerUpgradeNotify* other) {
  std::swap(nonce_, other->nonce_);
  std::swap(upgrade_, other->upgrade_);
  std::swap(signature_, other->signature_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LedgerUpgradeNotify::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LedgerUpgradeNotify_descriptor_;
  metadata.reflection = LedgerUpgradeNotify_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LedgerUpgradeNotify

// optional int64 nonce = 1;
void LedgerUpgradeNotify::clear_nonce() {
  nonce_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 LedgerUpgradeNotify::nonce() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerUpgradeNotify.nonce)
  return nonce_;
}
 void LedgerUpgradeNotify::set_nonce(::google::protobuf::int64 value) {
  
  nonce_ = value;
  // @@protoc_insertion_point(field_set:protocol.LedgerUpgradeNotify.nonce)
}

// optional .protocol.LedgerUpgrade upgrade = 2;
bool LedgerUpgradeNotify::has_upgrade() const {
  return !_is_default_instance_ && upgrade_ != NULL;
}
void LedgerUpgradeNotify::clear_upgrade() {
  if (GetArenaNoVirtual() == NULL && upgrade_ != NULL) delete upgrade_;
  upgrade_ = NULL;
}
const ::protocol::LedgerUpgrade& LedgerUpgradeNotify::upgrade() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerUpgradeNotify.upgrade)
  return upgrade_ != NULL ? *upgrade_ : *default_instance_->upgrade_;
}
::protocol::LedgerUpgrade* LedgerUpgradeNotify::mutable_upgrade() {
  
  if (upgrade_ == NULL) {
    upgrade_ = new ::protocol::LedgerUpgrade;
  }
  // @@protoc_insertion_point(field_mutable:protocol.LedgerUpgradeNotify.upgrade)
  return upgrade_;
}
::protocol::LedgerUpgrade* LedgerUpgradeNotify::release_upgrade() {
  // @@protoc_insertion_point(field_release:protocol.LedgerUpgradeNotify.upgrade)
  
  ::protocol::LedgerUpgrade* temp = upgrade_;
  upgrade_ = NULL;
  return temp;
}
void LedgerUpgradeNotify::set_allocated_upgrade(::protocol::LedgerUpgrade* upgrade) {
  delete upgrade_;
  upgrade_ = upgrade;
  if (upgrade) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.LedgerUpgradeNotify.upgrade)
}

// optional .protocol.Signature signature = 3;
bool LedgerUpgradeNotify::has_signature() const {
  return !_is_default_instance_ && signature_ != NULL;
}
void LedgerUpgradeNotify::clear_signature() {
  if (GetArenaNoVirtual() == NULL && signature_ != NULL) delete signature_;
  signature_ = NULL;
}
const ::protocol::Signature& LedgerUpgradeNotify::signature() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerUpgradeNotify.signature)
  return signature_ != NULL ? *signature_ : *default_instance_->signature_;
}
::protocol::Signature* LedgerUpgradeNotify::mutable_signature() {
  
  if (signature_ == NULL) {
    signature_ = new ::protocol::Signature;
  }
  // @@protoc_insertion_point(field_mutable:protocol.LedgerUpgradeNotify.signature)
  return signature_;
}
::protocol::Signature* LedgerUpgradeNotify::release_signature() {
  // @@protoc_insertion_point(field_release:protocol.LedgerUpgradeNotify.signature)
  
  ::protocol::Signature* temp = signature_;
  signature_ = NULL;
  return temp;
}
void LedgerUpgradeNotify::set_allocated_signature(::protocol::Signature* signature) {
  delete signature_;
  signature_ = signature;
  if (signature) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.LedgerUpgradeNotify.signature)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EntryList::kEntryFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EntryList::EntryList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.EntryList)
}

void EntryList::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

EntryList::EntryList(const EntryList& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.EntryList)
}

void EntryList::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
}

EntryList::~EntryList() {
  // @@protoc_insertion_point(destructor:protocol.EntryList)
  SharedDtor();
}

void EntryList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void EntryList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EntryList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EntryList_descriptor_;
}

const EntryList& EntryList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_overlay_2eproto();
  return *default_instance_;
}

EntryList* EntryList::default_instance_ = NULL;

EntryList* EntryList::New(::google::protobuf::Arena* arena) const {
  EntryList* n = new EntryList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EntryList::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.EntryList)
  entry_.Clear();
}

bool EntryList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.EntryList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated bytes entry = 1;
      case 1: {
        if (tag == 10) {
         parse_entry:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_entry()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_entry;
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
  // @@protoc_insertion_point(parse_success:protocol.EntryList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.EntryList)
  return false;
#undef DO_
}

void EntryList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.EntryList)
  // repeated bytes entry = 1;
  for (int i = 0; i < this->entry_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->entry(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.EntryList)
}

::google::protobuf::uint8* EntryList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.EntryList)
  // repeated bytes entry = 1;
  for (int i = 0; i < this->entry_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(1, this->entry(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.EntryList)
  return target;
}

int EntryList::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.EntryList)
  int total_size = 0;

  // repeated bytes entry = 1;
  total_size += 1 * this->entry_size();
  for (int i = 0; i < this->entry_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->entry(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EntryList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.EntryList)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const EntryList* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const EntryList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.EntryList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.EntryList)
    MergeFrom(*source);
  }
}

void EntryList::MergeFrom(const EntryList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.EntryList)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  entry_.MergeFrom(from.entry_);
}

void EntryList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.EntryList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EntryList::CopyFrom(const EntryList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.EntryList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntryList::IsInitialized() const {

  return true;
}

void EntryList::Swap(EntryList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EntryList::InternalSwap(EntryList* other) {
  entry_.UnsafeArenaSwap(&other->entry_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata EntryList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EntryList_descriptor_;
  metadata.reflection = EntryList_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EntryList

// repeated bytes entry = 1;
int EntryList::entry_size() const {
  return entry_.size();
}
void EntryList::clear_entry() {
  entry_.Clear();
}
 const ::std::string& EntryList::entry(int index) const {
  // @@protoc_insertion_point(field_get:protocol.EntryList.entry)
  return entry_.Get(index);
}
 ::std::string* EntryList::mutable_entry(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.EntryList.entry)
  return entry_.Mutable(index);
}
 void EntryList::set_entry(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:protocol.EntryList.entry)
  entry_.Mutable(index)->assign(value);
}
 void EntryList::set_entry(int index, const char* value) {
  entry_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:protocol.EntryList.entry)
}
 void EntryList::set_entry(int index, const void* value, size_t size) {
  entry_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protocol.EntryList.entry)
}
 ::std::string* EntryList::add_entry() {
  // @@protoc_insertion_point(field_add_mutable:protocol.EntryList.entry)
  return entry_.Add();
}
 void EntryList::add_entry(const ::std::string& value) {
  entry_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:protocol.EntryList.entry)
}
 void EntryList::add_entry(const char* value) {
  entry_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:protocol.EntryList.entry)
}
 void EntryList::add_entry(const void* value, size_t size) {
  entry_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:protocol.EntryList.entry)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
EntryList::entry() const {
  // @@protoc_insertion_point(field_list:protocol.EntryList.entry)
  return entry_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
EntryList::mutable_entry() {
  // @@protoc_insertion_point(field_mutable_list:protocol.EntryList.entry)
  return &entry_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChainHello::kApiListFieldNumber;
const int ChainHello::kTimestampFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChainHello::ChainHello()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.ChainHello)
}

void ChainHello::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ChainHello::ChainHello(const ChainHello& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.ChainHello)
}

void ChainHello::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  timestamp_ = GOOGLE_LONGLONG(0);
}

ChainHello::~ChainHello() {
  // @@protoc_insertion_point(destructor:protocol.ChainHello)
  SharedDtor();
}

void ChainHello::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ChainHello::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ChainHello::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ChainHello_descriptor_;
}

const ChainHello& ChainHello::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_overlay_2eproto();
  return *default_instance_;
}

ChainHello* ChainHello::default_instance_ = NULL;

ChainHello* ChainHello::New(::google::protobuf::Arena* arena) const {
  ChainHello* n = new ChainHello;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ChainHello::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.ChainHello)
  timestamp_ = GOOGLE_LONGLONG(0);
  api_list_.Clear();
}

bool ChainHello::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.ChainHello)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .protocol.ChainMessageType api_list = 1;
      case 1: {
        if (tag == 10) {
          ::google::protobuf::uint32 length;
          DO_(input->ReadVarint32(&length));
          ::google::protobuf::io::CodedInputStream::Limit limit = input->PushLimit(length);
          while (input->BytesUntilLimit() > 0) {
            int value;
            DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
            add_api_list(static_cast< ::protocol::ChainMessageType >(value));
          }
          input->PopLimit(limit);
        } else if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          add_api_list(static_cast< ::protocol::ChainMessageType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_timestamp;
        break;
      }

      // optional int64 timestamp = 2;
      case 2: {
        if (tag == 16) {
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
  // @@protoc_insertion_point(parse_success:protocol.ChainHello)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.ChainHello)
  return false;
#undef DO_
}

void ChainHello::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.ChainHello)
  // repeated .protocol.ChainMessageType api_list = 1;
  if (this->api_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      output);
    output->WriteVarint32(_api_list_cached_byte_size_);
  }
  for (int i = 0; i < this->api_list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteEnumNoTag(
      this->api_list(i), output);
  }

  // optional int64 timestamp = 2;
  if (this->timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->timestamp(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.ChainHello)
}

::google::protobuf::uint8* ChainHello::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.ChainHello)
  // repeated .protocol.ChainMessageType api_list = 1;
  if (this->api_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(    _api_list_cached_byte_size_, target);
  }
  for (int i = 0; i < this->api_list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumNoTagToArray(
      this->api_list(i), target);
  }

  // optional int64 timestamp = 2;
  if (this->timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->timestamp(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.ChainHello)
  return target;
}

int ChainHello::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.ChainHello)
  int total_size = 0;

  // optional int64 timestamp = 2;
  if (this->timestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->timestamp());
  }

  // repeated .protocol.ChainMessageType api_list = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->api_list_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::EnumSize(
        this->api_list(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _api_list_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ChainHello::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.ChainHello)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ChainHello* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ChainHello>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.ChainHello)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.ChainHello)
    MergeFrom(*source);
  }
}

void ChainHello::MergeFrom(const ChainHello& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.ChainHello)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  api_list_.MergeFrom(from.api_list_);
  if (from.timestamp() != 0) {
    set_timestamp(from.timestamp());
  }
}

void ChainHello::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.ChainHello)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChainHello::CopyFrom(const ChainHello& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.ChainHello)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChainHello::IsInitialized() const {

  return true;
}

void ChainHello::Swap(ChainHello* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChainHello::InternalSwap(ChainHello* other) {
  api_list_.UnsafeArenaSwap(&other->api_list_);
  std::swap(timestamp_, other->timestamp_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ChainHello::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ChainHello_descriptor_;
  metadata.reflection = ChainHello_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ChainHello

// repeated .protocol.ChainMessageType api_list = 1;
int ChainHello::api_list_size() const {
  return api_list_.size();
}
void ChainHello::clear_api_list() {
  api_list_.Clear();
}
 ::protocol::ChainMessageType ChainHello::api_list(int index) const {
  // @@protoc_insertion_point(field_get:protocol.ChainHello.api_list)
  return static_cast< ::protocol::ChainMessageType >(api_list_.Get(index));
}
 void ChainHello::set_api_list(int index, ::protocol::ChainMessageType value) {
  api_list_.Set(index, value);
  // @@protoc_insertion_point(field_set:protocol.ChainHello.api_list)
}
 void ChainHello::add_api_list(::protocol::ChainMessageType value) {
  api_list_.Add(value);
  // @@protoc_insertion_point(field_add:protocol.ChainHello.api_list)
}
 const ::google::protobuf::RepeatedField<int>&
ChainHello::api_list() const {
  // @@protoc_insertion_point(field_list:protocol.ChainHello.api_list)
  return api_list_;
}
 ::google::protobuf::RepeatedField<int>*
ChainHello::mutable_api_list() {
  // @@protoc_insertion_point(field_mutable_list:protocol.ChainHello.api_list)
  return &api_list_;
}

// optional int64 timestamp = 2;
void ChainHello::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 ChainHello::timestamp() const {
  // @@protoc_insertion_point(field_get:protocol.ChainHello.timestamp)
  return timestamp_;
}
 void ChainHello::set_timestamp(::google::protobuf::int64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:protocol.ChainHello.timestamp)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChainStatus::kSelfAddrFieldNumber;
const int ChainStatus::kLedgerVersionFieldNumber;
const int ChainStatus::kMonitorVersionFieldNumber;
const int ChainStatus::kRexxVersionFieldNumber;
const int ChainStatus::kTimestampFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChainStatus::ChainStatus()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.ChainStatus)
}

void ChainStatus::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ChainStatus::ChainStatus(const ChainStatus& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.ChainStatus)
}

void ChainStatus::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  self_addr_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ledger_version_ = GOOGLE_LONGLONG(0);
  monitor_version_ = GOOGLE_LONGLONG(0);
  rexx_version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  timestamp_ = GOOGLE_LONGLONG(0);
}

ChainStatus::~ChainStatus() {
  // @@protoc_insertion_point(destructor:protocol.ChainStatus)
  SharedDtor();
}

void ChainStatus::SharedDtor() {
  self_addr_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  rexx_version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void ChainStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ChainStatus::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ChainStatus_descriptor_;
}

const ChainStatus& ChainStatus::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_overlay_2eproto();
  return *default_instance_;
}

ChainStatus* ChainStatus::default_instance_ = NULL;

ChainStatus* ChainStatus::New(::google::protobuf::Arena* arena) const {
  ChainStatus* n = new ChainStatus;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ChainStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.ChainStatus)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(ChainStatus, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<ChainStatus*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(ledger_version_, monitor_version_);
  self_addr_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  rexx_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  timestamp_ = GOOGLE_LONGLONG(0);

#undef ZR_HELPER_
#undef ZR_

}

bool ChainStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.ChainStatus)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string self_addr = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_self_addr()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->self_addr().data(), this->self_addr().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.ChainStatus.self_addr"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_ledger_version;
        break;
      }

      // optional int64 ledger_version = 2;
      case 2: {
        if (tag == 16) {
         parse_ledger_version:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &ledger_version_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_monitor_version;
        break;
      }

      // optional int64 monitor_version = 3;
      case 3: {
        if (tag == 24) {
         parse_monitor_version:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &monitor_version_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_rexx_version;
        break;
      }

      // optional string rexx_version = 4;
      case 4: {
        if (tag == 34) {
         parse_rexx_version:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_rexx_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->rexx_version().data(), this->rexx_version().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.ChainStatus.rexx_version"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_timestamp;
        break;
      }

      // optional int64 timestamp = 5;
      case 5: {
        if (tag == 40) {
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
  // @@protoc_insertion_point(parse_success:protocol.ChainStatus)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.ChainStatus)
  return false;
#undef DO_
}

void ChainStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.ChainStatus)
  // optional string self_addr = 1;
  if (this->self_addr().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->self_addr().data(), this->self_addr().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainStatus.self_addr");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->self_addr(), output);
  }

  // optional int64 ledger_version = 2;
  if (this->ledger_version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->ledger_version(), output);
  }

  // optional int64 monitor_version = 3;
  if (this->monitor_version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->monitor_version(), output);
  }

  // optional string rexx_version = 4;
  if (this->rexx_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->rexx_version().data(), this->rexx_version().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainStatus.rexx_version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->rexx_version(), output);
  }

  // optional int64 timestamp = 5;
  if (this->timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->timestamp(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.ChainStatus)
}

::google::protobuf::uint8* ChainStatus::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.ChainStatus)
  // optional string self_addr = 1;
  if (this->self_addr().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->self_addr().data(), this->self_addr().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainStatus.self_addr");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->self_addr(), target);
  }

  // optional int64 ledger_version = 2;
  if (this->ledger_version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->ledger_version(), target);
  }

  // optional int64 monitor_version = 3;
  if (this->monitor_version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->monitor_version(), target);
  }

  // optional string rexx_version = 4;
  if (this->rexx_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->rexx_version().data(), this->rexx_version().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainStatus.rexx_version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->rexx_version(), target);
  }

  // optional int64 timestamp = 5;
  if (this->timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->timestamp(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.ChainStatus)
  return target;
}

int ChainStatus::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.ChainStatus)
  int total_size = 0;

  // optional string self_addr = 1;
  if (this->self_addr().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->self_addr());
  }

  // optional int64 ledger_version = 2;
  if (this->ledger_version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->ledger_version());
  }

  // optional int64 monitor_version = 3;
  if (this->monitor_version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->monitor_version());
  }

  // optional string rexx_version = 4;
  if (this->rexx_version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->rexx_version());
  }

  // optional int64 timestamp = 5;
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

void ChainStatus::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.ChainStatus)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ChainStatus* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ChainStatus>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.ChainStatus)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.ChainStatus)
    MergeFrom(*source);
  }
}

void ChainStatus::MergeFrom(const ChainStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.ChainStatus)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.self_addr().size() > 0) {

    self_addr_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.self_addr_);
  }
  if (from.ledger_version() != 0) {
    set_ledger_version(from.ledger_version());
  }
  if (from.monitor_version() != 0) {
    set_monitor_version(from.monitor_version());
  }
  if (from.rexx_version().size() > 0) {

    rexx_version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.rexx_version_);
  }
  if (from.timestamp() != 0) {
    set_timestamp(from.timestamp());
  }
}

void ChainStatus::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.ChainStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChainStatus::CopyFrom(const ChainStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.ChainStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChainStatus::IsInitialized() const {

  return true;
}

void ChainStatus::Swap(ChainStatus* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChainStatus::InternalSwap(ChainStatus* other) {
  self_addr_.Swap(&other->self_addr_);
  std::swap(ledger_version_, other->ledger_version_);
  std::swap(monitor_version_, other->monitor_version_);
  rexx_version_.Swap(&other->rexx_version_);
  std::swap(timestamp_, other->timestamp_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ChainStatus::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ChainStatus_descriptor_;
  metadata.reflection = ChainStatus_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ChainStatus

// optional string self_addr = 1;
void ChainStatus::clear_self_addr() {
  self_addr_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ChainStatus::self_addr() const {
  // @@protoc_insertion_point(field_get:protocol.ChainStatus.self_addr)
  return self_addr_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainStatus::set_self_addr(const ::std::string& value) {
  
  self_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.ChainStatus.self_addr)
}
 void ChainStatus::set_self_addr(const char* value) {
  
  self_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.ChainStatus.self_addr)
}
 void ChainStatus::set_self_addr(const char* value, size_t size) {
  
  self_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.ChainStatus.self_addr)
}
 ::std::string* ChainStatus::mutable_self_addr() {
  
  // @@protoc_insertion_point(field_mutable:protocol.ChainStatus.self_addr)
  return self_addr_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ChainStatus::release_self_addr() {
  // @@protoc_insertion_point(field_release:protocol.ChainStatus.self_addr)
  
  return self_addr_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainStatus::set_allocated_self_addr(::std::string* self_addr) {
  if (self_addr != NULL) {
    
  } else {
    
  }
  self_addr_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), self_addr);
  // @@protoc_insertion_point(field_set_allocated:protocol.ChainStatus.self_addr)
}

// optional int64 ledger_version = 2;
void ChainStatus::clear_ledger_version() {
  ledger_version_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 ChainStatus::ledger_version() const {
  // @@protoc_insertion_point(field_get:protocol.ChainStatus.ledger_version)
  return ledger_version_;
}
 void ChainStatus::set_ledger_version(::google::protobuf::int64 value) {
  
  ledger_version_ = value;
  // @@protoc_insertion_point(field_set:protocol.ChainStatus.ledger_version)
}

// optional int64 monitor_version = 3;
void ChainStatus::clear_monitor_version() {
  monitor_version_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 ChainStatus::monitor_version() const {
  // @@protoc_insertion_point(field_get:protocol.ChainStatus.monitor_version)
  return monitor_version_;
}
 void ChainStatus::set_monitor_version(::google::protobuf::int64 value) {
  
  monitor_version_ = value;
  // @@protoc_insertion_point(field_set:protocol.ChainStatus.monitor_version)
}

// optional string rexx_version = 4;
void ChainStatus::clear_rexx_version() {
  rexx_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ChainStatus::rexx_version() const {
  // @@protoc_insertion_point(field_get:protocol.ChainStatus.rexx_version)
  return rexx_version_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainStatus::set_rexx_version(const ::std::string& value) {
  
  rexx_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.ChainStatus.rexx_version)
}
 void ChainStatus::set_rexx_version(const char* value) {
  
  rexx_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.ChainStatus.rexx_version)
}
 void ChainStatus::set_rexx_version(const char* value, size_t size) {
  
  rexx_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.ChainStatus.rexx_version)
}
 ::std::string* ChainStatus::mutable_rexx_version() {
  
  // @@protoc_insertion_point(field_mutable:protocol.ChainStatus.rexx_version)
  return rexx_version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ChainStatus::release_rexx_version() {
  // @@protoc_insertion_point(field_release:protocol.ChainStatus.rexx_version)
  
  return rexx_version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainStatus::set_allocated_rexx_version(::std::string* rexx_version) {
  if (rexx_version != NULL) {
    
  } else {
    
  }
  rexx_version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), rexx_version);
  // @@protoc_insertion_point(field_set_allocated:protocol.ChainStatus.rexx_version)
}

// optional int64 timestamp = 5;
void ChainStatus::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 ChainStatus::timestamp() const {
  // @@protoc_insertion_point(field_get:protocol.ChainStatus.timestamp)
  return timestamp_;
}
 void ChainStatus::set_timestamp(::google::protobuf::int64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:protocol.ChainStatus.timestamp)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChainPeerMessage::kSrcPeerAddrFieldNumber;
const int ChainPeerMessage::kDesPeerAddrsFieldNumber;
const int ChainPeerMessage::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChainPeerMessage::ChainPeerMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.ChainPeerMessage)
}

void ChainPeerMessage::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ChainPeerMessage::ChainPeerMessage(const ChainPeerMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.ChainPeerMessage)
}

void ChainPeerMessage::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  src_peer_addr_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ChainPeerMessage::~ChainPeerMessage() {
  // @@protoc_insertion_point(destructor:protocol.ChainPeerMessage)
  SharedDtor();
}

void ChainPeerMessage::SharedDtor() {
  src_peer_addr_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void ChainPeerMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ChainPeerMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ChainPeerMessage_descriptor_;
}

const ChainPeerMessage& ChainPeerMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_overlay_2eproto();
  return *default_instance_;
}

ChainPeerMessage* ChainPeerMessage::default_instance_ = NULL;

ChainPeerMessage* ChainPeerMessage::New(::google::protobuf::Arena* arena) const {
  ChainPeerMessage* n = new ChainPeerMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ChainPeerMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.ChainPeerMessage)
  src_peer_addr_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  des_peer_addrs_.Clear();
}

bool ChainPeerMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.ChainPeerMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string src_peer_addr = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_src_peer_addr()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->src_peer_addr().data(), this->src_peer_addr().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.ChainPeerMessage.src_peer_addr"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_des_peer_addrs;
        break;
      }

      // repeated string des_peer_addrs = 2;
      case 2: {
        if (tag == 18) {
         parse_des_peer_addrs:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_des_peer_addrs()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->des_peer_addrs(this->des_peer_addrs_size() - 1).data(),
            this->des_peer_addrs(this->des_peer_addrs_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.ChainPeerMessage.des_peer_addrs"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_des_peer_addrs;
        if (input->ExpectTag(26)) goto parse_data;
        break;
      }

      // optional bytes data = 3;
      case 3: {
        if (tag == 26) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
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
  // @@protoc_insertion_point(parse_success:protocol.ChainPeerMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.ChainPeerMessage)
  return false;
#undef DO_
}

void ChainPeerMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.ChainPeerMessage)
  // optional string src_peer_addr = 1;
  if (this->src_peer_addr().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->src_peer_addr().data(), this->src_peer_addr().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainPeerMessage.src_peer_addr");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->src_peer_addr(), output);
  }

  // repeated string des_peer_addrs = 2;
  for (int i = 0; i < this->des_peer_addrs_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->des_peer_addrs(i).data(), this->des_peer_addrs(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainPeerMessage.des_peer_addrs");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->des_peer_addrs(i), output);
  }

  // optional bytes data = 3;
  if (this->data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->data(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.ChainPeerMessage)
}

::google::protobuf::uint8* ChainPeerMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.ChainPeerMessage)
  // optional string src_peer_addr = 1;
  if (this->src_peer_addr().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->src_peer_addr().data(), this->src_peer_addr().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainPeerMessage.src_peer_addr");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->src_peer_addr(), target);
  }

  // repeated string des_peer_addrs = 2;
  for (int i = 0; i < this->des_peer_addrs_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->des_peer_addrs(i).data(), this->des_peer_addrs(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainPeerMessage.des_peer_addrs");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->des_peer_addrs(i), target);
  }

  // optional bytes data = 3;
  if (this->data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->data(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.ChainPeerMessage)
  return target;
}

int ChainPeerMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.ChainPeerMessage)
  int total_size = 0;

  // optional string src_peer_addr = 1;
  if (this->src_peer_addr().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->src_peer_addr());
  }

  // optional bytes data = 3;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->data());
  }

  // repeated string des_peer_addrs = 2;
  total_size += 1 * this->des_peer_addrs_size();
  for (int i = 0; i < this->des_peer_addrs_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->des_peer_addrs(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ChainPeerMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.ChainPeerMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ChainPeerMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ChainPeerMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.ChainPeerMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.ChainPeerMessage)
    MergeFrom(*source);
  }
}

void ChainPeerMessage::MergeFrom(const ChainPeerMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.ChainPeerMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  des_peer_addrs_.MergeFrom(from.des_peer_addrs_);
  if (from.src_peer_addr().size() > 0) {

    src_peer_addr_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.src_peer_addr_);
  }
  if (from.data().size() > 0) {

    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
}

void ChainPeerMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.ChainPeerMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChainPeerMessage::CopyFrom(const ChainPeerMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.ChainPeerMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChainPeerMessage::IsInitialized() const {

  return true;
}

void ChainPeerMessage::Swap(ChainPeerMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChainPeerMessage::InternalSwap(ChainPeerMessage* other) {
  src_peer_addr_.Swap(&other->src_peer_addr_);
  des_peer_addrs_.UnsafeArenaSwap(&other->des_peer_addrs_);
  data_.Swap(&other->data_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ChainPeerMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ChainPeerMessage_descriptor_;
  metadata.reflection = ChainPeerMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ChainPeerMessage

// optional string src_peer_addr = 1;
void ChainPeerMessage::clear_src_peer_addr() {
  src_peer_addr_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ChainPeerMessage::src_peer_addr() const {
  // @@protoc_insertion_point(field_get:protocol.ChainPeerMessage.src_peer_addr)
  return src_peer_addr_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainPeerMessage::set_src_peer_addr(const ::std::string& value) {
  
  src_peer_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.ChainPeerMessage.src_peer_addr)
}
 void ChainPeerMessage::set_src_peer_addr(const char* value) {
  
  src_peer_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.ChainPeerMessage.src_peer_addr)
}
 void ChainPeerMessage::set_src_peer_addr(const char* value, size_t size) {
  
  src_peer_addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.ChainPeerMessage.src_peer_addr)
}
 ::std::string* ChainPeerMessage::mutable_src_peer_addr() {
  
  // @@protoc_insertion_point(field_mutable:protocol.ChainPeerMessage.src_peer_addr)
  return src_peer_addr_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ChainPeerMessage::release_src_peer_addr() {
  // @@protoc_insertion_point(field_release:protocol.ChainPeerMessage.src_peer_addr)
  
  return src_peer_addr_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainPeerMessage::set_allocated_src_peer_addr(::std::string* src_peer_addr) {
  if (src_peer_addr != NULL) {
    
  } else {
    
  }
  src_peer_addr_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), src_peer_addr);
  // @@protoc_insertion_point(field_set_allocated:protocol.ChainPeerMessage.src_peer_addr)
}

// repeated string des_peer_addrs = 2;
int ChainPeerMessage::des_peer_addrs_size() const {
  return des_peer_addrs_.size();
}
void ChainPeerMessage::clear_des_peer_addrs() {
  des_peer_addrs_.Clear();
}
 const ::std::string& ChainPeerMessage::des_peer_addrs(int index) const {
  // @@protoc_insertion_point(field_get:protocol.ChainPeerMessage.des_peer_addrs)
  return des_peer_addrs_.Get(index);
}
 ::std::string* ChainPeerMessage::mutable_des_peer_addrs(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.ChainPeerMessage.des_peer_addrs)
  return des_peer_addrs_.Mutable(index);
}
 void ChainPeerMessage::set_des_peer_addrs(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:protocol.ChainPeerMessage.des_peer_addrs)
  des_peer_addrs_.Mutable(index)->assign(value);
}
 void ChainPeerMessage::set_des_peer_addrs(int index, const char* value) {
  des_peer_addrs_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:protocol.ChainPeerMessage.des_peer_addrs)
}
 void ChainPeerMessage::set_des_peer_addrs(int index, const char* value, size_t size) {
  des_peer_addrs_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protocol.ChainPeerMessage.des_peer_addrs)
}
 ::std::string* ChainPeerMessage::add_des_peer_addrs() {
  // @@protoc_insertion_point(field_add_mutable:protocol.ChainPeerMessage.des_peer_addrs)
  return des_peer_addrs_.Add();
}
 void ChainPeerMessage::add_des_peer_addrs(const ::std::string& value) {
  des_peer_addrs_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:protocol.ChainPeerMessage.des_peer_addrs)
}
 void ChainPeerMessage::add_des_peer_addrs(const char* value) {
  des_peer_addrs_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:protocol.ChainPeerMessage.des_peer_addrs)
}
 void ChainPeerMessage::add_des_peer_addrs(const char* value, size_t size) {
  des_peer_addrs_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:protocol.ChainPeerMessage.des_peer_addrs)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
ChainPeerMessage::des_peer_addrs() const {
  // @@protoc_insertion_point(field_list:protocol.ChainPeerMessage.des_peer_addrs)
  return des_peer_addrs_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
ChainPeerMessage::mutable_des_peer_addrs() {
  // @@protoc_insertion_point(field_mutable_list:protocol.ChainPeerMessage.des_peer_addrs)
  return &des_peer_addrs_;
}

// optional bytes data = 3;
void ChainPeerMessage::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ChainPeerMessage::data() const {
  // @@protoc_insertion_point(field_get:protocol.ChainPeerMessage.data)
  return data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainPeerMessage::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.ChainPeerMessage.data)
}
 void ChainPeerMessage::set_data(const char* value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.ChainPeerMessage.data)
}
 void ChainPeerMessage::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.ChainPeerMessage.data)
}
 ::std::string* ChainPeerMessage::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:protocol.ChainPeerMessage.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ChainPeerMessage::release_data() {
  // @@protoc_insertion_point(field_release:protocol.ChainPeerMessage.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainPeerMessage::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:protocol.ChainPeerMessage.data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChainSubscribeTx::kAddressFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChainSubscribeTx::ChainSubscribeTx()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.ChainSubscribeTx)
}

void ChainSubscribeTx::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ChainSubscribeTx::ChainSubscribeTx(const ChainSubscribeTx& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.ChainSubscribeTx)
}

void ChainSubscribeTx::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
}

ChainSubscribeTx::~ChainSubscribeTx() {
  // @@protoc_insertion_point(destructor:protocol.ChainSubscribeTx)
  SharedDtor();
}

void ChainSubscribeTx::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ChainSubscribeTx::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ChainSubscribeTx::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ChainSubscribeTx_descriptor_;
}

const ChainSubscribeTx& ChainSubscribeTx::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_overlay_2eproto();
  return *default_instance_;
}

ChainSubscribeTx* ChainSubscribeTx::default_instance_ = NULL;

ChainSubscribeTx* ChainSubscribeTx::New(::google::protobuf::Arena* arena) const {
  ChainSubscribeTx* n = new ChainSubscribeTx;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ChainSubscribeTx::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.ChainSubscribeTx)
  address_.Clear();
}

bool ChainSubscribeTx::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.ChainSubscribeTx)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string address = 1;
      case 1: {
        if (tag == 10) {
         parse_address:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->address(this->address_size() - 1).data(),
            this->address(this->address_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.ChainSubscribeTx.address"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_address;
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
  // @@protoc_insertion_point(parse_success:protocol.ChainSubscribeTx)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.ChainSubscribeTx)
  return false;
#undef DO_
}

void ChainSubscribeTx::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.ChainSubscribeTx)
  // repeated string address = 1;
  for (int i = 0; i < this->address_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->address(i).data(), this->address(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainSubscribeTx.address");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->address(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.ChainSubscribeTx)
}

::google::protobuf::uint8* ChainSubscribeTx::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.ChainSubscribeTx)
  // repeated string address = 1;
  for (int i = 0; i < this->address_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->address(i).data(), this->address(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainSubscribeTx.address");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->address(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.ChainSubscribeTx)
  return target;
}

int ChainSubscribeTx::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.ChainSubscribeTx)
  int total_size = 0;

  // repeated string address = 1;
  total_size += 1 * this->address_size();
  for (int i = 0; i < this->address_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->address(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ChainSubscribeTx::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.ChainSubscribeTx)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ChainSubscribeTx* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ChainSubscribeTx>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.ChainSubscribeTx)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.ChainSubscribeTx)
    MergeFrom(*source);
  }
}

void ChainSubscribeTx::MergeFrom(const ChainSubscribeTx& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.ChainSubscribeTx)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  address_.MergeFrom(from.address_);
}

void ChainSubscribeTx::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.ChainSubscribeTx)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChainSubscribeTx::CopyFrom(const ChainSubscribeTx& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.ChainSubscribeTx)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChainSubscribeTx::IsInitialized() const {

  return true;
}

void ChainSubscribeTx::Swap(ChainSubscribeTx* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChainSubscribeTx::InternalSwap(ChainSubscribeTx* other) {
  address_.UnsafeArenaSwap(&other->address_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ChainSubscribeTx::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ChainSubscribeTx_descriptor_;
  metadata.reflection = ChainSubscribeTx_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ChainSubscribeTx

// repeated string address = 1;
int ChainSubscribeTx::address_size() const {
  return address_.size();
}
void ChainSubscribeTx::clear_address() {
  address_.Clear();
}
 const ::std::string& ChainSubscribeTx::address(int index) const {
  // @@protoc_insertion_point(field_get:protocol.ChainSubscribeTx.address)
  return address_.Get(index);
}
 ::std::string* ChainSubscribeTx::mutable_address(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.ChainSubscribeTx.address)
  return address_.Mutable(index);
}
 void ChainSubscribeTx::set_address(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:protocol.ChainSubscribeTx.address)
  address_.Mutable(index)->assign(value);
}
 void ChainSubscribeTx::set_address(int index, const char* value) {
  address_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:protocol.ChainSubscribeTx.address)
}
 void ChainSubscribeTx::set_address(int index, const char* value, size_t size) {
  address_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protocol.ChainSubscribeTx.address)
}
 ::std::string* ChainSubscribeTx::add_address() {
  // @@protoc_insertion_point(field_add_mutable:protocol.ChainSubscribeTx.address)
  return address_.Add();
}
 void ChainSubscribeTx::add_address(const ::std::string& value) {
  address_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:protocol.ChainSubscribeTx.address)
}
 void ChainSubscribeTx::add_address(const char* value) {
  address_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:protocol.ChainSubscribeTx.address)
}
 void ChainSubscribeTx::add_address(const char* value, size_t size) {
  address_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:protocol.ChainSubscribeTx.address)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
ChainSubscribeTx::address() const {
  // @@protoc_insertion_point(field_list:protocol.ChainSubscribeTx.address)
  return address_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
ChainSubscribeTx::mutable_address() {
  // @@protoc_insertion_point(field_mutable_list:protocol.ChainSubscribeTx.address)
  return &address_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChainResponse::kErrorCodeFieldNumber;
const int ChainResponse::kErrorDescFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChainResponse::ChainResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.ChainResponse)
}

void ChainResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ChainResponse::ChainResponse(const ChainResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.ChainResponse)
}

void ChainResponse::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  error_code_ = 0;
  error_desc_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ChainResponse::~ChainResponse() {
  // @@protoc_insertion_point(destructor:protocol.ChainResponse)
  SharedDtor();
}

void ChainResponse::SharedDtor() {
  error_desc_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void ChainResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ChainResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ChainResponse_descriptor_;
}

const ChainResponse& ChainResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_overlay_2eproto();
  return *default_instance_;
}

ChainResponse* ChainResponse::default_instance_ = NULL;

ChainResponse* ChainResponse::New(::google::protobuf::Arena* arena) const {
  ChainResponse* n = new ChainResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ChainResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.ChainResponse)
  error_code_ = 0;
  error_desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ChainResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.ChainResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 error_code = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &error_code_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_error_desc;
        break;
      }

      // optional string error_desc = 2;
      case 2: {
        if (tag == 18) {
         parse_error_desc:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_error_desc()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->error_desc().data(), this->error_desc().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.ChainResponse.error_desc"));
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
  // @@protoc_insertion_point(parse_success:protocol.ChainResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.ChainResponse)
  return false;
#undef DO_
}

void ChainResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.ChainResponse)
  // optional int32 error_code = 1;
  if (this->error_code() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->error_code(), output);
  }

  // optional string error_desc = 2;
  if (this->error_desc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->error_desc().data(), this->error_desc().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainResponse.error_desc");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->error_desc(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.ChainResponse)
}

::google::protobuf::uint8* ChainResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.ChainResponse)
  // optional int32 error_code = 1;
  if (this->error_code() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->error_code(), target);
  }

  // optional string error_desc = 2;
  if (this->error_desc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->error_desc().data(), this->error_desc().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainResponse.error_desc");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->error_desc(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.ChainResponse)
  return target;
}

int ChainResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.ChainResponse)
  int total_size = 0;

  // optional int32 error_code = 1;
  if (this->error_code() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->error_code());
  }

  // optional string error_desc = 2;
  if (this->error_desc().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->error_desc());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ChainResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.ChainResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ChainResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ChainResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.ChainResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.ChainResponse)
    MergeFrom(*source);
  }
}

void ChainResponse::MergeFrom(const ChainResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.ChainResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.error_code() != 0) {
    set_error_code(from.error_code());
  }
  if (from.error_desc().size() > 0) {

    error_desc_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.error_desc_);
  }
}

void ChainResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.ChainResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChainResponse::CopyFrom(const ChainResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.ChainResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChainResponse::IsInitialized() const {

  return true;
}

void ChainResponse::Swap(ChainResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChainResponse::InternalSwap(ChainResponse* other) {
  std::swap(error_code_, other->error_code_);
  error_desc_.Swap(&other->error_desc_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ChainResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ChainResponse_descriptor_;
  metadata.reflection = ChainResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ChainResponse

// optional int32 error_code = 1;
void ChainResponse::clear_error_code() {
  error_code_ = 0;
}
 ::google::protobuf::int32 ChainResponse::error_code() const {
  // @@protoc_insertion_point(field_get:protocol.ChainResponse.error_code)
  return error_code_;
}
 void ChainResponse::set_error_code(::google::protobuf::int32 value) {
  
  error_code_ = value;
  // @@protoc_insertion_point(field_set:protocol.ChainResponse.error_code)
}

// optional string error_desc = 2;
void ChainResponse::clear_error_desc() {
  error_desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ChainResponse::error_desc() const {
  // @@protoc_insertion_point(field_get:protocol.ChainResponse.error_desc)
  return error_desc_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainResponse::set_error_desc(const ::std::string& value) {
  
  error_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.ChainResponse.error_desc)
}
 void ChainResponse::set_error_desc(const char* value) {
  
  error_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.ChainResponse.error_desc)
}
 void ChainResponse::set_error_desc(const char* value, size_t size) {
  
  error_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.ChainResponse.error_desc)
}
 ::std::string* ChainResponse::mutable_error_desc() {
  
  // @@protoc_insertion_point(field_mutable:protocol.ChainResponse.error_desc)
  return error_desc_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ChainResponse::release_error_desc() {
  // @@protoc_insertion_point(field_release:protocol.ChainResponse.error_desc)
  
  return error_desc_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainResponse::set_allocated_error_desc(::std::string* error_desc) {
  if (error_desc != NULL) {
    
  } else {
    
  }
  error_desc_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error_desc);
  // @@protoc_insertion_point(field_set_allocated:protocol.ChainResponse.error_desc)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* ChainTxStatus_TxStatus_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ChainTxStatus_TxStatus_descriptor_;
}
bool ChainTxStatus_TxStatus_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const ChainTxStatus_TxStatus ChainTxStatus::UNDEFINED;
const ChainTxStatus_TxStatus ChainTxStatus::CONFIRMED;
const ChainTxStatus_TxStatus ChainTxStatus::PENDING;
const ChainTxStatus_TxStatus ChainTxStatus::COMPLETE;
const ChainTxStatus_TxStatus ChainTxStatus::FAILURE;
const ChainTxStatus_TxStatus ChainTxStatus::TxStatus_MIN;
const ChainTxStatus_TxStatus ChainTxStatus::TxStatus_MAX;
const int ChainTxStatus::TxStatus_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChainTxStatus::kStatusFieldNumber;
const int ChainTxStatus::kTxHashFieldNumber;
const int ChainTxStatus::kSourceAddressFieldNumber;
const int ChainTxStatus::kSourceAccountSeqFieldNumber;
const int ChainTxStatus::kLedgerSeqFieldNumber;
const int ChainTxStatus::kNewAccountSeqFieldNumber;
const int ChainTxStatus::kErrorCodeFieldNumber;
const int ChainTxStatus::kErrorDescFieldNumber;
const int ChainTxStatus::kTimestampFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChainTxStatus::ChainTxStatus()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.ChainTxStatus)
}

void ChainTxStatus::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ChainTxStatus::ChainTxStatus(const ChainTxStatus& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.ChainTxStatus)
}

void ChainTxStatus::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  status_ = 0;
  tx_hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  source_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  source_account_seq_ = GOOGLE_LONGLONG(0);
  ledger_seq_ = GOOGLE_LONGLONG(0);
  new_account_seq_ = GOOGLE_LONGLONG(0);
  error_code_ = 0;
  error_desc_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  timestamp_ = GOOGLE_LONGLONG(0);
}

ChainTxStatus::~ChainTxStatus() {
  // @@protoc_insertion_point(destructor:protocol.ChainTxStatus)
  SharedDtor();
}

void ChainTxStatus::SharedDtor() {
  tx_hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  source_address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  error_desc_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void ChainTxStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ChainTxStatus::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ChainTxStatus_descriptor_;
}

const ChainTxStatus& ChainTxStatus::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_overlay_2eproto();
  return *default_instance_;
}

ChainTxStatus* ChainTxStatus::default_instance_ = NULL;

ChainTxStatus* ChainTxStatus::New(::google::protobuf::Arena* arena) const {
  ChainTxStatus* n = new ChainTxStatus;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ChainTxStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.ChainTxStatus)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(ChainTxStatus, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<ChainTxStatus*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(source_account_seq_, new_account_seq_);
  tx_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  source_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  error_desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  timestamp_ = GOOGLE_LONGLONG(0);

#undef ZR_HELPER_
#undef ZR_

}

bool ChainTxStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.ChainTxStatus)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.ChainTxStatus.TxStatus status = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_status(static_cast< ::protocol::ChainTxStatus_TxStatus >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_tx_hash;
        break;
      }

      // optional string tx_hash = 2;
      case 2: {
        if (tag == 18) {
         parse_tx_hash:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tx_hash()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->tx_hash().data(), this->tx_hash().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.ChainTxStatus.tx_hash"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_source_address;
        break;
      }

      // optional string source_address = 3;
      case 3: {
        if (tag == 26) {
         parse_source_address:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_source_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->source_address().data(), this->source_address().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.ChainTxStatus.source_address"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_source_account_seq;
        break;
      }

      // optional int64 source_account_seq = 4;
      case 4: {
        if (tag == 32) {
         parse_source_account_seq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &source_account_seq_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_ledger_seq;
        break;
      }

      // optional int64 ledger_seq = 5;
      case 5: {
        if (tag == 40) {
         parse_ledger_seq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &ledger_seq_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_new_account_seq;
        break;
      }

      // optional int64 new_account_seq = 6;
      case 6: {
        if (tag == 48) {
         parse_new_account_seq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &new_account_seq_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_error_code;
        break;
      }

      // optional .protocol.ERRORCODE error_code = 7;
      case 7: {
        if (tag == 56) {
         parse_error_code:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_error_code(static_cast< ::protocol::ERRORCODE >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_error_desc;
        break;
      }

      // optional string error_desc = 8;
      case 8: {
        if (tag == 66) {
         parse_error_desc:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_error_desc()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->error_desc().data(), this->error_desc().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.ChainTxStatus.error_desc"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(72)) goto parse_timestamp;
        break;
      }

      // optional int64 timestamp = 9;
      case 9: {
        if (tag == 72) {
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
  // @@protoc_insertion_point(parse_success:protocol.ChainTxStatus)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.ChainTxStatus)
  return false;
#undef DO_
}

void ChainTxStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.ChainTxStatus)
  // optional .protocol.ChainTxStatus.TxStatus status = 1;
  if (this->status() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->status(), output);
  }

  // optional string tx_hash = 2;
  if (this->tx_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->tx_hash().data(), this->tx_hash().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainTxStatus.tx_hash");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->tx_hash(), output);
  }

  // optional string source_address = 3;
  if (this->source_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->source_address().data(), this->source_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainTxStatus.source_address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->source_address(), output);
  }

  // optional int64 source_account_seq = 4;
  if (this->source_account_seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->source_account_seq(), output);
  }

  // optional int64 ledger_seq = 5;
  if (this->ledger_seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->ledger_seq(), output);
  }

  // optional int64 new_account_seq = 6;
  if (this->new_account_seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->new_account_seq(), output);
  }

  // optional .protocol.ERRORCODE error_code = 7;
  if (this->error_code() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      7, this->error_code(), output);
  }

  // optional string error_desc = 8;
  if (this->error_desc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->error_desc().data(), this->error_desc().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainTxStatus.error_desc");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->error_desc(), output);
  }

  // optional int64 timestamp = 9;
  if (this->timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(9, this->timestamp(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.ChainTxStatus)
}

::google::protobuf::uint8* ChainTxStatus::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.ChainTxStatus)
  // optional .protocol.ChainTxStatus.TxStatus status = 1;
  if (this->status() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->status(), target);
  }

  // optional string tx_hash = 2;
  if (this->tx_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->tx_hash().data(), this->tx_hash().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainTxStatus.tx_hash");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->tx_hash(), target);
  }

  // optional string source_address = 3;
  if (this->source_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->source_address().data(), this->source_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainTxStatus.source_address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->source_address(), target);
  }

  // optional int64 source_account_seq = 4;
  if (this->source_account_seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->source_account_seq(), target);
  }

  // optional int64 ledger_seq = 5;
  if (this->ledger_seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->ledger_seq(), target);
  }

  // optional int64 new_account_seq = 6;
  if (this->new_account_seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, this->new_account_seq(), target);
  }

  // optional .protocol.ERRORCODE error_code = 7;
  if (this->error_code() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      7, this->error_code(), target);
  }

  // optional string error_desc = 8;
  if (this->error_desc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->error_desc().data(), this->error_desc().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.ChainTxStatus.error_desc");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->error_desc(), target);
  }

  // optional int64 timestamp = 9;
  if (this->timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(9, this->timestamp(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.ChainTxStatus)
  return target;
}

int ChainTxStatus::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.ChainTxStatus)
  int total_size = 0;

  // optional .protocol.ChainTxStatus.TxStatus status = 1;
  if (this->status() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
  }

  // optional string tx_hash = 2;
  if (this->tx_hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->tx_hash());
  }

  // optional string source_address = 3;
  if (this->source_address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->source_address());
  }

  // optional int64 source_account_seq = 4;
  if (this->source_account_seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->source_account_seq());
  }

  // optional int64 ledger_seq = 5;
  if (this->ledger_seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->ledger_seq());
  }

  // optional int64 new_account_seq = 6;
  if (this->new_account_seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->new_account_seq());
  }

  // optional .protocol.ERRORCODE error_code = 7;
  if (this->error_code() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->error_code());
  }

  // optional string error_desc = 8;
  if (this->error_desc().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->error_desc());
  }

  // optional int64 timestamp = 9;
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

void ChainTxStatus::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.ChainTxStatus)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ChainTxStatus* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ChainTxStatus>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.ChainTxStatus)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.ChainTxStatus)
    MergeFrom(*source);
  }
}

void ChainTxStatus::MergeFrom(const ChainTxStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.ChainTxStatus)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.status() != 0) {
    set_status(from.status());
  }
  if (from.tx_hash().size() > 0) {

    tx_hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tx_hash_);
  }
  if (from.source_address().size() > 0) {

    source_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.source_address_);
  }
  if (from.source_account_seq() != 0) {
    set_source_account_seq(from.source_account_seq());
  }
  if (from.ledger_seq() != 0) {
    set_ledger_seq(from.ledger_seq());
  }
  if (from.new_account_seq() != 0) {
    set_new_account_seq(from.new_account_seq());
  }
  if (from.error_code() != 0) {
    set_error_code(from.error_code());
  }
  if (from.error_desc().size() > 0) {

    error_desc_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.error_desc_);
  }
  if (from.timestamp() != 0) {
    set_timestamp(from.timestamp());
  }
}

void ChainTxStatus::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.ChainTxStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChainTxStatus::CopyFrom(const ChainTxStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.ChainTxStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChainTxStatus::IsInitialized() const {

  return true;
}

void ChainTxStatus::Swap(ChainTxStatus* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChainTxStatus::InternalSwap(ChainTxStatus* other) {
  std::swap(status_, other->status_);
  tx_hash_.Swap(&other->tx_hash_);
  source_address_.Swap(&other->source_address_);
  std::swap(source_account_seq_, other->source_account_seq_);
  std::swap(ledger_seq_, other->ledger_seq_);
  std::swap(new_account_seq_, other->new_account_seq_);
  std::swap(error_code_, other->error_code_);
  error_desc_.Swap(&other->error_desc_);
  std::swap(timestamp_, other->timestamp_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ChainTxStatus::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ChainTxStatus_descriptor_;
  metadata.reflection = ChainTxStatus_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ChainTxStatus

// optional .protocol.ChainTxStatus.TxStatus status = 1;
void ChainTxStatus::clear_status() {
  status_ = 0;
}
 ::protocol::ChainTxStatus_TxStatus ChainTxStatus::status() const {
  // @@protoc_insertion_point(field_get:protocol.ChainTxStatus.status)
  return static_cast< ::protocol::ChainTxStatus_TxStatus >(status_);
}
 void ChainTxStatus::set_status(::protocol::ChainTxStatus_TxStatus value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:protocol.ChainTxStatus.status)
}

// optional string tx_hash = 2;
void ChainTxStatus::clear_tx_hash() {
  tx_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ChainTxStatus::tx_hash() const {
  // @@protoc_insertion_point(field_get:protocol.ChainTxStatus.tx_hash)
  return tx_hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainTxStatus::set_tx_hash(const ::std::string& value) {
  
  tx_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.ChainTxStatus.tx_hash)
}
 void ChainTxStatus::set_tx_hash(const char* value) {
  
  tx_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.ChainTxStatus.tx_hash)
}
 void ChainTxStatus::set_tx_hash(const char* value, size_t size) {
  
  tx_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.ChainTxStatus.tx_hash)
}
 ::std::string* ChainTxStatus::mutable_tx_hash() {
  
  // @@protoc_insertion_point(field_mutable:protocol.ChainTxStatus.tx_hash)
  return tx_hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ChainTxStatus::release_tx_hash() {
  // @@protoc_insertion_point(field_release:protocol.ChainTxStatus.tx_hash)
  
  return tx_hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainTxStatus::set_allocated_tx_hash(::std::string* tx_hash) {
  if (tx_hash != NULL) {
    
  } else {
    
  }
  tx_hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tx_hash);
  // @@protoc_insertion_point(field_set_allocated:protocol.ChainTxStatus.tx_hash)
}

// optional string source_address = 3;
void ChainTxStatus::clear_source_address() {
  source_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ChainTxStatus::source_address() const {
  // @@protoc_insertion_point(field_get:protocol.ChainTxStatus.source_address)
  return source_address_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainTxStatus::set_source_address(const ::std::string& value) {
  
  source_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.ChainTxStatus.source_address)
}
 void ChainTxStatus::set_source_address(const char* value) {
  
  source_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.ChainTxStatus.source_address)
}
 void ChainTxStatus::set_source_address(const char* value, size_t size) {
  
  source_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.ChainTxStatus.source_address)
}
 ::std::string* ChainTxStatus::mutable_source_address() {
  
  // @@protoc_insertion_point(field_mutable:protocol.ChainTxStatus.source_address)
  return source_address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ChainTxStatus::release_source_address() {
  // @@protoc_insertion_point(field_release:protocol.ChainTxStatus.source_address)
  
  return source_address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainTxStatus::set_allocated_source_address(::std::string* source_address) {
  if (source_address != NULL) {
    
  } else {
    
  }
  source_address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), source_address);
  // @@protoc_insertion_point(field_set_allocated:protocol.ChainTxStatus.source_address)
}

// optional int64 source_account_seq = 4;
void ChainTxStatus::clear_source_account_seq() {
  source_account_seq_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 ChainTxStatus::source_account_seq() const {
  // @@protoc_insertion_point(field_get:protocol.ChainTxStatus.source_account_seq)
  return source_account_seq_;
}
 void ChainTxStatus::set_source_account_seq(::google::protobuf::int64 value) {
  
  source_account_seq_ = value;
  // @@protoc_insertion_point(field_set:protocol.ChainTxStatus.source_account_seq)
}

// optional int64 ledger_seq = 5;
void ChainTxStatus::clear_ledger_seq() {
  ledger_seq_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 ChainTxStatus::ledger_seq() const {
  // @@protoc_insertion_point(field_get:protocol.ChainTxStatus.ledger_seq)
  return ledger_seq_;
}
 void ChainTxStatus::set_ledger_seq(::google::protobuf::int64 value) {
  
  ledger_seq_ = value;
  // @@protoc_insertion_point(field_set:protocol.ChainTxStatus.ledger_seq)
}

// optional int64 new_account_seq = 6;
void ChainTxStatus::clear_new_account_seq() {
  new_account_seq_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 ChainTxStatus::new_account_seq() const {
  // @@protoc_insertion_point(field_get:protocol.ChainTxStatus.new_account_seq)
  return new_account_seq_;
}
 void ChainTxStatus::set_new_account_seq(::google::protobuf::int64 value) {
  
  new_account_seq_ = value;
  // @@protoc_insertion_point(field_set:protocol.ChainTxStatus.new_account_seq)
}

// optional .protocol.ERRORCODE error_code = 7;
void ChainTxStatus::clear_error_code() {
  error_code_ = 0;
}
 ::protocol::ERRORCODE ChainTxStatus::error_code() const {
  // @@protoc_insertion_point(field_get:protocol.ChainTxStatus.error_code)
  return static_cast< ::protocol::ERRORCODE >(error_code_);
}
 void ChainTxStatus::set_error_code(::protocol::ERRORCODE value) {
  
  error_code_ = value;
  // @@protoc_insertion_point(field_set:protocol.ChainTxStatus.error_code)
}

// optional string error_desc = 8;
void ChainTxStatus::clear_error_desc() {
  error_desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ChainTxStatus::error_desc() const {
  // @@protoc_insertion_point(field_get:protocol.ChainTxStatus.error_desc)
  return error_desc_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainTxStatus::set_error_desc(const ::std::string& value) {
  
  error_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.ChainTxStatus.error_desc)
}
 void ChainTxStatus::set_error_desc(const char* value) {
  
  error_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.ChainTxStatus.error_desc)
}
 void ChainTxStatus::set_error_desc(const char* value, size_t size) {
  
  error_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.ChainTxStatus.error_desc)
}
 ::std::string* ChainTxStatus::mutable_error_desc() {
  
  // @@protoc_insertion_point(field_mutable:protocol.ChainTxStatus.error_desc)
  return error_desc_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ChainTxStatus::release_error_desc() {
  // @@protoc_insertion_point(field_release:protocol.ChainTxStatus.error_desc)
  
  return error_desc_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ChainTxStatus::set_allocated_error_desc(::std::string* error_desc) {
  if (error_desc != NULL) {
    
  } else {
    
  }
  error_desc_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error_desc);
  // @@protoc_insertion_point(field_set_allocated:protocol.ChainTxStatus.error_desc)
}

// optional int64 timestamp = 9;
void ChainTxStatus::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 ChainTxStatus::timestamp() const {
  // @@protoc_insertion_point(field_get:protocol.ChainTxStatus.timestamp)
  return timestamp_;
}
 void ChainTxStatus::set_timestamp(::google::protobuf::int64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:protocol.ChainTxStatus.timestamp)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

// @@protoc_insertion_point(global_scope)
