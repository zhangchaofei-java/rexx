#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "chain.pb.h"

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


namespace protocol {

namespace {

const ::google::protobuf::Descriptor* Account_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Account_reflection_ = NULL;
const ::google::protobuf::Descriptor* AssetKey_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AssetKey_reflection_ = NULL;
const ::google::protobuf::Descriptor* Asset_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Asset_reflection_ = NULL;
const ::google::protobuf::Descriptor* AssetProperty_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AssetProperty_reflection_ = NULL;
const ::google::protobuf::Descriptor* AssetStore_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AssetStore_reflection_ = NULL;
const ::google::protobuf::Descriptor* LedgerHeader_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LedgerHeader_reflection_ = NULL;
const ::google::protobuf::Descriptor* Ledger_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Ledger_reflection_ = NULL;
const ::google::protobuf::Descriptor* OperationPayAsset_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OperationPayAsset_reflection_ = NULL;
const ::google::protobuf::Descriptor* OperationTypeThreshold_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OperationTypeThreshold_reflection_ = NULL;
const ::google::protobuf::Descriptor* AccountPrivilege_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AccountPrivilege_reflection_ = NULL;
const ::google::protobuf::Descriptor* AccountThreshold_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AccountThreshold_reflection_ = NULL;
const ::google::protobuf::Descriptor* OperationIssueAsset_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OperationIssueAsset_reflection_ = NULL;
const ::google::protobuf::Descriptor* OperationPayCoin_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OperationPayCoin_reflection_ = NULL;
const ::google::protobuf::Descriptor* OperationSetSignerWeight_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OperationSetSignerWeight_reflection_ = NULL;
const ::google::protobuf::Descriptor* OperationLog_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OperationLog_reflection_ = NULL;
const ::google::protobuf::Descriptor* OperationSetPrivilege_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OperationSetPrivilege_reflection_ = NULL;
const ::google::protobuf::Descriptor* Operation_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Operation_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Operation_Type_descriptor_ = NULL;
const ::google::protobuf::Descriptor* OperationSetThreshold_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OperationSetThreshold_reflection_ = NULL;
const ::google::protobuf::Descriptor* Transaction_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Transaction_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Transaction_Limit_descriptor_ = NULL;
const ::google::protobuf::Descriptor* Signer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Signer_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Signer_Limit_descriptor_ = NULL;
const ::google::protobuf::Descriptor* Trigger_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Trigger_reflection_ = NULL;
const ::google::protobuf::Descriptor* Trigger_OperationTrigger_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Trigger_OperationTrigger_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Trigger_TransactionType_descriptor_ = NULL;
const ::google::protobuf::Descriptor* TransactionEnv_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TransactionEnv_reflection_ = NULL;
const ::google::protobuf::Descriptor* TransactionEnvStore_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TransactionEnvStore_reflection_ = NULL;
const ::google::protobuf::Descriptor* TransactionEnvSet_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TransactionEnvSet_reflection_ = NULL;
const ::google::protobuf::Descriptor* ConsensusValueValidation_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ConsensusValueValidation_reflection_ = NULL;
const ::google::protobuf::Descriptor* ConsensusValue_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ConsensusValue_reflection_ = NULL;
const ::google::protobuf::Descriptor* Contract_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Contract_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Contract_ContractType_descriptor_ = NULL;
const ::google::protobuf::Descriptor* OperationCreateAccount_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OperationCreateAccount_reflection_ = NULL;
const ::google::protobuf::Descriptor* OperationSetMetadata_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OperationSetMetadata_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Limit_descriptor_ = NULL;

}


void protobuf_AssignDesc_chain_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_chain_2eproto() {
  protobuf_AddDesc_chain_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "chain.proto");
  GOOGLE_CHECK(file != NULL);
  Account_descriptor_ = file->message_type(0);
  static const int Account_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Account, address_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Account, nonce_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Account, priv_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Account, metadatas_hash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Account, assets_hash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Account, contract_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Account, balance_),
  };
  Account_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Account_descriptor_,
      Account::default_instance_,
      Account_offsets_,
      -1,
      -1,
      -1,
      sizeof(Account),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Account, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Account, _is_default_instance_));
  AssetKey_descriptor_ = file->message_type(1);
  static const int AssetKey_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetKey, issuer_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetKey, code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetKey, type_),
  };
  AssetKey_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AssetKey_descriptor_,
      AssetKey::default_instance_,
      AssetKey_offsets_,
      -1,
      -1,
      -1,
      sizeof(AssetKey),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetKey, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetKey, _is_default_instance_));
  Asset_descriptor_ = file->message_type(2);
  static const int Asset_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Asset, key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Asset, amount_),
  };
  Asset_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Asset_descriptor_,
      Asset::default_instance_,
      Asset_offsets_,
      -1,
      -1,
      -1,
      sizeof(Asset),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Asset, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Asset, _is_default_instance_));
  AssetProperty_descriptor_ = file->message_type(3);
  static const int AssetProperty_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetProperty, decimal_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetProperty, description_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetProperty, max_supply_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetProperty, issued_amount_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetProperty, fee_percent_),
  };
  AssetProperty_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AssetProperty_descriptor_,
      AssetProperty::default_instance_,
      AssetProperty_offsets_,
      -1,
      -1,
      -1,
      sizeof(AssetProperty),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetProperty, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetProperty, _is_default_instance_));
  AssetStore_descriptor_ = file->message_type(4);
  static const int AssetStore_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetStore, key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetStore, amount_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetStore, property_),
  };
  AssetStore_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AssetStore_descriptor_,
      AssetStore::default_instance_,
      AssetStore_offsets_,
      -1,
      -1,
      -1,
      sizeof(AssetStore),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetStore, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AssetStore, _is_default_instance_));
  LedgerHeader_descriptor_ = file->message_type(5);
  static const int LedgerHeader_offsets_[11] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerHeader, seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerHeader, hash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerHeader, previous_hash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerHeader, account_tree_hash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerHeader, close_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerHeader, consensus_value_hash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerHeader, version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerHeader, tx_count_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerHeader, validators_hash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerHeader, fees_hash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerHeader, reserve_),
  };
  LedgerHeader_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      LedgerHeader_descriptor_,
      LedgerHeader::default_instance_,
      LedgerHeader_offsets_,
      -1,
      -1,
      -1,
      sizeof(LedgerHeader),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerHeader, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LedgerHeader, _is_default_instance_));
  Ledger_descriptor_ = file->message_type(6);
  static const int Ledger_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ledger, header_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ledger, transaction_envs_),
  };
  Ledger_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Ledger_descriptor_,
      Ledger::default_instance_,
      Ledger_offsets_,
      -1,
      -1,
      -1,
      sizeof(Ledger),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ledger, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Ledger, _is_default_instance_));
  OperationPayAsset_descriptor_ = file->message_type(7);
  static const int OperationPayAsset_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationPayAsset, dest_address_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationPayAsset, asset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationPayAsset, input_),
  };
  OperationPayAsset_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OperationPayAsset_descriptor_,
      OperationPayAsset::default_instance_,
      OperationPayAsset_offsets_,
      -1,
      -1,
      -1,
      sizeof(OperationPayAsset),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationPayAsset, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationPayAsset, _is_default_instance_));
  OperationTypeThreshold_descriptor_ = file->message_type(8);
  static const int OperationTypeThreshold_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationTypeThreshold, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationTypeThreshold, threshold_),
  };
  OperationTypeThreshold_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OperationTypeThreshold_descriptor_,
      OperationTypeThreshold::default_instance_,
      OperationTypeThreshold_offsets_,
      -1,
      -1,
      -1,
      sizeof(OperationTypeThreshold),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationTypeThreshold, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationTypeThreshold, _is_default_instance_));
  AccountPrivilege_descriptor_ = file->message_type(9);
  static const int AccountPrivilege_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AccountPrivilege, master_weight_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AccountPrivilege, signers_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AccountPrivilege, thresholds_),
  };
  AccountPrivilege_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AccountPrivilege_descriptor_,
      AccountPrivilege::default_instance_,
      AccountPrivilege_offsets_,
      -1,
      -1,
      -1,
      sizeof(AccountPrivilege),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AccountPrivilege, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AccountPrivilege, _is_default_instance_));
  AccountThreshold_descriptor_ = file->message_type(10);
  static const int AccountThreshold_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AccountThreshold, tx_threshold_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AccountThreshold, type_thresholds_),
  };
  AccountThreshold_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AccountThreshold_descriptor_,
      AccountThreshold::default_instance_,
      AccountThreshold_offsets_,
      -1,
      -1,
      -1,
      sizeof(AccountThreshold),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AccountThreshold, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AccountThreshold, _is_default_instance_));
  OperationIssueAsset_descriptor_ = file->message_type(11);
  static const int OperationIssueAsset_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationIssueAsset, code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationIssueAsset, amount_),
  };
  OperationIssueAsset_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OperationIssueAsset_descriptor_,
      OperationIssueAsset::default_instance_,
      OperationIssueAsset_offsets_,
      -1,
      -1,
      -1,
      sizeof(OperationIssueAsset),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationIssueAsset, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationIssueAsset, _is_default_instance_));
  OperationPayCoin_descriptor_ = file->message_type(12);
  static const int OperationPayCoin_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationPayCoin, dest_address_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationPayCoin, amount_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationPayCoin, input_),
  };
  OperationPayCoin_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OperationPayCoin_descriptor_,
      OperationPayCoin::default_instance_,
      OperationPayCoin_offsets_,
      -1,
      -1,
      -1,
      sizeof(OperationPayCoin),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationPayCoin, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationPayCoin, _is_default_instance_));
  OperationSetSignerWeight_descriptor_ = file->message_type(13);
  static const int OperationSetSignerWeight_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetSignerWeight, master_weight_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetSignerWeight, signers_),
  };
  OperationSetSignerWeight_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OperationSetSignerWeight_descriptor_,
      OperationSetSignerWeight::default_instance_,
      OperationSetSignerWeight_offsets_,
      -1,
      -1,
      -1,
      sizeof(OperationSetSignerWeight),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetSignerWeight, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetSignerWeight, _is_default_instance_));
  OperationLog_descriptor_ = file->message_type(14);
  static const int OperationLog_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationLog, topic_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationLog, datas_),
  };
  OperationLog_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OperationLog_descriptor_,
      OperationLog::default_instance_,
      OperationLog_offsets_,
      -1,
      -1,
      -1,
      sizeof(OperationLog),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationLog, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationLog, _is_default_instance_));
  OperationSetPrivilege_descriptor_ = file->message_type(15);
  static const int OperationSetPrivilege_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetPrivilege, master_weight_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetPrivilege, signers_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetPrivilege, tx_threshold_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetPrivilege, type_thresholds_),
  };
  OperationSetPrivilege_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OperationSetPrivilege_descriptor_,
      OperationSetPrivilege::default_instance_,
      OperationSetPrivilege_offsets_,
      -1,
      -1,
      -1,
      sizeof(OperationSetPrivilege),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetPrivilege, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetPrivilege, _is_default_instance_));
  Operation_descriptor_ = file->message_type(16);
  static const int Operation_offsets_[12] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, source_address_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, metadata_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, create_account_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, issue_asset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, pay_asset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, set_metadata_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, set_signer_weight_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, set_threshold_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, pay_coin_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, log_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, set_privilege_),
  };
  Operation_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Operation_descriptor_,
      Operation::default_instance_,
      Operation_offsets_,
      -1,
      -1,
      -1,
      sizeof(Operation),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Operation, _is_default_instance_));
  Operation_Type_descriptor_ = Operation_descriptor_->enum_type(0);
  OperationSetThreshold_descriptor_ = file->message_type(17);
  static const int OperationSetThreshold_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetThreshold, tx_threshold_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetThreshold, type_thresholds_),
  };
  OperationSetThreshold_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OperationSetThreshold_descriptor_,
      OperationSetThreshold::default_instance_,
      OperationSetThreshold_offsets_,
      -1,
      -1,
      -1,
      sizeof(OperationSetThreshold),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetThreshold, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetThreshold, _is_default_instance_));
  Transaction_descriptor_ = file->message_type(18);
  static const int Transaction_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction, source_address_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction, nonce_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction, fee_limit_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction, gas_price_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction, ceil_ledger_seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction, metadata_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction, operations_),
  };
  Transaction_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Transaction_descriptor_,
      Transaction::default_instance_,
      Transaction_offsets_,
      -1,
      -1,
      -1,
      sizeof(Transaction),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction, _is_default_instance_));
  Transaction_Limit_descriptor_ = Transaction_descriptor_->enum_type(0);
  Signer_descriptor_ = file->message_type(19);
  static const int Signer_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Signer, address_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Signer, weight_),
  };
  Signer_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Signer_descriptor_,
      Signer::default_instance_,
      Signer_offsets_,
      -1,
      -1,
      -1,
      sizeof(Signer),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Signer, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Signer, _is_default_instance_));
  Signer_Limit_descriptor_ = Signer_descriptor_->enum_type(0);
  Trigger_descriptor_ = file->message_type(20);
  static const int Trigger_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Trigger, transaction_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Trigger, ledger_seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Trigger, transaction_),
  };
  Trigger_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Trigger_descriptor_,
      Trigger::default_instance_,
      Trigger_offsets_,
      -1,
      -1,
      -1,
      sizeof(Trigger),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Trigger, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Trigger, _is_default_instance_));
  Trigger_OperationTrigger_descriptor_ = Trigger_descriptor_->nested_type(0);
  static const int Trigger_OperationTrigger_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Trigger_OperationTrigger, hash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Trigger_OperationTrigger, index_),
  };
  Trigger_OperationTrigger_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Trigger_OperationTrigger_descriptor_,
      Trigger_OperationTrigger::default_instance_,
      Trigger_OperationTrigger_offsets_,
      -1,
      -1,
      -1,
      sizeof(Trigger_OperationTrigger),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Trigger_OperationTrigger, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Trigger_OperationTrigger, _is_default_instance_));
  Trigger_TransactionType_descriptor_ = Trigger_descriptor_->enum_type(0);
  TransactionEnv_descriptor_ = file->message_type(21);
  static const int TransactionEnv_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnv, transaction_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnv, signatures_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnv, trigger_),
  };
  TransactionEnv_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TransactionEnv_descriptor_,
      TransactionEnv::default_instance_,
      TransactionEnv_offsets_,
      -1,
      -1,
      -1,
      sizeof(TransactionEnv),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnv, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnv, _is_default_instance_));
  TransactionEnvStore_descriptor_ = file->message_type(22);
  static const int TransactionEnvStore_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnvStore, transaction_env_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnvStore, error_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnvStore, error_desc_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnvStore, ledger_seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnvStore, close_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnvStore, hash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnvStore, actual_fee_),
  };
  TransactionEnvStore_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TransactionEnvStore_descriptor_,
      TransactionEnvStore::default_instance_,
      TransactionEnvStore_offsets_,
      -1,
      -1,
      -1,
      sizeof(TransactionEnvStore),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnvStore, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnvStore, _is_default_instance_));
  TransactionEnvSet_descriptor_ = file->message_type(23);
  static const int TransactionEnvSet_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnvSet, txs_),
  };
  TransactionEnvSet_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TransactionEnvSet_descriptor_,
      TransactionEnvSet::default_instance_,
      TransactionEnvSet_offsets_,
      -1,
      -1,
      -1,
      sizeof(TransactionEnvSet),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnvSet, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TransactionEnvSet, _is_default_instance_));
  ConsensusValueValidation_descriptor_ = file->message_type(24);
  static const int ConsensusValueValidation_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsensusValueValidation, expire_tx_ids_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsensusValueValidation, error_tx_ids_),
  };
  ConsensusValueValidation_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ConsensusValueValidation_descriptor_,
      ConsensusValueValidation::default_instance_,
      ConsensusValueValidation_offsets_,
      -1,
      -1,
      -1,
      sizeof(ConsensusValueValidation),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsensusValueValidation, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsensusValueValidation, _is_default_instance_));
  ConsensusValue_descriptor_ = file->message_type(25);
  static const int ConsensusValue_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsensusValue, txset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsensusValue, close_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsensusValue, previous_proof_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsensusValue, ledger_seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsensusValue, previous_ledger_hash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsensusValue, ledger_upgrade_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsensusValue, validation_),
  };
  ConsensusValue_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ConsensusValue_descriptor_,
      ConsensusValue::default_instance_,
      ConsensusValue_offsets_,
      -1,
      -1,
      -1,
      sizeof(ConsensusValue),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsensusValue, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConsensusValue, _is_default_instance_));
  Contract_descriptor_ = file->message_type(26);
  static const int Contract_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Contract, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Contract, payload_),
  };
  Contract_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Contract_descriptor_,
      Contract::default_instance_,
      Contract_offsets_,
      -1,
      -1,
      -1,
      sizeof(Contract),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Contract, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Contract, _is_default_instance_));
  Contract_ContractType_descriptor_ = Contract_descriptor_->enum_type(0);
  OperationCreateAccount_descriptor_ = file->message_type(27);
  static const int OperationCreateAccount_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationCreateAccount, dest_address_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationCreateAccount, contract_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationCreateAccount, priv_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationCreateAccount, metadatas_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationCreateAccount, init_balance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationCreateAccount, init_input_),
  };
  OperationCreateAccount_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OperationCreateAccount_descriptor_,
      OperationCreateAccount::default_instance_,
      OperationCreateAccount_offsets_,
      -1,
      -1,
      -1,
      sizeof(OperationCreateAccount),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationCreateAccount, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationCreateAccount, _is_default_instance_));
  OperationSetMetadata_descriptor_ = file->message_type(28);
  static const int OperationSetMetadata_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetMetadata, key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetMetadata, value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetMetadata, version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetMetadata, delete_flag_),
  };
  OperationSetMetadata_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OperationSetMetadata_descriptor_,
      OperationSetMetadata::default_instance_,
      OperationSetMetadata_offsets_,
      -1,
      -1,
      -1,
      sizeof(OperationSetMetadata),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetMetadata, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationSetMetadata, _is_default_instance_));
  Limit_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_chain_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Account_descriptor_, &Account::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AssetKey_descriptor_, &AssetKey::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Asset_descriptor_, &Asset::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AssetProperty_descriptor_, &AssetProperty::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AssetStore_descriptor_, &AssetStore::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      LedgerHeader_descriptor_, &LedgerHeader::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Ledger_descriptor_, &Ledger::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OperationPayAsset_descriptor_, &OperationPayAsset::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OperationTypeThreshold_descriptor_, &OperationTypeThreshold::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AccountPrivilege_descriptor_, &AccountPrivilege::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AccountThreshold_descriptor_, &AccountThreshold::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OperationIssueAsset_descriptor_, &OperationIssueAsset::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OperationPayCoin_descriptor_, &OperationPayCoin::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OperationSetSignerWeight_descriptor_, &OperationSetSignerWeight::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OperationLog_descriptor_, &OperationLog::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OperationSetPrivilege_descriptor_, &OperationSetPrivilege::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Operation_descriptor_, &Operation::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OperationSetThreshold_descriptor_, &OperationSetThreshold::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Transaction_descriptor_, &Transaction::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Signer_descriptor_, &Signer::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Trigger_descriptor_, &Trigger::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Trigger_OperationTrigger_descriptor_, &Trigger_OperationTrigger::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TransactionEnv_descriptor_, &TransactionEnv::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TransactionEnvStore_descriptor_, &TransactionEnvStore::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TransactionEnvSet_descriptor_, &TransactionEnvSet::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ConsensusValueValidation_descriptor_, &ConsensusValueValidation::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ConsensusValue_descriptor_, &ConsensusValue::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Contract_descriptor_, &Contract::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OperationCreateAccount_descriptor_, &OperationCreateAccount::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OperationSetMetadata_descriptor_, &OperationSetMetadata::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_chain_2eproto() {
  delete Account::default_instance_;
  delete Account_reflection_;
  delete AssetKey::default_instance_;
  delete AssetKey_reflection_;
  delete Asset::default_instance_;
  delete Asset_reflection_;
  delete AssetProperty::default_instance_;
  delete AssetProperty_reflection_;
  delete AssetStore::default_instance_;
  delete AssetStore_reflection_;
  delete LedgerHeader::default_instance_;
  delete LedgerHeader_reflection_;
  delete Ledger::default_instance_;
  delete Ledger_reflection_;
  delete OperationPayAsset::default_instance_;
  delete OperationPayAsset_reflection_;
  delete OperationTypeThreshold::default_instance_;
  delete OperationTypeThreshold_reflection_;
  delete AccountPrivilege::default_instance_;
  delete AccountPrivilege_reflection_;
  delete AccountThreshold::default_instance_;
  delete AccountThreshold_reflection_;
  delete OperationIssueAsset::default_instance_;
  delete OperationIssueAsset_reflection_;
  delete OperationPayCoin::default_instance_;
  delete OperationPayCoin_reflection_;
  delete OperationSetSignerWeight::default_instance_;
  delete OperationSetSignerWeight_reflection_;
  delete OperationLog::default_instance_;
  delete OperationLog_reflection_;
  delete OperationSetPrivilege::default_instance_;
  delete OperationSetPrivilege_reflection_;
  delete Operation::default_instance_;
  delete Operation_reflection_;
  delete OperationSetThreshold::default_instance_;
  delete OperationSetThreshold_reflection_;
  delete Transaction::default_instance_;
  delete Transaction_reflection_;
  delete Signer::default_instance_;
  delete Signer_reflection_;
  delete Trigger::default_instance_;
  delete Trigger_reflection_;
  delete Trigger_OperationTrigger::default_instance_;
  delete Trigger_OperationTrigger_reflection_;
  delete TransactionEnv::default_instance_;
  delete TransactionEnv_reflection_;
  delete TransactionEnvStore::default_instance_;
  delete TransactionEnvStore_reflection_;
  delete TransactionEnvSet::default_instance_;
  delete TransactionEnvSet_reflection_;
  delete ConsensusValueValidation::default_instance_;
  delete ConsensusValueValidation_reflection_;
  delete ConsensusValue::default_instance_;
  delete ConsensusValue_reflection_;
  delete Contract::default_instance_;
  delete Contract_reflection_;
  delete OperationCreateAccount::default_instance_;
  delete OperationCreateAccount_reflection_;
  delete OperationSetMetadata::default_instance_;
  delete OperationSetMetadata_reflection_;
}

void protobuf_AddDesc_chain_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_chain_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protocol::protobuf_AddDesc_common_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013chain.proto\022\010protocol\032\014common.proto\"\267\001"
    "\n\007Account\022\017\n\007address\030\001 \001(\t\022\r\n\005nonce\030\002 \001("
    "\003\022(\n\004priv\030\003 \001(\0132\032.protocol.AccountPrivil"
    "ege\022\026\n\016metadatas_hash\030\004 \001(\014\022\023\n\013assets_ha"
    "sh\030\005 \001(\014\022$\n\010contract\030\006 \001(\0132\022.protocol.Co"
    "ntract\022\017\n\007balance\030\007 \001(\003\"6\n\010AssetKey\022\016\n\006i"
    "ssuer\030\001 \001(\t\022\014\n\004code\030\002 \001(\t\022\014\n\004type\030\003 \001(\005\""
    "8\n\005Asset\022\037\n\003key\030\001 \001(\0132\022.protocol.AssetKe"
    "y\022\016\n\006amount\030\002 \001(\003\"u\n\rAssetProperty\022\017\n\007de"
    "cimal\030\001 \001(\005\022\023\n\013description\030\002 \001(\t\022\022\n\nmax_"
    "supply\030\003 \001(\003\022\025\n\rissued_amount\030\004 \001(\003\022\023\n\013f"
    "ee_percent\030\005 \001(\005\"h\n\nAssetStore\022\037\n\003key\030\001 "
    "\001(\0132\022.protocol.AssetKey\022\016\n\006amount\030\002 \001(\003\022"
    ")\n\010property\030\003 \001(\0132\027.protocol.AssetProper"
    "ty\"\355\001\n\014LedgerHeader\022\013\n\003seq\030\001 \001(\003\022\014\n\004hash"
    "\030\002 \001(\014\022\025\n\rprevious_hash\030\003 \001(\014\022\031\n\021account"
    "_tree_hash\030\004 \001(\014\022\022\n\nclose_time\030\005 \001(\003\022\034\n\024"
    "consensus_value_hash\030\006 \001(\014\022\017\n\007version\030\007 "
    "\001(\003\022\020\n\010tx_count\030\010 \001(\003\022\027\n\017validators_hash"
    "\030\t \001(\014\022\021\n\tfees_hash\030\n \001(\014\022\017\n\007reserve\030\013 \001"
    "(\t\"d\n\006Ledger\022&\n\006header\030\001 \001(\0132\026.protocol."
    "LedgerHeader\0222\n\020transaction_envs\030\002 \003(\0132\030"
    ".protocol.TransactionEnv\"X\n\021OperationPay"
    "Asset\022\024\n\014dest_address\030\001 \001(\t\022\036\n\005asset\030\002 \001"
    "(\0132\017.protocol.Asset\022\r\n\005input\030\003 \001(\t\"S\n\026Op"
    "erationTypeThreshold\022&\n\004type\030\001 \001(\0162\030.pro"
    "tocol.Operation.Type\022\021\n\tthreshold\030\002 \001(\003\""
    "|\n\020AccountPrivilege\022\025\n\rmaster_weight\030\001 \001"
    "(\003\022!\n\007signers\030\002 \003(\0132\020.protocol.Signer\022.\n"
    "\nthresholds\030\003 \001(\0132\032.protocol.AccountThre"
    "shold\"c\n\020AccountThreshold\022\024\n\014tx_threshol"
    "d\030\001 \001(\003\0229\n\017type_thresholds\030\002 \003(\0132 .proto"
    "col.OperationTypeThreshold\"3\n\023OperationI"
    "ssueAsset\022\014\n\004code\030\001 \001(\t\022\016\n\006amount\030\002 \001(\003\""
    "G\n\020OperationPayCoin\022\024\n\014dest_address\030\001 \001("
    "\t\022\016\n\006amount\030\002 \001(\003\022\r\n\005input\030\003 \001(\t\"T\n\030Oper"
    "ationSetSignerWeight\022\025\n\rmaster_weight\030\001 "
    "\001(\003\022!\n\007signers\030\002 \003(\0132\020.protocol.Signer\","
    "\n\014OperationLog\022\r\n\005topic\030\001 \001(\t\022\r\n\005datas\030\002"
    " \003(\t\"\242\001\n\025OperationSetPrivilege\022\025\n\rmaster"
    "_weight\030\001 \001(\t\022!\n\007signers\030\002 \003(\0132\020.protoco"
    "l.Signer\022\024\n\014tx_threshold\030\003 \001(\t\0229\n\017type_t"
    "hresholds\030\004 \003(\0132 .protocol.OperationType"
    "Threshold\"\343\005\n\tOperation\022&\n\004type\030\001 \001(\0162\030."
    "protocol.Operation.Type\022\026\n\016source_addres"
    "s\030\002 \001(\t\022\020\n\010metadata\030\003 \001(\014\0228\n\016create_acco"
    "unt\030\004 \001(\0132 .protocol.OperationCreateAcco"
    "unt\0222\n\013issue_asset\030\005 \001(\0132\035.protocol.Oper"
    "ationIssueAsset\022.\n\tpay_asset\030\006 \001(\0132\033.pro"
    "tocol.OperationPayAsset\0224\n\014set_metadata\030"
    "\007 \001(\0132\036.protocol.OperationSetMetadata\022=\n"
    "\021set_signer_weight\030\010 \001(\0132\".protocol.Oper"
    "ationSetSignerWeight\0226\n\rset_threshold\030\t "
    "\001(\0132\037.protocol.OperationSetThreshold\022,\n\010"
    "pay_coin\030\n \001(\0132\032.protocol.OperationPayCo"
    "in\022#\n\003log\030\013 \001(\0132\026.protocol.OperationLog\022"
    "6\n\rset_privilege\030\014 \001(\0132\037.protocol.Operat"
    "ionSetPrivilege\"\255\001\n\004Type\022\013\n\007UNKNOWN\020\000\022\022\n"
    "\016CREATE_ACCOUNT\020\001\022\017\n\013ISSUE_ASSET\020\002\022\r\n\tPA"
    "Y_ASSET\020\003\022\020\n\014SET_METADATA\020\004\022\025\n\021SET_SIGNE"
    "R_WEIGHT\020\005\022\021\n\rSET_THRESHOLD\020\006\022\014\n\010PAY_COI"
    "N\020\007\022\007\n\003LOG\020\010\022\021\n\rSET_PRIVILEGE\020\t\"h\n\025Opera"
    "tionSetThreshold\022\024\n\014tx_threshold\030\001 \001(\003\0229"
    "\n\017type_thresholds\030\002 \003(\0132 .protocol.Opera"
    "tionTypeThreshold\"\325\001\n\013Transaction\022\026\n\016sou"
    "rce_address\030\001 \001(\t\022\r\n\005nonce\030\002 \001(\003\022\021\n\tfee_"
    "limit\030\003 \001(\003\022\021\n\tgas_price\030\004 \001(\003\022\027\n\017ceil_l"
    "edger_seq\030\005 \001(\003\022\020\n\010metadata\030\006 \001(\014\022\'\n\nope"
    "rations\030\007 \003(\0132\023.protocol.Operation\"%\n\005Li"
    "mit\022\013\n\007UNKNOWN\020\000\022\017\n\nOPERATIONS\020\350\007\"O\n\006Sig"
    "ner\022\017\n\007address\030\001 \001(\t\022\016\n\006weight\030\002 \001(\003\"$\n\005"
    "Limit\022\017\n\013SIGNER_NONE\020\000\022\n\n\006SIGNER\020d\"\211\002\n\007T"
    "rigger\022;\n\020transaction_type\030\001 \001(\0162!.proto"
    "col.Trigger.TransactionType\022\022\n\nledger_se"
    "q\030\002 \001(\003\0227\n\013transaction\030\003 \001(\0132\".protocol."
    "Trigger.OperationTrigger\032/\n\020OperationTri"
    "gger\022\014\n\004hash\030\001 \001(\014\022\r\n\005index\030\002 \001(\003\"C\n\017Tra"
    "nsactionType\022\026\n\022NORMAL_TRANSACTION\020\000\022\030\n\024"
    "CONTRACT_TRANSACTION\020\001\"\211\001\n\016TransactionEn"
    "v\022*\n\013transaction\030\001 \001(\0132\025.protocol.Transa"
    "ction\022\'\n\nsignatures\030\002 \003(\0132\023.protocol.Sig"
    "nature\022\"\n\007trigger\030\003 \001(\0132\021.protocol.Trigg"
    "er\"\272\001\n\023TransactionEnvStore\0221\n\017transactio"
    "n_env\030\001 \001(\0132\030.protocol.TransactionEnv\022\022\n"
    "\nerror_code\030\002 \001(\005\022\022\n\nerror_desc\030\003 \001(\t\022\022\n"
    "\nledger_seq\030\004 \001(\003\022\022\n\nclose_time\030\005 \001(\003\022\014\n"
    "\004hash\030\006 \001(\014\022\022\n\nactual_fee\030\007 \001(\003\":\n\021Trans"
    "actionEnvSet\022%\n\003txs\030\002 \003(\0132\030.protocol.Tra"
    "nsactionEnv\"G\n\030ConsensusValueValidation\022"
    "\025\n\rexpire_tx_ids\030\001 \003(\005\022\024\n\014error_tx_ids\030\002"
    " \003(\005\"\203\002\n\016ConsensusValue\022*\n\005txset\030\001 \001(\0132\033"
    ".protocol.TransactionEnvSet\022\022\n\nclose_tim"
    "e\030\002 \001(\003\022\026\n\016previous_proof\030\003 \001(\014\022\022\n\nledge"
    "r_seq\030\004 \001(\003\022\034\n\024previous_ledger_hash\030\005 \001("
    "\014\022/\n\016ledger_upgrade\030\006 \001(\0132\027.protocol.Led"
    "gerUpgrade\0226\n\nvalidation\030\007 \001(\0132\".protoco"
    "l.ConsensusValueValidation\"j\n\010Contract\022-"
    "\n\004type\030\001 \001(\0162\037.protocol.Contract.Contrac"
    "tType\022\017\n\007payload\030\002 \001(\t\"\036\n\014ContractType\022\016"
    "\n\nJAVASCRIPT\020\000\"\316\001\n\026OperationCreateAccoun"
    "t\022\024\n\014dest_address\030\001 \001(\t\022$\n\010contract\030\002 \001("
    "\0132\022.protocol.Contract\022(\n\004priv\030\003 \001(\0132\032.pr"
    "otocol.AccountPrivilege\022$\n\tmetadatas\030\004 \003"
    "(\0132\021.protocol.KeyPair\022\024\n\014init_balance\030\005 "
    "\001(\003\022\022\n\ninit_input\030\006 \001(\t\"X\n\024OperationSetM"
    "etadata\022\013\n\003key\030\001 \001(\t\022\r\n\005value\030\002 \001(\t\022\017\n\007v"
    "ersion\030\003 \001(\003\022\023\n\013delete_flag\030\004 \001(\010*#\n\005Lim"
    "it\022\013\n\007UNKNOWN\020\000\022\r\n\tSIGNATURE\020dB\"\n io.bum"
    "o.sdk.core.extend.protobufb\006proto3", 4354);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "chain.proto", &protobuf_RegisterTypes);
  Account::default_instance_ = new Account();
  AssetKey::default_instance_ = new AssetKey();
  Asset::default_instance_ = new Asset();
  AssetProperty::default_instance_ = new AssetProperty();
  AssetStore::default_instance_ = new AssetStore();
  LedgerHeader::default_instance_ = new LedgerHeader();
  Ledger::default_instance_ = new Ledger();
  OperationPayAsset::default_instance_ = new OperationPayAsset();
  OperationTypeThreshold::default_instance_ = new OperationTypeThreshold();
  AccountPrivilege::default_instance_ = new AccountPrivilege();
  AccountThreshold::default_instance_ = new AccountThreshold();
  OperationIssueAsset::default_instance_ = new OperationIssueAsset();
  OperationPayCoin::default_instance_ = new OperationPayCoin();
  OperationSetSignerWeight::default_instance_ = new OperationSetSignerWeight();
  OperationLog::default_instance_ = new OperationLog();
  OperationSetPrivilege::default_instance_ = new OperationSetPrivilege();
  Operation::default_instance_ = new Operation();
  OperationSetThreshold::default_instance_ = new OperationSetThreshold();
  Transaction::default_instance_ = new Transaction();
  Signer::default_instance_ = new Signer();
  Trigger::default_instance_ = new Trigger();
  Trigger_OperationTrigger::default_instance_ = new Trigger_OperationTrigger();
  TransactionEnv::default_instance_ = new TransactionEnv();
  TransactionEnvStore::default_instance_ = new TransactionEnvStore();
  TransactionEnvSet::default_instance_ = new TransactionEnvSet();
  ConsensusValueValidation::default_instance_ = new ConsensusValueValidation();
  ConsensusValue::default_instance_ = new ConsensusValue();
  Contract::default_instance_ = new Contract();
  OperationCreateAccount::default_instance_ = new OperationCreateAccount();
  OperationSetMetadata::default_instance_ = new OperationSetMetadata();
  Account::default_instance_->InitAsDefaultInstance();
  AssetKey::default_instance_->InitAsDefaultInstance();
  Asset::default_instance_->InitAsDefaultInstance();
  AssetProperty::default_instance_->InitAsDefaultInstance();
  AssetStore::default_instance_->InitAsDefaultInstance();
  LedgerHeader::default_instance_->InitAsDefaultInstance();
  Ledger::default_instance_->InitAsDefaultInstance();
  OperationPayAsset::default_instance_->InitAsDefaultInstance();
  OperationTypeThreshold::default_instance_->InitAsDefaultInstance();
  AccountPrivilege::default_instance_->InitAsDefaultInstance();
  AccountThreshold::default_instance_->InitAsDefaultInstance();
  OperationIssueAsset::default_instance_->InitAsDefaultInstance();
  OperationPayCoin::default_instance_->InitAsDefaultInstance();
  OperationSetSignerWeight::default_instance_->InitAsDefaultInstance();
  OperationLog::default_instance_->InitAsDefaultInstance();
  OperationSetPrivilege::default_instance_->InitAsDefaultInstance();
  Operation::default_instance_->InitAsDefaultInstance();
  OperationSetThreshold::default_instance_->InitAsDefaultInstance();
  Transaction::default_instance_->InitAsDefaultInstance();
  Signer::default_instance_->InitAsDefaultInstance();
  Trigger::default_instance_->InitAsDefaultInstance();
  Trigger_OperationTrigger::default_instance_->InitAsDefaultInstance();
  TransactionEnv::default_instance_->InitAsDefaultInstance();
  TransactionEnvStore::default_instance_->InitAsDefaultInstance();
  TransactionEnvSet::default_instance_->InitAsDefaultInstance();
  ConsensusValueValidation::default_instance_->InitAsDefaultInstance();
  ConsensusValue::default_instance_->InitAsDefaultInstance();
  Contract::default_instance_->InitAsDefaultInstance();
  OperationCreateAccount::default_instance_->InitAsDefaultInstance();
  OperationSetMetadata::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_chain_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_chain_2eproto {
  StaticDescriptorInitializer_chain_2eproto() {
    protobuf_AddDesc_chain_2eproto();
  }
} static_descriptor_initializer_chain_2eproto_;
const ::google::protobuf::EnumDescriptor* Limit_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Limit_descriptor_;
}
bool Limit_IsValid(int value) {
  switch(value) {
    case 0:
    case 100:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Account::kAddressFieldNumber;
const int Account::kNonceFieldNumber;
const int Account::kPrivFieldNumber;
const int Account::kMetadatasHashFieldNumber;
const int Account::kAssetsHashFieldNumber;
const int Account::kContractFieldNumber;
const int Account::kBalanceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Account::Account()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Account)
}

void Account::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  priv_ = const_cast< ::protocol::AccountPrivilege*>(&::protocol::AccountPrivilege::default_instance());
  contract_ = const_cast< ::protocol::Contract*>(&::protocol::Contract::default_instance());
}

Account::Account(const Account& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Account)
}

void Account::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nonce_ = GOOGLE_LONGLONG(0);
  priv_ = NULL;
  metadatas_hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  assets_hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  contract_ = NULL;
  balance_ = GOOGLE_LONGLONG(0);
}

Account::~Account() {
  // @@protoc_insertion_point(destructor:protocol.Account)
  SharedDtor();
}

void Account::SharedDtor() {
  address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  metadatas_hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  assets_hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete priv_;
    delete contract_;
  }
}

void Account::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Account::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Account_descriptor_;
}

const Account& Account::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

Account* Account::default_instance_ = NULL;

Account* Account::New(::google::protobuf::Arena* arena) const {
  Account* n = new Account;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Account::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Account)
  address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nonce_ = GOOGLE_LONGLONG(0);
  if (GetArenaNoVirtual() == NULL && priv_ != NULL) delete priv_;
  priv_ = NULL;
  metadatas_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  assets_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && contract_ != NULL) delete contract_;
  contract_ = NULL;
  balance_ = GOOGLE_LONGLONG(0);
}

bool Account::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Account)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string address = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->address().data(), this->address().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.Account.address"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_nonce;
        break;
      }

      // optional int64 nonce = 2;
      case 2: {
        if (tag == 16) {
         parse_nonce:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &nonce_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_priv;
        break;
      }

      // optional .protocol.AccountPrivilege priv = 3;
      case 3: {
        if (tag == 26) {
         parse_priv:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_priv()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_metadatas_hash;
        break;
      }

      // optional bytes metadatas_hash = 4;
      case 4: {
        if (tag == 34) {
         parse_metadatas_hash:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_metadatas_hash()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_assets_hash;
        break;
      }

      // optional bytes assets_hash = 5;
      case 5: {
        if (tag == 42) {
         parse_assets_hash:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_assets_hash()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_contract;
        break;
      }

      // optional .protocol.Contract contract = 6;
      case 6: {
        if (tag == 50) {
         parse_contract:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_contract()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_balance;
        break;
      }

      // optional int64 balance = 7;
      case 7: {
        if (tag == 56) {
         parse_balance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &balance_)));

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
  // @@protoc_insertion_point(parse_success:protocol.Account)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Account)
  return false;
#undef DO_
}

void Account::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Account)
  // optional string address = 1;
  if (this->address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->address().data(), this->address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Account.address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->address(), output);
  }

  // optional int64 nonce = 2;
  if (this->nonce() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->nonce(), output);
  }

  // optional .protocol.AccountPrivilege priv = 3;
  if (this->has_priv()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->priv_, output);
  }

  // optional bytes metadatas_hash = 4;
  if (this->metadatas_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->metadatas_hash(), output);
  }

  // optional bytes assets_hash = 5;
  if (this->assets_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      5, this->assets_hash(), output);
  }

  // optional .protocol.Contract contract = 6;
  if (this->has_contract()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *this->contract_, output);
  }

  // optional int64 balance = 7;
  if (this->balance() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(7, this->balance(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Account)
}

::google::protobuf::uint8* Account::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Account)
  // optional string address = 1;
  if (this->address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->address().data(), this->address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Account.address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->address(), target);
  }

  // optional int64 nonce = 2;
  if (this->nonce() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->nonce(), target);
  }

  // optional .protocol.AccountPrivilege priv = 3;
  if (this->has_priv()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->priv_, false, target);
  }

  // optional bytes metadatas_hash = 4;
  if (this->metadatas_hash().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->metadatas_hash(), target);
  }

  // optional bytes assets_hash = 5;
  if (this->assets_hash().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->assets_hash(), target);
  }

  // optional .protocol.Contract contract = 6;
  if (this->has_contract()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *this->contract_, false, target);
  }

  // optional int64 balance = 7;
  if (this->balance() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(7, this->balance(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Account)
  return target;
}

int Account::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Account)
  int total_size = 0;

  // optional string address = 1;
  if (this->address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->address());
  }

  // optional int64 nonce = 2;
  if (this->nonce() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->nonce());
  }

  // optional .protocol.AccountPrivilege priv = 3;
  if (this->has_priv()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->priv_);
  }

  // optional bytes metadatas_hash = 4;
  if (this->metadatas_hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->metadatas_hash());
  }

  // optional bytes assets_hash = 5;
  if (this->assets_hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->assets_hash());
  }

  // optional .protocol.Contract contract = 6;
  if (this->has_contract()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->contract_);
  }

  // optional int64 balance = 7;
  if (this->balance() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->balance());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Account::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Account)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Account* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Account>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Account)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Account)
    MergeFrom(*source);
  }
}

void Account::MergeFrom(const Account& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Account)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.address().size() > 0) {

    address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.address_);
  }
  if (from.nonce() != 0) {
    set_nonce(from.nonce());
  }
  if (from.has_priv()) {
    mutable_priv()->::protocol::AccountPrivilege::MergeFrom(from.priv());
  }
  if (from.metadatas_hash().size() > 0) {

    metadatas_hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.metadatas_hash_);
  }
  if (from.assets_hash().size() > 0) {

    assets_hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.assets_hash_);
  }
  if (from.has_contract()) {
    mutable_contract()->::protocol::Contract::MergeFrom(from.contract());
  }
  if (from.balance() != 0) {
    set_balance(from.balance());
  }
}

void Account::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Account)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Account::CopyFrom(const Account& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Account)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Account::IsInitialized() const {

  return true;
}

void Account::Swap(Account* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Account::InternalSwap(Account* other) {
  address_.Swap(&other->address_);
  std::swap(nonce_, other->nonce_);
  std::swap(priv_, other->priv_);
  metadatas_hash_.Swap(&other->metadatas_hash_);
  assets_hash_.Swap(&other->assets_hash_);
  std::swap(contract_, other->contract_);
  std::swap(balance_, other->balance_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Account::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Account_descriptor_;
  metadata.reflection = Account_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Account

// optional string address = 1;
void Account::clear_address() {
  address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Account::address() const {
  // @@protoc_insertion_point(field_get:protocol.Account.address)
  return address_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Account::set_address(const ::std::string& value) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Account.address)
}
 void Account::set_address(const char* value) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Account.address)
}
 void Account::set_address(const char* value, size_t size) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Account.address)
}
 ::std::string* Account::mutable_address() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Account.address)
  return address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Account::release_address() {
  // @@protoc_insertion_point(field_release:protocol.Account.address)
  
  return address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Account::set_allocated_address(::std::string* address) {
  if (address != NULL) {
    
  } else {
    
  }
  address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), address);
  // @@protoc_insertion_point(field_set_allocated:protocol.Account.address)
}

// optional int64 nonce = 2;
void Account::clear_nonce() {
  nonce_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Account::nonce() const {
  // @@protoc_insertion_point(field_get:protocol.Account.nonce)
  return nonce_;
}
 void Account::set_nonce(::google::protobuf::int64 value) {
  
  nonce_ = value;
  // @@protoc_insertion_point(field_set:protocol.Account.nonce)
}

// optional .protocol.AccountPrivilege priv = 3;
bool Account::has_priv() const {
  return !_is_default_instance_ && priv_ != NULL;
}
void Account::clear_priv() {
  if (GetArenaNoVirtual() == NULL && priv_ != NULL) delete priv_;
  priv_ = NULL;
}
const ::protocol::AccountPrivilege& Account::priv() const {
  // @@protoc_insertion_point(field_get:protocol.Account.priv)
  return priv_ != NULL ? *priv_ : *default_instance_->priv_;
}
::protocol::AccountPrivilege* Account::mutable_priv() {
  
  if (priv_ == NULL) {
    priv_ = new ::protocol::AccountPrivilege;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Account.priv)
  return priv_;
}
::protocol::AccountPrivilege* Account::release_priv() {
  // @@protoc_insertion_point(field_release:protocol.Account.priv)
  
  ::protocol::AccountPrivilege* temp = priv_;
  priv_ = NULL;
  return temp;
}
void Account::set_allocated_priv(::protocol::AccountPrivilege* priv) {
  delete priv_;
  priv_ = priv;
  if (priv) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Account.priv)
}

// optional bytes metadatas_hash = 4;
void Account::clear_metadatas_hash() {
  metadatas_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Account::metadatas_hash() const {
  // @@protoc_insertion_point(field_get:protocol.Account.metadatas_hash)
  return metadatas_hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Account::set_metadatas_hash(const ::std::string& value) {
  
  metadatas_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Account.metadatas_hash)
}
 void Account::set_metadatas_hash(const char* value) {
  
  metadatas_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Account.metadatas_hash)
}
 void Account::set_metadatas_hash(const void* value, size_t size) {
  
  metadatas_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Account.metadatas_hash)
}
 ::std::string* Account::mutable_metadatas_hash() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Account.metadatas_hash)
  return metadatas_hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Account::release_metadatas_hash() {
  // @@protoc_insertion_point(field_release:protocol.Account.metadatas_hash)
  
  return metadatas_hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Account::set_allocated_metadatas_hash(::std::string* metadatas_hash) {
  if (metadatas_hash != NULL) {
    
  } else {
    
  }
  metadatas_hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), metadatas_hash);
  // @@protoc_insertion_point(field_set_allocated:protocol.Account.metadatas_hash)
}

// optional bytes assets_hash = 5;
void Account::clear_assets_hash() {
  assets_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Account::assets_hash() const {
  // @@protoc_insertion_point(field_get:protocol.Account.assets_hash)
  return assets_hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Account::set_assets_hash(const ::std::string& value) {
  
  assets_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Account.assets_hash)
}
 void Account::set_assets_hash(const char* value) {
  
  assets_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Account.assets_hash)
}
 void Account::set_assets_hash(const void* value, size_t size) {
  
  assets_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Account.assets_hash)
}
 ::std::string* Account::mutable_assets_hash() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Account.assets_hash)
  return assets_hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Account::release_assets_hash() {
  // @@protoc_insertion_point(field_release:protocol.Account.assets_hash)
  
  return assets_hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Account::set_allocated_assets_hash(::std::string* assets_hash) {
  if (assets_hash != NULL) {
    
  } else {
    
  }
  assets_hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), assets_hash);
  // @@protoc_insertion_point(field_set_allocated:protocol.Account.assets_hash)
}

// optional .protocol.Contract contract = 6;
bool Account::has_contract() const {
  return !_is_default_instance_ && contract_ != NULL;
}
void Account::clear_contract() {
  if (GetArenaNoVirtual() == NULL && contract_ != NULL) delete contract_;
  contract_ = NULL;
}
const ::protocol::Contract& Account::contract() const {
  // @@protoc_insertion_point(field_get:protocol.Account.contract)
  return contract_ != NULL ? *contract_ : *default_instance_->contract_;
}
::protocol::Contract* Account::mutable_contract() {
  
  if (contract_ == NULL) {
    contract_ = new ::protocol::Contract;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Account.contract)
  return contract_;
}
::protocol::Contract* Account::release_contract() {
  // @@protoc_insertion_point(field_release:protocol.Account.contract)
  
  ::protocol::Contract* temp = contract_;
  contract_ = NULL;
  return temp;
}
void Account::set_allocated_contract(::protocol::Contract* contract) {
  delete contract_;
  contract_ = contract;
  if (contract) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Account.contract)
}

// optional int64 balance = 7;
void Account::clear_balance() {
  balance_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Account::balance() const {
  // @@protoc_insertion_point(field_get:protocol.Account.balance)
  return balance_;
}
 void Account::set_balance(::google::protobuf::int64 value) {
  
  balance_ = value;
  // @@protoc_insertion_point(field_set:protocol.Account.balance)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AssetKey::kIssuerFieldNumber;
const int AssetKey::kCodeFieldNumber;
const int AssetKey::kTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AssetKey::AssetKey()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.AssetKey)
}

void AssetKey::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

AssetKey::AssetKey(const AssetKey& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.AssetKey)
}

void AssetKey::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  issuer_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_ = 0;
}

AssetKey::~AssetKey() {
  // @@protoc_insertion_point(destructor:protocol.AssetKey)
  SharedDtor();
}

void AssetKey::SharedDtor() {
  issuer_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  code_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void AssetKey::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AssetKey::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AssetKey_descriptor_;
}

const AssetKey& AssetKey::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

AssetKey* AssetKey::default_instance_ = NULL;

AssetKey* AssetKey::New(::google::protobuf::Arena* arena) const {
  AssetKey* n = new AssetKey;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AssetKey::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.AssetKey)
  issuer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_ = 0;
}

bool AssetKey::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.AssetKey)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string issuer = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_issuer()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->issuer().data(), this->issuer().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.AssetKey.issuer"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_code;
        break;
      }

      // optional string code = 2;
      case 2: {
        if (tag == 18) {
         parse_code:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_code()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->code().data(), this->code().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.AssetKey.code"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_type;
        break;
      }

      // optional int32 type = 3;
      case 3: {
        if (tag == 24) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));

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
  // @@protoc_insertion_point(parse_success:protocol.AssetKey)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.AssetKey)
  return false;
#undef DO_
}

void AssetKey::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.AssetKey)
  // optional string issuer = 1;
  if (this->issuer().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->issuer().data(), this->issuer().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.AssetKey.issuer");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->issuer(), output);
  }

  // optional string code = 2;
  if (this->code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->code().data(), this->code().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.AssetKey.code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->code(), output);
  }

  // optional int32 type = 3;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->type(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.AssetKey)
}

::google::protobuf::uint8* AssetKey::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.AssetKey)
  // optional string issuer = 1;
  if (this->issuer().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->issuer().data(), this->issuer().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.AssetKey.issuer");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->issuer(), target);
  }

  // optional string code = 2;
  if (this->code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->code().data(), this->code().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.AssetKey.code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->code(), target);
  }

  // optional int32 type = 3;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->type(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.AssetKey)
  return target;
}

int AssetKey::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.AssetKey)
  int total_size = 0;

  // optional string issuer = 1;
  if (this->issuer().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->issuer());
  }

  // optional string code = 2;
  if (this->code().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->code());
  }

  // optional int32 type = 3;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AssetKey::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.AssetKey)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const AssetKey* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AssetKey>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.AssetKey)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.AssetKey)
    MergeFrom(*source);
  }
}

void AssetKey::MergeFrom(const AssetKey& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.AssetKey)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.issuer().size() > 0) {

    issuer_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.issuer_);
  }
  if (from.code().size() > 0) {

    code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.code_);
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void AssetKey::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.AssetKey)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AssetKey::CopyFrom(const AssetKey& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.AssetKey)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AssetKey::IsInitialized() const {

  return true;
}

void AssetKey::Swap(AssetKey* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AssetKey::InternalSwap(AssetKey* other) {
  issuer_.Swap(&other->issuer_);
  code_.Swap(&other->code_);
  std::swap(type_, other->type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AssetKey::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AssetKey_descriptor_;
  metadata.reflection = AssetKey_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AssetKey

// optional string issuer = 1;
void AssetKey::clear_issuer() {
  issuer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& AssetKey::issuer() const {
  // @@protoc_insertion_point(field_get:protocol.AssetKey.issuer)
  return issuer_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AssetKey::set_issuer(const ::std::string& value) {
  
  issuer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.AssetKey.issuer)
}
 void AssetKey::set_issuer(const char* value) {
  
  issuer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.AssetKey.issuer)
}
 void AssetKey::set_issuer(const char* value, size_t size) {
  
  issuer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.AssetKey.issuer)
}
 ::std::string* AssetKey::mutable_issuer() {
  
  // @@protoc_insertion_point(field_mutable:protocol.AssetKey.issuer)
  return issuer_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* AssetKey::release_issuer() {
  // @@protoc_insertion_point(field_release:protocol.AssetKey.issuer)
  
  return issuer_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AssetKey::set_allocated_issuer(::std::string* issuer) {
  if (issuer != NULL) {
    
  } else {
    
  }
  issuer_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), issuer);
  // @@protoc_insertion_point(field_set_allocated:protocol.AssetKey.issuer)
}

// optional string code = 2;
void AssetKey::clear_code() {
  code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& AssetKey::code() const {
  // @@protoc_insertion_point(field_get:protocol.AssetKey.code)
  return code_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AssetKey::set_code(const ::std::string& value) {
  
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.AssetKey.code)
}
 void AssetKey::set_code(const char* value) {
  
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.AssetKey.code)
}
 void AssetKey::set_code(const char* value, size_t size) {
  
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.AssetKey.code)
}
 ::std::string* AssetKey::mutable_code() {
  
  // @@protoc_insertion_point(field_mutable:protocol.AssetKey.code)
  return code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* AssetKey::release_code() {
  // @@protoc_insertion_point(field_release:protocol.AssetKey.code)
  
  return code_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AssetKey::set_allocated_code(::std::string* code) {
  if (code != NULL) {
    
  } else {
    
  }
  code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), code);
  // @@protoc_insertion_point(field_set_allocated:protocol.AssetKey.code)
}

// optional int32 type = 3;
void AssetKey::clear_type() {
  type_ = 0;
}
 ::google::protobuf::int32 AssetKey::type() const {
  // @@protoc_insertion_point(field_get:protocol.AssetKey.type)
  return type_;
}
 void AssetKey::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:protocol.AssetKey.type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Asset::kKeyFieldNumber;
const int Asset::kAmountFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Asset::Asset()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Asset)
}

void Asset::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  key_ = const_cast< ::protocol::AssetKey*>(&::protocol::AssetKey::default_instance());
}

Asset::Asset(const Asset& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Asset)
}

void Asset::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  key_ = NULL;
  amount_ = GOOGLE_LONGLONG(0);
}

Asset::~Asset() {
  // @@protoc_insertion_point(destructor:protocol.Asset)
  SharedDtor();
}

void Asset::SharedDtor() {
  if (this != default_instance_) {
    delete key_;
  }
}

void Asset::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Asset::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Asset_descriptor_;
}

const Asset& Asset::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

Asset* Asset::default_instance_ = NULL;

Asset* Asset::New(::google::protobuf::Arena* arena) const {
  Asset* n = new Asset;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Asset::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Asset)
  if (GetArenaNoVirtual() == NULL && key_ != NULL) delete key_;
  key_ = NULL;
  amount_ = GOOGLE_LONGLONG(0);
}

bool Asset::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Asset)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.AssetKey key = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_key()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_amount;
        break;
      }

      // optional int64 amount = 2;
      case 2: {
        if (tag == 16) {
         parse_amount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &amount_)));

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
  // @@protoc_insertion_point(parse_success:protocol.Asset)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Asset)
  return false;
#undef DO_
}

void Asset::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Asset)
  // optional .protocol.AssetKey key = 1;
  if (this->has_key()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->key_, output);
  }

  // optional int64 amount = 2;
  if (this->amount() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->amount(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Asset)
}

::google::protobuf::uint8* Asset::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Asset)
  // optional .protocol.AssetKey key = 1;
  if (this->has_key()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->key_, false, target);
  }

  // optional int64 amount = 2;
  if (this->amount() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->amount(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Asset)
  return target;
}

int Asset::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Asset)
  int total_size = 0;

  // optional .protocol.AssetKey key = 1;
  if (this->has_key()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->key_);
  }

  // optional int64 amount = 2;
  if (this->amount() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->amount());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Asset::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Asset)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Asset* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Asset>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Asset)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Asset)
    MergeFrom(*source);
  }
}

void Asset::MergeFrom(const Asset& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Asset)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_key()) {
    mutable_key()->::protocol::AssetKey::MergeFrom(from.key());
  }
  if (from.amount() != 0) {
    set_amount(from.amount());
  }
}

void Asset::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Asset)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Asset::CopyFrom(const Asset& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Asset)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Asset::IsInitialized() const {

  return true;
}

void Asset::Swap(Asset* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Asset::InternalSwap(Asset* other) {
  std::swap(key_, other->key_);
  std::swap(amount_, other->amount_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Asset::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Asset_descriptor_;
  metadata.reflection = Asset_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Asset

// optional .protocol.AssetKey key = 1;
bool Asset::has_key() const {
  return !_is_default_instance_ && key_ != NULL;
}
void Asset::clear_key() {
  if (GetArenaNoVirtual() == NULL && key_ != NULL) delete key_;
  key_ = NULL;
}
const ::protocol::AssetKey& Asset::key() const {
  // @@protoc_insertion_point(field_get:protocol.Asset.key)
  return key_ != NULL ? *key_ : *default_instance_->key_;
}
::protocol::AssetKey* Asset::mutable_key() {
  
  if (key_ == NULL) {
    key_ = new ::protocol::AssetKey;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Asset.key)
  return key_;
}
::protocol::AssetKey* Asset::release_key() {
  // @@protoc_insertion_point(field_release:protocol.Asset.key)
  
  ::protocol::AssetKey* temp = key_;
  key_ = NULL;
  return temp;
}
void Asset::set_allocated_key(::protocol::AssetKey* key) {
  delete key_;
  key_ = key;
  if (key) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Asset.key)
}

// optional int64 amount = 2;
void Asset::clear_amount() {
  amount_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Asset::amount() const {
  // @@protoc_insertion_point(field_get:protocol.Asset.amount)
  return amount_;
}
 void Asset::set_amount(::google::protobuf::int64 value) {
  
  amount_ = value;
  // @@protoc_insertion_point(field_set:protocol.Asset.amount)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AssetProperty::kDecimalFieldNumber;
const int AssetProperty::kDescriptionFieldNumber;
const int AssetProperty::kMaxSupplyFieldNumber;
const int AssetProperty::kIssuedAmountFieldNumber;
const int AssetProperty::kFeePercentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AssetProperty::AssetProperty()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.AssetProperty)
}

void AssetProperty::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

AssetProperty::AssetProperty(const AssetProperty& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.AssetProperty)
}

void AssetProperty::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  decimal_ = 0;
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  max_supply_ = GOOGLE_LONGLONG(0);
  issued_amount_ = GOOGLE_LONGLONG(0);
  fee_percent_ = 0;
}

AssetProperty::~AssetProperty() {
  // @@protoc_insertion_point(destructor:protocol.AssetProperty)
  SharedDtor();
}

void AssetProperty::SharedDtor() {
  description_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void AssetProperty::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AssetProperty::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AssetProperty_descriptor_;
}

const AssetProperty& AssetProperty::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

AssetProperty* AssetProperty::default_instance_ = NULL;

AssetProperty* AssetProperty::New(::google::protobuf::Arena* arena) const {
  AssetProperty* n = new AssetProperty;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AssetProperty::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.AssetProperty)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(AssetProperty, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<AssetProperty*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(max_supply_, issued_amount_);
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool AssetProperty::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.AssetProperty)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 decimal = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &decimal_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_description;
        break;
      }

      // optional string description = 2;
      case 2: {
        if (tag == 18) {
         parse_description:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->description().data(), this->description().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.AssetProperty.description"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_max_supply;
        break;
      }

      // optional int64 max_supply = 3;
      case 3: {
        if (tag == 24) {
         parse_max_supply:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &max_supply_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_issued_amount;
        break;
      }

      // optional int64 issued_amount = 4;
      case 4: {
        if (tag == 32) {
         parse_issued_amount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &issued_amount_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_fee_percent;
        break;
      }

      // optional int32 fee_percent = 5;
      case 5: {
        if (tag == 40) {
         parse_fee_percent:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &fee_percent_)));

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
  // @@protoc_insertion_point(parse_success:protocol.AssetProperty)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.AssetProperty)
  return false;
#undef DO_
}

void AssetProperty::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.AssetProperty)
  // optional int32 decimal = 1;
  if (this->decimal() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->decimal(), output);
  }

  // optional string description = 2;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), this->description().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.AssetProperty.description");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->description(), output);
  }

  // optional int64 max_supply = 3;
  if (this->max_supply() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->max_supply(), output);
  }

  // optional int64 issued_amount = 4;
  if (this->issued_amount() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->issued_amount(), output);
  }

  // optional int32 fee_percent = 5;
  if (this->fee_percent() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->fee_percent(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.AssetProperty)
}

::google::protobuf::uint8* AssetProperty::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.AssetProperty)
  // optional int32 decimal = 1;
  if (this->decimal() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->decimal(), target);
  }

  // optional string description = 2;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), this->description().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.AssetProperty.description");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->description(), target);
  }

  // optional int64 max_supply = 3;
  if (this->max_supply() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->max_supply(), target);
  }

  // optional int64 issued_amount = 4;
  if (this->issued_amount() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->issued_amount(), target);
  }

  // optional int32 fee_percent = 5;
  if (this->fee_percent() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->fee_percent(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.AssetProperty)
  return target;
}

int AssetProperty::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.AssetProperty)
  int total_size = 0;

  // optional int32 decimal = 1;
  if (this->decimal() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->decimal());
  }

  // optional string description = 2;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->description());
  }

  // optional int64 max_supply = 3;
  if (this->max_supply() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->max_supply());
  }

  // optional int64 issued_amount = 4;
  if (this->issued_amount() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->issued_amount());
  }

  // optional int32 fee_percent = 5;
  if (this->fee_percent() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->fee_percent());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AssetProperty::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.AssetProperty)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const AssetProperty* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AssetProperty>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.AssetProperty)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.AssetProperty)
    MergeFrom(*source);
  }
}

void AssetProperty::MergeFrom(const AssetProperty& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.AssetProperty)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.decimal() != 0) {
    set_decimal(from.decimal());
  }
  if (from.description().size() > 0) {

    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  if (from.max_supply() != 0) {
    set_max_supply(from.max_supply());
  }
  if (from.issued_amount() != 0) {
    set_issued_amount(from.issued_amount());
  }
  if (from.fee_percent() != 0) {
    set_fee_percent(from.fee_percent());
  }
}

void AssetProperty::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.AssetProperty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AssetProperty::CopyFrom(const AssetProperty& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.AssetProperty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AssetProperty::IsInitialized() const {

  return true;
}

void AssetProperty::Swap(AssetProperty* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AssetProperty::InternalSwap(AssetProperty* other) {
  std::swap(decimal_, other->decimal_);
  description_.Swap(&other->description_);
  std::swap(max_supply_, other->max_supply_);
  std::swap(issued_amount_, other->issued_amount_);
  std::swap(fee_percent_, other->fee_percent_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AssetProperty::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AssetProperty_descriptor_;
  metadata.reflection = AssetProperty_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AssetProperty

// optional int32 decimal = 1;
void AssetProperty::clear_decimal() {
  decimal_ = 0;
}
 ::google::protobuf::int32 AssetProperty::decimal() const {
  // @@protoc_insertion_point(field_get:protocol.AssetProperty.decimal)
  return decimal_;
}
 void AssetProperty::set_decimal(::google::protobuf::int32 value) {
  
  decimal_ = value;
  // @@protoc_insertion_point(field_set:protocol.AssetProperty.decimal)
}

// optional string description = 2;
void AssetProperty::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& AssetProperty::description() const {
  // @@protoc_insertion_point(field_get:protocol.AssetProperty.description)
  return description_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AssetProperty::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.AssetProperty.description)
}
 void AssetProperty::set_description(const char* value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.AssetProperty.description)
}
 void AssetProperty::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.AssetProperty.description)
}
 ::std::string* AssetProperty::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:protocol.AssetProperty.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* AssetProperty::release_description() {
  // @@protoc_insertion_point(field_release:protocol.AssetProperty.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AssetProperty::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:protocol.AssetProperty.description)
}

// optional int64 max_supply = 3;
void AssetProperty::clear_max_supply() {
  max_supply_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 AssetProperty::max_supply() const {
  // @@protoc_insertion_point(field_get:protocol.AssetProperty.max_supply)
  return max_supply_;
}
 void AssetProperty::set_max_supply(::google::protobuf::int64 value) {
  
  max_supply_ = value;
  // @@protoc_insertion_point(field_set:protocol.AssetProperty.max_supply)
}

// optional int64 issued_amount = 4;
void AssetProperty::clear_issued_amount() {
  issued_amount_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 AssetProperty::issued_amount() const {
  // @@protoc_insertion_point(field_get:protocol.AssetProperty.issued_amount)
  return issued_amount_;
}
 void AssetProperty::set_issued_amount(::google::protobuf::int64 value) {
  
  issued_amount_ = value;
  // @@protoc_insertion_point(field_set:protocol.AssetProperty.issued_amount)
}

// optional int32 fee_percent = 5;
void AssetProperty::clear_fee_percent() {
  fee_percent_ = 0;
}
 ::google::protobuf::int32 AssetProperty::fee_percent() const {
  // @@protoc_insertion_point(field_get:protocol.AssetProperty.fee_percent)
  return fee_percent_;
}
 void AssetProperty::set_fee_percent(::google::protobuf::int32 value) {
  
  fee_percent_ = value;
  // @@protoc_insertion_point(field_set:protocol.AssetProperty.fee_percent)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AssetStore::kKeyFieldNumber;
const int AssetStore::kAmountFieldNumber;
const int AssetStore::kPropertyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AssetStore::AssetStore()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.AssetStore)
}

void AssetStore::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  key_ = const_cast< ::protocol::AssetKey*>(&::protocol::AssetKey::default_instance());
  property_ = const_cast< ::protocol::AssetProperty*>(&::protocol::AssetProperty::default_instance());
}

AssetStore::AssetStore(const AssetStore& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.AssetStore)
}

void AssetStore::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  key_ = NULL;
  amount_ = GOOGLE_LONGLONG(0);
  property_ = NULL;
}

AssetStore::~AssetStore() {
  // @@protoc_insertion_point(destructor:protocol.AssetStore)
  SharedDtor();
}

void AssetStore::SharedDtor() {
  if (this != default_instance_) {
    delete key_;
    delete property_;
  }
}

void AssetStore::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AssetStore::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AssetStore_descriptor_;
}

const AssetStore& AssetStore::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

AssetStore* AssetStore::default_instance_ = NULL;

AssetStore* AssetStore::New(::google::protobuf::Arena* arena) const {
  AssetStore* n = new AssetStore;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AssetStore::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.AssetStore)
  if (GetArenaNoVirtual() == NULL && key_ != NULL) delete key_;
  key_ = NULL;
  amount_ = GOOGLE_LONGLONG(0);
  if (GetArenaNoVirtual() == NULL && property_ != NULL) delete property_;
  property_ = NULL;
}

bool AssetStore::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.AssetStore)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.AssetKey key = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_key()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_amount;
        break;
      }

      // optional int64 amount = 2;
      case 2: {
        if (tag == 16) {
         parse_amount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &amount_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_property;
        break;
      }

      // optional .protocol.AssetProperty property = 3;
      case 3: {
        if (tag == 26) {
         parse_property:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_property()));
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
  // @@protoc_insertion_point(parse_success:protocol.AssetStore)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.AssetStore)
  return false;
#undef DO_
}

void AssetStore::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.AssetStore)
  // optional .protocol.AssetKey key = 1;
  if (this->has_key()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->key_, output);
  }

  // optional int64 amount = 2;
  if (this->amount() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->amount(), output);
  }

  // optional .protocol.AssetProperty property = 3;
  if (this->has_property()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->property_, output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.AssetStore)
}

::google::protobuf::uint8* AssetStore::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.AssetStore)
  // optional .protocol.AssetKey key = 1;
  if (this->has_key()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->key_, false, target);
  }

  // optional int64 amount = 2;
  if (this->amount() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->amount(), target);
  }

  // optional .protocol.AssetProperty property = 3;
  if (this->has_property()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->property_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.AssetStore)
  return target;
}

int AssetStore::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.AssetStore)
  int total_size = 0;

  // optional .protocol.AssetKey key = 1;
  if (this->has_key()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->key_);
  }

  // optional int64 amount = 2;
  if (this->amount() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->amount());
  }

  // optional .protocol.AssetProperty property = 3;
  if (this->has_property()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->property_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AssetStore::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.AssetStore)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const AssetStore* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AssetStore>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.AssetStore)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.AssetStore)
    MergeFrom(*source);
  }
}

void AssetStore::MergeFrom(const AssetStore& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.AssetStore)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_key()) {
    mutable_key()->::protocol::AssetKey::MergeFrom(from.key());
  }
  if (from.amount() != 0) {
    set_amount(from.amount());
  }
  if (from.has_property()) {
    mutable_property()->::protocol::AssetProperty::MergeFrom(from.property());
  }
}

void AssetStore::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.AssetStore)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AssetStore::CopyFrom(const AssetStore& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.AssetStore)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AssetStore::IsInitialized() const {

  return true;
}

void AssetStore::Swap(AssetStore* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AssetStore::InternalSwap(AssetStore* other) {
  std::swap(key_, other->key_);
  std::swap(amount_, other->amount_);
  std::swap(property_, other->property_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AssetStore::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AssetStore_descriptor_;
  metadata.reflection = AssetStore_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AssetStore

// optional .protocol.AssetKey key = 1;
bool AssetStore::has_key() const {
  return !_is_default_instance_ && key_ != NULL;
}
void AssetStore::clear_key() {
  if (GetArenaNoVirtual() == NULL && key_ != NULL) delete key_;
  key_ = NULL;
}
const ::protocol::AssetKey& AssetStore::key() const {
  // @@protoc_insertion_point(field_get:protocol.AssetStore.key)
  return key_ != NULL ? *key_ : *default_instance_->key_;
}
::protocol::AssetKey* AssetStore::mutable_key() {
  
  if (key_ == NULL) {
    key_ = new ::protocol::AssetKey;
  }
  // @@protoc_insertion_point(field_mutable:protocol.AssetStore.key)
  return key_;
}
::protocol::AssetKey* AssetStore::release_key() {
  // @@protoc_insertion_point(field_release:protocol.AssetStore.key)
  
  ::protocol::AssetKey* temp = key_;
  key_ = NULL;
  return temp;
}
void AssetStore::set_allocated_key(::protocol::AssetKey* key) {
  delete key_;
  key_ = key;
  if (key) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.AssetStore.key)
}

// optional int64 amount = 2;
void AssetStore::clear_amount() {
  amount_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 AssetStore::amount() const {
  // @@protoc_insertion_point(field_get:protocol.AssetStore.amount)
  return amount_;
}
 void AssetStore::set_amount(::google::protobuf::int64 value) {
  
  amount_ = value;
  // @@protoc_insertion_point(field_set:protocol.AssetStore.amount)
}

// optional .protocol.AssetProperty property = 3;
bool AssetStore::has_property() const {
  return !_is_default_instance_ && property_ != NULL;
}
void AssetStore::clear_property() {
  if (GetArenaNoVirtual() == NULL && property_ != NULL) delete property_;
  property_ = NULL;
}
const ::protocol::AssetProperty& AssetStore::property() const {
  // @@protoc_insertion_point(field_get:protocol.AssetStore.property)
  return property_ != NULL ? *property_ : *default_instance_->property_;
}
::protocol::AssetProperty* AssetStore::mutable_property() {
  
  if (property_ == NULL) {
    property_ = new ::protocol::AssetProperty;
  }
  // @@protoc_insertion_point(field_mutable:protocol.AssetStore.property)
  return property_;
}
::protocol::AssetProperty* AssetStore::release_property() {
  // @@protoc_insertion_point(field_release:protocol.AssetStore.property)
  
  ::protocol::AssetProperty* temp = property_;
  property_ = NULL;
  return temp;
}
void AssetStore::set_allocated_property(::protocol::AssetProperty* property) {
  delete property_;
  property_ = property;
  if (property) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.AssetStore.property)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LedgerHeader::kSeqFieldNumber;
const int LedgerHeader::kHashFieldNumber;
const int LedgerHeader::kPreviousHashFieldNumber;
const int LedgerHeader::kAccountTreeHashFieldNumber;
const int LedgerHeader::kCloseTimeFieldNumber;
const int LedgerHeader::kConsensusValueHashFieldNumber;
const int LedgerHeader::kVersionFieldNumber;
const int LedgerHeader::kTxCountFieldNumber;
const int LedgerHeader::kValidatorsHashFieldNumber;
const int LedgerHeader::kFeesHashFieldNumber;
const int LedgerHeader::kReserveFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LedgerHeader::LedgerHeader()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.LedgerHeader)
}

void LedgerHeader::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

LedgerHeader::LedgerHeader(const LedgerHeader& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.LedgerHeader)
}

void LedgerHeader::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  seq_ = GOOGLE_LONGLONG(0);
  hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  previous_hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  account_tree_hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  close_time_ = GOOGLE_LONGLONG(0);
  consensus_value_hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = GOOGLE_LONGLONG(0);
  tx_count_ = GOOGLE_LONGLONG(0);
  validators_hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fees_hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  reserve_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

LedgerHeader::~LedgerHeader() {
  // @@protoc_insertion_point(destructor:protocol.LedgerHeader)
  SharedDtor();
}

void LedgerHeader::SharedDtor() {
  hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  previous_hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  account_tree_hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  consensus_value_hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  validators_hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fees_hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  reserve_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void LedgerHeader::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LedgerHeader::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LedgerHeader_descriptor_;
}

const LedgerHeader& LedgerHeader::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

LedgerHeader* LedgerHeader::default_instance_ = NULL;

LedgerHeader* LedgerHeader::New(::google::protobuf::Arena* arena) const {
  LedgerHeader* n = new LedgerHeader;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LedgerHeader::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.LedgerHeader)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(LedgerHeader, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<LedgerHeader*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(version_, tx_count_);
  seq_ = GOOGLE_LONGLONG(0);
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  previous_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  account_tree_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  close_time_ = GOOGLE_LONGLONG(0);
  consensus_value_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  validators_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fees_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  reserve_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool LedgerHeader::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.LedgerHeader)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 seq = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &seq_)));

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
        if (input->ExpectTag(26)) goto parse_previous_hash;
        break;
      }

      // optional bytes previous_hash = 3;
      case 3: {
        if (tag == 26) {
         parse_previous_hash:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_previous_hash()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_account_tree_hash;
        break;
      }

      // optional bytes account_tree_hash = 4;
      case 4: {
        if (tag == 34) {
         parse_account_tree_hash:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_account_tree_hash()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_close_time;
        break;
      }

      // optional int64 close_time = 5;
      case 5: {
        if (tag == 40) {
         parse_close_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &close_time_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_consensus_value_hash;
        break;
      }

      // optional bytes consensus_value_hash = 6;
      case 6: {
        if (tag == 50) {
         parse_consensus_value_hash:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_consensus_value_hash()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_version;
        break;
      }

      // optional int64 version = 7;
      case 7: {
        if (tag == 56) {
         parse_version:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &version_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(64)) goto parse_tx_count;
        break;
      }

      // optional int64 tx_count = 8;
      case 8: {
        if (tag == 64) {
         parse_tx_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &tx_count_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_validators_hash;
        break;
      }

      // optional bytes validators_hash = 9;
      case 9: {
        if (tag == 74) {
         parse_validators_hash:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_validators_hash()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(82)) goto parse_fees_hash;
        break;
      }

      // optional bytes fees_hash = 10;
      case 10: {
        if (tag == 82) {
         parse_fees_hash:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_fees_hash()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(90)) goto parse_reserve;
        break;
      }

      // optional string reserve = 11;
      case 11: {
        if (tag == 90) {
         parse_reserve:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_reserve()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->reserve().data(), this->reserve().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.LedgerHeader.reserve"));
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
  // @@protoc_insertion_point(parse_success:protocol.LedgerHeader)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.LedgerHeader)
  return false;
#undef DO_
}

void LedgerHeader::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.LedgerHeader)
  // optional int64 seq = 1;
  if (this->seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->seq(), output);
  }

  // optional bytes hash = 2;
  if (this->hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->hash(), output);
  }

  // optional bytes previous_hash = 3;
  if (this->previous_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->previous_hash(), output);
  }

  // optional bytes account_tree_hash = 4;
  if (this->account_tree_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->account_tree_hash(), output);
  }

  // optional int64 close_time = 5;
  if (this->close_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->close_time(), output);
  }

  // optional bytes consensus_value_hash = 6;
  if (this->consensus_value_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      6, this->consensus_value_hash(), output);
  }

  // optional int64 version = 7;
  if (this->version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(7, this->version(), output);
  }

  // optional int64 tx_count = 8;
  if (this->tx_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(8, this->tx_count(), output);
  }

  // optional bytes validators_hash = 9;
  if (this->validators_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      9, this->validators_hash(), output);
  }

  // optional bytes fees_hash = 10;
  if (this->fees_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      10, this->fees_hash(), output);
  }

  // optional string reserve = 11;
  if (this->reserve().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->reserve().data(), this->reserve().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.LedgerHeader.reserve");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->reserve(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.LedgerHeader)
}

::google::protobuf::uint8* LedgerHeader::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.LedgerHeader)
  // optional int64 seq = 1;
  if (this->seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->seq(), target);
  }

  // optional bytes hash = 2;
  if (this->hash().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->hash(), target);
  }

  // optional bytes previous_hash = 3;
  if (this->previous_hash().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->previous_hash(), target);
  }

  // optional bytes account_tree_hash = 4;
  if (this->account_tree_hash().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->account_tree_hash(), target);
  }

  // optional int64 close_time = 5;
  if (this->close_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->close_time(), target);
  }

  // optional bytes consensus_value_hash = 6;
  if (this->consensus_value_hash().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        6, this->consensus_value_hash(), target);
  }

  // optional int64 version = 7;
  if (this->version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(7, this->version(), target);
  }

  // optional int64 tx_count = 8;
  if (this->tx_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(8, this->tx_count(), target);
  }

  // optional bytes validators_hash = 9;
  if (this->validators_hash().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        9, this->validators_hash(), target);
  }

  // optional bytes fees_hash = 10;
  if (this->fees_hash().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        10, this->fees_hash(), target);
  }

  // optional string reserve = 11;
  if (this->reserve().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->reserve().data(), this->reserve().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.LedgerHeader.reserve");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->reserve(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.LedgerHeader)
  return target;
}

int LedgerHeader::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.LedgerHeader)
  int total_size = 0;

  // optional int64 seq = 1;
  if (this->seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->seq());
  }

  // optional bytes hash = 2;
  if (this->hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->hash());
  }

  // optional bytes previous_hash = 3;
  if (this->previous_hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->previous_hash());
  }

  // optional bytes account_tree_hash = 4;
  if (this->account_tree_hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->account_tree_hash());
  }

  // optional int64 close_time = 5;
  if (this->close_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->close_time());
  }

  // optional bytes consensus_value_hash = 6;
  if (this->consensus_value_hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->consensus_value_hash());
  }

  // optional int64 version = 7;
  if (this->version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->version());
  }

  // optional int64 tx_count = 8;
  if (this->tx_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->tx_count());
  }

  // optional bytes validators_hash = 9;
  if (this->validators_hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->validators_hash());
  }

  // optional bytes fees_hash = 10;
  if (this->fees_hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->fees_hash());
  }

  // optional string reserve = 11;
  if (this->reserve().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->reserve());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LedgerHeader::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.LedgerHeader)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const LedgerHeader* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const LedgerHeader>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.LedgerHeader)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.LedgerHeader)
    MergeFrom(*source);
  }
}

void LedgerHeader::MergeFrom(const LedgerHeader& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.LedgerHeader)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.seq() != 0) {
    set_seq(from.seq());
  }
  if (from.hash().size() > 0) {

    hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.hash_);
  }
  if (from.previous_hash().size() > 0) {

    previous_hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.previous_hash_);
  }
  if (from.account_tree_hash().size() > 0) {

    account_tree_hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.account_tree_hash_);
  }
  if (from.close_time() != 0) {
    set_close_time(from.close_time());
  }
  if (from.consensus_value_hash().size() > 0) {

    consensus_value_hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.consensus_value_hash_);
  }
  if (from.version() != 0) {
    set_version(from.version());
  }
  if (from.tx_count() != 0) {
    set_tx_count(from.tx_count());
  }
  if (from.validators_hash().size() > 0) {

    validators_hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.validators_hash_);
  }
  if (from.fees_hash().size() > 0) {

    fees_hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.fees_hash_);
  }
  if (from.reserve().size() > 0) {

    reserve_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.reserve_);
  }
}

void LedgerHeader::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.LedgerHeader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LedgerHeader::CopyFrom(const LedgerHeader& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.LedgerHeader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LedgerHeader::IsInitialized() const {

  return true;
}

void LedgerHeader::Swap(LedgerHeader* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LedgerHeader::InternalSwap(LedgerHeader* other) {
  std::swap(seq_, other->seq_);
  hash_.Swap(&other->hash_);
  previous_hash_.Swap(&other->previous_hash_);
  account_tree_hash_.Swap(&other->account_tree_hash_);
  std::swap(close_time_, other->close_time_);
  consensus_value_hash_.Swap(&other->consensus_value_hash_);
  std::swap(version_, other->version_);
  std::swap(tx_count_, other->tx_count_);
  validators_hash_.Swap(&other->validators_hash_);
  fees_hash_.Swap(&other->fees_hash_);
  reserve_.Swap(&other->reserve_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LedgerHeader::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LedgerHeader_descriptor_;
  metadata.reflection = LedgerHeader_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LedgerHeader

// optional int64 seq = 1;
void LedgerHeader::clear_seq() {
  seq_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 LedgerHeader::seq() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerHeader.seq)
  return seq_;
}
 void LedgerHeader::set_seq(::google::protobuf::int64 value) {
  
  seq_ = value;
  // @@protoc_insertion_point(field_set:protocol.LedgerHeader.seq)
}

// optional bytes hash = 2;
void LedgerHeader::clear_hash() {
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& LedgerHeader::hash() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerHeader.hash)
  return hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerHeader::set_hash(const ::std::string& value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.LedgerHeader.hash)
}
 void LedgerHeader::set_hash(const char* value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.LedgerHeader.hash)
}
 void LedgerHeader::set_hash(const void* value, size_t size) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.LedgerHeader.hash)
}
 ::std::string* LedgerHeader::mutable_hash() {
  
  // @@protoc_insertion_point(field_mutable:protocol.LedgerHeader.hash)
  return hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LedgerHeader::release_hash() {
  // @@protoc_insertion_point(field_release:protocol.LedgerHeader.hash)
  
  return hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerHeader::set_allocated_hash(::std::string* hash) {
  if (hash != NULL) {
    
  } else {
    
  }
  hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hash);
  // @@protoc_insertion_point(field_set_allocated:protocol.LedgerHeader.hash)
}

// optional bytes previous_hash = 3;
void LedgerHeader::clear_previous_hash() {
  previous_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& LedgerHeader::previous_hash() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerHeader.previous_hash)
  return previous_hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerHeader::set_previous_hash(const ::std::string& value) {
  
  previous_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.LedgerHeader.previous_hash)
}
 void LedgerHeader::set_previous_hash(const char* value) {
  
  previous_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.LedgerHeader.previous_hash)
}
 void LedgerHeader::set_previous_hash(const void* value, size_t size) {
  
  previous_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.LedgerHeader.previous_hash)
}
 ::std::string* LedgerHeader::mutable_previous_hash() {
  
  // @@protoc_insertion_point(field_mutable:protocol.LedgerHeader.previous_hash)
  return previous_hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LedgerHeader::release_previous_hash() {
  // @@protoc_insertion_point(field_release:protocol.LedgerHeader.previous_hash)
  
  return previous_hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerHeader::set_allocated_previous_hash(::std::string* previous_hash) {
  if (previous_hash != NULL) {
    
  } else {
    
  }
  previous_hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), previous_hash);
  // @@protoc_insertion_point(field_set_allocated:protocol.LedgerHeader.previous_hash)
}

// optional bytes account_tree_hash = 4;
void LedgerHeader::clear_account_tree_hash() {
  account_tree_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& LedgerHeader::account_tree_hash() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerHeader.account_tree_hash)
  return account_tree_hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerHeader::set_account_tree_hash(const ::std::string& value) {
  
  account_tree_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.LedgerHeader.account_tree_hash)
}
 void LedgerHeader::set_account_tree_hash(const char* value) {
  
  account_tree_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.LedgerHeader.account_tree_hash)
}
 void LedgerHeader::set_account_tree_hash(const void* value, size_t size) {
  
  account_tree_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.LedgerHeader.account_tree_hash)
}
 ::std::string* LedgerHeader::mutable_account_tree_hash() {
  
  // @@protoc_insertion_point(field_mutable:protocol.LedgerHeader.account_tree_hash)
  return account_tree_hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LedgerHeader::release_account_tree_hash() {
  // @@protoc_insertion_point(field_release:protocol.LedgerHeader.account_tree_hash)
  
  return account_tree_hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerHeader::set_allocated_account_tree_hash(::std::string* account_tree_hash) {
  if (account_tree_hash != NULL) {
    
  } else {
    
  }
  account_tree_hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), account_tree_hash);
  // @@protoc_insertion_point(field_set_allocated:protocol.LedgerHeader.account_tree_hash)
}

// optional int64 close_time = 5;
void LedgerHeader::clear_close_time() {
  close_time_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 LedgerHeader::close_time() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerHeader.close_time)
  return close_time_;
}
 void LedgerHeader::set_close_time(::google::protobuf::int64 value) {
  
  close_time_ = value;
  // @@protoc_insertion_point(field_set:protocol.LedgerHeader.close_time)
}

// optional bytes consensus_value_hash = 6;
void LedgerHeader::clear_consensus_value_hash() {
  consensus_value_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& LedgerHeader::consensus_value_hash() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerHeader.consensus_value_hash)
  return consensus_value_hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerHeader::set_consensus_value_hash(const ::std::string& value) {
  
  consensus_value_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.LedgerHeader.consensus_value_hash)
}
 void LedgerHeader::set_consensus_value_hash(const char* value) {
  
  consensus_value_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.LedgerHeader.consensus_value_hash)
}
 void LedgerHeader::set_consensus_value_hash(const void* value, size_t size) {
  
  consensus_value_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.LedgerHeader.consensus_value_hash)
}
 ::std::string* LedgerHeader::mutable_consensus_value_hash() {
  
  // @@protoc_insertion_point(field_mutable:protocol.LedgerHeader.consensus_value_hash)
  return consensus_value_hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LedgerHeader::release_consensus_value_hash() {
  // @@protoc_insertion_point(field_release:protocol.LedgerHeader.consensus_value_hash)
  
  return consensus_value_hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerHeader::set_allocated_consensus_value_hash(::std::string* consensus_value_hash) {
  if (consensus_value_hash != NULL) {
    
  } else {
    
  }
  consensus_value_hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), consensus_value_hash);
  // @@protoc_insertion_point(field_set_allocated:protocol.LedgerHeader.consensus_value_hash)
}

// optional int64 version = 7;
void LedgerHeader::clear_version() {
  version_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 LedgerHeader::version() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerHeader.version)
  return version_;
}
 void LedgerHeader::set_version(::google::protobuf::int64 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:protocol.LedgerHeader.version)
}

// optional int64 tx_count = 8;
void LedgerHeader::clear_tx_count() {
  tx_count_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 LedgerHeader::tx_count() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerHeader.tx_count)
  return tx_count_;
}
 void LedgerHeader::set_tx_count(::google::protobuf::int64 value) {
  
  tx_count_ = value;
  // @@protoc_insertion_point(field_set:protocol.LedgerHeader.tx_count)
}

// optional bytes validators_hash = 9;
void LedgerHeader::clear_validators_hash() {
  validators_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& LedgerHeader::validators_hash() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerHeader.validators_hash)
  return validators_hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerHeader::set_validators_hash(const ::std::string& value) {
  
  validators_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.LedgerHeader.validators_hash)
}
 void LedgerHeader::set_validators_hash(const char* value) {
  
  validators_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.LedgerHeader.validators_hash)
}
 void LedgerHeader::set_validators_hash(const void* value, size_t size) {
  
  validators_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.LedgerHeader.validators_hash)
}
 ::std::string* LedgerHeader::mutable_validators_hash() {
  
  // @@protoc_insertion_point(field_mutable:protocol.LedgerHeader.validators_hash)
  return validators_hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LedgerHeader::release_validators_hash() {
  // @@protoc_insertion_point(field_release:protocol.LedgerHeader.validators_hash)
  
  return validators_hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerHeader::set_allocated_validators_hash(::std::string* validators_hash) {
  if (validators_hash != NULL) {
    
  } else {
    
  }
  validators_hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), validators_hash);
  // @@protoc_insertion_point(field_set_allocated:protocol.LedgerHeader.validators_hash)
}

// optional bytes fees_hash = 10;
void LedgerHeader::clear_fees_hash() {
  fees_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& LedgerHeader::fees_hash() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerHeader.fees_hash)
  return fees_hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerHeader::set_fees_hash(const ::std::string& value) {
  
  fees_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.LedgerHeader.fees_hash)
}
 void LedgerHeader::set_fees_hash(const char* value) {
  
  fees_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.LedgerHeader.fees_hash)
}
 void LedgerHeader::set_fees_hash(const void* value, size_t size) {
  
  fees_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.LedgerHeader.fees_hash)
}
 ::std::string* LedgerHeader::mutable_fees_hash() {
  
  // @@protoc_insertion_point(field_mutable:protocol.LedgerHeader.fees_hash)
  return fees_hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LedgerHeader::release_fees_hash() {
  // @@protoc_insertion_point(field_release:protocol.LedgerHeader.fees_hash)
  
  return fees_hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerHeader::set_allocated_fees_hash(::std::string* fees_hash) {
  if (fees_hash != NULL) {
    
  } else {
    
  }
  fees_hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), fees_hash);
  // @@protoc_insertion_point(field_set_allocated:protocol.LedgerHeader.fees_hash)
}

// optional string reserve = 11;
void LedgerHeader::clear_reserve() {
  reserve_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& LedgerHeader::reserve() const {
  // @@protoc_insertion_point(field_get:protocol.LedgerHeader.reserve)
  return reserve_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerHeader::set_reserve(const ::std::string& value) {
  
  reserve_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.LedgerHeader.reserve)
}
 void LedgerHeader::set_reserve(const char* value) {
  
  reserve_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.LedgerHeader.reserve)
}
 void LedgerHeader::set_reserve(const char* value, size_t size) {
  
  reserve_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.LedgerHeader.reserve)
}
 ::std::string* LedgerHeader::mutable_reserve() {
  
  // @@protoc_insertion_point(field_mutable:protocol.LedgerHeader.reserve)
  return reserve_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LedgerHeader::release_reserve() {
  // @@protoc_insertion_point(field_release:protocol.LedgerHeader.reserve)
  
  return reserve_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LedgerHeader::set_allocated_reserve(::std::string* reserve) {
  if (reserve != NULL) {
    
  } else {
    
  }
  reserve_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), reserve);
  // @@protoc_insertion_point(field_set_allocated:protocol.LedgerHeader.reserve)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Ledger::kHeaderFieldNumber;
const int Ledger::kTransactionEnvsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Ledger::Ledger()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Ledger)
}

void Ledger::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  header_ = const_cast< ::protocol::LedgerHeader*>(&::protocol::LedgerHeader::default_instance());
}

Ledger::Ledger(const Ledger& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Ledger)
}

void Ledger::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  header_ = NULL;
}

Ledger::~Ledger() {
  // @@protoc_insertion_point(destructor:protocol.Ledger)
  SharedDtor();
}

void Ledger::SharedDtor() {
  if (this != default_instance_) {
    delete header_;
  }
}

void Ledger::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Ledger::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Ledger_descriptor_;
}

const Ledger& Ledger::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

Ledger* Ledger::default_instance_ = NULL;

Ledger* Ledger::New(::google::protobuf::Arena* arena) const {
  Ledger* n = new Ledger;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Ledger::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Ledger)
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
  transaction_envs_.Clear();
}

bool Ledger::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Ledger)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.LedgerHeader header = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_transaction_envs;
        break;
      }

      // repeated .protocol.TransactionEnv transaction_envs = 2;
      case 2: {
        if (tag == 18) {
         parse_transaction_envs:
          DO_(input->IncrementRecursionDepth());
         parse_loop_transaction_envs:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_transaction_envs()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_transaction_envs;
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
  // @@protoc_insertion_point(parse_success:protocol.Ledger)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Ledger)
  return false;
#undef DO_
}

void Ledger::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Ledger)
  // optional .protocol.LedgerHeader header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->header_, output);
  }

  // repeated .protocol.TransactionEnv transaction_envs = 2;
  for (unsigned int i = 0, n = this->transaction_envs_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->transaction_envs(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Ledger)
}

::google::protobuf::uint8* Ledger::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Ledger)
  // optional .protocol.LedgerHeader header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->header_, false, target);
  }

  // repeated .protocol.TransactionEnv transaction_envs = 2;
  for (unsigned int i = 0, n = this->transaction_envs_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->transaction_envs(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Ledger)
  return target;
}

int Ledger::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Ledger)
  int total_size = 0;

  // optional .protocol.LedgerHeader header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->header_);
  }

  // repeated .protocol.TransactionEnv transaction_envs = 2;
  total_size += 1 * this->transaction_envs_size();
  for (int i = 0; i < this->transaction_envs_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->transaction_envs(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Ledger::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Ledger)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Ledger* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Ledger>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Ledger)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Ledger)
    MergeFrom(*source);
  }
}

void Ledger::MergeFrom(const Ledger& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Ledger)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  transaction_envs_.MergeFrom(from.transaction_envs_);
  if (from.has_header()) {
    mutable_header()->::protocol::LedgerHeader::MergeFrom(from.header());
  }
}

void Ledger::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Ledger)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Ledger::CopyFrom(const Ledger& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Ledger)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Ledger::IsInitialized() const {

  return true;
}

void Ledger::Swap(Ledger* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Ledger::InternalSwap(Ledger* other) {
  std::swap(header_, other->header_);
  transaction_envs_.UnsafeArenaSwap(&other->transaction_envs_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Ledger::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Ledger_descriptor_;
  metadata.reflection = Ledger_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Ledger

// optional .protocol.LedgerHeader header = 1;
bool Ledger::has_header() const {
  return !_is_default_instance_ && header_ != NULL;
}
void Ledger::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
}
const ::protocol::LedgerHeader& Ledger::header() const {
  // @@protoc_insertion_point(field_get:protocol.Ledger.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
::protocol::LedgerHeader* Ledger::mutable_header() {
  
  if (header_ == NULL) {
    header_ = new ::protocol::LedgerHeader;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Ledger.header)
  return header_;
}
::protocol::LedgerHeader* Ledger::release_header() {
  // @@protoc_insertion_point(field_release:protocol.Ledger.header)
  
  ::protocol::LedgerHeader* temp = header_;
  header_ = NULL;
  return temp;
}
void Ledger::set_allocated_header(::protocol::LedgerHeader* header) {
  delete header_;
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Ledger.header)
}

// repeated .protocol.TransactionEnv transaction_envs = 2;
int Ledger::transaction_envs_size() const {
  return transaction_envs_.size();
}
void Ledger::clear_transaction_envs() {
  transaction_envs_.Clear();
}
const ::protocol::TransactionEnv& Ledger::transaction_envs(int index) const {
  // @@protoc_insertion_point(field_get:protocol.Ledger.transaction_envs)
  return transaction_envs_.Get(index);
}
::protocol::TransactionEnv* Ledger::mutable_transaction_envs(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.Ledger.transaction_envs)
  return transaction_envs_.Mutable(index);
}
::protocol::TransactionEnv* Ledger::add_transaction_envs() {
  // @@protoc_insertion_point(field_add:protocol.Ledger.transaction_envs)
  return transaction_envs_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::TransactionEnv >*
Ledger::mutable_transaction_envs() {
  // @@protoc_insertion_point(field_mutable_list:protocol.Ledger.transaction_envs)
  return &transaction_envs_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::TransactionEnv >&
Ledger::transaction_envs() const {
  // @@protoc_insertion_point(field_list:protocol.Ledger.transaction_envs)
  return transaction_envs_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationPayAsset::kDestAddressFieldNumber;
const int OperationPayAsset::kAssetFieldNumber;
const int OperationPayAsset::kInputFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationPayAsset::OperationPayAsset()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.OperationPayAsset)
}

void OperationPayAsset::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  asset_ = const_cast< ::protocol::Asset*>(&::protocol::Asset::default_instance());
}

OperationPayAsset::OperationPayAsset(const OperationPayAsset& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.OperationPayAsset)
}

void OperationPayAsset::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  dest_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  asset_ = NULL;
  input_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

OperationPayAsset::~OperationPayAsset() {
  // @@protoc_insertion_point(destructor:protocol.OperationPayAsset)
  SharedDtor();
}

void OperationPayAsset::SharedDtor() {
  dest_address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  input_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete asset_;
  }
}

void OperationPayAsset::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OperationPayAsset::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OperationPayAsset_descriptor_;
}

const OperationPayAsset& OperationPayAsset::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

OperationPayAsset* OperationPayAsset::default_instance_ = NULL;

OperationPayAsset* OperationPayAsset::New(::google::protobuf::Arena* arena) const {
  OperationPayAsset* n = new OperationPayAsset;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OperationPayAsset::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.OperationPayAsset)
  dest_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && asset_ != NULL) delete asset_;
  asset_ = NULL;
  input_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool OperationPayAsset::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.OperationPayAsset)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string dest_address = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_dest_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->dest_address().data(), this->dest_address().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.OperationPayAsset.dest_address"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_asset;
        break;
      }

      // optional .protocol.Asset asset = 2;
      case 2: {
        if (tag == 18) {
         parse_asset:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_asset()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_input;
        break;
      }

      // optional string input = 3;
      case 3: {
        if (tag == 26) {
         parse_input:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_input()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->input().data(), this->input().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.OperationPayAsset.input"));
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
  // @@protoc_insertion_point(parse_success:protocol.OperationPayAsset)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.OperationPayAsset)
  return false;
#undef DO_
}

void OperationPayAsset::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.OperationPayAsset)
  // optional string dest_address = 1;
  if (this->dest_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->dest_address().data(), this->dest_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationPayAsset.dest_address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->dest_address(), output);
  }

  // optional .protocol.Asset asset = 2;
  if (this->has_asset()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->asset_, output);
  }

  // optional string input = 3;
  if (this->input().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->input().data(), this->input().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationPayAsset.input");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->input(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.OperationPayAsset)
}

::google::protobuf::uint8* OperationPayAsset::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.OperationPayAsset)
  // optional string dest_address = 1;
  if (this->dest_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->dest_address().data(), this->dest_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationPayAsset.dest_address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->dest_address(), target);
  }

  // optional .protocol.Asset asset = 2;
  if (this->has_asset()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->asset_, false, target);
  }

  // optional string input = 3;
  if (this->input().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->input().data(), this->input().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationPayAsset.input");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->input(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.OperationPayAsset)
  return target;
}

int OperationPayAsset::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.OperationPayAsset)
  int total_size = 0;

  // optional string dest_address = 1;
  if (this->dest_address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->dest_address());
  }

  // optional .protocol.Asset asset = 2;
  if (this->has_asset()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->asset_);
  }

  // optional string input = 3;
  if (this->input().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->input());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OperationPayAsset::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.OperationPayAsset)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const OperationPayAsset* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const OperationPayAsset>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.OperationPayAsset)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.OperationPayAsset)
    MergeFrom(*source);
  }
}

void OperationPayAsset::MergeFrom(const OperationPayAsset& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.OperationPayAsset)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.dest_address().size() > 0) {

    dest_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.dest_address_);
  }
  if (from.has_asset()) {
    mutable_asset()->::protocol::Asset::MergeFrom(from.asset());
  }
  if (from.input().size() > 0) {

    input_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.input_);
  }
}

void OperationPayAsset::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.OperationPayAsset)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationPayAsset::CopyFrom(const OperationPayAsset& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.OperationPayAsset)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationPayAsset::IsInitialized() const {

  return true;
}

void OperationPayAsset::Swap(OperationPayAsset* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationPayAsset::InternalSwap(OperationPayAsset* other) {
  dest_address_.Swap(&other->dest_address_);
  std::swap(asset_, other->asset_);
  input_.Swap(&other->input_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OperationPayAsset::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OperationPayAsset_descriptor_;
  metadata.reflection = OperationPayAsset_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OperationPayAsset

// optional string dest_address = 1;
void OperationPayAsset::clear_dest_address() {
  dest_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& OperationPayAsset::dest_address() const {
  // @@protoc_insertion_point(field_get:protocol.OperationPayAsset.dest_address)
  return dest_address_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationPayAsset::set_dest_address(const ::std::string& value) {
  
  dest_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.OperationPayAsset.dest_address)
}
 void OperationPayAsset::set_dest_address(const char* value) {
  
  dest_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.OperationPayAsset.dest_address)
}
 void OperationPayAsset::set_dest_address(const char* value, size_t size) {
  
  dest_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.OperationPayAsset.dest_address)
}
 ::std::string* OperationPayAsset::mutable_dest_address() {
  
  // @@protoc_insertion_point(field_mutable:protocol.OperationPayAsset.dest_address)
  return dest_address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* OperationPayAsset::release_dest_address() {
  // @@protoc_insertion_point(field_release:protocol.OperationPayAsset.dest_address)
  
  return dest_address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationPayAsset::set_allocated_dest_address(::std::string* dest_address) {
  if (dest_address != NULL) {
    
  } else {
    
  }
  dest_address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), dest_address);
  // @@protoc_insertion_point(field_set_allocated:protocol.OperationPayAsset.dest_address)
}

// optional .protocol.Asset asset = 2;
bool OperationPayAsset::has_asset() const {
  return !_is_default_instance_ && asset_ != NULL;
}
void OperationPayAsset::clear_asset() {
  if (GetArenaNoVirtual() == NULL && asset_ != NULL) delete asset_;
  asset_ = NULL;
}
const ::protocol::Asset& OperationPayAsset::asset() const {
  // @@protoc_insertion_point(field_get:protocol.OperationPayAsset.asset)
  return asset_ != NULL ? *asset_ : *default_instance_->asset_;
}
::protocol::Asset* OperationPayAsset::mutable_asset() {
  
  if (asset_ == NULL) {
    asset_ = new ::protocol::Asset;
  }
  // @@protoc_insertion_point(field_mutable:protocol.OperationPayAsset.asset)
  return asset_;
}
::protocol::Asset* OperationPayAsset::release_asset() {
  // @@protoc_insertion_point(field_release:protocol.OperationPayAsset.asset)
  
  ::protocol::Asset* temp = asset_;
  asset_ = NULL;
  return temp;
}
void OperationPayAsset::set_allocated_asset(::protocol::Asset* asset) {
  delete asset_;
  asset_ = asset;
  if (asset) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.OperationPayAsset.asset)
}

// optional string input = 3;
void OperationPayAsset::clear_input() {
  input_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& OperationPayAsset::input() const {
  // @@protoc_insertion_point(field_get:protocol.OperationPayAsset.input)
  return input_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationPayAsset::set_input(const ::std::string& value) {
  
  input_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.OperationPayAsset.input)
}
 void OperationPayAsset::set_input(const char* value) {
  
  input_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.OperationPayAsset.input)
}
 void OperationPayAsset::set_input(const char* value, size_t size) {
  
  input_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.OperationPayAsset.input)
}
 ::std::string* OperationPayAsset::mutable_input() {
  
  // @@protoc_insertion_point(field_mutable:protocol.OperationPayAsset.input)
  return input_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* OperationPayAsset::release_input() {
  // @@protoc_insertion_point(field_release:protocol.OperationPayAsset.input)
  
  return input_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationPayAsset::set_allocated_input(::std::string* input) {
  if (input != NULL) {
    
  } else {
    
  }
  input_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), input);
  // @@protoc_insertion_point(field_set_allocated:protocol.OperationPayAsset.input)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationTypeThreshold::kTypeFieldNumber;
const int OperationTypeThreshold::kThresholdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationTypeThreshold::OperationTypeThreshold()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.OperationTypeThreshold)
}

void OperationTypeThreshold::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

OperationTypeThreshold::OperationTypeThreshold(const OperationTypeThreshold& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.OperationTypeThreshold)
}

void OperationTypeThreshold::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  type_ = 0;
  threshold_ = GOOGLE_LONGLONG(0);
}

OperationTypeThreshold::~OperationTypeThreshold() {
  // @@protoc_insertion_point(destructor:protocol.OperationTypeThreshold)
  SharedDtor();
}

void OperationTypeThreshold::SharedDtor() {
  if (this != default_instance_) {
  }
}

void OperationTypeThreshold::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OperationTypeThreshold::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OperationTypeThreshold_descriptor_;
}

const OperationTypeThreshold& OperationTypeThreshold::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

OperationTypeThreshold* OperationTypeThreshold::default_instance_ = NULL;

OperationTypeThreshold* OperationTypeThreshold::New(::google::protobuf::Arena* arena) const {
  OperationTypeThreshold* n = new OperationTypeThreshold;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OperationTypeThreshold::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.OperationTypeThreshold)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(OperationTypeThreshold, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<OperationTypeThreshold*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(threshold_, type_);

#undef ZR_HELPER_
#undef ZR_

}

bool OperationTypeThreshold::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.OperationTypeThreshold)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.Operation.Type type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::protocol::Operation_Type >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_threshold;
        break;
      }

      // optional int64 threshold = 2;
      case 2: {
        if (tag == 16) {
         parse_threshold:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &threshold_)));

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
  // @@protoc_insertion_point(parse_success:protocol.OperationTypeThreshold)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.OperationTypeThreshold)
  return false;
#undef DO_
}

void OperationTypeThreshold::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.OperationTypeThreshold)
  // optional .protocol.Operation.Type type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional int64 threshold = 2;
  if (this->threshold() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->threshold(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.OperationTypeThreshold)
}

::google::protobuf::uint8* OperationTypeThreshold::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.OperationTypeThreshold)
  // optional .protocol.Operation.Type type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional int64 threshold = 2;
  if (this->threshold() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->threshold(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.OperationTypeThreshold)
  return target;
}

int OperationTypeThreshold::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.OperationTypeThreshold)
  int total_size = 0;

  // optional .protocol.Operation.Type type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // optional int64 threshold = 2;
  if (this->threshold() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->threshold());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OperationTypeThreshold::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.OperationTypeThreshold)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const OperationTypeThreshold* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const OperationTypeThreshold>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.OperationTypeThreshold)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.OperationTypeThreshold)
    MergeFrom(*source);
  }
}

void OperationTypeThreshold::MergeFrom(const OperationTypeThreshold& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.OperationTypeThreshold)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.threshold() != 0) {
    set_threshold(from.threshold());
  }
}

void OperationTypeThreshold::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.OperationTypeThreshold)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationTypeThreshold::CopyFrom(const OperationTypeThreshold& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.OperationTypeThreshold)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationTypeThreshold::IsInitialized() const {

  return true;
}

void OperationTypeThreshold::Swap(OperationTypeThreshold* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationTypeThreshold::InternalSwap(OperationTypeThreshold* other) {
  std::swap(type_, other->type_);
  std::swap(threshold_, other->threshold_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OperationTypeThreshold::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OperationTypeThreshold_descriptor_;
  metadata.reflection = OperationTypeThreshold_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OperationTypeThreshold

// optional .protocol.Operation.Type type = 1;
void OperationTypeThreshold::clear_type() {
  type_ = 0;
}
 ::protocol::Operation_Type OperationTypeThreshold::type() const {
  // @@protoc_insertion_point(field_get:protocol.OperationTypeThreshold.type)
  return static_cast< ::protocol::Operation_Type >(type_);
}
 void OperationTypeThreshold::set_type(::protocol::Operation_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:protocol.OperationTypeThreshold.type)
}

// optional int64 threshold = 2;
void OperationTypeThreshold::clear_threshold() {
  threshold_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 OperationTypeThreshold::threshold() const {
  // @@protoc_insertion_point(field_get:protocol.OperationTypeThreshold.threshold)
  return threshold_;
}
 void OperationTypeThreshold::set_threshold(::google::protobuf::int64 value) {
  
  threshold_ = value;
  // @@protoc_insertion_point(field_set:protocol.OperationTypeThreshold.threshold)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AccountPrivilege::kMasterWeightFieldNumber;
const int AccountPrivilege::kSignersFieldNumber;
const int AccountPrivilege::kThresholdsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AccountPrivilege::AccountPrivilege()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.AccountPrivilege)
}

void AccountPrivilege::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  thresholds_ = const_cast< ::protocol::AccountThreshold*>(&::protocol::AccountThreshold::default_instance());
}

AccountPrivilege::AccountPrivilege(const AccountPrivilege& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.AccountPrivilege)
}

void AccountPrivilege::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  master_weight_ = GOOGLE_LONGLONG(0);
  thresholds_ = NULL;
}

AccountPrivilege::~AccountPrivilege() {
  // @@protoc_insertion_point(destructor:protocol.AccountPrivilege)
  SharedDtor();
}

void AccountPrivilege::SharedDtor() {
  if (this != default_instance_) {
    delete thresholds_;
  }
}

void AccountPrivilege::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AccountPrivilege::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AccountPrivilege_descriptor_;
}

const AccountPrivilege& AccountPrivilege::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

AccountPrivilege* AccountPrivilege::default_instance_ = NULL;

AccountPrivilege* AccountPrivilege::New(::google::protobuf::Arena* arena) const {
  AccountPrivilege* n = new AccountPrivilege;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AccountPrivilege::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.AccountPrivilege)
  master_weight_ = GOOGLE_LONGLONG(0);
  if (GetArenaNoVirtual() == NULL && thresholds_ != NULL) delete thresholds_;
  thresholds_ = NULL;
  signers_.Clear();
}

bool AccountPrivilege::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.AccountPrivilege)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 master_weight = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &master_weight_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_signers;
        break;
      }

      // repeated .protocol.Signer signers = 2;
      case 2: {
        if (tag == 18) {
         parse_signers:
          DO_(input->IncrementRecursionDepth());
         parse_loop_signers:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_signers()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_signers;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(26)) goto parse_thresholds;
        break;
      }

      // optional .protocol.AccountThreshold thresholds = 3;
      case 3: {
        if (tag == 26) {
         parse_thresholds:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_thresholds()));
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
  // @@protoc_insertion_point(parse_success:protocol.AccountPrivilege)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.AccountPrivilege)
  return false;
#undef DO_
}

void AccountPrivilege::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.AccountPrivilege)
  // optional int64 master_weight = 1;
  if (this->master_weight() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->master_weight(), output);
  }

  // repeated .protocol.Signer signers = 2;
  for (unsigned int i = 0, n = this->signers_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->signers(i), output);
  }

  // optional .protocol.AccountThreshold thresholds = 3;
  if (this->has_thresholds()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->thresholds_, output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.AccountPrivilege)
}

::google::protobuf::uint8* AccountPrivilege::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.AccountPrivilege)
  // optional int64 master_weight = 1;
  if (this->master_weight() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->master_weight(), target);
  }

  // repeated .protocol.Signer signers = 2;
  for (unsigned int i = 0, n = this->signers_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->signers(i), false, target);
  }

  // optional .protocol.AccountThreshold thresholds = 3;
  if (this->has_thresholds()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->thresholds_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.AccountPrivilege)
  return target;
}

int AccountPrivilege::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.AccountPrivilege)
  int total_size = 0;

  // optional int64 master_weight = 1;
  if (this->master_weight() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->master_weight());
  }

  // optional .protocol.AccountThreshold thresholds = 3;
  if (this->has_thresholds()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->thresholds_);
  }

  // repeated .protocol.Signer signers = 2;
  total_size += 1 * this->signers_size();
  for (int i = 0; i < this->signers_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->signers(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AccountPrivilege::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.AccountPrivilege)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const AccountPrivilege* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AccountPrivilege>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.AccountPrivilege)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.AccountPrivilege)
    MergeFrom(*source);
  }
}

void AccountPrivilege::MergeFrom(const AccountPrivilege& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.AccountPrivilege)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  signers_.MergeFrom(from.signers_);
  if (from.master_weight() != 0) {
    set_master_weight(from.master_weight());
  }
  if (from.has_thresholds()) {
    mutable_thresholds()->::protocol::AccountThreshold::MergeFrom(from.thresholds());
  }
}

void AccountPrivilege::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.AccountPrivilege)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AccountPrivilege::CopyFrom(const AccountPrivilege& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.AccountPrivilege)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AccountPrivilege::IsInitialized() const {

  return true;
}

void AccountPrivilege::Swap(AccountPrivilege* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AccountPrivilege::InternalSwap(AccountPrivilege* other) {
  std::swap(master_weight_, other->master_weight_);
  signers_.UnsafeArenaSwap(&other->signers_);
  std::swap(thresholds_, other->thresholds_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AccountPrivilege::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AccountPrivilege_descriptor_;
  metadata.reflection = AccountPrivilege_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AccountPrivilege

// optional int64 master_weight = 1;
void AccountPrivilege::clear_master_weight() {
  master_weight_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 AccountPrivilege::master_weight() const {
  // @@protoc_insertion_point(field_get:protocol.AccountPrivilege.master_weight)
  return master_weight_;
}
 void AccountPrivilege::set_master_weight(::google::protobuf::int64 value) {
  
  master_weight_ = value;
  // @@protoc_insertion_point(field_set:protocol.AccountPrivilege.master_weight)
}

// repeated .protocol.Signer signers = 2;
int AccountPrivilege::signers_size() const {
  return signers_.size();
}
void AccountPrivilege::clear_signers() {
  signers_.Clear();
}
const ::protocol::Signer& AccountPrivilege::signers(int index) const {
  // @@protoc_insertion_point(field_get:protocol.AccountPrivilege.signers)
  return signers_.Get(index);
}
::protocol::Signer* AccountPrivilege::mutable_signers(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.AccountPrivilege.signers)
  return signers_.Mutable(index);
}
::protocol::Signer* AccountPrivilege::add_signers() {
  // @@protoc_insertion_point(field_add:protocol.AccountPrivilege.signers)
  return signers_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::Signer >*
AccountPrivilege::mutable_signers() {
  // @@protoc_insertion_point(field_mutable_list:protocol.AccountPrivilege.signers)
  return &signers_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::Signer >&
AccountPrivilege::signers() const {
  // @@protoc_insertion_point(field_list:protocol.AccountPrivilege.signers)
  return signers_;
}

// optional .protocol.AccountThreshold thresholds = 3;
bool AccountPrivilege::has_thresholds() const {
  return !_is_default_instance_ && thresholds_ != NULL;
}
void AccountPrivilege::clear_thresholds() {
  if (GetArenaNoVirtual() == NULL && thresholds_ != NULL) delete thresholds_;
  thresholds_ = NULL;
}
const ::protocol::AccountThreshold& AccountPrivilege::thresholds() const {
  // @@protoc_insertion_point(field_get:protocol.AccountPrivilege.thresholds)
  return thresholds_ != NULL ? *thresholds_ : *default_instance_->thresholds_;
}
::protocol::AccountThreshold* AccountPrivilege::mutable_thresholds() {
  
  if (thresholds_ == NULL) {
    thresholds_ = new ::protocol::AccountThreshold;
  }
  // @@protoc_insertion_point(field_mutable:protocol.AccountPrivilege.thresholds)
  return thresholds_;
}
::protocol::AccountThreshold* AccountPrivilege::release_thresholds() {
  // @@protoc_insertion_point(field_release:protocol.AccountPrivilege.thresholds)
  
  ::protocol::AccountThreshold* temp = thresholds_;
  thresholds_ = NULL;
  return temp;
}
void AccountPrivilege::set_allocated_thresholds(::protocol::AccountThreshold* thresholds) {
  delete thresholds_;
  thresholds_ = thresholds;
  if (thresholds) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.AccountPrivilege.thresholds)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AccountThreshold::kTxThresholdFieldNumber;
const int AccountThreshold::kTypeThresholdsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AccountThreshold::AccountThreshold()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.AccountThreshold)
}

void AccountThreshold::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

AccountThreshold::AccountThreshold(const AccountThreshold& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.AccountThreshold)
}

void AccountThreshold::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  tx_threshold_ = GOOGLE_LONGLONG(0);
}

AccountThreshold::~AccountThreshold() {
  // @@protoc_insertion_point(destructor:protocol.AccountThreshold)
  SharedDtor();
}

void AccountThreshold::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AccountThreshold::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AccountThreshold::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AccountThreshold_descriptor_;
}

const AccountThreshold& AccountThreshold::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

AccountThreshold* AccountThreshold::default_instance_ = NULL;

AccountThreshold* AccountThreshold::New(::google::protobuf::Arena* arena) const {
  AccountThreshold* n = new AccountThreshold;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AccountThreshold::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.AccountThreshold)
  tx_threshold_ = GOOGLE_LONGLONG(0);
  type_thresholds_.Clear();
}

bool AccountThreshold::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.AccountThreshold)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 tx_threshold = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &tx_threshold_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_type_thresholds;
        break;
      }

      // repeated .protocol.OperationTypeThreshold type_thresholds = 2;
      case 2: {
        if (tag == 18) {
         parse_type_thresholds:
          DO_(input->IncrementRecursionDepth());
         parse_loop_type_thresholds:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_type_thresholds()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_type_thresholds;
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
  // @@protoc_insertion_point(parse_success:protocol.AccountThreshold)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.AccountThreshold)
  return false;
#undef DO_
}

void AccountThreshold::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.AccountThreshold)
  // optional int64 tx_threshold = 1;
  if (this->tx_threshold() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->tx_threshold(), output);
  }

  // repeated .protocol.OperationTypeThreshold type_thresholds = 2;
  for (unsigned int i = 0, n = this->type_thresholds_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->type_thresholds(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.AccountThreshold)
}

::google::protobuf::uint8* AccountThreshold::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.AccountThreshold)
  // optional int64 tx_threshold = 1;
  if (this->tx_threshold() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->tx_threshold(), target);
  }

  // repeated .protocol.OperationTypeThreshold type_thresholds = 2;
  for (unsigned int i = 0, n = this->type_thresholds_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->type_thresholds(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.AccountThreshold)
  return target;
}

int AccountThreshold::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.AccountThreshold)
  int total_size = 0;

  // optional int64 tx_threshold = 1;
  if (this->tx_threshold() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->tx_threshold());
  }

  // repeated .protocol.OperationTypeThreshold type_thresholds = 2;
  total_size += 1 * this->type_thresholds_size();
  for (int i = 0; i < this->type_thresholds_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->type_thresholds(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AccountThreshold::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.AccountThreshold)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const AccountThreshold* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AccountThreshold>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.AccountThreshold)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.AccountThreshold)
    MergeFrom(*source);
  }
}

void AccountThreshold::MergeFrom(const AccountThreshold& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.AccountThreshold)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  type_thresholds_.MergeFrom(from.type_thresholds_);
  if (from.tx_threshold() != 0) {
    set_tx_threshold(from.tx_threshold());
  }
}

void AccountThreshold::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.AccountThreshold)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AccountThreshold::CopyFrom(const AccountThreshold& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.AccountThreshold)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AccountThreshold::IsInitialized() const {

  return true;
}

void AccountThreshold::Swap(AccountThreshold* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AccountThreshold::InternalSwap(AccountThreshold* other) {
  std::swap(tx_threshold_, other->tx_threshold_);
  type_thresholds_.UnsafeArenaSwap(&other->type_thresholds_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AccountThreshold::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AccountThreshold_descriptor_;
  metadata.reflection = AccountThreshold_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AccountThreshold

// optional int64 tx_threshold = 1;
void AccountThreshold::clear_tx_threshold() {
  tx_threshold_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 AccountThreshold::tx_threshold() const {
  // @@protoc_insertion_point(field_get:protocol.AccountThreshold.tx_threshold)
  return tx_threshold_;
}
 void AccountThreshold::set_tx_threshold(::google::protobuf::int64 value) {
  
  tx_threshold_ = value;
  // @@protoc_insertion_point(field_set:protocol.AccountThreshold.tx_threshold)
}

// repeated .protocol.OperationTypeThreshold type_thresholds = 2;
int AccountThreshold::type_thresholds_size() const {
  return type_thresholds_.size();
}
void AccountThreshold::clear_type_thresholds() {
  type_thresholds_.Clear();
}
const ::protocol::OperationTypeThreshold& AccountThreshold::type_thresholds(int index) const {
  // @@protoc_insertion_point(field_get:protocol.AccountThreshold.type_thresholds)
  return type_thresholds_.Get(index);
}
::protocol::OperationTypeThreshold* AccountThreshold::mutable_type_thresholds(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.AccountThreshold.type_thresholds)
  return type_thresholds_.Mutable(index);
}
::protocol::OperationTypeThreshold* AccountThreshold::add_type_thresholds() {
  // @@protoc_insertion_point(field_add:protocol.AccountThreshold.type_thresholds)
  return type_thresholds_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::OperationTypeThreshold >*
AccountThreshold::mutable_type_thresholds() {
  // @@protoc_insertion_point(field_mutable_list:protocol.AccountThreshold.type_thresholds)
  return &type_thresholds_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::OperationTypeThreshold >&
AccountThreshold::type_thresholds() const {
  // @@protoc_insertion_point(field_list:protocol.AccountThreshold.type_thresholds)
  return type_thresholds_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationIssueAsset::kCodeFieldNumber;
const int OperationIssueAsset::kAmountFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationIssueAsset::OperationIssueAsset()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.OperationIssueAsset)
}

void OperationIssueAsset::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

OperationIssueAsset::OperationIssueAsset(const OperationIssueAsset& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.OperationIssueAsset)
}

void OperationIssueAsset::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_ = GOOGLE_LONGLONG(0);
}

OperationIssueAsset::~OperationIssueAsset() {
  // @@protoc_insertion_point(destructor:protocol.OperationIssueAsset)
  SharedDtor();
}

void OperationIssueAsset::SharedDtor() {
  code_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void OperationIssueAsset::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OperationIssueAsset::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OperationIssueAsset_descriptor_;
}

const OperationIssueAsset& OperationIssueAsset::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

OperationIssueAsset* OperationIssueAsset::default_instance_ = NULL;

OperationIssueAsset* OperationIssueAsset::New(::google::protobuf::Arena* arena) const {
  OperationIssueAsset* n = new OperationIssueAsset;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OperationIssueAsset::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.OperationIssueAsset)
  code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_ = GOOGLE_LONGLONG(0);
}

bool OperationIssueAsset::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.OperationIssueAsset)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string code = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_code()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->code().data(), this->code().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.OperationIssueAsset.code"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_amount;
        break;
      }

      // optional int64 amount = 2;
      case 2: {
        if (tag == 16) {
         parse_amount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &amount_)));

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
  // @@protoc_insertion_point(parse_success:protocol.OperationIssueAsset)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.OperationIssueAsset)
  return false;
#undef DO_
}

void OperationIssueAsset::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.OperationIssueAsset)
  // optional string code = 1;
  if (this->code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->code().data(), this->code().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationIssueAsset.code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->code(), output);
  }

  // optional int64 amount = 2;
  if (this->amount() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->amount(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.OperationIssueAsset)
}

::google::protobuf::uint8* OperationIssueAsset::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.OperationIssueAsset)
  // optional string code = 1;
  if (this->code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->code().data(), this->code().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationIssueAsset.code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->code(), target);
  }

  // optional int64 amount = 2;
  if (this->amount() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->amount(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.OperationIssueAsset)
  return target;
}

int OperationIssueAsset::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.OperationIssueAsset)
  int total_size = 0;

  // optional string code = 1;
  if (this->code().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->code());
  }

  // optional int64 amount = 2;
  if (this->amount() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->amount());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OperationIssueAsset::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.OperationIssueAsset)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const OperationIssueAsset* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const OperationIssueAsset>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.OperationIssueAsset)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.OperationIssueAsset)
    MergeFrom(*source);
  }
}

void OperationIssueAsset::MergeFrom(const OperationIssueAsset& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.OperationIssueAsset)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.code().size() > 0) {

    code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.code_);
  }
  if (from.amount() != 0) {
    set_amount(from.amount());
  }
}

void OperationIssueAsset::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.OperationIssueAsset)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationIssueAsset::CopyFrom(const OperationIssueAsset& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.OperationIssueAsset)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationIssueAsset::IsInitialized() const {

  return true;
}

void OperationIssueAsset::Swap(OperationIssueAsset* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationIssueAsset::InternalSwap(OperationIssueAsset* other) {
  code_.Swap(&other->code_);
  std::swap(amount_, other->amount_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OperationIssueAsset::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OperationIssueAsset_descriptor_;
  metadata.reflection = OperationIssueAsset_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OperationIssueAsset

// optional string code = 1;
void OperationIssueAsset::clear_code() {
  code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& OperationIssueAsset::code() const {
  // @@protoc_insertion_point(field_get:protocol.OperationIssueAsset.code)
  return code_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationIssueAsset::set_code(const ::std::string& value) {
  
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.OperationIssueAsset.code)
}
 void OperationIssueAsset::set_code(const char* value) {
  
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.OperationIssueAsset.code)
}
 void OperationIssueAsset::set_code(const char* value, size_t size) {
  
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.OperationIssueAsset.code)
}
 ::std::string* OperationIssueAsset::mutable_code() {
  
  // @@protoc_insertion_point(field_mutable:protocol.OperationIssueAsset.code)
  return code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* OperationIssueAsset::release_code() {
  // @@protoc_insertion_point(field_release:protocol.OperationIssueAsset.code)
  
  return code_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationIssueAsset::set_allocated_code(::std::string* code) {
  if (code != NULL) {
    
  } else {
    
  }
  code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), code);
  // @@protoc_insertion_point(field_set_allocated:protocol.OperationIssueAsset.code)
}

// optional int64 amount = 2;
void OperationIssueAsset::clear_amount() {
  amount_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 OperationIssueAsset::amount() const {
  // @@protoc_insertion_point(field_get:protocol.OperationIssueAsset.amount)
  return amount_;
}
 void OperationIssueAsset::set_amount(::google::protobuf::int64 value) {
  
  amount_ = value;
  // @@protoc_insertion_point(field_set:protocol.OperationIssueAsset.amount)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationPayCoin::kDestAddressFieldNumber;
const int OperationPayCoin::kAmountFieldNumber;
const int OperationPayCoin::kInputFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationPayCoin::OperationPayCoin()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.OperationPayCoin)
}

void OperationPayCoin::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

OperationPayCoin::OperationPayCoin(const OperationPayCoin& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.OperationPayCoin)
}

void OperationPayCoin::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  dest_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_ = GOOGLE_LONGLONG(0);
  input_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

OperationPayCoin::~OperationPayCoin() {
  // @@protoc_insertion_point(destructor:protocol.OperationPayCoin)
  SharedDtor();
}

void OperationPayCoin::SharedDtor() {
  dest_address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  input_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void OperationPayCoin::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OperationPayCoin::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OperationPayCoin_descriptor_;
}

const OperationPayCoin& OperationPayCoin::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

OperationPayCoin* OperationPayCoin::default_instance_ = NULL;

OperationPayCoin* OperationPayCoin::New(::google::protobuf::Arena* arena) const {
  OperationPayCoin* n = new OperationPayCoin;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OperationPayCoin::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.OperationPayCoin)
  dest_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_ = GOOGLE_LONGLONG(0);
  input_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool OperationPayCoin::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.OperationPayCoin)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string dest_address = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_dest_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->dest_address().data(), this->dest_address().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.OperationPayCoin.dest_address"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_amount;
        break;
      }

      // optional int64 amount = 2;
      case 2: {
        if (tag == 16) {
         parse_amount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &amount_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_input;
        break;
      }

      // optional string input = 3;
      case 3: {
        if (tag == 26) {
         parse_input:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_input()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->input().data(), this->input().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.OperationPayCoin.input"));
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
  // @@protoc_insertion_point(parse_success:protocol.OperationPayCoin)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.OperationPayCoin)
  return false;
#undef DO_
}

void OperationPayCoin::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.OperationPayCoin)
  // optional string dest_address = 1;
  if (this->dest_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->dest_address().data(), this->dest_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationPayCoin.dest_address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->dest_address(), output);
  }

  // optional int64 amount = 2;
  if (this->amount() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->amount(), output);
  }

  // optional string input = 3;
  if (this->input().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->input().data(), this->input().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationPayCoin.input");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->input(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.OperationPayCoin)
}

::google::protobuf::uint8* OperationPayCoin::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.OperationPayCoin)
  // optional string dest_address = 1;
  if (this->dest_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->dest_address().data(), this->dest_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationPayCoin.dest_address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->dest_address(), target);
  }

  // optional int64 amount = 2;
  if (this->amount() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->amount(), target);
  }

  // optional string input = 3;
  if (this->input().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->input().data(), this->input().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationPayCoin.input");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->input(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.OperationPayCoin)
  return target;
}

int OperationPayCoin::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.OperationPayCoin)
  int total_size = 0;

  // optional string dest_address = 1;
  if (this->dest_address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->dest_address());
  }

  // optional int64 amount = 2;
  if (this->amount() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->amount());
  }

  // optional string input = 3;
  if (this->input().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->input());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OperationPayCoin::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.OperationPayCoin)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const OperationPayCoin* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const OperationPayCoin>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.OperationPayCoin)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.OperationPayCoin)
    MergeFrom(*source);
  }
}

void OperationPayCoin::MergeFrom(const OperationPayCoin& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.OperationPayCoin)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.dest_address().size() > 0) {

    dest_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.dest_address_);
  }
  if (from.amount() != 0) {
    set_amount(from.amount());
  }
  if (from.input().size() > 0) {

    input_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.input_);
  }
}

void OperationPayCoin::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.OperationPayCoin)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationPayCoin::CopyFrom(const OperationPayCoin& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.OperationPayCoin)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationPayCoin::IsInitialized() const {

  return true;
}

void OperationPayCoin::Swap(OperationPayCoin* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationPayCoin::InternalSwap(OperationPayCoin* other) {
  dest_address_.Swap(&other->dest_address_);
  std::swap(amount_, other->amount_);
  input_.Swap(&other->input_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OperationPayCoin::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OperationPayCoin_descriptor_;
  metadata.reflection = OperationPayCoin_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OperationPayCoin

// optional string dest_address = 1;
void OperationPayCoin::clear_dest_address() {
  dest_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& OperationPayCoin::dest_address() const {
  // @@protoc_insertion_point(field_get:protocol.OperationPayCoin.dest_address)
  return dest_address_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationPayCoin::set_dest_address(const ::std::string& value) {
  
  dest_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.OperationPayCoin.dest_address)
}
 void OperationPayCoin::set_dest_address(const char* value) {
  
  dest_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.OperationPayCoin.dest_address)
}
 void OperationPayCoin::set_dest_address(const char* value, size_t size) {
  
  dest_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.OperationPayCoin.dest_address)
}
 ::std::string* OperationPayCoin::mutable_dest_address() {
  
  // @@protoc_insertion_point(field_mutable:protocol.OperationPayCoin.dest_address)
  return dest_address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* OperationPayCoin::release_dest_address() {
  // @@protoc_insertion_point(field_release:protocol.OperationPayCoin.dest_address)
  
  return dest_address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationPayCoin::set_allocated_dest_address(::std::string* dest_address) {
  if (dest_address != NULL) {
    
  } else {
    
  }
  dest_address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), dest_address);
  // @@protoc_insertion_point(field_set_allocated:protocol.OperationPayCoin.dest_address)
}

// optional int64 amount = 2;
void OperationPayCoin::clear_amount() {
  amount_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 OperationPayCoin::amount() const {
  // @@protoc_insertion_point(field_get:protocol.OperationPayCoin.amount)
  return amount_;
}
 void OperationPayCoin::set_amount(::google::protobuf::int64 value) {
  
  amount_ = value;
  // @@protoc_insertion_point(field_set:protocol.OperationPayCoin.amount)
}

// optional string input = 3;
void OperationPayCoin::clear_input() {
  input_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& OperationPayCoin::input() const {
  // @@protoc_insertion_point(field_get:protocol.OperationPayCoin.input)
  return input_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationPayCoin::set_input(const ::std::string& value) {
  
  input_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.OperationPayCoin.input)
}
 void OperationPayCoin::set_input(const char* value) {
  
  input_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.OperationPayCoin.input)
}
 void OperationPayCoin::set_input(const char* value, size_t size) {
  
  input_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.OperationPayCoin.input)
}
 ::std::string* OperationPayCoin::mutable_input() {
  
  // @@protoc_insertion_point(field_mutable:protocol.OperationPayCoin.input)
  return input_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* OperationPayCoin::release_input() {
  // @@protoc_insertion_point(field_release:protocol.OperationPayCoin.input)
  
  return input_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationPayCoin::set_allocated_input(::std::string* input) {
  if (input != NULL) {
    
  } else {
    
  }
  input_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), input);
  // @@protoc_insertion_point(field_set_allocated:protocol.OperationPayCoin.input)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationSetSignerWeight::kMasterWeightFieldNumber;
const int OperationSetSignerWeight::kSignersFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationSetSignerWeight::OperationSetSignerWeight()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.OperationSetSignerWeight)
}

void OperationSetSignerWeight::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

OperationSetSignerWeight::OperationSetSignerWeight(const OperationSetSignerWeight& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.OperationSetSignerWeight)
}

void OperationSetSignerWeight::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  master_weight_ = GOOGLE_LONGLONG(0);
}

OperationSetSignerWeight::~OperationSetSignerWeight() {
  // @@protoc_insertion_point(destructor:protocol.OperationSetSignerWeight)
  SharedDtor();
}

void OperationSetSignerWeight::SharedDtor() {
  if (this != default_instance_) {
  }
}

void OperationSetSignerWeight::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OperationSetSignerWeight::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OperationSetSignerWeight_descriptor_;
}

const OperationSetSignerWeight& OperationSetSignerWeight::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

OperationSetSignerWeight* OperationSetSignerWeight::default_instance_ = NULL;

OperationSetSignerWeight* OperationSetSignerWeight::New(::google::protobuf::Arena* arena) const {
  OperationSetSignerWeight* n = new OperationSetSignerWeight;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OperationSetSignerWeight::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.OperationSetSignerWeight)
  master_weight_ = GOOGLE_LONGLONG(0);
  signers_.Clear();
}

bool OperationSetSignerWeight::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.OperationSetSignerWeight)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 master_weight = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &master_weight_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_signers;
        break;
      }

      // repeated .protocol.Signer signers = 2;
      case 2: {
        if (tag == 18) {
         parse_signers:
          DO_(input->IncrementRecursionDepth());
         parse_loop_signers:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_signers()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_signers;
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
  // @@protoc_insertion_point(parse_success:protocol.OperationSetSignerWeight)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.OperationSetSignerWeight)
  return false;
#undef DO_
}

void OperationSetSignerWeight::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.OperationSetSignerWeight)
  // optional int64 master_weight = 1;
  if (this->master_weight() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->master_weight(), output);
  }

  // repeated .protocol.Signer signers = 2;
  for (unsigned int i = 0, n = this->signers_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->signers(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.OperationSetSignerWeight)
}

::google::protobuf::uint8* OperationSetSignerWeight::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.OperationSetSignerWeight)
  // optional int64 master_weight = 1;
  if (this->master_weight() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->master_weight(), target);
  }

  // repeated .protocol.Signer signers = 2;
  for (unsigned int i = 0, n = this->signers_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->signers(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.OperationSetSignerWeight)
  return target;
}

int OperationSetSignerWeight::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.OperationSetSignerWeight)
  int total_size = 0;

  // optional int64 master_weight = 1;
  if (this->master_weight() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->master_weight());
  }

  // repeated .protocol.Signer signers = 2;
  total_size += 1 * this->signers_size();
  for (int i = 0; i < this->signers_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->signers(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OperationSetSignerWeight::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.OperationSetSignerWeight)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const OperationSetSignerWeight* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const OperationSetSignerWeight>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.OperationSetSignerWeight)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.OperationSetSignerWeight)
    MergeFrom(*source);
  }
}

void OperationSetSignerWeight::MergeFrom(const OperationSetSignerWeight& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.OperationSetSignerWeight)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  signers_.MergeFrom(from.signers_);
  if (from.master_weight() != 0) {
    set_master_weight(from.master_weight());
  }
}

void OperationSetSignerWeight::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.OperationSetSignerWeight)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationSetSignerWeight::CopyFrom(const OperationSetSignerWeight& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.OperationSetSignerWeight)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationSetSignerWeight::IsInitialized() const {

  return true;
}

void OperationSetSignerWeight::Swap(OperationSetSignerWeight* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationSetSignerWeight::InternalSwap(OperationSetSignerWeight* other) {
  std::swap(master_weight_, other->master_weight_);
  signers_.UnsafeArenaSwap(&other->signers_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OperationSetSignerWeight::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OperationSetSignerWeight_descriptor_;
  metadata.reflection = OperationSetSignerWeight_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OperationSetSignerWeight

// optional int64 master_weight = 1;
void OperationSetSignerWeight::clear_master_weight() {
  master_weight_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 OperationSetSignerWeight::master_weight() const {
  // @@protoc_insertion_point(field_get:protocol.OperationSetSignerWeight.master_weight)
  return master_weight_;
}
 void OperationSetSignerWeight::set_master_weight(::google::protobuf::int64 value) {
  
  master_weight_ = value;
  // @@protoc_insertion_point(field_set:protocol.OperationSetSignerWeight.master_weight)
}

// repeated .protocol.Signer signers = 2;
int OperationSetSignerWeight::signers_size() const {
  return signers_.size();
}
void OperationSetSignerWeight::clear_signers() {
  signers_.Clear();
}
const ::protocol::Signer& OperationSetSignerWeight::signers(int index) const {
  // @@protoc_insertion_point(field_get:protocol.OperationSetSignerWeight.signers)
  return signers_.Get(index);
}
::protocol::Signer* OperationSetSignerWeight::mutable_signers(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.OperationSetSignerWeight.signers)
  return signers_.Mutable(index);
}
::protocol::Signer* OperationSetSignerWeight::add_signers() {
  // @@protoc_insertion_point(field_add:protocol.OperationSetSignerWeight.signers)
  return signers_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::Signer >*
OperationSetSignerWeight::mutable_signers() {
  // @@protoc_insertion_point(field_mutable_list:protocol.OperationSetSignerWeight.signers)
  return &signers_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::Signer >&
OperationSetSignerWeight::signers() const {
  // @@protoc_insertion_point(field_list:protocol.OperationSetSignerWeight.signers)
  return signers_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationLog::kTopicFieldNumber;
const int OperationLog::kDatasFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationLog::OperationLog()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.OperationLog)
}

void OperationLog::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

OperationLog::OperationLog(const OperationLog& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.OperationLog)
}

void OperationLog::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

OperationLog::~OperationLog() {
  // @@protoc_insertion_point(destructor:protocol.OperationLog)
  SharedDtor();
}

void OperationLog::SharedDtor() {
  topic_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void OperationLog::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OperationLog::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OperationLog_descriptor_;
}

const OperationLog& OperationLog::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

OperationLog* OperationLog::default_instance_ = NULL;

OperationLog* OperationLog::New(::google::protobuf::Arena* arena) const {
  OperationLog* n = new OperationLog;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OperationLog::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.OperationLog)
  topic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  datas_.Clear();
}

bool OperationLog::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.OperationLog)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string topic = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_topic()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->topic().data(), this->topic().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.OperationLog.topic"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_datas;
        break;
      }

      // repeated string datas = 2;
      case 2: {
        if (tag == 18) {
         parse_datas:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_datas()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->datas(this->datas_size() - 1).data(),
            this->datas(this->datas_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.OperationLog.datas"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_datas;
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
  // @@protoc_insertion_point(parse_success:protocol.OperationLog)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.OperationLog)
  return false;
#undef DO_
}

void OperationLog::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.OperationLog)
  // optional string topic = 1;
  if (this->topic().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->topic().data(), this->topic().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationLog.topic");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->topic(), output);
  }

  // repeated string datas = 2;
  for (int i = 0; i < this->datas_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->datas(i).data(), this->datas(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationLog.datas");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->datas(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.OperationLog)
}

::google::protobuf::uint8* OperationLog::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.OperationLog)
  // optional string topic = 1;
  if (this->topic().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->topic().data(), this->topic().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationLog.topic");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->topic(), target);
  }

  // repeated string datas = 2;
  for (int i = 0; i < this->datas_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->datas(i).data(), this->datas(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationLog.datas");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->datas(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.OperationLog)
  return target;
}

int OperationLog::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.OperationLog)
  int total_size = 0;

  // optional string topic = 1;
  if (this->topic().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->topic());
  }

  // repeated string datas = 2;
  total_size += 1 * this->datas_size();
  for (int i = 0; i < this->datas_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->datas(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OperationLog::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.OperationLog)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const OperationLog* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const OperationLog>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.OperationLog)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.OperationLog)
    MergeFrom(*source);
  }
}

void OperationLog::MergeFrom(const OperationLog& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.OperationLog)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  datas_.MergeFrom(from.datas_);
  if (from.topic().size() > 0) {

    topic_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topic_);
  }
}

void OperationLog::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.OperationLog)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationLog::CopyFrom(const OperationLog& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.OperationLog)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationLog::IsInitialized() const {

  return true;
}

void OperationLog::Swap(OperationLog* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationLog::InternalSwap(OperationLog* other) {
  topic_.Swap(&other->topic_);
  datas_.UnsafeArenaSwap(&other->datas_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OperationLog::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OperationLog_descriptor_;
  metadata.reflection = OperationLog_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OperationLog

// optional string topic = 1;
void OperationLog::clear_topic() {
  topic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& OperationLog::topic() const {
  // @@protoc_insertion_point(field_get:protocol.OperationLog.topic)
  return topic_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationLog::set_topic(const ::std::string& value) {
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.OperationLog.topic)
}
 void OperationLog::set_topic(const char* value) {
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.OperationLog.topic)
}
 void OperationLog::set_topic(const char* value, size_t size) {
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.OperationLog.topic)
}
 ::std::string* OperationLog::mutable_topic() {
  
  // @@protoc_insertion_point(field_mutable:protocol.OperationLog.topic)
  return topic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* OperationLog::release_topic() {
  // @@protoc_insertion_point(field_release:protocol.OperationLog.topic)
  
  return topic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationLog::set_allocated_topic(::std::string* topic) {
  if (topic != NULL) {
    
  } else {
    
  }
  topic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), topic);
  // @@protoc_insertion_point(field_set_allocated:protocol.OperationLog.topic)
}

// repeated string datas = 2;
int OperationLog::datas_size() const {
  return datas_.size();
}
void OperationLog::clear_datas() {
  datas_.Clear();
}
 const ::std::string& OperationLog::datas(int index) const {
  // @@protoc_insertion_point(field_get:protocol.OperationLog.datas)
  return datas_.Get(index);
}
 ::std::string* OperationLog::mutable_datas(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.OperationLog.datas)
  return datas_.Mutable(index);
}
 void OperationLog::set_datas(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:protocol.OperationLog.datas)
  datas_.Mutable(index)->assign(value);
}
 void OperationLog::set_datas(int index, const char* value) {
  datas_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:protocol.OperationLog.datas)
}
 void OperationLog::set_datas(int index, const char* value, size_t size) {
  datas_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protocol.OperationLog.datas)
}
 ::std::string* OperationLog::add_datas() {
  // @@protoc_insertion_point(field_add_mutable:protocol.OperationLog.datas)
  return datas_.Add();
}
 void OperationLog::add_datas(const ::std::string& value) {
  datas_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:protocol.OperationLog.datas)
}
 void OperationLog::add_datas(const char* value) {
  datas_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:protocol.OperationLog.datas)
}
 void OperationLog::add_datas(const char* value, size_t size) {
  datas_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:protocol.OperationLog.datas)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
OperationLog::datas() const {
  // @@protoc_insertion_point(field_list:protocol.OperationLog.datas)
  return datas_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
OperationLog::mutable_datas() {
  // @@protoc_insertion_point(field_mutable_list:protocol.OperationLog.datas)
  return &datas_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationSetPrivilege::kMasterWeightFieldNumber;
const int OperationSetPrivilege::kSignersFieldNumber;
const int OperationSetPrivilege::kTxThresholdFieldNumber;
const int OperationSetPrivilege::kTypeThresholdsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationSetPrivilege::OperationSetPrivilege()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.OperationSetPrivilege)
}

void OperationSetPrivilege::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

OperationSetPrivilege::OperationSetPrivilege(const OperationSetPrivilege& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.OperationSetPrivilege)
}

void OperationSetPrivilege::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  master_weight_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tx_threshold_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

OperationSetPrivilege::~OperationSetPrivilege() {
  // @@protoc_insertion_point(destructor:protocol.OperationSetPrivilege)
  SharedDtor();
}

void OperationSetPrivilege::SharedDtor() {
  master_weight_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tx_threshold_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void OperationSetPrivilege::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OperationSetPrivilege::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OperationSetPrivilege_descriptor_;
}

const OperationSetPrivilege& OperationSetPrivilege::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

OperationSetPrivilege* OperationSetPrivilege::default_instance_ = NULL;

OperationSetPrivilege* OperationSetPrivilege::New(::google::protobuf::Arena* arena) const {
  OperationSetPrivilege* n = new OperationSetPrivilege;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OperationSetPrivilege::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.OperationSetPrivilege)
  master_weight_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tx_threshold_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  signers_.Clear();
  type_thresholds_.Clear();
}

bool OperationSetPrivilege::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.OperationSetPrivilege)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string master_weight = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_master_weight()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->master_weight().data(), this->master_weight().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.OperationSetPrivilege.master_weight"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_signers;
        break;
      }

      // repeated .protocol.Signer signers = 2;
      case 2: {
        if (tag == 18) {
         parse_signers:
          DO_(input->IncrementRecursionDepth());
         parse_loop_signers:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_signers()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_signers;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(26)) goto parse_tx_threshold;
        break;
      }

      // optional string tx_threshold = 3;
      case 3: {
        if (tag == 26) {
         parse_tx_threshold:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tx_threshold()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->tx_threshold().data(), this->tx_threshold().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.OperationSetPrivilege.tx_threshold"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_type_thresholds;
        break;
      }

      // repeated .protocol.OperationTypeThreshold type_thresholds = 4;
      case 4: {
        if (tag == 34) {
         parse_type_thresholds:
          DO_(input->IncrementRecursionDepth());
         parse_loop_type_thresholds:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_type_thresholds()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_loop_type_thresholds;
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
  // @@protoc_insertion_point(parse_success:protocol.OperationSetPrivilege)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.OperationSetPrivilege)
  return false;
#undef DO_
}

void OperationSetPrivilege::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.OperationSetPrivilege)
  // optional string master_weight = 1;
  if (this->master_weight().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->master_weight().data(), this->master_weight().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationSetPrivilege.master_weight");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->master_weight(), output);
  }

  // repeated .protocol.Signer signers = 2;
  for (unsigned int i = 0, n = this->signers_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->signers(i), output);
  }

  // optional string tx_threshold = 3;
  if (this->tx_threshold().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->tx_threshold().data(), this->tx_threshold().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationSetPrivilege.tx_threshold");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->tx_threshold(), output);
  }

  // repeated .protocol.OperationTypeThreshold type_thresholds = 4;
  for (unsigned int i = 0, n = this->type_thresholds_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->type_thresholds(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.OperationSetPrivilege)
}

::google::protobuf::uint8* OperationSetPrivilege::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.OperationSetPrivilege)
  // optional string master_weight = 1;
  if (this->master_weight().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->master_weight().data(), this->master_weight().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationSetPrivilege.master_weight");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->master_weight(), target);
  }

  // repeated .protocol.Signer signers = 2;
  for (unsigned int i = 0, n = this->signers_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->signers(i), false, target);
  }

  // optional string tx_threshold = 3;
  if (this->tx_threshold().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->tx_threshold().data(), this->tx_threshold().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationSetPrivilege.tx_threshold");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->tx_threshold(), target);
  }

  // repeated .protocol.OperationTypeThreshold type_thresholds = 4;
  for (unsigned int i = 0, n = this->type_thresholds_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->type_thresholds(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.OperationSetPrivilege)
  return target;
}

int OperationSetPrivilege::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.OperationSetPrivilege)
  int total_size = 0;

  // optional string master_weight = 1;
  if (this->master_weight().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->master_weight());
  }

  // optional string tx_threshold = 3;
  if (this->tx_threshold().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->tx_threshold());
  }

  // repeated .protocol.Signer signers = 2;
  total_size += 1 * this->signers_size();
  for (int i = 0; i < this->signers_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->signers(i));
  }

  // repeated .protocol.OperationTypeThreshold type_thresholds = 4;
  total_size += 1 * this->type_thresholds_size();
  for (int i = 0; i < this->type_thresholds_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->type_thresholds(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OperationSetPrivilege::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.OperationSetPrivilege)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const OperationSetPrivilege* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const OperationSetPrivilege>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.OperationSetPrivilege)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.OperationSetPrivilege)
    MergeFrom(*source);
  }
}

void OperationSetPrivilege::MergeFrom(const OperationSetPrivilege& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.OperationSetPrivilege)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  signers_.MergeFrom(from.signers_);
  type_thresholds_.MergeFrom(from.type_thresholds_);
  if (from.master_weight().size() > 0) {

    master_weight_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.master_weight_);
  }
  if (from.tx_threshold().size() > 0) {

    tx_threshold_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tx_threshold_);
  }
}

void OperationSetPrivilege::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.OperationSetPrivilege)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationSetPrivilege::CopyFrom(const OperationSetPrivilege& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.OperationSetPrivilege)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationSetPrivilege::IsInitialized() const {

  return true;
}

void OperationSetPrivilege::Swap(OperationSetPrivilege* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationSetPrivilege::InternalSwap(OperationSetPrivilege* other) {
  master_weight_.Swap(&other->master_weight_);
  signers_.UnsafeArenaSwap(&other->signers_);
  tx_threshold_.Swap(&other->tx_threshold_);
  type_thresholds_.UnsafeArenaSwap(&other->type_thresholds_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OperationSetPrivilege::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OperationSetPrivilege_descriptor_;
  metadata.reflection = OperationSetPrivilege_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OperationSetPrivilege

// optional string master_weight = 1;
void OperationSetPrivilege::clear_master_weight() {
  master_weight_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& OperationSetPrivilege::master_weight() const {
  // @@protoc_insertion_point(field_get:protocol.OperationSetPrivilege.master_weight)
  return master_weight_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationSetPrivilege::set_master_weight(const ::std::string& value) {
  
  master_weight_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.OperationSetPrivilege.master_weight)
}
 void OperationSetPrivilege::set_master_weight(const char* value) {
  
  master_weight_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.OperationSetPrivilege.master_weight)
}
 void OperationSetPrivilege::set_master_weight(const char* value, size_t size) {
  
  master_weight_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.OperationSetPrivilege.master_weight)
}
 ::std::string* OperationSetPrivilege::mutable_master_weight() {
  
  // @@protoc_insertion_point(field_mutable:protocol.OperationSetPrivilege.master_weight)
  return master_weight_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* OperationSetPrivilege::release_master_weight() {
  // @@protoc_insertion_point(field_release:protocol.OperationSetPrivilege.master_weight)
  
  return master_weight_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationSetPrivilege::set_allocated_master_weight(::std::string* master_weight) {
  if (master_weight != NULL) {
    
  } else {
    
  }
  master_weight_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), master_weight);
  // @@protoc_insertion_point(field_set_allocated:protocol.OperationSetPrivilege.master_weight)
}

// repeated .protocol.Signer signers = 2;
int OperationSetPrivilege::signers_size() const {
  return signers_.size();
}
void OperationSetPrivilege::clear_signers() {
  signers_.Clear();
}
const ::protocol::Signer& OperationSetPrivilege::signers(int index) const {
  // @@protoc_insertion_point(field_get:protocol.OperationSetPrivilege.signers)
  return signers_.Get(index);
}
::protocol::Signer* OperationSetPrivilege::mutable_signers(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.OperationSetPrivilege.signers)
  return signers_.Mutable(index);
}
::protocol::Signer* OperationSetPrivilege::add_signers() {
  // @@protoc_insertion_point(field_add:protocol.OperationSetPrivilege.signers)
  return signers_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::Signer >*
OperationSetPrivilege::mutable_signers() {
  // @@protoc_insertion_point(field_mutable_list:protocol.OperationSetPrivilege.signers)
  return &signers_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::Signer >&
OperationSetPrivilege::signers() const {
  // @@protoc_insertion_point(field_list:protocol.OperationSetPrivilege.signers)
  return signers_;
}

// optional string tx_threshold = 3;
void OperationSetPrivilege::clear_tx_threshold() {
  tx_threshold_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& OperationSetPrivilege::tx_threshold() const {
  // @@protoc_insertion_point(field_get:protocol.OperationSetPrivilege.tx_threshold)
  return tx_threshold_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationSetPrivilege::set_tx_threshold(const ::std::string& value) {
  
  tx_threshold_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.OperationSetPrivilege.tx_threshold)
}
 void OperationSetPrivilege::set_tx_threshold(const char* value) {
  
  tx_threshold_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.OperationSetPrivilege.tx_threshold)
}
 void OperationSetPrivilege::set_tx_threshold(const char* value, size_t size) {
  
  tx_threshold_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.OperationSetPrivilege.tx_threshold)
}
 ::std::string* OperationSetPrivilege::mutable_tx_threshold() {
  
  // @@protoc_insertion_point(field_mutable:protocol.OperationSetPrivilege.tx_threshold)
  return tx_threshold_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* OperationSetPrivilege::release_tx_threshold() {
  // @@protoc_insertion_point(field_release:protocol.OperationSetPrivilege.tx_threshold)
  
  return tx_threshold_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationSetPrivilege::set_allocated_tx_threshold(::std::string* tx_threshold) {
  if (tx_threshold != NULL) {
    
  } else {
    
  }
  tx_threshold_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tx_threshold);
  // @@protoc_insertion_point(field_set_allocated:protocol.OperationSetPrivilege.tx_threshold)
}

// repeated .protocol.OperationTypeThreshold type_thresholds = 4;
int OperationSetPrivilege::type_thresholds_size() const {
  return type_thresholds_.size();
}
void OperationSetPrivilege::clear_type_thresholds() {
  type_thresholds_.Clear();
}
const ::protocol::OperationTypeThreshold& OperationSetPrivilege::type_thresholds(int index) const {
  // @@protoc_insertion_point(field_get:protocol.OperationSetPrivilege.type_thresholds)
  return type_thresholds_.Get(index);
}
::protocol::OperationTypeThreshold* OperationSetPrivilege::mutable_type_thresholds(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.OperationSetPrivilege.type_thresholds)
  return type_thresholds_.Mutable(index);
}
::protocol::OperationTypeThreshold* OperationSetPrivilege::add_type_thresholds() {
  // @@protoc_insertion_point(field_add:protocol.OperationSetPrivilege.type_thresholds)
  return type_thresholds_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::OperationTypeThreshold >*
OperationSetPrivilege::mutable_type_thresholds() {
  // @@protoc_insertion_point(field_mutable_list:protocol.OperationSetPrivilege.type_thresholds)
  return &type_thresholds_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::OperationTypeThreshold >&
OperationSetPrivilege::type_thresholds() const {
  // @@protoc_insertion_point(field_list:protocol.OperationSetPrivilege.type_thresholds)
  return type_thresholds_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* Operation_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Operation_Type_descriptor_;
}
bool Operation_Type_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Operation_Type Operation::UNKNOWN;
const Operation_Type Operation::CREATE_ACCOUNT;
const Operation_Type Operation::ISSUE_ASSET;
const Operation_Type Operation::PAY_ASSET;
const Operation_Type Operation::SET_METADATA;
const Operation_Type Operation::SET_SIGNER_WEIGHT;
const Operation_Type Operation::SET_THRESHOLD;
const Operation_Type Operation::PAY_COIN;
const Operation_Type Operation::LOG;
const Operation_Type Operation::SET_PRIVILEGE;
const Operation_Type Operation::Type_MIN;
const Operation_Type Operation::Type_MAX;
const int Operation::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Operation::kTypeFieldNumber;
const int Operation::kSourceAddressFieldNumber;
const int Operation::kMetadataFieldNumber;
const int Operation::kCreateAccountFieldNumber;
const int Operation::kIssueAssetFieldNumber;
const int Operation::kPayAssetFieldNumber;
const int Operation::kSetMetadataFieldNumber;
const int Operation::kSetSignerWeightFieldNumber;
const int Operation::kSetThresholdFieldNumber;
const int Operation::kPayCoinFieldNumber;
const int Operation::kLogFieldNumber;
const int Operation::kSetPrivilegeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Operation::Operation()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Operation)
}

void Operation::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  create_account_ = const_cast< ::protocol::OperationCreateAccount*>(&::protocol::OperationCreateAccount::default_instance());
  issue_asset_ = const_cast< ::protocol::OperationIssueAsset*>(&::protocol::OperationIssueAsset::default_instance());
  pay_asset_ = const_cast< ::protocol::OperationPayAsset*>(&::protocol::OperationPayAsset::default_instance());
  set_metadata_ = const_cast< ::protocol::OperationSetMetadata*>(&::protocol::OperationSetMetadata::default_instance());
  set_signer_weight_ = const_cast< ::protocol::OperationSetSignerWeight*>(&::protocol::OperationSetSignerWeight::default_instance());
  set_threshold_ = const_cast< ::protocol::OperationSetThreshold*>(&::protocol::OperationSetThreshold::default_instance());
  pay_coin_ = const_cast< ::protocol::OperationPayCoin*>(&::protocol::OperationPayCoin::default_instance());
  log_ = const_cast< ::protocol::OperationLog*>(&::protocol::OperationLog::default_instance());
  set_privilege_ = const_cast< ::protocol::OperationSetPrivilege*>(&::protocol::OperationSetPrivilege::default_instance());
}

Operation::Operation(const Operation& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Operation)
}

void Operation::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_ = 0;
  source_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  metadata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  create_account_ = NULL;
  issue_asset_ = NULL;
  pay_asset_ = NULL;
  set_metadata_ = NULL;
  set_signer_weight_ = NULL;
  set_threshold_ = NULL;
  pay_coin_ = NULL;
  log_ = NULL;
  set_privilege_ = NULL;
}

Operation::~Operation() {
  // @@protoc_insertion_point(destructor:protocol.Operation)
  SharedDtor();
}

void Operation::SharedDtor() {
  source_address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  metadata_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete create_account_;
    delete issue_asset_;
    delete pay_asset_;
    delete set_metadata_;
    delete set_signer_weight_;
    delete set_threshold_;
    delete pay_coin_;
    delete log_;
    delete set_privilege_;
  }
}

void Operation::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Operation::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Operation_descriptor_;
}

const Operation& Operation::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

Operation* Operation::default_instance_ = NULL;

Operation* Operation::New(::google::protobuf::Arena* arena) const {
  Operation* n = new Operation;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Operation::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Operation)
  type_ = 0;
  source_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  metadata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && create_account_ != NULL) delete create_account_;
  create_account_ = NULL;
  if (GetArenaNoVirtual() == NULL && issue_asset_ != NULL) delete issue_asset_;
  issue_asset_ = NULL;
  if (GetArenaNoVirtual() == NULL && pay_asset_ != NULL) delete pay_asset_;
  pay_asset_ = NULL;
  if (GetArenaNoVirtual() == NULL && set_metadata_ != NULL) delete set_metadata_;
  set_metadata_ = NULL;
  if (GetArenaNoVirtual() == NULL && set_signer_weight_ != NULL) delete set_signer_weight_;
  set_signer_weight_ = NULL;
  if (GetArenaNoVirtual() == NULL && set_threshold_ != NULL) delete set_threshold_;
  set_threshold_ = NULL;
  if (GetArenaNoVirtual() == NULL && pay_coin_ != NULL) delete pay_coin_;
  pay_coin_ = NULL;
  if (GetArenaNoVirtual() == NULL && log_ != NULL) delete log_;
  log_ = NULL;
  if (GetArenaNoVirtual() == NULL && set_privilege_ != NULL) delete set_privilege_;
  set_privilege_ = NULL;
}

bool Operation::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Operation)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.Operation.Type type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::protocol::Operation_Type >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_source_address;
        break;
      }

      // optional string source_address = 2;
      case 2: {
        if (tag == 18) {
         parse_source_address:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_source_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->source_address().data(), this->source_address().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.Operation.source_address"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_metadata;
        break;
      }

      // optional bytes metadata = 3;
      case 3: {
        if (tag == 26) {
         parse_metadata:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_metadata()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_create_account;
        break;
      }

      // optional .protocol.OperationCreateAccount create_account = 4;
      case 4: {
        if (tag == 34) {
         parse_create_account:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_create_account()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_issue_asset;
        break;
      }

      // optional .protocol.OperationIssueAsset issue_asset = 5;
      case 5: {
        if (tag == 42) {
         parse_issue_asset:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_issue_asset()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_pay_asset;
        break;
      }

      // optional .protocol.OperationPayAsset pay_asset = 6;
      case 6: {
        if (tag == 50) {
         parse_pay_asset:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pay_asset()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_set_metadata;
        break;
      }

      // optional .protocol.OperationSetMetadata set_metadata = 7;
      case 7: {
        if (tag == 58) {
         parse_set_metadata:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_set_metadata()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_set_signer_weight;
        break;
      }

      // optional .protocol.OperationSetSignerWeight set_signer_weight = 8;
      case 8: {
        if (tag == 66) {
         parse_set_signer_weight:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_set_signer_weight()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_set_threshold;
        break;
      }

      // optional .protocol.OperationSetThreshold set_threshold = 9;
      case 9: {
        if (tag == 74) {
         parse_set_threshold:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_set_threshold()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(82)) goto parse_pay_coin;
        break;
      }

      // optional .protocol.OperationPayCoin pay_coin = 10;
      case 10: {
        if (tag == 82) {
         parse_pay_coin:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pay_coin()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(90)) goto parse_log;
        break;
      }

      // optional .protocol.OperationLog log = 11;
      case 11: {
        if (tag == 90) {
         parse_log:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_log()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(98)) goto parse_set_privilege;
        break;
      }

      // optional .protocol.OperationSetPrivilege set_privilege = 12;
      case 12: {
        if (tag == 98) {
         parse_set_privilege:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_set_privilege()));
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
  // @@protoc_insertion_point(parse_success:protocol.Operation)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Operation)
  return false;
#undef DO_
}

void Operation::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Operation)
  // optional .protocol.Operation.Type type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional string source_address = 2;
  if (this->source_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->source_address().data(), this->source_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Operation.source_address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->source_address(), output);
  }

  // optional bytes metadata = 3;
  if (this->metadata().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->metadata(), output);
  }

  // optional .protocol.OperationCreateAccount create_account = 4;
  if (this->has_create_account()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->create_account_, output);
  }

  // optional .protocol.OperationIssueAsset issue_asset = 5;
  if (this->has_issue_asset()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->issue_asset_, output);
  }

  // optional .protocol.OperationPayAsset pay_asset = 6;
  if (this->has_pay_asset()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *this->pay_asset_, output);
  }

  // optional .protocol.OperationSetMetadata set_metadata = 7;
  if (this->has_set_metadata()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->set_metadata_, output);
  }

  // optional .protocol.OperationSetSignerWeight set_signer_weight = 8;
  if (this->has_set_signer_weight()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, *this->set_signer_weight_, output);
  }

  // optional .protocol.OperationSetThreshold set_threshold = 9;
  if (this->has_set_threshold()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, *this->set_threshold_, output);
  }

  // optional .protocol.OperationPayCoin pay_coin = 10;
  if (this->has_pay_coin()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, *this->pay_coin_, output);
  }

  // optional .protocol.OperationLog log = 11;
  if (this->has_log()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, *this->log_, output);
  }

  // optional .protocol.OperationSetPrivilege set_privilege = 12;
  if (this->has_set_privilege()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12, *this->set_privilege_, output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Operation)
}

::google::protobuf::uint8* Operation::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Operation)
  // optional .protocol.Operation.Type type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional string source_address = 2;
  if (this->source_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->source_address().data(), this->source_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Operation.source_address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->source_address(), target);
  }

  // optional bytes metadata = 3;
  if (this->metadata().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->metadata(), target);
  }

  // optional .protocol.OperationCreateAccount create_account = 4;
  if (this->has_create_account()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->create_account_, false, target);
  }

  // optional .protocol.OperationIssueAsset issue_asset = 5;
  if (this->has_issue_asset()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->issue_asset_, false, target);
  }

  // optional .protocol.OperationPayAsset pay_asset = 6;
  if (this->has_pay_asset()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *this->pay_asset_, false, target);
  }

  // optional .protocol.OperationSetMetadata set_metadata = 7;
  if (this->has_set_metadata()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->set_metadata_, false, target);
  }

  // optional .protocol.OperationSetSignerWeight set_signer_weight = 8;
  if (this->has_set_signer_weight()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, *this->set_signer_weight_, false, target);
  }

  // optional .protocol.OperationSetThreshold set_threshold = 9;
  if (this->has_set_threshold()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, *this->set_threshold_, false, target);
  }

  // optional .protocol.OperationPayCoin pay_coin = 10;
  if (this->has_pay_coin()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, *this->pay_coin_, false, target);
  }

  // optional .protocol.OperationLog log = 11;
  if (this->has_log()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        11, *this->log_, false, target);
  }

  // optional .protocol.OperationSetPrivilege set_privilege = 12;
  if (this->has_set_privilege()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        12, *this->set_privilege_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Operation)
  return target;
}

int Operation::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Operation)
  int total_size = 0;

  // optional .protocol.Operation.Type type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // optional string source_address = 2;
  if (this->source_address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->source_address());
  }

  // optional bytes metadata = 3;
  if (this->metadata().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->metadata());
  }

  // optional .protocol.OperationCreateAccount create_account = 4;
  if (this->has_create_account()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->create_account_);
  }

  // optional .protocol.OperationIssueAsset issue_asset = 5;
  if (this->has_issue_asset()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->issue_asset_);
  }

  // optional .protocol.OperationPayAsset pay_asset = 6;
  if (this->has_pay_asset()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pay_asset_);
  }

  // optional .protocol.OperationSetMetadata set_metadata = 7;
  if (this->has_set_metadata()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->set_metadata_);
  }

  // optional .protocol.OperationSetSignerWeight set_signer_weight = 8;
  if (this->has_set_signer_weight()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->set_signer_weight_);
  }

  // optional .protocol.OperationSetThreshold set_threshold = 9;
  if (this->has_set_threshold()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->set_threshold_);
  }

  // optional .protocol.OperationPayCoin pay_coin = 10;
  if (this->has_pay_coin()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pay_coin_);
  }

  // optional .protocol.OperationLog log = 11;
  if (this->has_log()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->log_);
  }

  // optional .protocol.OperationSetPrivilege set_privilege = 12;
  if (this->has_set_privilege()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->set_privilege_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Operation::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Operation)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Operation* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Operation>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Operation)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Operation)
    MergeFrom(*source);
  }
}

void Operation::MergeFrom(const Operation& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Operation)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.source_address().size() > 0) {

    source_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.source_address_);
  }
  if (from.metadata().size() > 0) {

    metadata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.metadata_);
  }
  if (from.has_create_account()) {
    mutable_create_account()->::protocol::OperationCreateAccount::MergeFrom(from.create_account());
  }
  if (from.has_issue_asset()) {
    mutable_issue_asset()->::protocol::OperationIssueAsset::MergeFrom(from.issue_asset());
  }
  if (from.has_pay_asset()) {
    mutable_pay_asset()->::protocol::OperationPayAsset::MergeFrom(from.pay_asset());
  }
  if (from.has_set_metadata()) {
    mutable_set_metadata()->::protocol::OperationSetMetadata::MergeFrom(from.set_metadata());
  }
  if (from.has_set_signer_weight()) {
    mutable_set_signer_weight()->::protocol::OperationSetSignerWeight::MergeFrom(from.set_signer_weight());
  }
  if (from.has_set_threshold()) {
    mutable_set_threshold()->::protocol::OperationSetThreshold::MergeFrom(from.set_threshold());
  }
  if (from.has_pay_coin()) {
    mutable_pay_coin()->::protocol::OperationPayCoin::MergeFrom(from.pay_coin());
  }
  if (from.has_log()) {
    mutable_log()->::protocol::OperationLog::MergeFrom(from.log());
  }
  if (from.has_set_privilege()) {
    mutable_set_privilege()->::protocol::OperationSetPrivilege::MergeFrom(from.set_privilege());
  }
}

void Operation::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Operation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Operation::CopyFrom(const Operation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Operation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Operation::IsInitialized() const {

  return true;
}

void Operation::Swap(Operation* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Operation::InternalSwap(Operation* other) {
  std::swap(type_, other->type_);
  source_address_.Swap(&other->source_address_);
  metadata_.Swap(&other->metadata_);
  std::swap(create_account_, other->create_account_);
  std::swap(issue_asset_, other->issue_asset_);
  std::swap(pay_asset_, other->pay_asset_);
  std::swap(set_metadata_, other->set_metadata_);
  std::swap(set_signer_weight_, other->set_signer_weight_);
  std::swap(set_threshold_, other->set_threshold_);
  std::swap(pay_coin_, other->pay_coin_);
  std::swap(log_, other->log_);
  std::swap(set_privilege_, other->set_privilege_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Operation::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Operation_descriptor_;
  metadata.reflection = Operation_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Operation

// optional .protocol.Operation.Type type = 1;
void Operation::clear_type() {
  type_ = 0;
}
 ::protocol::Operation_Type Operation::type() const {
  // @@protoc_insertion_point(field_get:protocol.Operation.type)
  return static_cast< ::protocol::Operation_Type >(type_);
}
 void Operation::set_type(::protocol::Operation_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:protocol.Operation.type)
}

// optional string source_address = 2;
void Operation::clear_source_address() {
  source_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Operation::source_address() const {
  // @@protoc_insertion_point(field_get:protocol.Operation.source_address)
  return source_address_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Operation::set_source_address(const ::std::string& value) {
  
  source_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Operation.source_address)
}
 void Operation::set_source_address(const char* value) {
  
  source_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Operation.source_address)
}
 void Operation::set_source_address(const char* value, size_t size) {
  
  source_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Operation.source_address)
}
 ::std::string* Operation::mutable_source_address() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Operation.source_address)
  return source_address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Operation::release_source_address() {
  // @@protoc_insertion_point(field_release:protocol.Operation.source_address)
  
  return source_address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Operation::set_allocated_source_address(::std::string* source_address) {
  if (source_address != NULL) {
    
  } else {
    
  }
  source_address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), source_address);
  // @@protoc_insertion_point(field_set_allocated:protocol.Operation.source_address)
}

// optional bytes metadata = 3;
void Operation::clear_metadata() {
  metadata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Operation::metadata() const {
  // @@protoc_insertion_point(field_get:protocol.Operation.metadata)
  return metadata_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Operation::set_metadata(const ::std::string& value) {
  
  metadata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Operation.metadata)
}
 void Operation::set_metadata(const char* value) {
  
  metadata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Operation.metadata)
}
 void Operation::set_metadata(const void* value, size_t size) {
  
  metadata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Operation.metadata)
}
 ::std::string* Operation::mutable_metadata() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Operation.metadata)
  return metadata_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Operation::release_metadata() {
  // @@protoc_insertion_point(field_release:protocol.Operation.metadata)
  
  return metadata_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Operation::set_allocated_metadata(::std::string* metadata) {
  if (metadata != NULL) {
    
  } else {
    
  }
  metadata_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), metadata);
  // @@protoc_insertion_point(field_set_allocated:protocol.Operation.metadata)
}

// optional .protocol.OperationCreateAccount create_account = 4;
bool Operation::has_create_account() const {
  return !_is_default_instance_ && create_account_ != NULL;
}
void Operation::clear_create_account() {
  if (GetArenaNoVirtual() == NULL && create_account_ != NULL) delete create_account_;
  create_account_ = NULL;
}
const ::protocol::OperationCreateAccount& Operation::create_account() const {
  // @@protoc_insertion_point(field_get:protocol.Operation.create_account)
  return create_account_ != NULL ? *create_account_ : *default_instance_->create_account_;
}
::protocol::OperationCreateAccount* Operation::mutable_create_account() {
  
  if (create_account_ == NULL) {
    create_account_ = new ::protocol::OperationCreateAccount;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Operation.create_account)
  return create_account_;
}
::protocol::OperationCreateAccount* Operation::release_create_account() {
  // @@protoc_insertion_point(field_release:protocol.Operation.create_account)
  
  ::protocol::OperationCreateAccount* temp = create_account_;
  create_account_ = NULL;
  return temp;
}
void Operation::set_allocated_create_account(::protocol::OperationCreateAccount* create_account) {
  delete create_account_;
  create_account_ = create_account;
  if (create_account) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Operation.create_account)
}

// optional .protocol.OperationIssueAsset issue_asset = 5;
bool Operation::has_issue_asset() const {
  return !_is_default_instance_ && issue_asset_ != NULL;
}
void Operation::clear_issue_asset() {
  if (GetArenaNoVirtual() == NULL && issue_asset_ != NULL) delete issue_asset_;
  issue_asset_ = NULL;
}
const ::protocol::OperationIssueAsset& Operation::issue_asset() const {
  // @@protoc_insertion_point(field_get:protocol.Operation.issue_asset)
  return issue_asset_ != NULL ? *issue_asset_ : *default_instance_->issue_asset_;
}
::protocol::OperationIssueAsset* Operation::mutable_issue_asset() {
  
  if (issue_asset_ == NULL) {
    issue_asset_ = new ::protocol::OperationIssueAsset;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Operation.issue_asset)
  return issue_asset_;
}
::protocol::OperationIssueAsset* Operation::release_issue_asset() {
  // @@protoc_insertion_point(field_release:protocol.Operation.issue_asset)
  
  ::protocol::OperationIssueAsset* temp = issue_asset_;
  issue_asset_ = NULL;
  return temp;
}
void Operation::set_allocated_issue_asset(::protocol::OperationIssueAsset* issue_asset) {
  delete issue_asset_;
  issue_asset_ = issue_asset;
  if (issue_asset) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Operation.issue_asset)
}

// optional .protocol.OperationPayAsset pay_asset = 6;
bool Operation::has_pay_asset() const {
  return !_is_default_instance_ && pay_asset_ != NULL;
}
void Operation::clear_pay_asset() {
  if (GetArenaNoVirtual() == NULL && pay_asset_ != NULL) delete pay_asset_;
  pay_asset_ = NULL;
}
const ::protocol::OperationPayAsset& Operation::pay_asset() const {
  // @@protoc_insertion_point(field_get:protocol.Operation.pay_asset)
  return pay_asset_ != NULL ? *pay_asset_ : *default_instance_->pay_asset_;
}
::protocol::OperationPayAsset* Operation::mutable_pay_asset() {
  
  if (pay_asset_ == NULL) {
    pay_asset_ = new ::protocol::OperationPayAsset;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Operation.pay_asset)
  return pay_asset_;
}
::protocol::OperationPayAsset* Operation::release_pay_asset() {
  // @@protoc_insertion_point(field_release:protocol.Operation.pay_asset)
  
  ::protocol::OperationPayAsset* temp = pay_asset_;
  pay_asset_ = NULL;
  return temp;
}
void Operation::set_allocated_pay_asset(::protocol::OperationPayAsset* pay_asset) {
  delete pay_asset_;
  pay_asset_ = pay_asset;
  if (pay_asset) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Operation.pay_asset)
}

// optional .protocol.OperationSetMetadata set_metadata = 7;
bool Operation::has_set_metadata() const {
  return !_is_default_instance_ && set_metadata_ != NULL;
}
void Operation::clear_set_metadata() {
  if (GetArenaNoVirtual() == NULL && set_metadata_ != NULL) delete set_metadata_;
  set_metadata_ = NULL;
}
const ::protocol::OperationSetMetadata& Operation::set_metadata() const {
  // @@protoc_insertion_point(field_get:protocol.Operation.set_metadata)
  return set_metadata_ != NULL ? *set_metadata_ : *default_instance_->set_metadata_;
}
::protocol::OperationSetMetadata* Operation::mutable_set_metadata() {
  
  if (set_metadata_ == NULL) {
    set_metadata_ = new ::protocol::OperationSetMetadata;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Operation.set_metadata)
  return set_metadata_;
}
::protocol::OperationSetMetadata* Operation::release_set_metadata() {
  // @@protoc_insertion_point(field_release:protocol.Operation.set_metadata)
  
  ::protocol::OperationSetMetadata* temp = set_metadata_;
  set_metadata_ = NULL;
  return temp;
}
void Operation::set_allocated_set_metadata(::protocol::OperationSetMetadata* set_metadata) {
  delete set_metadata_;
  set_metadata_ = set_metadata;
  if (set_metadata) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Operation.set_metadata)
}

// optional .protocol.OperationSetSignerWeight set_signer_weight = 8;
bool Operation::has_set_signer_weight() const {
  return !_is_default_instance_ && set_signer_weight_ != NULL;
}
void Operation::clear_set_signer_weight() {
  if (GetArenaNoVirtual() == NULL && set_signer_weight_ != NULL) delete set_signer_weight_;
  set_signer_weight_ = NULL;
}
const ::protocol::OperationSetSignerWeight& Operation::set_signer_weight() const {
  // @@protoc_insertion_point(field_get:protocol.Operation.set_signer_weight)
  return set_signer_weight_ != NULL ? *set_signer_weight_ : *default_instance_->set_signer_weight_;
}
::protocol::OperationSetSignerWeight* Operation::mutable_set_signer_weight() {
  
  if (set_signer_weight_ == NULL) {
    set_signer_weight_ = new ::protocol::OperationSetSignerWeight;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Operation.set_signer_weight)
  return set_signer_weight_;
}
::protocol::OperationSetSignerWeight* Operation::release_set_signer_weight() {
  // @@protoc_insertion_point(field_release:protocol.Operation.set_signer_weight)
  
  ::protocol::OperationSetSignerWeight* temp = set_signer_weight_;
  set_signer_weight_ = NULL;
  return temp;
}
void Operation::set_allocated_set_signer_weight(::protocol::OperationSetSignerWeight* set_signer_weight) {
  delete set_signer_weight_;
  set_signer_weight_ = set_signer_weight;
  if (set_signer_weight) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Operation.set_signer_weight)
}

// optional .protocol.OperationSetThreshold set_threshold = 9;
bool Operation::has_set_threshold() const {
  return !_is_default_instance_ && set_threshold_ != NULL;
}
void Operation::clear_set_threshold() {
  if (GetArenaNoVirtual() == NULL && set_threshold_ != NULL) delete set_threshold_;
  set_threshold_ = NULL;
}
const ::protocol::OperationSetThreshold& Operation::set_threshold() const {
  // @@protoc_insertion_point(field_get:protocol.Operation.set_threshold)
  return set_threshold_ != NULL ? *set_threshold_ : *default_instance_->set_threshold_;
}
::protocol::OperationSetThreshold* Operation::mutable_set_threshold() {
  
  if (set_threshold_ == NULL) {
    set_threshold_ = new ::protocol::OperationSetThreshold;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Operation.set_threshold)
  return set_threshold_;
}
::protocol::OperationSetThreshold* Operation::release_set_threshold() {
  // @@protoc_insertion_point(field_release:protocol.Operation.set_threshold)
  
  ::protocol::OperationSetThreshold* temp = set_threshold_;
  set_threshold_ = NULL;
  return temp;
}
void Operation::set_allocated_set_threshold(::protocol::OperationSetThreshold* set_threshold) {
  delete set_threshold_;
  set_threshold_ = set_threshold;
  if (set_threshold) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Operation.set_threshold)
}

// optional .protocol.OperationPayCoin pay_coin = 10;
bool Operation::has_pay_coin() const {
  return !_is_default_instance_ && pay_coin_ != NULL;
}
void Operation::clear_pay_coin() {
  if (GetArenaNoVirtual() == NULL && pay_coin_ != NULL) delete pay_coin_;
  pay_coin_ = NULL;
}
const ::protocol::OperationPayCoin& Operation::pay_coin() const {
  // @@protoc_insertion_point(field_get:protocol.Operation.pay_coin)
  return pay_coin_ != NULL ? *pay_coin_ : *default_instance_->pay_coin_;
}
::protocol::OperationPayCoin* Operation::mutable_pay_coin() {
  
  if (pay_coin_ == NULL) {
    pay_coin_ = new ::protocol::OperationPayCoin;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Operation.pay_coin)
  return pay_coin_;
}
::protocol::OperationPayCoin* Operation::release_pay_coin() {
  // @@protoc_insertion_point(field_release:protocol.Operation.pay_coin)
  
  ::protocol::OperationPayCoin* temp = pay_coin_;
  pay_coin_ = NULL;
  return temp;
}
void Operation::set_allocated_pay_coin(::protocol::OperationPayCoin* pay_coin) {
  delete pay_coin_;
  pay_coin_ = pay_coin;
  if (pay_coin) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Operation.pay_coin)
}

// optional .protocol.OperationLog log = 11;
bool Operation::has_log() const {
  return !_is_default_instance_ && log_ != NULL;
}
void Operation::clear_log() {
  if (GetArenaNoVirtual() == NULL && log_ != NULL) delete log_;
  log_ = NULL;
}
const ::protocol::OperationLog& Operation::log() const {
  // @@protoc_insertion_point(field_get:protocol.Operation.log)
  return log_ != NULL ? *log_ : *default_instance_->log_;
}
::protocol::OperationLog* Operation::mutable_log() {
  
  if (log_ == NULL) {
    log_ = new ::protocol::OperationLog;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Operation.log)
  return log_;
}
::protocol::OperationLog* Operation::release_log() {
  // @@protoc_insertion_point(field_release:protocol.Operation.log)
  
  ::protocol::OperationLog* temp = log_;
  log_ = NULL;
  return temp;
}
void Operation::set_allocated_log(::protocol::OperationLog* log) {
  delete log_;
  log_ = log;
  if (log) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Operation.log)
}

// optional .protocol.OperationSetPrivilege set_privilege = 12;
bool Operation::has_set_privilege() const {
  return !_is_default_instance_ && set_privilege_ != NULL;
}
void Operation::clear_set_privilege() {
  if (GetArenaNoVirtual() == NULL && set_privilege_ != NULL) delete set_privilege_;
  set_privilege_ = NULL;
}
const ::protocol::OperationSetPrivilege& Operation::set_privilege() const {
  // @@protoc_insertion_point(field_get:protocol.Operation.set_privilege)
  return set_privilege_ != NULL ? *set_privilege_ : *default_instance_->set_privilege_;
}
::protocol::OperationSetPrivilege* Operation::mutable_set_privilege() {
  
  if (set_privilege_ == NULL) {
    set_privilege_ = new ::protocol::OperationSetPrivilege;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Operation.set_privilege)
  return set_privilege_;
}
::protocol::OperationSetPrivilege* Operation::release_set_privilege() {
  // @@protoc_insertion_point(field_release:protocol.Operation.set_privilege)
  
  ::protocol::OperationSetPrivilege* temp = set_privilege_;
  set_privilege_ = NULL;
  return temp;
}
void Operation::set_allocated_set_privilege(::protocol::OperationSetPrivilege* set_privilege) {
  delete set_privilege_;
  set_privilege_ = set_privilege;
  if (set_privilege) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Operation.set_privilege)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationSetThreshold::kTxThresholdFieldNumber;
const int OperationSetThreshold::kTypeThresholdsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationSetThreshold::OperationSetThreshold()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.OperationSetThreshold)
}

void OperationSetThreshold::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

OperationSetThreshold::OperationSetThreshold(const OperationSetThreshold& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.OperationSetThreshold)
}

void OperationSetThreshold::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  tx_threshold_ = GOOGLE_LONGLONG(0);
}

OperationSetThreshold::~OperationSetThreshold() {
  // @@protoc_insertion_point(destructor:protocol.OperationSetThreshold)
  SharedDtor();
}

void OperationSetThreshold::SharedDtor() {
  if (this != default_instance_) {
  }
}

void OperationSetThreshold::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OperationSetThreshold::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OperationSetThreshold_descriptor_;
}

const OperationSetThreshold& OperationSetThreshold::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

OperationSetThreshold* OperationSetThreshold::default_instance_ = NULL;

OperationSetThreshold* OperationSetThreshold::New(::google::protobuf::Arena* arena) const {
  OperationSetThreshold* n = new OperationSetThreshold;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OperationSetThreshold::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.OperationSetThreshold)
  tx_threshold_ = GOOGLE_LONGLONG(0);
  type_thresholds_.Clear();
}

bool OperationSetThreshold::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.OperationSetThreshold)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 tx_threshold = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &tx_threshold_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_type_thresholds;
        break;
      }

      // repeated .protocol.OperationTypeThreshold type_thresholds = 2;
      case 2: {
        if (tag == 18) {
         parse_type_thresholds:
          DO_(input->IncrementRecursionDepth());
         parse_loop_type_thresholds:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_type_thresholds()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_type_thresholds;
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
  // @@protoc_insertion_point(parse_success:protocol.OperationSetThreshold)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.OperationSetThreshold)
  return false;
#undef DO_
}

void OperationSetThreshold::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.OperationSetThreshold)
  // optional int64 tx_threshold = 1;
  if (this->tx_threshold() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->tx_threshold(), output);
  }

  // repeated .protocol.OperationTypeThreshold type_thresholds = 2;
  for (unsigned int i = 0, n = this->type_thresholds_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->type_thresholds(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.OperationSetThreshold)
}

::google::protobuf::uint8* OperationSetThreshold::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.OperationSetThreshold)
  // optional int64 tx_threshold = 1;
  if (this->tx_threshold() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->tx_threshold(), target);
  }

  // repeated .protocol.OperationTypeThreshold type_thresholds = 2;
  for (unsigned int i = 0, n = this->type_thresholds_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->type_thresholds(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.OperationSetThreshold)
  return target;
}

int OperationSetThreshold::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.OperationSetThreshold)
  int total_size = 0;

  // optional int64 tx_threshold = 1;
  if (this->tx_threshold() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->tx_threshold());
  }

  // repeated .protocol.OperationTypeThreshold type_thresholds = 2;
  total_size += 1 * this->type_thresholds_size();
  for (int i = 0; i < this->type_thresholds_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->type_thresholds(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OperationSetThreshold::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.OperationSetThreshold)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const OperationSetThreshold* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const OperationSetThreshold>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.OperationSetThreshold)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.OperationSetThreshold)
    MergeFrom(*source);
  }
}

void OperationSetThreshold::MergeFrom(const OperationSetThreshold& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.OperationSetThreshold)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  type_thresholds_.MergeFrom(from.type_thresholds_);
  if (from.tx_threshold() != 0) {
    set_tx_threshold(from.tx_threshold());
  }
}

void OperationSetThreshold::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.OperationSetThreshold)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationSetThreshold::CopyFrom(const OperationSetThreshold& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.OperationSetThreshold)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationSetThreshold::IsInitialized() const {

  return true;
}

void OperationSetThreshold::Swap(OperationSetThreshold* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationSetThreshold::InternalSwap(OperationSetThreshold* other) {
  std::swap(tx_threshold_, other->tx_threshold_);
  type_thresholds_.UnsafeArenaSwap(&other->type_thresholds_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OperationSetThreshold::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OperationSetThreshold_descriptor_;
  metadata.reflection = OperationSetThreshold_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OperationSetThreshold

// optional int64 tx_threshold = 1;
void OperationSetThreshold::clear_tx_threshold() {
  tx_threshold_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 OperationSetThreshold::tx_threshold() const {
  // @@protoc_insertion_point(field_get:protocol.OperationSetThreshold.tx_threshold)
  return tx_threshold_;
}
 void OperationSetThreshold::set_tx_threshold(::google::protobuf::int64 value) {
  
  tx_threshold_ = value;
  // @@protoc_insertion_point(field_set:protocol.OperationSetThreshold.tx_threshold)
}

// repeated .protocol.OperationTypeThreshold type_thresholds = 2;
int OperationSetThreshold::type_thresholds_size() const {
  return type_thresholds_.size();
}
void OperationSetThreshold::clear_type_thresholds() {
  type_thresholds_.Clear();
}
const ::protocol::OperationTypeThreshold& OperationSetThreshold::type_thresholds(int index) const {
  // @@protoc_insertion_point(field_get:protocol.OperationSetThreshold.type_thresholds)
  return type_thresholds_.Get(index);
}
::protocol::OperationTypeThreshold* OperationSetThreshold::mutable_type_thresholds(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.OperationSetThreshold.type_thresholds)
  return type_thresholds_.Mutable(index);
}
::protocol::OperationTypeThreshold* OperationSetThreshold::add_type_thresholds() {
  // @@protoc_insertion_point(field_add:protocol.OperationSetThreshold.type_thresholds)
  return type_thresholds_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::OperationTypeThreshold >*
OperationSetThreshold::mutable_type_thresholds() {
  // @@protoc_insertion_point(field_mutable_list:protocol.OperationSetThreshold.type_thresholds)
  return &type_thresholds_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::OperationTypeThreshold >&
OperationSetThreshold::type_thresholds() const {
  // @@protoc_insertion_point(field_list:protocol.OperationSetThreshold.type_thresholds)
  return type_thresholds_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* Transaction_Limit_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Transaction_Limit_descriptor_;
}
bool Transaction_Limit_IsValid(int value) {
  switch(value) {
    case 0:
    case 1000:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Transaction_Limit Transaction::UNKNOWN;
const Transaction_Limit Transaction::OPERATIONS;
const Transaction_Limit Transaction::Limit_MIN;
const Transaction_Limit Transaction::Limit_MAX;
const int Transaction::Limit_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Transaction::kSourceAddressFieldNumber;
const int Transaction::kNonceFieldNumber;
const int Transaction::kFeeLimitFieldNumber;
const int Transaction::kGasPriceFieldNumber;
const int Transaction::kCeilLedgerSeqFieldNumber;
const int Transaction::kMetadataFieldNumber;
const int Transaction::kOperationsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Transaction::Transaction()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Transaction)
}

void Transaction::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Transaction::Transaction(const Transaction& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Transaction)
}

void Transaction::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  source_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nonce_ = GOOGLE_LONGLONG(0);
  fee_limit_ = GOOGLE_LONGLONG(0);
  gas_price_ = GOOGLE_LONGLONG(0);
  ceil_ledger_seq_ = GOOGLE_LONGLONG(0);
  metadata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Transaction::~Transaction() {
  // @@protoc_insertion_point(destructor:protocol.Transaction)
  SharedDtor();
}

void Transaction::SharedDtor() {
  source_address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  metadata_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Transaction::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Transaction::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Transaction_descriptor_;
}

const Transaction& Transaction::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

Transaction* Transaction::default_instance_ = NULL;

Transaction* Transaction::New(::google::protobuf::Arena* arena) const {
  Transaction* n = new Transaction;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Transaction::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Transaction)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Transaction, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Transaction*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(nonce_, ceil_ledger_seq_);
  source_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  metadata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

  operations_.Clear();
}

bool Transaction::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Transaction)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string source_address = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_source_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->source_address().data(), this->source_address().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.Transaction.source_address"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_nonce;
        break;
      }

      // optional int64 nonce = 2;
      case 2: {
        if (tag == 16) {
         parse_nonce:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &nonce_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_fee_limit;
        break;
      }

      // optional int64 fee_limit = 3;
      case 3: {
        if (tag == 24) {
         parse_fee_limit:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &fee_limit_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_gas_price;
        break;
      }

      // optional int64 gas_price = 4;
      case 4: {
        if (tag == 32) {
         parse_gas_price:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &gas_price_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_ceil_ledger_seq;
        break;
      }

      // optional int64 ceil_ledger_seq = 5;
      case 5: {
        if (tag == 40) {
         parse_ceil_ledger_seq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &ceil_ledger_seq_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_metadata;
        break;
      }

      // optional bytes metadata = 6;
      case 6: {
        if (tag == 50) {
         parse_metadata:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_metadata()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_operations;
        break;
      }

      // repeated .protocol.Operation operations = 7;
      case 7: {
        if (tag == 58) {
         parse_operations:
          DO_(input->IncrementRecursionDepth());
         parse_loop_operations:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_operations()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_loop_operations;
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
  // @@protoc_insertion_point(parse_success:protocol.Transaction)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Transaction)
  return false;
#undef DO_
}

void Transaction::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Transaction)
  // optional string source_address = 1;
  if (this->source_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->source_address().data(), this->source_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Transaction.source_address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->source_address(), output);
  }

  // optional int64 nonce = 2;
  if (this->nonce() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->nonce(), output);
  }

  // optional int64 fee_limit = 3;
  if (this->fee_limit() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->fee_limit(), output);
  }

  // optional int64 gas_price = 4;
  if (this->gas_price() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->gas_price(), output);
  }

  // optional int64 ceil_ledger_seq = 5;
  if (this->ceil_ledger_seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->ceil_ledger_seq(), output);
  }

  // optional bytes metadata = 6;
  if (this->metadata().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      6, this->metadata(), output);
  }

  // repeated .protocol.Operation operations = 7;
  for (unsigned int i = 0, n = this->operations_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->operations(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Transaction)
}

::google::protobuf::uint8* Transaction::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Transaction)
  // optional string source_address = 1;
  if (this->source_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->source_address().data(), this->source_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Transaction.source_address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->source_address(), target);
  }

  // optional int64 nonce = 2;
  if (this->nonce() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->nonce(), target);
  }

  // optional int64 fee_limit = 3;
  if (this->fee_limit() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->fee_limit(), target);
  }

  // optional int64 gas_price = 4;
  if (this->gas_price() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->gas_price(), target);
  }

  // optional int64 ceil_ledger_seq = 5;
  if (this->ceil_ledger_seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->ceil_ledger_seq(), target);
  }

  // optional bytes metadata = 6;
  if (this->metadata().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        6, this->metadata(), target);
  }

  // repeated .protocol.Operation operations = 7;
  for (unsigned int i = 0, n = this->operations_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, this->operations(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Transaction)
  return target;
}

int Transaction::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Transaction)
  int total_size = 0;

  // optional string source_address = 1;
  if (this->source_address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->source_address());
  }

  // optional int64 nonce = 2;
  if (this->nonce() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->nonce());
  }

  // optional int64 fee_limit = 3;
  if (this->fee_limit() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->fee_limit());
  }

  // optional int64 gas_price = 4;
  if (this->gas_price() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->gas_price());
  }

  // optional int64 ceil_ledger_seq = 5;
  if (this->ceil_ledger_seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->ceil_ledger_seq());
  }

  // optional bytes metadata = 6;
  if (this->metadata().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->metadata());
  }

  // repeated .protocol.Operation operations = 7;
  total_size += 1 * this->operations_size();
  for (int i = 0; i < this->operations_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->operations(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Transaction::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Transaction)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Transaction* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Transaction>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Transaction)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Transaction)
    MergeFrom(*source);
  }
}

void Transaction::MergeFrom(const Transaction& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Transaction)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  operations_.MergeFrom(from.operations_);
  if (from.source_address().size() > 0) {

    source_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.source_address_);
  }
  if (from.nonce() != 0) {
    set_nonce(from.nonce());
  }
  if (from.fee_limit() != 0) {
    set_fee_limit(from.fee_limit());
  }
  if (from.gas_price() != 0) {
    set_gas_price(from.gas_price());
  }
  if (from.ceil_ledger_seq() != 0) {
    set_ceil_ledger_seq(from.ceil_ledger_seq());
  }
  if (from.metadata().size() > 0) {

    metadata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.metadata_);
  }
}

void Transaction::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Transaction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Transaction::CopyFrom(const Transaction& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Transaction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Transaction::IsInitialized() const {

  return true;
}

void Transaction::Swap(Transaction* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Transaction::InternalSwap(Transaction* other) {
  source_address_.Swap(&other->source_address_);
  std::swap(nonce_, other->nonce_);
  std::swap(fee_limit_, other->fee_limit_);
  std::swap(gas_price_, other->gas_price_);
  std::swap(ceil_ledger_seq_, other->ceil_ledger_seq_);
  metadata_.Swap(&other->metadata_);
  operations_.UnsafeArenaSwap(&other->operations_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Transaction::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Transaction_descriptor_;
  metadata.reflection = Transaction_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Transaction

// optional string source_address = 1;
void Transaction::clear_source_address() {
  source_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Transaction::source_address() const {
  // @@protoc_insertion_point(field_get:protocol.Transaction.source_address)
  return source_address_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Transaction::set_source_address(const ::std::string& value) {
  
  source_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Transaction.source_address)
}
 void Transaction::set_source_address(const char* value) {
  
  source_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Transaction.source_address)
}
 void Transaction::set_source_address(const char* value, size_t size) {
  
  source_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Transaction.source_address)
}
 ::std::string* Transaction::mutable_source_address() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Transaction.source_address)
  return source_address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Transaction::release_source_address() {
  // @@protoc_insertion_point(field_release:protocol.Transaction.source_address)
  
  return source_address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Transaction::set_allocated_source_address(::std::string* source_address) {
  if (source_address != NULL) {
    
  } else {
    
  }
  source_address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), source_address);
  // @@protoc_insertion_point(field_set_allocated:protocol.Transaction.source_address)
}

// optional int64 nonce = 2;
void Transaction::clear_nonce() {
  nonce_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Transaction::nonce() const {
  // @@protoc_insertion_point(field_get:protocol.Transaction.nonce)
  return nonce_;
}
 void Transaction::set_nonce(::google::protobuf::int64 value) {
  
  nonce_ = value;
  // @@protoc_insertion_point(field_set:protocol.Transaction.nonce)
}

// optional int64 fee_limit = 3;
void Transaction::clear_fee_limit() {
  fee_limit_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Transaction::fee_limit() const {
  // @@protoc_insertion_point(field_get:protocol.Transaction.fee_limit)
  return fee_limit_;
}
 void Transaction::set_fee_limit(::google::protobuf::int64 value) {
  
  fee_limit_ = value;
  // @@protoc_insertion_point(field_set:protocol.Transaction.fee_limit)
}

// optional int64 gas_price = 4;
void Transaction::clear_gas_price() {
  gas_price_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Transaction::gas_price() const {
  // @@protoc_insertion_point(field_get:protocol.Transaction.gas_price)
  return gas_price_;
}
 void Transaction::set_gas_price(::google::protobuf::int64 value) {
  
  gas_price_ = value;
  // @@protoc_insertion_point(field_set:protocol.Transaction.gas_price)
}

// optional int64 ceil_ledger_seq = 5;
void Transaction::clear_ceil_ledger_seq() {
  ceil_ledger_seq_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Transaction::ceil_ledger_seq() const {
  // @@protoc_insertion_point(field_get:protocol.Transaction.ceil_ledger_seq)
  return ceil_ledger_seq_;
}
 void Transaction::set_ceil_ledger_seq(::google::protobuf::int64 value) {
  
  ceil_ledger_seq_ = value;
  // @@protoc_insertion_point(field_set:protocol.Transaction.ceil_ledger_seq)
}

// optional bytes metadata = 6;
void Transaction::clear_metadata() {
  metadata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Transaction::metadata() const {
  // @@protoc_insertion_point(field_get:protocol.Transaction.metadata)
  return metadata_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Transaction::set_metadata(const ::std::string& value) {
  
  metadata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Transaction.metadata)
}
 void Transaction::set_metadata(const char* value) {
  
  metadata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Transaction.metadata)
}
 void Transaction::set_metadata(const void* value, size_t size) {
  
  metadata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Transaction.metadata)
}
 ::std::string* Transaction::mutable_metadata() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Transaction.metadata)
  return metadata_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Transaction::release_metadata() {
  // @@protoc_insertion_point(field_release:protocol.Transaction.metadata)
  
  return metadata_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Transaction::set_allocated_metadata(::std::string* metadata) {
  if (metadata != NULL) {
    
  } else {
    
  }
  metadata_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), metadata);
  // @@protoc_insertion_point(field_set_allocated:protocol.Transaction.metadata)
}

// repeated .protocol.Operation operations = 7;
int Transaction::operations_size() const {
  return operations_.size();
}
void Transaction::clear_operations() {
  operations_.Clear();
}
const ::protocol::Operation& Transaction::operations(int index) const {
  // @@protoc_insertion_point(field_get:protocol.Transaction.operations)
  return operations_.Get(index);
}
::protocol::Operation* Transaction::mutable_operations(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.Transaction.operations)
  return operations_.Mutable(index);
}
::protocol::Operation* Transaction::add_operations() {
  // @@protoc_insertion_point(field_add:protocol.Transaction.operations)
  return operations_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::Operation >*
Transaction::mutable_operations() {
  // @@protoc_insertion_point(field_mutable_list:protocol.Transaction.operations)
  return &operations_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::Operation >&
Transaction::operations() const {
  // @@protoc_insertion_point(field_list:protocol.Transaction.operations)
  return operations_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* Signer_Limit_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Signer_Limit_descriptor_;
}
bool Signer_Limit_IsValid(int value) {
  switch(value) {
    case 0:
    case 100:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Signer_Limit Signer::SIGNER_NONE;
const Signer_Limit Signer::SIGNER;
const Signer_Limit Signer::Limit_MIN;
const Signer_Limit Signer::Limit_MAX;
const int Signer::Limit_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Signer::kAddressFieldNumber;
const int Signer::kWeightFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Signer::Signer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Signer)
}

void Signer::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Signer::Signer(const Signer& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Signer)
}

void Signer::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  weight_ = GOOGLE_LONGLONG(0);
}

Signer::~Signer() {
  // @@protoc_insertion_point(destructor:protocol.Signer)
  SharedDtor();
}

void Signer::SharedDtor() {
  address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Signer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Signer::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Signer_descriptor_;
}

const Signer& Signer::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

Signer* Signer::default_instance_ = NULL;

Signer* Signer::New(::google::protobuf::Arena* arena) const {
  Signer* n = new Signer;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Signer::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Signer)
  address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  weight_ = GOOGLE_LONGLONG(0);
}

bool Signer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Signer)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string address = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->address().data(), this->address().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.Signer.address"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_weight;
        break;
      }

      // optional int64 weight = 2;
      case 2: {
        if (tag == 16) {
         parse_weight:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &weight_)));

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
  // @@protoc_insertion_point(parse_success:protocol.Signer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Signer)
  return false;
#undef DO_
}

void Signer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Signer)
  // optional string address = 1;
  if (this->address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->address().data(), this->address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Signer.address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->address(), output);
  }

  // optional int64 weight = 2;
  if (this->weight() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->weight(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Signer)
}

::google::protobuf::uint8* Signer::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Signer)
  // optional string address = 1;
  if (this->address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->address().data(), this->address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Signer.address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->address(), target);
  }

  // optional int64 weight = 2;
  if (this->weight() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->weight(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Signer)
  return target;
}

int Signer::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Signer)
  int total_size = 0;

  // optional string address = 1;
  if (this->address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->address());
  }

  // optional int64 weight = 2;
  if (this->weight() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->weight());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Signer::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Signer)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Signer* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Signer>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Signer)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Signer)
    MergeFrom(*source);
  }
}

void Signer::MergeFrom(const Signer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Signer)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.address().size() > 0) {

    address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.address_);
  }
  if (from.weight() != 0) {
    set_weight(from.weight());
  }
}

void Signer::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Signer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Signer::CopyFrom(const Signer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Signer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Signer::IsInitialized() const {

  return true;
}

void Signer::Swap(Signer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Signer::InternalSwap(Signer* other) {
  address_.Swap(&other->address_);
  std::swap(weight_, other->weight_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Signer::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Signer_descriptor_;
  metadata.reflection = Signer_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Signer

// optional string address = 1;
void Signer::clear_address() {
  address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Signer::address() const {
  // @@protoc_insertion_point(field_get:protocol.Signer.address)
  return address_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Signer::set_address(const ::std::string& value) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Signer.address)
}
 void Signer::set_address(const char* value) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Signer.address)
}
 void Signer::set_address(const char* value, size_t size) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Signer.address)
}
 ::std::string* Signer::mutable_address() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Signer.address)
  return address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Signer::release_address() {
  // @@protoc_insertion_point(field_release:protocol.Signer.address)
  
  return address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Signer::set_allocated_address(::std::string* address) {
  if (address != NULL) {
    
  } else {
    
  }
  address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), address);
  // @@protoc_insertion_point(field_set_allocated:protocol.Signer.address)
}

// optional int64 weight = 2;
void Signer::clear_weight() {
  weight_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Signer::weight() const {
  // @@protoc_insertion_point(field_get:protocol.Signer.weight)
  return weight_;
}
 void Signer::set_weight(::google::protobuf::int64 value) {
  
  weight_ = value;
  // @@protoc_insertion_point(field_set:protocol.Signer.weight)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* Trigger_TransactionType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Trigger_TransactionType_descriptor_;
}
bool Trigger_TransactionType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Trigger_TransactionType Trigger::NORMAL_TRANSACTION;
const Trigger_TransactionType Trigger::CONTRACT_TRANSACTION;
const Trigger_TransactionType Trigger::TransactionType_MIN;
const Trigger_TransactionType Trigger::TransactionType_MAX;
const int Trigger::TransactionType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Trigger_OperationTrigger::kHashFieldNumber;
const int Trigger_OperationTrigger::kIndexFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Trigger_OperationTrigger::Trigger_OperationTrigger()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Trigger.OperationTrigger)
}

void Trigger_OperationTrigger::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Trigger_OperationTrigger::Trigger_OperationTrigger(const Trigger_OperationTrigger& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Trigger.OperationTrigger)
}

void Trigger_OperationTrigger::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  index_ = GOOGLE_LONGLONG(0);
}

Trigger_OperationTrigger::~Trigger_OperationTrigger() {
  // @@protoc_insertion_point(destructor:protocol.Trigger.OperationTrigger)
  SharedDtor();
}

void Trigger_OperationTrigger::SharedDtor() {
  hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Trigger_OperationTrigger::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Trigger_OperationTrigger::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Trigger_OperationTrigger_descriptor_;
}

const Trigger_OperationTrigger& Trigger_OperationTrigger::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

Trigger_OperationTrigger* Trigger_OperationTrigger::default_instance_ = NULL;

Trigger_OperationTrigger* Trigger_OperationTrigger::New(::google::protobuf::Arena* arena) const {
  Trigger_OperationTrigger* n = new Trigger_OperationTrigger;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Trigger_OperationTrigger::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Trigger.OperationTrigger)
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  index_ = GOOGLE_LONGLONG(0);
}

bool Trigger_OperationTrigger::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Trigger.OperationTrigger)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes hash = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_hash()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_index;
        break;
      }

      // optional int64 index = 2;
      case 2: {
        if (tag == 16) {
         parse_index:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &index_)));

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
  // @@protoc_insertion_point(parse_success:protocol.Trigger.OperationTrigger)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Trigger.OperationTrigger)
  return false;
#undef DO_
}

void Trigger_OperationTrigger::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Trigger.OperationTrigger)
  // optional bytes hash = 1;
  if (this->hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->hash(), output);
  }

  // optional int64 index = 2;
  if (this->index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->index(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Trigger.OperationTrigger)
}

::google::protobuf::uint8* Trigger_OperationTrigger::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Trigger.OperationTrigger)
  // optional bytes hash = 1;
  if (this->hash().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->hash(), target);
  }

  // optional int64 index = 2;
  if (this->index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->index(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Trigger.OperationTrigger)
  return target;
}

int Trigger_OperationTrigger::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Trigger.OperationTrigger)
  int total_size = 0;

  // optional bytes hash = 1;
  if (this->hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->hash());
  }

  // optional int64 index = 2;
  if (this->index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->index());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Trigger_OperationTrigger::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Trigger.OperationTrigger)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Trigger_OperationTrigger* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Trigger_OperationTrigger>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Trigger.OperationTrigger)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Trigger.OperationTrigger)
    MergeFrom(*source);
  }
}

void Trigger_OperationTrigger::MergeFrom(const Trigger_OperationTrigger& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Trigger.OperationTrigger)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.hash().size() > 0) {

    hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.hash_);
  }
  if (from.index() != 0) {
    set_index(from.index());
  }
}

void Trigger_OperationTrigger::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Trigger.OperationTrigger)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Trigger_OperationTrigger::CopyFrom(const Trigger_OperationTrigger& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Trigger.OperationTrigger)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Trigger_OperationTrigger::IsInitialized() const {

  return true;
}

void Trigger_OperationTrigger::Swap(Trigger_OperationTrigger* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Trigger_OperationTrigger::InternalSwap(Trigger_OperationTrigger* other) {
  hash_.Swap(&other->hash_);
  std::swap(index_, other->index_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Trigger_OperationTrigger::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Trigger_OperationTrigger_descriptor_;
  metadata.reflection = Trigger_OperationTrigger_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Trigger::kTransactionTypeFieldNumber;
const int Trigger::kLedgerSeqFieldNumber;
const int Trigger::kTransactionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Trigger::Trigger()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Trigger)
}

void Trigger::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  transaction_ = const_cast< ::protocol::Trigger_OperationTrigger*>(&::protocol::Trigger_OperationTrigger::default_instance());
}

Trigger::Trigger(const Trigger& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Trigger)
}

void Trigger::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  transaction_type_ = 0;
  ledger_seq_ = GOOGLE_LONGLONG(0);
  transaction_ = NULL;
}

Trigger::~Trigger() {
  // @@protoc_insertion_point(destructor:protocol.Trigger)
  SharedDtor();
}

void Trigger::SharedDtor() {
  if (this != default_instance_) {
    delete transaction_;
  }
}

void Trigger::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Trigger::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Trigger_descriptor_;
}

const Trigger& Trigger::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

Trigger* Trigger::default_instance_ = NULL;

Trigger* Trigger::New(::google::protobuf::Arena* arena) const {
  Trigger* n = new Trigger;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Trigger::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Trigger)
  transaction_type_ = 0;
  ledger_seq_ = GOOGLE_LONGLONG(0);
  if (GetArenaNoVirtual() == NULL && transaction_ != NULL) delete transaction_;
  transaction_ = NULL;
}

bool Trigger::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Trigger)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.Trigger.TransactionType transaction_type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_transaction_type(static_cast< ::protocol::Trigger_TransactionType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_ledger_seq;
        break;
      }

      // optional int64 ledger_seq = 2;
      case 2: {
        if (tag == 16) {
         parse_ledger_seq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &ledger_seq_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_transaction;
        break;
      }

      // optional .protocol.Trigger.OperationTrigger transaction = 3;
      case 3: {
        if (tag == 26) {
         parse_transaction:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_transaction()));
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
  // @@protoc_insertion_point(parse_success:protocol.Trigger)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Trigger)
  return false;
#undef DO_
}

void Trigger::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Trigger)
  // optional .protocol.Trigger.TransactionType transaction_type = 1;
  if (this->transaction_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->transaction_type(), output);
  }

  // optional int64 ledger_seq = 2;
  if (this->ledger_seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->ledger_seq(), output);
  }

  // optional .protocol.Trigger.OperationTrigger transaction = 3;
  if (this->has_transaction()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->transaction_, output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Trigger)
}

::google::protobuf::uint8* Trigger::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Trigger)
  // optional .protocol.Trigger.TransactionType transaction_type = 1;
  if (this->transaction_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->transaction_type(), target);
  }

  // optional int64 ledger_seq = 2;
  if (this->ledger_seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->ledger_seq(), target);
  }

  // optional .protocol.Trigger.OperationTrigger transaction = 3;
  if (this->has_transaction()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->transaction_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Trigger)
  return target;
}

int Trigger::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Trigger)
  int total_size = 0;

  // optional .protocol.Trigger.TransactionType transaction_type = 1;
  if (this->transaction_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->transaction_type());
  }

  // optional int64 ledger_seq = 2;
  if (this->ledger_seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->ledger_seq());
  }

  // optional .protocol.Trigger.OperationTrigger transaction = 3;
  if (this->has_transaction()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->transaction_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Trigger::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Trigger)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Trigger* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Trigger>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Trigger)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Trigger)
    MergeFrom(*source);
  }
}

void Trigger::MergeFrom(const Trigger& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Trigger)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.transaction_type() != 0) {
    set_transaction_type(from.transaction_type());
  }
  if (from.ledger_seq() != 0) {
    set_ledger_seq(from.ledger_seq());
  }
  if (from.has_transaction()) {
    mutable_transaction()->::protocol::Trigger_OperationTrigger::MergeFrom(from.transaction());
  }
}

void Trigger::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Trigger)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Trigger::CopyFrom(const Trigger& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Trigger)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Trigger::IsInitialized() const {

  return true;
}

void Trigger::Swap(Trigger* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Trigger::InternalSwap(Trigger* other) {
  std::swap(transaction_type_, other->transaction_type_);
  std::swap(ledger_seq_, other->ledger_seq_);
  std::swap(transaction_, other->transaction_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Trigger::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Trigger_descriptor_;
  metadata.reflection = Trigger_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Trigger_OperationTrigger

// optional bytes hash = 1;
void Trigger_OperationTrigger::clear_hash() {
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Trigger_OperationTrigger::hash() const {
  // @@protoc_insertion_point(field_get:protocol.Trigger.OperationTrigger.hash)
  return hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Trigger_OperationTrigger::set_hash(const ::std::string& value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Trigger.OperationTrigger.hash)
}
 void Trigger_OperationTrigger::set_hash(const char* value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Trigger.OperationTrigger.hash)
}
 void Trigger_OperationTrigger::set_hash(const void* value, size_t size) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Trigger.OperationTrigger.hash)
}
 ::std::string* Trigger_OperationTrigger::mutable_hash() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Trigger.OperationTrigger.hash)
  return hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Trigger_OperationTrigger::release_hash() {
  // @@protoc_insertion_point(field_release:protocol.Trigger.OperationTrigger.hash)
  
  return hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Trigger_OperationTrigger::set_allocated_hash(::std::string* hash) {
  if (hash != NULL) {
    
  } else {
    
  }
  hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hash);
  // @@protoc_insertion_point(field_set_allocated:protocol.Trigger.OperationTrigger.hash)
}

// optional int64 index = 2;
void Trigger_OperationTrigger::clear_index() {
  index_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Trigger_OperationTrigger::index() const {
  // @@protoc_insertion_point(field_get:protocol.Trigger.OperationTrigger.index)
  return index_;
}
 void Trigger_OperationTrigger::set_index(::google::protobuf::int64 value) {
  
  index_ = value;
  // @@protoc_insertion_point(field_set:protocol.Trigger.OperationTrigger.index)
}

// -------------------------------------------------------------------

// Trigger

// optional .protocol.Trigger.TransactionType transaction_type = 1;
void Trigger::clear_transaction_type() {
  transaction_type_ = 0;
}
 ::protocol::Trigger_TransactionType Trigger::transaction_type() const {
  // @@protoc_insertion_point(field_get:protocol.Trigger.transaction_type)
  return static_cast< ::protocol::Trigger_TransactionType >(transaction_type_);
}
 void Trigger::set_transaction_type(::protocol::Trigger_TransactionType value) {
  
  transaction_type_ = value;
  // @@protoc_insertion_point(field_set:protocol.Trigger.transaction_type)
}

// optional int64 ledger_seq = 2;
void Trigger::clear_ledger_seq() {
  ledger_seq_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Trigger::ledger_seq() const {
  // @@protoc_insertion_point(field_get:protocol.Trigger.ledger_seq)
  return ledger_seq_;
}
 void Trigger::set_ledger_seq(::google::protobuf::int64 value) {
  
  ledger_seq_ = value;
  // @@protoc_insertion_point(field_set:protocol.Trigger.ledger_seq)
}

// optional .protocol.Trigger.OperationTrigger transaction = 3;
bool Trigger::has_transaction() const {
  return !_is_default_instance_ && transaction_ != NULL;
}
void Trigger::clear_transaction() {
  if (GetArenaNoVirtual() == NULL && transaction_ != NULL) delete transaction_;
  transaction_ = NULL;
}
const ::protocol::Trigger_OperationTrigger& Trigger::transaction() const {
  // @@protoc_insertion_point(field_get:protocol.Trigger.transaction)
  return transaction_ != NULL ? *transaction_ : *default_instance_->transaction_;
}
::protocol::Trigger_OperationTrigger* Trigger::mutable_transaction() {
  
  if (transaction_ == NULL) {
    transaction_ = new ::protocol::Trigger_OperationTrigger;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Trigger.transaction)
  return transaction_;
}
::protocol::Trigger_OperationTrigger* Trigger::release_transaction() {
  // @@protoc_insertion_point(field_release:protocol.Trigger.transaction)
  
  ::protocol::Trigger_OperationTrigger* temp = transaction_;
  transaction_ = NULL;
  return temp;
}
void Trigger::set_allocated_transaction(::protocol::Trigger_OperationTrigger* transaction) {
  delete transaction_;
  transaction_ = transaction;
  if (transaction) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Trigger.transaction)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TransactionEnv::kTransactionFieldNumber;
const int TransactionEnv::kSignaturesFieldNumber;
const int TransactionEnv::kTriggerFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TransactionEnv::TransactionEnv()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.TransactionEnv)
}

void TransactionEnv::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  transaction_ = const_cast< ::protocol::Transaction*>(&::protocol::Transaction::default_instance());
  trigger_ = const_cast< ::protocol::Trigger*>(&::protocol::Trigger::default_instance());
}

TransactionEnv::TransactionEnv(const TransactionEnv& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.TransactionEnv)
}

void TransactionEnv::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  transaction_ = NULL;
  trigger_ = NULL;
}

TransactionEnv::~TransactionEnv() {
  // @@protoc_insertion_point(destructor:protocol.TransactionEnv)
  SharedDtor();
}

void TransactionEnv::SharedDtor() {
  if (this != default_instance_) {
    delete transaction_;
    delete trigger_;
  }
}

void TransactionEnv::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TransactionEnv::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TransactionEnv_descriptor_;
}

const TransactionEnv& TransactionEnv::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

TransactionEnv* TransactionEnv::default_instance_ = NULL;

TransactionEnv* TransactionEnv::New(::google::protobuf::Arena* arena) const {
  TransactionEnv* n = new TransactionEnv;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TransactionEnv::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.TransactionEnv)
  if (GetArenaNoVirtual() == NULL && transaction_ != NULL) delete transaction_;
  transaction_ = NULL;
  if (GetArenaNoVirtual() == NULL && trigger_ != NULL) delete trigger_;
  trigger_ = NULL;
  signatures_.Clear();
}

bool TransactionEnv::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.TransactionEnv)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.Transaction transaction = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_transaction()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_signatures;
        break;
      }

      // repeated .protocol.Signature signatures = 2;
      case 2: {
        if (tag == 18) {
         parse_signatures:
          DO_(input->IncrementRecursionDepth());
         parse_loop_signatures:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_signatures()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_signatures;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(26)) goto parse_trigger;
        break;
      }

      // optional .protocol.Trigger trigger = 3;
      case 3: {
        if (tag == 26) {
         parse_trigger:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_trigger()));
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
  // @@protoc_insertion_point(parse_success:protocol.TransactionEnv)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.TransactionEnv)
  return false;
#undef DO_
}

void TransactionEnv::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.TransactionEnv)
  // optional .protocol.Transaction transaction = 1;
  if (this->has_transaction()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->transaction_, output);
  }

  // repeated .protocol.Signature signatures = 2;
  for (unsigned int i = 0, n = this->signatures_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->signatures(i), output);
  }

  // optional .protocol.Trigger trigger = 3;
  if (this->has_trigger()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->trigger_, output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.TransactionEnv)
}

::google::protobuf::uint8* TransactionEnv::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.TransactionEnv)
  // optional .protocol.Transaction transaction = 1;
  if (this->has_transaction()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->transaction_, false, target);
  }

  // repeated .protocol.Signature signatures = 2;
  for (unsigned int i = 0, n = this->signatures_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->signatures(i), false, target);
  }

  // optional .protocol.Trigger trigger = 3;
  if (this->has_trigger()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->trigger_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.TransactionEnv)
  return target;
}

int TransactionEnv::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.TransactionEnv)
  int total_size = 0;

  // optional .protocol.Transaction transaction = 1;
  if (this->has_transaction()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->transaction_);
  }

  // optional .protocol.Trigger trigger = 3;
  if (this->has_trigger()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->trigger_);
  }

  // repeated .protocol.Signature signatures = 2;
  total_size += 1 * this->signatures_size();
  for (int i = 0; i < this->signatures_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->signatures(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TransactionEnv::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.TransactionEnv)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const TransactionEnv* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const TransactionEnv>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.TransactionEnv)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.TransactionEnv)
    MergeFrom(*source);
  }
}

void TransactionEnv::MergeFrom(const TransactionEnv& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.TransactionEnv)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  signatures_.MergeFrom(from.signatures_);
  if (from.has_transaction()) {
    mutable_transaction()->::protocol::Transaction::MergeFrom(from.transaction());
  }
  if (from.has_trigger()) {
    mutable_trigger()->::protocol::Trigger::MergeFrom(from.trigger());
  }
}

void TransactionEnv::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.TransactionEnv)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TransactionEnv::CopyFrom(const TransactionEnv& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.TransactionEnv)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TransactionEnv::IsInitialized() const {

  return true;
}

void TransactionEnv::Swap(TransactionEnv* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TransactionEnv::InternalSwap(TransactionEnv* other) {
  std::swap(transaction_, other->transaction_);
  signatures_.UnsafeArenaSwap(&other->signatures_);
  std::swap(trigger_, other->trigger_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TransactionEnv::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TransactionEnv_descriptor_;
  metadata.reflection = TransactionEnv_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TransactionEnv

// optional .protocol.Transaction transaction = 1;
bool TransactionEnv::has_transaction() const {
  return !_is_default_instance_ && transaction_ != NULL;
}
void TransactionEnv::clear_transaction() {
  if (GetArenaNoVirtual() == NULL && transaction_ != NULL) delete transaction_;
  transaction_ = NULL;
}
const ::protocol::Transaction& TransactionEnv::transaction() const {
  // @@protoc_insertion_point(field_get:protocol.TransactionEnv.transaction)
  return transaction_ != NULL ? *transaction_ : *default_instance_->transaction_;
}
::protocol::Transaction* TransactionEnv::mutable_transaction() {
  
  if (transaction_ == NULL) {
    transaction_ = new ::protocol::Transaction;
  }
  // @@protoc_insertion_point(field_mutable:protocol.TransactionEnv.transaction)
  return transaction_;
}
::protocol::Transaction* TransactionEnv::release_transaction() {
  // @@protoc_insertion_point(field_release:protocol.TransactionEnv.transaction)
  
  ::protocol::Transaction* temp = transaction_;
  transaction_ = NULL;
  return temp;
}
void TransactionEnv::set_allocated_transaction(::protocol::Transaction* transaction) {
  delete transaction_;
  transaction_ = transaction;
  if (transaction) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.TransactionEnv.transaction)
}

// repeated .protocol.Signature signatures = 2;
int TransactionEnv::signatures_size() const {
  return signatures_.size();
}
void TransactionEnv::clear_signatures() {
  signatures_.Clear();
}
const ::protocol::Signature& TransactionEnv::signatures(int index) const {
  // @@protoc_insertion_point(field_get:protocol.TransactionEnv.signatures)
  return signatures_.Get(index);
}
::protocol::Signature* TransactionEnv::mutable_signatures(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.TransactionEnv.signatures)
  return signatures_.Mutable(index);
}
::protocol::Signature* TransactionEnv::add_signatures() {
  // @@protoc_insertion_point(field_add:protocol.TransactionEnv.signatures)
  return signatures_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::Signature >*
TransactionEnv::mutable_signatures() {
  // @@protoc_insertion_point(field_mutable_list:protocol.TransactionEnv.signatures)
  return &signatures_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::Signature >&
TransactionEnv::signatures() const {
  // @@protoc_insertion_point(field_list:protocol.TransactionEnv.signatures)
  return signatures_;
}

// optional .protocol.Trigger trigger = 3;
bool TransactionEnv::has_trigger() const {
  return !_is_default_instance_ && trigger_ != NULL;
}
void TransactionEnv::clear_trigger() {
  if (GetArenaNoVirtual() == NULL && trigger_ != NULL) delete trigger_;
  trigger_ = NULL;
}
const ::protocol::Trigger& TransactionEnv::trigger() const {
  // @@protoc_insertion_point(field_get:protocol.TransactionEnv.trigger)
  return trigger_ != NULL ? *trigger_ : *default_instance_->trigger_;
}
::protocol::Trigger* TransactionEnv::mutable_trigger() {
  
  if (trigger_ == NULL) {
    trigger_ = new ::protocol::Trigger;
  }
  // @@protoc_insertion_point(field_mutable:protocol.TransactionEnv.trigger)
  return trigger_;
}
::protocol::Trigger* TransactionEnv::release_trigger() {
  // @@protoc_insertion_point(field_release:protocol.TransactionEnv.trigger)
  
  ::protocol::Trigger* temp = trigger_;
  trigger_ = NULL;
  return temp;
}
void TransactionEnv::set_allocated_trigger(::protocol::Trigger* trigger) {
  delete trigger_;
  trigger_ = trigger;
  if (trigger) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.TransactionEnv.trigger)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TransactionEnvStore::kTransactionEnvFieldNumber;
const int TransactionEnvStore::kErrorCodeFieldNumber;
const int TransactionEnvStore::kErrorDescFieldNumber;
const int TransactionEnvStore::kLedgerSeqFieldNumber;
const int TransactionEnvStore::kCloseTimeFieldNumber;
const int TransactionEnvStore::kHashFieldNumber;
const int TransactionEnvStore::kActualFeeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TransactionEnvStore::TransactionEnvStore()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.TransactionEnvStore)
}

void TransactionEnvStore::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  transaction_env_ = const_cast< ::protocol::TransactionEnv*>(&::protocol::TransactionEnv::default_instance());
}

TransactionEnvStore::TransactionEnvStore(const TransactionEnvStore& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.TransactionEnvStore)
}

void TransactionEnvStore::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  transaction_env_ = NULL;
  error_code_ = 0;
  error_desc_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ledger_seq_ = GOOGLE_LONGLONG(0);
  close_time_ = GOOGLE_LONGLONG(0);
  hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  actual_fee_ = GOOGLE_LONGLONG(0);
}

TransactionEnvStore::~TransactionEnvStore() {
  // @@protoc_insertion_point(destructor:protocol.TransactionEnvStore)
  SharedDtor();
}

void TransactionEnvStore::SharedDtor() {
  error_desc_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete transaction_env_;
  }
}

void TransactionEnvStore::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TransactionEnvStore::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TransactionEnvStore_descriptor_;
}

const TransactionEnvStore& TransactionEnvStore::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

TransactionEnvStore* TransactionEnvStore::default_instance_ = NULL;

TransactionEnvStore* TransactionEnvStore::New(::google::protobuf::Arena* arena) const {
  TransactionEnvStore* n = new TransactionEnvStore;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TransactionEnvStore::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.TransactionEnvStore)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(TransactionEnvStore, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<TransactionEnvStore*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(ledger_seq_, close_time_);
  ZR_(actual_fee_, error_code_);
  if (GetArenaNoVirtual() == NULL && transaction_env_ != NULL) delete transaction_env_;
  transaction_env_ = NULL;
  error_desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool TransactionEnvStore::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.TransactionEnvStore)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.TransactionEnv transaction_env = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_transaction_env()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_error_code;
        break;
      }

      // optional int32 error_code = 2;
      case 2: {
        if (tag == 16) {
         parse_error_code:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &error_code_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_error_desc;
        break;
      }

      // optional string error_desc = 3;
      case 3: {
        if (tag == 26) {
         parse_error_desc:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_error_desc()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->error_desc().data(), this->error_desc().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.TransactionEnvStore.error_desc"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_ledger_seq;
        break;
      }

      // optional int64 ledger_seq = 4;
      case 4: {
        if (tag == 32) {
         parse_ledger_seq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &ledger_seq_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_close_time;
        break;
      }

      // optional int64 close_time = 5;
      case 5: {
        if (tag == 40) {
         parse_close_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &close_time_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_hash;
        break;
      }

      // optional bytes hash = 6;
      case 6: {
        if (tag == 50) {
         parse_hash:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_hash()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_actual_fee;
        break;
      }

      // optional int64 actual_fee = 7;
      case 7: {
        if (tag == 56) {
         parse_actual_fee:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &actual_fee_)));

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
  // @@protoc_insertion_point(parse_success:protocol.TransactionEnvStore)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.TransactionEnvStore)
  return false;
#undef DO_
}

void TransactionEnvStore::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.TransactionEnvStore)
  // optional .protocol.TransactionEnv transaction_env = 1;
  if (this->has_transaction_env()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->transaction_env_, output);
  }

  // optional int32 error_code = 2;
  if (this->error_code() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->error_code(), output);
  }

  // optional string error_desc = 3;
  if (this->error_desc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->error_desc().data(), this->error_desc().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.TransactionEnvStore.error_desc");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->error_desc(), output);
  }

  // optional int64 ledger_seq = 4;
  if (this->ledger_seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->ledger_seq(), output);
  }

  // optional int64 close_time = 5;
  if (this->close_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->close_time(), output);
  }

  // optional bytes hash = 6;
  if (this->hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      6, this->hash(), output);
  }

  // optional int64 actual_fee = 7;
  if (this->actual_fee() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(7, this->actual_fee(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.TransactionEnvStore)
}

::google::protobuf::uint8* TransactionEnvStore::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.TransactionEnvStore)
  // optional .protocol.TransactionEnv transaction_env = 1;
  if (this->has_transaction_env()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->transaction_env_, false, target);
  }

  // optional int32 error_code = 2;
  if (this->error_code() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->error_code(), target);
  }

  // optional string error_desc = 3;
  if (this->error_desc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->error_desc().data(), this->error_desc().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.TransactionEnvStore.error_desc");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->error_desc(), target);
  }

  // optional int64 ledger_seq = 4;
  if (this->ledger_seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->ledger_seq(), target);
  }

  // optional int64 close_time = 5;
  if (this->close_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->close_time(), target);
  }

  // optional bytes hash = 6;
  if (this->hash().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        6, this->hash(), target);
  }

  // optional int64 actual_fee = 7;
  if (this->actual_fee() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(7, this->actual_fee(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.TransactionEnvStore)
  return target;
}

int TransactionEnvStore::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.TransactionEnvStore)
  int total_size = 0;

  // optional .protocol.TransactionEnv transaction_env = 1;
  if (this->has_transaction_env()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->transaction_env_);
  }

  // optional int32 error_code = 2;
  if (this->error_code() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->error_code());
  }

  // optional string error_desc = 3;
  if (this->error_desc().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->error_desc());
  }

  // optional int64 ledger_seq = 4;
  if (this->ledger_seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->ledger_seq());
  }

  // optional int64 close_time = 5;
  if (this->close_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->close_time());
  }

  // optional bytes hash = 6;
  if (this->hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->hash());
  }

  // optional int64 actual_fee = 7;
  if (this->actual_fee() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->actual_fee());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TransactionEnvStore::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.TransactionEnvStore)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const TransactionEnvStore* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const TransactionEnvStore>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.TransactionEnvStore)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.TransactionEnvStore)
    MergeFrom(*source);
  }
}

void TransactionEnvStore::MergeFrom(const TransactionEnvStore& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.TransactionEnvStore)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_transaction_env()) {
    mutable_transaction_env()->::protocol::TransactionEnv::MergeFrom(from.transaction_env());
  }
  if (from.error_code() != 0) {
    set_error_code(from.error_code());
  }
  if (from.error_desc().size() > 0) {

    error_desc_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.error_desc_);
  }
  if (from.ledger_seq() != 0) {
    set_ledger_seq(from.ledger_seq());
  }
  if (from.close_time() != 0) {
    set_close_time(from.close_time());
  }
  if (from.hash().size() > 0) {

    hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.hash_);
  }
  if (from.actual_fee() != 0) {
    set_actual_fee(from.actual_fee());
  }
}

void TransactionEnvStore::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.TransactionEnvStore)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TransactionEnvStore::CopyFrom(const TransactionEnvStore& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.TransactionEnvStore)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TransactionEnvStore::IsInitialized() const {

  return true;
}

void TransactionEnvStore::Swap(TransactionEnvStore* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TransactionEnvStore::InternalSwap(TransactionEnvStore* other) {
  std::swap(transaction_env_, other->transaction_env_);
  std::swap(error_code_, other->error_code_);
  error_desc_.Swap(&other->error_desc_);
  std::swap(ledger_seq_, other->ledger_seq_);
  std::swap(close_time_, other->close_time_);
  hash_.Swap(&other->hash_);
  std::swap(actual_fee_, other->actual_fee_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TransactionEnvStore::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TransactionEnvStore_descriptor_;
  metadata.reflection = TransactionEnvStore_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TransactionEnvStore

// optional .protocol.TransactionEnv transaction_env = 1;
bool TransactionEnvStore::has_transaction_env() const {
  return !_is_default_instance_ && transaction_env_ != NULL;
}
void TransactionEnvStore::clear_transaction_env() {
  if (GetArenaNoVirtual() == NULL && transaction_env_ != NULL) delete transaction_env_;
  transaction_env_ = NULL;
}
const ::protocol::TransactionEnv& TransactionEnvStore::transaction_env() const {
  // @@protoc_insertion_point(field_get:protocol.TransactionEnvStore.transaction_env)
  return transaction_env_ != NULL ? *transaction_env_ : *default_instance_->transaction_env_;
}
::protocol::TransactionEnv* TransactionEnvStore::mutable_transaction_env() {
  
  if (transaction_env_ == NULL) {
    transaction_env_ = new ::protocol::TransactionEnv;
  }
  // @@protoc_insertion_point(field_mutable:protocol.TransactionEnvStore.transaction_env)
  return transaction_env_;
}
::protocol::TransactionEnv* TransactionEnvStore::release_transaction_env() {
  // @@protoc_insertion_point(field_release:protocol.TransactionEnvStore.transaction_env)
  
  ::protocol::TransactionEnv* temp = transaction_env_;
  transaction_env_ = NULL;
  return temp;
}
void TransactionEnvStore::set_allocated_transaction_env(::protocol::TransactionEnv* transaction_env) {
  delete transaction_env_;
  transaction_env_ = transaction_env;
  if (transaction_env) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.TransactionEnvStore.transaction_env)
}

// optional int32 error_code = 2;
void TransactionEnvStore::clear_error_code() {
  error_code_ = 0;
}
 ::google::protobuf::int32 TransactionEnvStore::error_code() const {
  // @@protoc_insertion_point(field_get:protocol.TransactionEnvStore.error_code)
  return error_code_;
}
 void TransactionEnvStore::set_error_code(::google::protobuf::int32 value) {
  
  error_code_ = value;
  // @@protoc_insertion_point(field_set:protocol.TransactionEnvStore.error_code)
}

// optional string error_desc = 3;
void TransactionEnvStore::clear_error_desc() {
  error_desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& TransactionEnvStore::error_desc() const {
  // @@protoc_insertion_point(field_get:protocol.TransactionEnvStore.error_desc)
  return error_desc_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void TransactionEnvStore::set_error_desc(const ::std::string& value) {
  
  error_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.TransactionEnvStore.error_desc)
}
 void TransactionEnvStore::set_error_desc(const char* value) {
  
  error_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.TransactionEnvStore.error_desc)
}
 void TransactionEnvStore::set_error_desc(const char* value, size_t size) {
  
  error_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.TransactionEnvStore.error_desc)
}
 ::std::string* TransactionEnvStore::mutable_error_desc() {
  
  // @@protoc_insertion_point(field_mutable:protocol.TransactionEnvStore.error_desc)
  return error_desc_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* TransactionEnvStore::release_error_desc() {
  // @@protoc_insertion_point(field_release:protocol.TransactionEnvStore.error_desc)
  
  return error_desc_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void TransactionEnvStore::set_allocated_error_desc(::std::string* error_desc) {
  if (error_desc != NULL) {
    
  } else {
    
  }
  error_desc_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error_desc);
  // @@protoc_insertion_point(field_set_allocated:protocol.TransactionEnvStore.error_desc)
}

// optional int64 ledger_seq = 4;
void TransactionEnvStore::clear_ledger_seq() {
  ledger_seq_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 TransactionEnvStore::ledger_seq() const {
  // @@protoc_insertion_point(field_get:protocol.TransactionEnvStore.ledger_seq)
  return ledger_seq_;
}
 void TransactionEnvStore::set_ledger_seq(::google::protobuf::int64 value) {
  
  ledger_seq_ = value;
  // @@protoc_insertion_point(field_set:protocol.TransactionEnvStore.ledger_seq)
}

// optional int64 close_time = 5;
void TransactionEnvStore::clear_close_time() {
  close_time_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 TransactionEnvStore::close_time() const {
  // @@protoc_insertion_point(field_get:protocol.TransactionEnvStore.close_time)
  return close_time_;
}
 void TransactionEnvStore::set_close_time(::google::protobuf::int64 value) {
  
  close_time_ = value;
  // @@protoc_insertion_point(field_set:protocol.TransactionEnvStore.close_time)
}

// optional bytes hash = 6;
void TransactionEnvStore::clear_hash() {
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& TransactionEnvStore::hash() const {
  // @@protoc_insertion_point(field_get:protocol.TransactionEnvStore.hash)
  return hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void TransactionEnvStore::set_hash(const ::std::string& value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.TransactionEnvStore.hash)
}
 void TransactionEnvStore::set_hash(const char* value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.TransactionEnvStore.hash)
}
 void TransactionEnvStore::set_hash(const void* value, size_t size) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.TransactionEnvStore.hash)
}
 ::std::string* TransactionEnvStore::mutable_hash() {
  
  // @@protoc_insertion_point(field_mutable:protocol.TransactionEnvStore.hash)
  return hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* TransactionEnvStore::release_hash() {
  // @@protoc_insertion_point(field_release:protocol.TransactionEnvStore.hash)
  
  return hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void TransactionEnvStore::set_allocated_hash(::std::string* hash) {
  if (hash != NULL) {
    
  } else {
    
  }
  hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hash);
  // @@protoc_insertion_point(field_set_allocated:protocol.TransactionEnvStore.hash)
}

// optional int64 actual_fee = 7;
void TransactionEnvStore::clear_actual_fee() {
  actual_fee_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 TransactionEnvStore::actual_fee() const {
  // @@protoc_insertion_point(field_get:protocol.TransactionEnvStore.actual_fee)
  return actual_fee_;
}
 void TransactionEnvStore::set_actual_fee(::google::protobuf::int64 value) {
  
  actual_fee_ = value;
  // @@protoc_insertion_point(field_set:protocol.TransactionEnvStore.actual_fee)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TransactionEnvSet::kTxsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TransactionEnvSet::TransactionEnvSet()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.TransactionEnvSet)
}

void TransactionEnvSet::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

TransactionEnvSet::TransactionEnvSet(const TransactionEnvSet& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.TransactionEnvSet)
}

void TransactionEnvSet::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

TransactionEnvSet::~TransactionEnvSet() {
  // @@protoc_insertion_point(destructor:protocol.TransactionEnvSet)
  SharedDtor();
}

void TransactionEnvSet::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TransactionEnvSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TransactionEnvSet::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TransactionEnvSet_descriptor_;
}

const TransactionEnvSet& TransactionEnvSet::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

TransactionEnvSet* TransactionEnvSet::default_instance_ = NULL;

TransactionEnvSet* TransactionEnvSet::New(::google::protobuf::Arena* arena) const {
  TransactionEnvSet* n = new TransactionEnvSet;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TransactionEnvSet::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.TransactionEnvSet)
  txs_.Clear();
}

bool TransactionEnvSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.TransactionEnvSet)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .protocol.TransactionEnv txs = 2;
      case 2: {
        if (tag == 18) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_txs:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_txs()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_txs;
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
  // @@protoc_insertion_point(parse_success:protocol.TransactionEnvSet)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.TransactionEnvSet)
  return false;
#undef DO_
}

void TransactionEnvSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.TransactionEnvSet)
  // repeated .protocol.TransactionEnv txs = 2;
  for (unsigned int i = 0, n = this->txs_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->txs(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.TransactionEnvSet)
}

::google::protobuf::uint8* TransactionEnvSet::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.TransactionEnvSet)
  // repeated .protocol.TransactionEnv txs = 2;
  for (unsigned int i = 0, n = this->txs_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->txs(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.TransactionEnvSet)
  return target;
}

int TransactionEnvSet::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.TransactionEnvSet)
  int total_size = 0;

  // repeated .protocol.TransactionEnv txs = 2;
  total_size += 1 * this->txs_size();
  for (int i = 0; i < this->txs_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->txs(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TransactionEnvSet::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.TransactionEnvSet)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const TransactionEnvSet* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const TransactionEnvSet>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.TransactionEnvSet)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.TransactionEnvSet)
    MergeFrom(*source);
  }
}

void TransactionEnvSet::MergeFrom(const TransactionEnvSet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.TransactionEnvSet)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  txs_.MergeFrom(from.txs_);
}

void TransactionEnvSet::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.TransactionEnvSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TransactionEnvSet::CopyFrom(const TransactionEnvSet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.TransactionEnvSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TransactionEnvSet::IsInitialized() const {

  return true;
}

void TransactionEnvSet::Swap(TransactionEnvSet* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TransactionEnvSet::InternalSwap(TransactionEnvSet* other) {
  txs_.UnsafeArenaSwap(&other->txs_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TransactionEnvSet::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TransactionEnvSet_descriptor_;
  metadata.reflection = TransactionEnvSet_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TransactionEnvSet

// repeated .protocol.TransactionEnv txs = 2;
int TransactionEnvSet::txs_size() const {
  return txs_.size();
}
void TransactionEnvSet::clear_txs() {
  txs_.Clear();
}
const ::protocol::TransactionEnv& TransactionEnvSet::txs(int index) const {
  // @@protoc_insertion_point(field_get:protocol.TransactionEnvSet.txs)
  return txs_.Get(index);
}
::protocol::TransactionEnv* TransactionEnvSet::mutable_txs(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.TransactionEnvSet.txs)
  return txs_.Mutable(index);
}
::protocol::TransactionEnv* TransactionEnvSet::add_txs() {
  // @@protoc_insertion_point(field_add:protocol.TransactionEnvSet.txs)
  return txs_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::TransactionEnv >*
TransactionEnvSet::mutable_txs() {
  // @@protoc_insertion_point(field_mutable_list:protocol.TransactionEnvSet.txs)
  return &txs_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::TransactionEnv >&
TransactionEnvSet::txs() const {
  // @@protoc_insertion_point(field_list:protocol.TransactionEnvSet.txs)
  return txs_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ConsensusValueValidation::kExpireTxIdsFieldNumber;
const int ConsensusValueValidation::kErrorTxIdsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ConsensusValueValidation::ConsensusValueValidation()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.ConsensusValueValidation)
}

void ConsensusValueValidation::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ConsensusValueValidation::ConsensusValueValidation(const ConsensusValueValidation& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.ConsensusValueValidation)
}

void ConsensusValueValidation::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

ConsensusValueValidation::~ConsensusValueValidation() {
  // @@protoc_insertion_point(destructor:protocol.ConsensusValueValidation)
  SharedDtor();
}

void ConsensusValueValidation::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ConsensusValueValidation::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ConsensusValueValidation::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ConsensusValueValidation_descriptor_;
}

const ConsensusValueValidation& ConsensusValueValidation::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

ConsensusValueValidation* ConsensusValueValidation::default_instance_ = NULL;

ConsensusValueValidation* ConsensusValueValidation::New(::google::protobuf::Arena* arena) const {
  ConsensusValueValidation* n = new ConsensusValueValidation;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ConsensusValueValidation::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.ConsensusValueValidation)
  expire_tx_ids_.Clear();
  error_tx_ids_.Clear();
}

bool ConsensusValueValidation::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.ConsensusValueValidation)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 expire_tx_ids = 1;
      case 1: {
        if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_expire_tx_ids())));
        } else if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 10, input, this->mutable_expire_tx_ids())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_error_tx_ids;
        break;
      }

      // repeated int32 error_tx_ids = 2;
      case 2: {
        if (tag == 18) {
         parse_error_tx_ids:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_error_tx_ids())));
        } else if (tag == 16) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 18, input, this->mutable_error_tx_ids())));
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
  // @@protoc_insertion_point(parse_success:protocol.ConsensusValueValidation)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.ConsensusValueValidation)
  return false;
#undef DO_
}

void ConsensusValueValidation::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.ConsensusValueValidation)
  // repeated int32 expire_tx_ids = 1;
  if (this->expire_tx_ids_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_expire_tx_ids_cached_byte_size_);
  }
  for (int i = 0; i < this->expire_tx_ids_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->expire_tx_ids(i), output);
  }

  // repeated int32 error_tx_ids = 2;
  if (this->error_tx_ids_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_error_tx_ids_cached_byte_size_);
  }
  for (int i = 0; i < this->error_tx_ids_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->error_tx_ids(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.ConsensusValueValidation)
}

::google::protobuf::uint8* ConsensusValueValidation::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.ConsensusValueValidation)
  // repeated int32 expire_tx_ids = 1;
  if (this->expire_tx_ids_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _expire_tx_ids_cached_byte_size_, target);
  }
  for (int i = 0; i < this->expire_tx_ids_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->expire_tx_ids(i), target);
  }

  // repeated int32 error_tx_ids = 2;
  if (this->error_tx_ids_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _error_tx_ids_cached_byte_size_, target);
  }
  for (int i = 0; i < this->error_tx_ids_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->error_tx_ids(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.ConsensusValueValidation)
  return target;
}

int ConsensusValueValidation::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.ConsensusValueValidation)
  int total_size = 0;

  // repeated int32 expire_tx_ids = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->expire_tx_ids_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->expire_tx_ids(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _expire_tx_ids_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated int32 error_tx_ids = 2;
  {
    int data_size = 0;
    for (int i = 0; i < this->error_tx_ids_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->error_tx_ids(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _error_tx_ids_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ConsensusValueValidation::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.ConsensusValueValidation)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ConsensusValueValidation* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ConsensusValueValidation>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.ConsensusValueValidation)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.ConsensusValueValidation)
    MergeFrom(*source);
  }
}

void ConsensusValueValidation::MergeFrom(const ConsensusValueValidation& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.ConsensusValueValidation)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  expire_tx_ids_.MergeFrom(from.expire_tx_ids_);
  error_tx_ids_.MergeFrom(from.error_tx_ids_);
}

void ConsensusValueValidation::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.ConsensusValueValidation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ConsensusValueValidation::CopyFrom(const ConsensusValueValidation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.ConsensusValueValidation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConsensusValueValidation::IsInitialized() const {

  return true;
}

void ConsensusValueValidation::Swap(ConsensusValueValidation* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ConsensusValueValidation::InternalSwap(ConsensusValueValidation* other) {
  expire_tx_ids_.UnsafeArenaSwap(&other->expire_tx_ids_);
  error_tx_ids_.UnsafeArenaSwap(&other->error_tx_ids_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ConsensusValueValidation::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ConsensusValueValidation_descriptor_;
  metadata.reflection = ConsensusValueValidation_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ConsensusValueValidation

// repeated int32 expire_tx_ids = 1;
int ConsensusValueValidation::expire_tx_ids_size() const {
  return expire_tx_ids_.size();
}
void ConsensusValueValidation::clear_expire_tx_ids() {
  expire_tx_ids_.Clear();
}
 ::google::protobuf::int32 ConsensusValueValidation::expire_tx_ids(int index) const {
  // @@protoc_insertion_point(field_get:protocol.ConsensusValueValidation.expire_tx_ids)
  return expire_tx_ids_.Get(index);
}
 void ConsensusValueValidation::set_expire_tx_ids(int index, ::google::protobuf::int32 value) {
  expire_tx_ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:protocol.ConsensusValueValidation.expire_tx_ids)
}
 void ConsensusValueValidation::add_expire_tx_ids(::google::protobuf::int32 value) {
  expire_tx_ids_.Add(value);
  // @@protoc_insertion_point(field_add:protocol.ConsensusValueValidation.expire_tx_ids)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ConsensusValueValidation::expire_tx_ids() const {
  // @@protoc_insertion_point(field_list:protocol.ConsensusValueValidation.expire_tx_ids)
  return expire_tx_ids_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ConsensusValueValidation::mutable_expire_tx_ids() {
  // @@protoc_insertion_point(field_mutable_list:protocol.ConsensusValueValidation.expire_tx_ids)
  return &expire_tx_ids_;
}

// repeated int32 error_tx_ids = 2;
int ConsensusValueValidation::error_tx_ids_size() const {
  return error_tx_ids_.size();
}
void ConsensusValueValidation::clear_error_tx_ids() {
  error_tx_ids_.Clear();
}
 ::google::protobuf::int32 ConsensusValueValidation::error_tx_ids(int index) const {
  // @@protoc_insertion_point(field_get:protocol.ConsensusValueValidation.error_tx_ids)
  return error_tx_ids_.Get(index);
}
 void ConsensusValueValidation::set_error_tx_ids(int index, ::google::protobuf::int32 value) {
  error_tx_ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:protocol.ConsensusValueValidation.error_tx_ids)
}
 void ConsensusValueValidation::add_error_tx_ids(::google::protobuf::int32 value) {
  error_tx_ids_.Add(value);
  // @@protoc_insertion_point(field_add:protocol.ConsensusValueValidation.error_tx_ids)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ConsensusValueValidation::error_tx_ids() const {
  // @@protoc_insertion_point(field_list:protocol.ConsensusValueValidation.error_tx_ids)
  return error_tx_ids_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ConsensusValueValidation::mutable_error_tx_ids() {
  // @@protoc_insertion_point(field_mutable_list:protocol.ConsensusValueValidation.error_tx_ids)
  return &error_tx_ids_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ConsensusValue::kTxsetFieldNumber;
const int ConsensusValue::kCloseTimeFieldNumber;
const int ConsensusValue::kPreviousProofFieldNumber;
const int ConsensusValue::kLedgerSeqFieldNumber;
const int ConsensusValue::kPreviousLedgerHashFieldNumber;
const int ConsensusValue::kLedgerUpgradeFieldNumber;
const int ConsensusValue::kValidationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ConsensusValue::ConsensusValue()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.ConsensusValue)
}

void ConsensusValue::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  txset_ = const_cast< ::protocol::TransactionEnvSet*>(&::protocol::TransactionEnvSet::default_instance());
  ledger_upgrade_ = const_cast< ::protocol::LedgerUpgrade*>(&::protocol::LedgerUpgrade::default_instance());
  validation_ = const_cast< ::protocol::ConsensusValueValidation*>(&::protocol::ConsensusValueValidation::default_instance());
}

ConsensusValue::ConsensusValue(const ConsensusValue& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.ConsensusValue)
}

void ConsensusValue::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  txset_ = NULL;
  close_time_ = GOOGLE_LONGLONG(0);
  previous_proof_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ledger_seq_ = GOOGLE_LONGLONG(0);
  previous_ledger_hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ledger_upgrade_ = NULL;
  validation_ = NULL;
}

ConsensusValue::~ConsensusValue() {
  // @@protoc_insertion_point(destructor:protocol.ConsensusValue)
  SharedDtor();
}

void ConsensusValue::SharedDtor() {
  previous_proof_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  previous_ledger_hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete txset_;
    delete ledger_upgrade_;
    delete validation_;
  }
}

void ConsensusValue::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ConsensusValue::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ConsensusValue_descriptor_;
}

const ConsensusValue& ConsensusValue::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

ConsensusValue* ConsensusValue::default_instance_ = NULL;

ConsensusValue* ConsensusValue::New(::google::protobuf::Arena* arena) const {
  ConsensusValue* n = new ConsensusValue;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ConsensusValue::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.ConsensusValue)
  if (GetArenaNoVirtual() == NULL && txset_ != NULL) delete txset_;
  txset_ = NULL;
  close_time_ = GOOGLE_LONGLONG(0);
  previous_proof_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ledger_seq_ = GOOGLE_LONGLONG(0);
  previous_ledger_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && ledger_upgrade_ != NULL) delete ledger_upgrade_;
  ledger_upgrade_ = NULL;
  if (GetArenaNoVirtual() == NULL && validation_ != NULL) delete validation_;
  validation_ = NULL;
}

bool ConsensusValue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.ConsensusValue)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.TransactionEnvSet txset = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_txset()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_close_time;
        break;
      }

      // optional int64 close_time = 2;
      case 2: {
        if (tag == 16) {
         parse_close_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &close_time_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_previous_proof;
        break;
      }

      // optional bytes previous_proof = 3;
      case 3: {
        if (tag == 26) {
         parse_previous_proof:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_previous_proof()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_ledger_seq;
        break;
      }

      // optional int64 ledger_seq = 4;
      case 4: {
        if (tag == 32) {
         parse_ledger_seq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &ledger_seq_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_previous_ledger_hash;
        break;
      }

      // optional bytes previous_ledger_hash = 5;
      case 5: {
        if (tag == 42) {
         parse_previous_ledger_hash:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_previous_ledger_hash()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_ledger_upgrade;
        break;
      }

      // optional .protocol.LedgerUpgrade ledger_upgrade = 6;
      case 6: {
        if (tag == 50) {
         parse_ledger_upgrade:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ledger_upgrade()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_validation;
        break;
      }

      // optional .protocol.ConsensusValueValidation validation = 7;
      case 7: {
        if (tag == 58) {
         parse_validation:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_validation()));
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
  // @@protoc_insertion_point(parse_success:protocol.ConsensusValue)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.ConsensusValue)
  return false;
#undef DO_
}

void ConsensusValue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.ConsensusValue)
  // optional .protocol.TransactionEnvSet txset = 1;
  if (this->has_txset()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->txset_, output);
  }

  // optional int64 close_time = 2;
  if (this->close_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->close_time(), output);
  }

  // optional bytes previous_proof = 3;
  if (this->previous_proof().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->previous_proof(), output);
  }

  // optional int64 ledger_seq = 4;
  if (this->ledger_seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->ledger_seq(), output);
  }

  // optional bytes previous_ledger_hash = 5;
  if (this->previous_ledger_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      5, this->previous_ledger_hash(), output);
  }

  // optional .protocol.LedgerUpgrade ledger_upgrade = 6;
  if (this->has_ledger_upgrade()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *this->ledger_upgrade_, output);
  }

  // optional .protocol.ConsensusValueValidation validation = 7;
  if (this->has_validation()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->validation_, output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.ConsensusValue)
}

::google::protobuf::uint8* ConsensusValue::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.ConsensusValue)
  // optional .protocol.TransactionEnvSet txset = 1;
  if (this->has_txset()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->txset_, false, target);
  }

  // optional int64 close_time = 2;
  if (this->close_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->close_time(), target);
  }

  // optional bytes previous_proof = 3;
  if (this->previous_proof().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->previous_proof(), target);
  }

  // optional int64 ledger_seq = 4;
  if (this->ledger_seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->ledger_seq(), target);
  }

  // optional bytes previous_ledger_hash = 5;
  if (this->previous_ledger_hash().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->previous_ledger_hash(), target);
  }

  // optional .protocol.LedgerUpgrade ledger_upgrade = 6;
  if (this->has_ledger_upgrade()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *this->ledger_upgrade_, false, target);
  }

  // optional .protocol.ConsensusValueValidation validation = 7;
  if (this->has_validation()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->validation_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.ConsensusValue)
  return target;
}

int ConsensusValue::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.ConsensusValue)
  int total_size = 0;

  // optional .protocol.TransactionEnvSet txset = 1;
  if (this->has_txset()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->txset_);
  }

  // optional int64 close_time = 2;
  if (this->close_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->close_time());
  }

  // optional bytes previous_proof = 3;
  if (this->previous_proof().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->previous_proof());
  }

  // optional int64 ledger_seq = 4;
  if (this->ledger_seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->ledger_seq());
  }

  // optional bytes previous_ledger_hash = 5;
  if (this->previous_ledger_hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->previous_ledger_hash());
  }

  // optional .protocol.LedgerUpgrade ledger_upgrade = 6;
  if (this->has_ledger_upgrade()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ledger_upgrade_);
  }

  // optional .protocol.ConsensusValueValidation validation = 7;
  if (this->has_validation()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->validation_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ConsensusValue::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.ConsensusValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ConsensusValue* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ConsensusValue>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.ConsensusValue)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.ConsensusValue)
    MergeFrom(*source);
  }
}

void ConsensusValue::MergeFrom(const ConsensusValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.ConsensusValue)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_txset()) {
    mutable_txset()->::protocol::TransactionEnvSet::MergeFrom(from.txset());
  }
  if (from.close_time() != 0) {
    set_close_time(from.close_time());
  }
  if (from.previous_proof().size() > 0) {

    previous_proof_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.previous_proof_);
  }
  if (from.ledger_seq() != 0) {
    set_ledger_seq(from.ledger_seq());
  }
  if (from.previous_ledger_hash().size() > 0) {

    previous_ledger_hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.previous_ledger_hash_);
  }
  if (from.has_ledger_upgrade()) {
    mutable_ledger_upgrade()->::protocol::LedgerUpgrade::MergeFrom(from.ledger_upgrade());
  }
  if (from.has_validation()) {
    mutable_validation()->::protocol::ConsensusValueValidation::MergeFrom(from.validation());
  }
}

void ConsensusValue::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.ConsensusValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ConsensusValue::CopyFrom(const ConsensusValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.ConsensusValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConsensusValue::IsInitialized() const {

  return true;
}

void ConsensusValue::Swap(ConsensusValue* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ConsensusValue::InternalSwap(ConsensusValue* other) {
  std::swap(txset_, other->txset_);
  std::swap(close_time_, other->close_time_);
  previous_proof_.Swap(&other->previous_proof_);
  std::swap(ledger_seq_, other->ledger_seq_);
  previous_ledger_hash_.Swap(&other->previous_ledger_hash_);
  std::swap(ledger_upgrade_, other->ledger_upgrade_);
  std::swap(validation_, other->validation_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ConsensusValue::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ConsensusValue_descriptor_;
  metadata.reflection = ConsensusValue_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ConsensusValue

// optional .protocol.TransactionEnvSet txset = 1;
bool ConsensusValue::has_txset() const {
  return !_is_default_instance_ && txset_ != NULL;
}
void ConsensusValue::clear_txset() {
  if (GetArenaNoVirtual() == NULL && txset_ != NULL) delete txset_;
  txset_ = NULL;
}
const ::protocol::TransactionEnvSet& ConsensusValue::txset() const {
  // @@protoc_insertion_point(field_get:protocol.ConsensusValue.txset)
  return txset_ != NULL ? *txset_ : *default_instance_->txset_;
}
::protocol::TransactionEnvSet* ConsensusValue::mutable_txset() {
  
  if (txset_ == NULL) {
    txset_ = new ::protocol::TransactionEnvSet;
  }
  // @@protoc_insertion_point(field_mutable:protocol.ConsensusValue.txset)
  return txset_;
}
::protocol::TransactionEnvSet* ConsensusValue::release_txset() {
  // @@protoc_insertion_point(field_release:protocol.ConsensusValue.txset)
  
  ::protocol::TransactionEnvSet* temp = txset_;
  txset_ = NULL;
  return temp;
}
void ConsensusValue::set_allocated_txset(::protocol::TransactionEnvSet* txset) {
  delete txset_;
  txset_ = txset;
  if (txset) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.ConsensusValue.txset)
}

// optional int64 close_time = 2;
void ConsensusValue::clear_close_time() {
  close_time_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 ConsensusValue::close_time() const {
  // @@protoc_insertion_point(field_get:protocol.ConsensusValue.close_time)
  return close_time_;
}
 void ConsensusValue::set_close_time(::google::protobuf::int64 value) {
  
  close_time_ = value;
  // @@protoc_insertion_point(field_set:protocol.ConsensusValue.close_time)
}

// optional bytes previous_proof = 3;
void ConsensusValue::clear_previous_proof() {
  previous_proof_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ConsensusValue::previous_proof() const {
  // @@protoc_insertion_point(field_get:protocol.ConsensusValue.previous_proof)
  return previous_proof_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ConsensusValue::set_previous_proof(const ::std::string& value) {
  
  previous_proof_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.ConsensusValue.previous_proof)
}
 void ConsensusValue::set_previous_proof(const char* value) {
  
  previous_proof_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.ConsensusValue.previous_proof)
}
 void ConsensusValue::set_previous_proof(const void* value, size_t size) {
  
  previous_proof_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.ConsensusValue.previous_proof)
}
 ::std::string* ConsensusValue::mutable_previous_proof() {
  
  // @@protoc_insertion_point(field_mutable:protocol.ConsensusValue.previous_proof)
  return previous_proof_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ConsensusValue::release_previous_proof() {
  // @@protoc_insertion_point(field_release:protocol.ConsensusValue.previous_proof)
  
  return previous_proof_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ConsensusValue::set_allocated_previous_proof(::std::string* previous_proof) {
  if (previous_proof != NULL) {
    
  } else {
    
  }
  previous_proof_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), previous_proof);
  // @@protoc_insertion_point(field_set_allocated:protocol.ConsensusValue.previous_proof)
}

// optional int64 ledger_seq = 4;
void ConsensusValue::clear_ledger_seq() {
  ledger_seq_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 ConsensusValue::ledger_seq() const {
  // @@protoc_insertion_point(field_get:protocol.ConsensusValue.ledger_seq)
  return ledger_seq_;
}
 void ConsensusValue::set_ledger_seq(::google::protobuf::int64 value) {
  
  ledger_seq_ = value;
  // @@protoc_insertion_point(field_set:protocol.ConsensusValue.ledger_seq)
}

// optional bytes previous_ledger_hash = 5;
void ConsensusValue::clear_previous_ledger_hash() {
  previous_ledger_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ConsensusValue::previous_ledger_hash() const {
  // @@protoc_insertion_point(field_get:protocol.ConsensusValue.previous_ledger_hash)
  return previous_ledger_hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ConsensusValue::set_previous_ledger_hash(const ::std::string& value) {
  
  previous_ledger_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.ConsensusValue.previous_ledger_hash)
}
 void ConsensusValue::set_previous_ledger_hash(const char* value) {
  
  previous_ledger_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.ConsensusValue.previous_ledger_hash)
}
 void ConsensusValue::set_previous_ledger_hash(const void* value, size_t size) {
  
  previous_ledger_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.ConsensusValue.previous_ledger_hash)
}
 ::std::string* ConsensusValue::mutable_previous_ledger_hash() {
  
  // @@protoc_insertion_point(field_mutable:protocol.ConsensusValue.previous_ledger_hash)
  return previous_ledger_hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ConsensusValue::release_previous_ledger_hash() {
  // @@protoc_insertion_point(field_release:protocol.ConsensusValue.previous_ledger_hash)
  
  return previous_ledger_hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ConsensusValue::set_allocated_previous_ledger_hash(::std::string* previous_ledger_hash) {
  if (previous_ledger_hash != NULL) {
    
  } else {
    
  }
  previous_ledger_hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), previous_ledger_hash);
  // @@protoc_insertion_point(field_set_allocated:protocol.ConsensusValue.previous_ledger_hash)
}

// optional .protocol.LedgerUpgrade ledger_upgrade = 6;
bool ConsensusValue::has_ledger_upgrade() const {
  return !_is_default_instance_ && ledger_upgrade_ != NULL;
}
void ConsensusValue::clear_ledger_upgrade() {
  if (GetArenaNoVirtual() == NULL && ledger_upgrade_ != NULL) delete ledger_upgrade_;
  ledger_upgrade_ = NULL;
}
const ::protocol::LedgerUpgrade& ConsensusValue::ledger_upgrade() const {
  // @@protoc_insertion_point(field_get:protocol.ConsensusValue.ledger_upgrade)
  return ledger_upgrade_ != NULL ? *ledger_upgrade_ : *default_instance_->ledger_upgrade_;
}
::protocol::LedgerUpgrade* ConsensusValue::mutable_ledger_upgrade() {
  
  if (ledger_upgrade_ == NULL) {
    ledger_upgrade_ = new ::protocol::LedgerUpgrade;
  }
  // @@protoc_insertion_point(field_mutable:protocol.ConsensusValue.ledger_upgrade)
  return ledger_upgrade_;
}
::protocol::LedgerUpgrade* ConsensusValue::release_ledger_upgrade() {
  // @@protoc_insertion_point(field_release:protocol.ConsensusValue.ledger_upgrade)
  
  ::protocol::LedgerUpgrade* temp = ledger_upgrade_;
  ledger_upgrade_ = NULL;
  return temp;
}
void ConsensusValue::set_allocated_ledger_upgrade(::protocol::LedgerUpgrade* ledger_upgrade) {
  delete ledger_upgrade_;
  ledger_upgrade_ = ledger_upgrade;
  if (ledger_upgrade) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.ConsensusValue.ledger_upgrade)
}

// optional .protocol.ConsensusValueValidation validation = 7;
bool ConsensusValue::has_validation() const {
  return !_is_default_instance_ && validation_ != NULL;
}
void ConsensusValue::clear_validation() {
  if (GetArenaNoVirtual() == NULL && validation_ != NULL) delete validation_;
  validation_ = NULL;
}
const ::protocol::ConsensusValueValidation& ConsensusValue::validation() const {
  // @@protoc_insertion_point(field_get:protocol.ConsensusValue.validation)
  return validation_ != NULL ? *validation_ : *default_instance_->validation_;
}
::protocol::ConsensusValueValidation* ConsensusValue::mutable_validation() {
  
  if (validation_ == NULL) {
    validation_ = new ::protocol::ConsensusValueValidation;
  }
  // @@protoc_insertion_point(field_mutable:protocol.ConsensusValue.validation)
  return validation_;
}
::protocol::ConsensusValueValidation* ConsensusValue::release_validation() {
  // @@protoc_insertion_point(field_release:protocol.ConsensusValue.validation)
  
  ::protocol::ConsensusValueValidation* temp = validation_;
  validation_ = NULL;
  return temp;
}
void ConsensusValue::set_allocated_validation(::protocol::ConsensusValueValidation* validation) {
  delete validation_;
  validation_ = validation;
  if (validation) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.ConsensusValue.validation)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* Contract_ContractType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Contract_ContractType_descriptor_;
}
bool Contract_ContractType_IsValid(int value) {
  switch(value) {
    case 0:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Contract_ContractType Contract::JAVASCRIPT;
const Contract_ContractType Contract::ContractType_MIN;
const Contract_ContractType Contract::ContractType_MAX;
const int Contract::ContractType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Contract::kTypeFieldNumber;
const int Contract::kPayloadFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Contract::Contract()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Contract)
}

void Contract::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Contract::Contract(const Contract& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Contract)
}

void Contract::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_ = 0;
  payload_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Contract::~Contract() {
  // @@protoc_insertion_point(destructor:protocol.Contract)
  SharedDtor();
}

void Contract::SharedDtor() {
  payload_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Contract::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Contract::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Contract_descriptor_;
}

const Contract& Contract::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

Contract* Contract::default_instance_ = NULL;

Contract* Contract::New(::google::protobuf::Arena* arena) const {
  Contract* n = new Contract;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Contract::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Contract)
  type_ = 0;
  payload_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool Contract::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Contract)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protocol.Contract.ContractType type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::protocol::Contract_ContractType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_payload;
        break;
      }

      // optional string payload = 2;
      case 2: {
        if (tag == 18) {
         parse_payload:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_payload()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->payload().data(), this->payload().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.Contract.payload"));
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
  // @@protoc_insertion_point(parse_success:protocol.Contract)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Contract)
  return false;
#undef DO_
}

void Contract::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Contract)
  // optional .protocol.Contract.ContractType type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional string payload = 2;
  if (this->payload().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->payload().data(), this->payload().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Contract.payload");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->payload(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.Contract)
}

::google::protobuf::uint8* Contract::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Contract)
  // optional .protocol.Contract.ContractType type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional string payload = 2;
  if (this->payload().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->payload().data(), this->payload().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Contract.payload");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->payload(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.Contract)
  return target;
}

int Contract::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Contract)
  int total_size = 0;

  // optional .protocol.Contract.ContractType type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // optional string payload = 2;
  if (this->payload().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->payload());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Contract::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Contract)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Contract* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Contract>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Contract)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Contract)
    MergeFrom(*source);
  }
}

void Contract::MergeFrom(const Contract& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Contract)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.payload().size() > 0) {

    payload_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.payload_);
  }
}

void Contract::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Contract)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Contract::CopyFrom(const Contract& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Contract)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Contract::IsInitialized() const {

  return true;
}

void Contract::Swap(Contract* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Contract::InternalSwap(Contract* other) {
  std::swap(type_, other->type_);
  payload_.Swap(&other->payload_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Contract::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Contract_descriptor_;
  metadata.reflection = Contract_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Contract

// optional .protocol.Contract.ContractType type = 1;
void Contract::clear_type() {
  type_ = 0;
}
 ::protocol::Contract_ContractType Contract::type() const {
  // @@protoc_insertion_point(field_get:protocol.Contract.type)
  return static_cast< ::protocol::Contract_ContractType >(type_);
}
 void Contract::set_type(::protocol::Contract_ContractType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:protocol.Contract.type)
}

// optional string payload = 2;
void Contract::clear_payload() {
  payload_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Contract::payload() const {
  // @@protoc_insertion_point(field_get:protocol.Contract.payload)
  return payload_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Contract::set_payload(const ::std::string& value) {
  
  payload_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Contract.payload)
}
 void Contract::set_payload(const char* value) {
  
  payload_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Contract.payload)
}
 void Contract::set_payload(const char* value, size_t size) {
  
  payload_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Contract.payload)
}
 ::std::string* Contract::mutable_payload() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Contract.payload)
  return payload_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Contract::release_payload() {
  // @@protoc_insertion_point(field_release:protocol.Contract.payload)
  
  return payload_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Contract::set_allocated_payload(::std::string* payload) {
  if (payload != NULL) {
    
  } else {
    
  }
  payload_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), payload);
  // @@protoc_insertion_point(field_set_allocated:protocol.Contract.payload)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationCreateAccount::kDestAddressFieldNumber;
const int OperationCreateAccount::kContractFieldNumber;
const int OperationCreateAccount::kPrivFieldNumber;
const int OperationCreateAccount::kMetadatasFieldNumber;
const int OperationCreateAccount::kInitBalanceFieldNumber;
const int OperationCreateAccount::kInitInputFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationCreateAccount::OperationCreateAccount()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.OperationCreateAccount)
}

void OperationCreateAccount::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  contract_ = const_cast< ::protocol::Contract*>(&::protocol::Contract::default_instance());
  priv_ = const_cast< ::protocol::AccountPrivilege*>(&::protocol::AccountPrivilege::default_instance());
}

OperationCreateAccount::OperationCreateAccount(const OperationCreateAccount& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.OperationCreateAccount)
}

void OperationCreateAccount::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  dest_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  contract_ = NULL;
  priv_ = NULL;
  init_balance_ = GOOGLE_LONGLONG(0);
  init_input_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

OperationCreateAccount::~OperationCreateAccount() {
  // @@protoc_insertion_point(destructor:protocol.OperationCreateAccount)
  SharedDtor();
}

void OperationCreateAccount::SharedDtor() {
  dest_address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  init_input_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete contract_;
    delete priv_;
  }
}

void OperationCreateAccount::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OperationCreateAccount::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OperationCreateAccount_descriptor_;
}

const OperationCreateAccount& OperationCreateAccount::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

OperationCreateAccount* OperationCreateAccount::default_instance_ = NULL;

OperationCreateAccount* OperationCreateAccount::New(::google::protobuf::Arena* arena) const {
  OperationCreateAccount* n = new OperationCreateAccount;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OperationCreateAccount::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.OperationCreateAccount)
  dest_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && contract_ != NULL) delete contract_;
  contract_ = NULL;
  if (GetArenaNoVirtual() == NULL && priv_ != NULL) delete priv_;
  priv_ = NULL;
  init_balance_ = GOOGLE_LONGLONG(0);
  init_input_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  metadatas_.Clear();
}

bool OperationCreateAccount::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.OperationCreateAccount)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string dest_address = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_dest_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->dest_address().data(), this->dest_address().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.OperationCreateAccount.dest_address"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_contract;
        break;
      }

      // optional .protocol.Contract contract = 2;
      case 2: {
        if (tag == 18) {
         parse_contract:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_contract()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_priv;
        break;
      }

      // optional .protocol.AccountPrivilege priv = 3;
      case 3: {
        if (tag == 26) {
         parse_priv:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_priv()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_metadatas;
        break;
      }

      // repeated .protocol.KeyPair metadatas = 4;
      case 4: {
        if (tag == 34) {
         parse_metadatas:
          DO_(input->IncrementRecursionDepth());
         parse_loop_metadatas:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_metadatas()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_loop_metadatas;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(40)) goto parse_init_balance;
        break;
      }

      // optional int64 init_balance = 5;
      case 5: {
        if (tag == 40) {
         parse_init_balance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &init_balance_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_init_input;
        break;
      }

      // optional string init_input = 6;
      case 6: {
        if (tag == 50) {
         parse_init_input:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_init_input()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->init_input().data(), this->init_input().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.OperationCreateAccount.init_input"));
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
  // @@protoc_insertion_point(parse_success:protocol.OperationCreateAccount)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.OperationCreateAccount)
  return false;
#undef DO_
}

void OperationCreateAccount::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.OperationCreateAccount)
  // optional string dest_address = 1;
  if (this->dest_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->dest_address().data(), this->dest_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationCreateAccount.dest_address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->dest_address(), output);
  }

  // optional .protocol.Contract contract = 2;
  if (this->has_contract()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->contract_, output);
  }

  // optional .protocol.AccountPrivilege priv = 3;
  if (this->has_priv()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->priv_, output);
  }

  // repeated .protocol.KeyPair metadatas = 4;
  for (unsigned int i = 0, n = this->metadatas_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->metadatas(i), output);
  }

  // optional int64 init_balance = 5;
  if (this->init_balance() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->init_balance(), output);
  }

  // optional string init_input = 6;
  if (this->init_input().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->init_input().data(), this->init_input().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationCreateAccount.init_input");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->init_input(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.OperationCreateAccount)
}

::google::protobuf::uint8* OperationCreateAccount::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.OperationCreateAccount)
  // optional string dest_address = 1;
  if (this->dest_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->dest_address().data(), this->dest_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationCreateAccount.dest_address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->dest_address(), target);
  }

  // optional .protocol.Contract contract = 2;
  if (this->has_contract()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->contract_, false, target);
  }

  // optional .protocol.AccountPrivilege priv = 3;
  if (this->has_priv()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->priv_, false, target);
  }

  // repeated .protocol.KeyPair metadatas = 4;
  for (unsigned int i = 0, n = this->metadatas_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->metadatas(i), false, target);
  }

  // optional int64 init_balance = 5;
  if (this->init_balance() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->init_balance(), target);
  }

  // optional string init_input = 6;
  if (this->init_input().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->init_input().data(), this->init_input().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationCreateAccount.init_input");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->init_input(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.OperationCreateAccount)
  return target;
}

int OperationCreateAccount::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.OperationCreateAccount)
  int total_size = 0;

  // optional string dest_address = 1;
  if (this->dest_address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->dest_address());
  }

  // optional .protocol.Contract contract = 2;
  if (this->has_contract()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->contract_);
  }

  // optional .protocol.AccountPrivilege priv = 3;
  if (this->has_priv()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->priv_);
  }

  // optional int64 init_balance = 5;
  if (this->init_balance() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->init_balance());
  }

  // optional string init_input = 6;
  if (this->init_input().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->init_input());
  }

  // repeated .protocol.KeyPair metadatas = 4;
  total_size += 1 * this->metadatas_size();
  for (int i = 0; i < this->metadatas_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->metadatas(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OperationCreateAccount::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.OperationCreateAccount)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const OperationCreateAccount* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const OperationCreateAccount>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.OperationCreateAccount)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.OperationCreateAccount)
    MergeFrom(*source);
  }
}

void OperationCreateAccount::MergeFrom(const OperationCreateAccount& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.OperationCreateAccount)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  metadatas_.MergeFrom(from.metadatas_);
  if (from.dest_address().size() > 0) {

    dest_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.dest_address_);
  }
  if (from.has_contract()) {
    mutable_contract()->::protocol::Contract::MergeFrom(from.contract());
  }
  if (from.has_priv()) {
    mutable_priv()->::protocol::AccountPrivilege::MergeFrom(from.priv());
  }
  if (from.init_balance() != 0) {
    set_init_balance(from.init_balance());
  }
  if (from.init_input().size() > 0) {

    init_input_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.init_input_);
  }
}

void OperationCreateAccount::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.OperationCreateAccount)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationCreateAccount::CopyFrom(const OperationCreateAccount& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.OperationCreateAccount)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationCreateAccount::IsInitialized() const {

  return true;
}

void OperationCreateAccount::Swap(OperationCreateAccount* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationCreateAccount::InternalSwap(OperationCreateAccount* other) {
  dest_address_.Swap(&other->dest_address_);
  std::swap(contract_, other->contract_);
  std::swap(priv_, other->priv_);
  metadatas_.UnsafeArenaSwap(&other->metadatas_);
  std::swap(init_balance_, other->init_balance_);
  init_input_.Swap(&other->init_input_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OperationCreateAccount::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OperationCreateAccount_descriptor_;
  metadata.reflection = OperationCreateAccount_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OperationCreateAccount

// optional string dest_address = 1;
void OperationCreateAccount::clear_dest_address() {
  dest_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& OperationCreateAccount::dest_address() const {
  // @@protoc_insertion_point(field_get:protocol.OperationCreateAccount.dest_address)
  return dest_address_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationCreateAccount::set_dest_address(const ::std::string& value) {
  
  dest_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.OperationCreateAccount.dest_address)
}
 void OperationCreateAccount::set_dest_address(const char* value) {
  
  dest_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.OperationCreateAccount.dest_address)
}
 void OperationCreateAccount::set_dest_address(const char* value, size_t size) {
  
  dest_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.OperationCreateAccount.dest_address)
}
 ::std::string* OperationCreateAccount::mutable_dest_address() {
  
  // @@protoc_insertion_point(field_mutable:protocol.OperationCreateAccount.dest_address)
  return dest_address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* OperationCreateAccount::release_dest_address() {
  // @@protoc_insertion_point(field_release:protocol.OperationCreateAccount.dest_address)
  
  return dest_address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationCreateAccount::set_allocated_dest_address(::std::string* dest_address) {
  if (dest_address != NULL) {
    
  } else {
    
  }
  dest_address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), dest_address);
  // @@protoc_insertion_point(field_set_allocated:protocol.OperationCreateAccount.dest_address)
}

// optional .protocol.Contract contract = 2;
bool OperationCreateAccount::has_contract() const {
  return !_is_default_instance_ && contract_ != NULL;
}
void OperationCreateAccount::clear_contract() {
  if (GetArenaNoVirtual() == NULL && contract_ != NULL) delete contract_;
  contract_ = NULL;
}
const ::protocol::Contract& OperationCreateAccount::contract() const {
  // @@protoc_insertion_point(field_get:protocol.OperationCreateAccount.contract)
  return contract_ != NULL ? *contract_ : *default_instance_->contract_;
}
::protocol::Contract* OperationCreateAccount::mutable_contract() {
  
  if (contract_ == NULL) {
    contract_ = new ::protocol::Contract;
  }
  // @@protoc_insertion_point(field_mutable:protocol.OperationCreateAccount.contract)
  return contract_;
}
::protocol::Contract* OperationCreateAccount::release_contract() {
  // @@protoc_insertion_point(field_release:protocol.OperationCreateAccount.contract)
  
  ::protocol::Contract* temp = contract_;
  contract_ = NULL;
  return temp;
}
void OperationCreateAccount::set_allocated_contract(::protocol::Contract* contract) {
  delete contract_;
  contract_ = contract;
  if (contract) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.OperationCreateAccount.contract)
}

// optional .protocol.AccountPrivilege priv = 3;
bool OperationCreateAccount::has_priv() const {
  return !_is_default_instance_ && priv_ != NULL;
}
void OperationCreateAccount::clear_priv() {
  if (GetArenaNoVirtual() == NULL && priv_ != NULL) delete priv_;
  priv_ = NULL;
}
const ::protocol::AccountPrivilege& OperationCreateAccount::priv() const {
  // @@protoc_insertion_point(field_get:protocol.OperationCreateAccount.priv)
  return priv_ != NULL ? *priv_ : *default_instance_->priv_;
}
::protocol::AccountPrivilege* OperationCreateAccount::mutable_priv() {
  
  if (priv_ == NULL) {
    priv_ = new ::protocol::AccountPrivilege;
  }
  // @@protoc_insertion_point(field_mutable:protocol.OperationCreateAccount.priv)
  return priv_;
}
::protocol::AccountPrivilege* OperationCreateAccount::release_priv() {
  // @@protoc_insertion_point(field_release:protocol.OperationCreateAccount.priv)
  
  ::protocol::AccountPrivilege* temp = priv_;
  priv_ = NULL;
  return temp;
}
void OperationCreateAccount::set_allocated_priv(::protocol::AccountPrivilege* priv) {
  delete priv_;
  priv_ = priv;
  if (priv) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.OperationCreateAccount.priv)
}

// repeated .protocol.KeyPair metadatas = 4;
int OperationCreateAccount::metadatas_size() const {
  return metadatas_.size();
}
void OperationCreateAccount::clear_metadatas() {
  metadatas_.Clear();
}
const ::protocol::KeyPair& OperationCreateAccount::metadatas(int index) const {
  // @@protoc_insertion_point(field_get:protocol.OperationCreateAccount.metadatas)
  return metadatas_.Get(index);
}
::protocol::KeyPair* OperationCreateAccount::mutable_metadatas(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.OperationCreateAccount.metadatas)
  return metadatas_.Mutable(index);
}
::protocol::KeyPair* OperationCreateAccount::add_metadatas() {
  // @@protoc_insertion_point(field_add:protocol.OperationCreateAccount.metadatas)
  return metadatas_.Add();
}
::google::protobuf::RepeatedPtrField< ::protocol::KeyPair >*
OperationCreateAccount::mutable_metadatas() {
  // @@protoc_insertion_point(field_mutable_list:protocol.OperationCreateAccount.metadatas)
  return &metadatas_;
}
const ::google::protobuf::RepeatedPtrField< ::protocol::KeyPair >&
OperationCreateAccount::metadatas() const {
  // @@protoc_insertion_point(field_list:protocol.OperationCreateAccount.metadatas)
  return metadatas_;
}

// optional int64 init_balance = 5;
void OperationCreateAccount::clear_init_balance() {
  init_balance_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 OperationCreateAccount::init_balance() const {
  // @@protoc_insertion_point(field_get:protocol.OperationCreateAccount.init_balance)
  return init_balance_;
}
 void OperationCreateAccount::set_init_balance(::google::protobuf::int64 value) {
  
  init_balance_ = value;
  // @@protoc_insertion_point(field_set:protocol.OperationCreateAccount.init_balance)
}

// optional string init_input = 6;
void OperationCreateAccount::clear_init_input() {
  init_input_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& OperationCreateAccount::init_input() const {
  // @@protoc_insertion_point(field_get:protocol.OperationCreateAccount.init_input)
  return init_input_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationCreateAccount::set_init_input(const ::std::string& value) {
  
  init_input_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.OperationCreateAccount.init_input)
}
 void OperationCreateAccount::set_init_input(const char* value) {
  
  init_input_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.OperationCreateAccount.init_input)
}
 void OperationCreateAccount::set_init_input(const char* value, size_t size) {
  
  init_input_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.OperationCreateAccount.init_input)
}
 ::std::string* OperationCreateAccount::mutable_init_input() {
  
  // @@protoc_insertion_point(field_mutable:protocol.OperationCreateAccount.init_input)
  return init_input_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* OperationCreateAccount::release_init_input() {
  // @@protoc_insertion_point(field_release:protocol.OperationCreateAccount.init_input)
  
  return init_input_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationCreateAccount::set_allocated_init_input(::std::string* init_input) {
  if (init_input != NULL) {
    
  } else {
    
  }
  init_input_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), init_input);
  // @@protoc_insertion_point(field_set_allocated:protocol.OperationCreateAccount.init_input)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationSetMetadata::kKeyFieldNumber;
const int OperationSetMetadata::kValueFieldNumber;
const int OperationSetMetadata::kVersionFieldNumber;
const int OperationSetMetadata::kDeleteFlagFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationSetMetadata::OperationSetMetadata()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.OperationSetMetadata)
}

void OperationSetMetadata::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

OperationSetMetadata::OperationSetMetadata(const OperationSetMetadata& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.OperationSetMetadata)
}

void OperationSetMetadata::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = GOOGLE_LONGLONG(0);
  delete_flag_ = false;
}

OperationSetMetadata::~OperationSetMetadata() {
  // @@protoc_insertion_point(destructor:protocol.OperationSetMetadata)
  SharedDtor();
}

void OperationSetMetadata::SharedDtor() {
  key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void OperationSetMetadata::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OperationSetMetadata::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OperationSetMetadata_descriptor_;
}

const OperationSetMetadata& OperationSetMetadata::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

OperationSetMetadata* OperationSetMetadata::default_instance_ = NULL;

OperationSetMetadata* OperationSetMetadata::New(::google::protobuf::Arena* arena) const {
  OperationSetMetadata* n = new OperationSetMetadata;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OperationSetMetadata::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.OperationSetMetadata)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(OperationSetMetadata, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<OperationSetMetadata*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(version_, delete_flag_);
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool OperationSetMetadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.OperationSetMetadata)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string key = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->key().data(), this->key().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.OperationSetMetadata.key"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_value;
        break;
      }

      // optional string value = 2;
      case 2: {
        if (tag == 18) {
         parse_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->value().data(), this->value().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.OperationSetMetadata.value"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_version;
        break;
      }

      // optional int64 version = 3;
      case 3: {
        if (tag == 24) {
         parse_version:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &version_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_delete_flag;
        break;
      }

      // optional bool delete_flag = 4;
      case 4: {
        if (tag == 32) {
         parse_delete_flag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &delete_flag_)));

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
  // @@protoc_insertion_point(parse_success:protocol.OperationSetMetadata)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.OperationSetMetadata)
  return false;
#undef DO_
}

void OperationSetMetadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.OperationSetMetadata)
  // optional string key = 1;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationSetMetadata.key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->key(), output);
  }

  // optional string value = 2;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationSetMetadata.value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->value(), output);
  }

  // optional int64 version = 3;
  if (this->version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->version(), output);
  }

  // optional bool delete_flag = 4;
  if (this->delete_flag() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->delete_flag(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.OperationSetMetadata)
}

::google::protobuf::uint8* OperationSetMetadata::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.OperationSetMetadata)
  // optional string key = 1;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationSetMetadata.key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->key(), target);
  }

  // optional string value = 2;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.OperationSetMetadata.value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->value(), target);
  }

  // optional int64 version = 3;
  if (this->version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->version(), target);
  }

  // optional bool delete_flag = 4;
  if (this->delete_flag() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->delete_flag(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.OperationSetMetadata)
  return target;
}

int OperationSetMetadata::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.OperationSetMetadata)
  int total_size = 0;

  // optional string key = 1;
  if (this->key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->key());
  }

  // optional string value = 2;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->value());
  }

  // optional int64 version = 3;
  if (this->version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->version());
  }

  // optional bool delete_flag = 4;
  if (this->delete_flag() != 0) {
    total_size += 1 + 1;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OperationSetMetadata::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.OperationSetMetadata)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const OperationSetMetadata* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const OperationSetMetadata>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.OperationSetMetadata)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.OperationSetMetadata)
    MergeFrom(*source);
  }
}

void OperationSetMetadata::MergeFrom(const OperationSetMetadata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.OperationSetMetadata)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.key().size() > 0) {

    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  if (from.value().size() > 0) {

    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  if (from.version() != 0) {
    set_version(from.version());
  }
  if (from.delete_flag() != 0) {
    set_delete_flag(from.delete_flag());
  }
}

void OperationSetMetadata::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.OperationSetMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationSetMetadata::CopyFrom(const OperationSetMetadata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.OperationSetMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationSetMetadata::IsInitialized() const {

  return true;
}

void OperationSetMetadata::Swap(OperationSetMetadata* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationSetMetadata::InternalSwap(OperationSetMetadata* other) {
  key_.Swap(&other->key_);
  value_.Swap(&other->value_);
  std::swap(version_, other->version_);
  std::swap(delete_flag_, other->delete_flag_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OperationSetMetadata::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OperationSetMetadata_descriptor_;
  metadata.reflection = OperationSetMetadata_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OperationSetMetadata

// optional string key = 1;
void OperationSetMetadata::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& OperationSetMetadata::key() const {
  // @@protoc_insertion_point(field_get:protocol.OperationSetMetadata.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationSetMetadata::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.OperationSetMetadata.key)
}
 void OperationSetMetadata::set_key(const char* value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.OperationSetMetadata.key)
}
 void OperationSetMetadata::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.OperationSetMetadata.key)
}
 ::std::string* OperationSetMetadata::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:protocol.OperationSetMetadata.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* OperationSetMetadata::release_key() {
  // @@protoc_insertion_point(field_release:protocol.OperationSetMetadata.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationSetMetadata::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:protocol.OperationSetMetadata.key)
}

// optional string value = 2;
void OperationSetMetadata::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& OperationSetMetadata::value() const {
  // @@protoc_insertion_point(field_get:protocol.OperationSetMetadata.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationSetMetadata::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.OperationSetMetadata.value)
}
 void OperationSetMetadata::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.OperationSetMetadata.value)
}
 void OperationSetMetadata::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.OperationSetMetadata.value)
}
 ::std::string* OperationSetMetadata::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:protocol.OperationSetMetadata.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* OperationSetMetadata::release_value() {
  // @@protoc_insertion_point(field_release:protocol.OperationSetMetadata.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void OperationSetMetadata::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:protocol.OperationSetMetadata.value)
}

// optional int64 version = 3;
void OperationSetMetadata::clear_version() {
  version_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 OperationSetMetadata::version() const {
  // @@protoc_insertion_point(field_get:protocol.OperationSetMetadata.version)
  return version_;
}
 void OperationSetMetadata::set_version(::google::protobuf::int64 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:protocol.OperationSetMetadata.version)
}

// optional bool delete_flag = 4;
void OperationSetMetadata::clear_delete_flag() {
  delete_flag_ = false;
}
 bool OperationSetMetadata::delete_flag() const {
  // @@protoc_insertion_point(field_get:protocol.OperationSetMetadata.delete_flag)
  return delete_flag_;
}
 void OperationSetMetadata::set_delete_flag(bool value) {
  
  delete_flag_ = value;
  // @@protoc_insertion_point(field_set:protocol.OperationSetMetadata.delete_flag)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

// @@protoc_insertion_point(global_scope)
