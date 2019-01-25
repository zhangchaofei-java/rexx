

package protocol

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type Limit int32

const (
	Limit_UNKNOWN   Limit = 0
	Limit_SIGNATURE Limit = 100
)

var Limit_name = map[int32]string{
	0:   "UNKNOWN",
	100: "SIGNATURE",
}
var Limit_value = map[string]int32{
	"UNKNOWN":   0,
	"SIGNATURE": 100,
}

func (x Limit) String() string {
	return proto.EnumName(Limit_name, int32(x))
}
func (Limit) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{0}
}

type Operation_Type int32

const (
	Operation_UNKNOWN           Operation_Type = 0
	Operation_CREATE_ACCOUNT    Operation_Type = 1
	Operation_ISSUE_ASSET       Operation_Type = 2
	Operation_PAY_ASSET         Operation_Type = 3
	Operation_SET_METADATA      Operation_Type = 4
	Operation_SET_SIGNER_WEIGHT Operation_Type = 5
	Operation_SET_THRESHOLD     Operation_Type = 6
	Operation_PAY_COIN          Operation_Type = 7
	Operation_LOG               Operation_Type = 8
	Operation_SET_PRIVILEGE     Operation_Type = 9
)

var Operation_Type_name = map[int32]string{
	0: "UNKNOWN",
	1: "CREATE_ACCOUNT",
	2: "ISSUE_ASSET",
	3: "PAY_ASSET",
	4: "SET_METADATA",
	5: "SET_SIGNER_WEIGHT",
	6: "SET_THRESHOLD",
	7: "PAY_COIN",
	8: "LOG",
	9: "SET_PRIVILEGE",
}
var Operation_Type_value = map[string]int32{
	"UNKNOWN":           0,
	"CREATE_ACCOUNT":    1,
	"ISSUE_ASSET":       2,
	"PAY_ASSET":         3,
	"SET_METADATA":      4,
	"SET_SIGNER_WEIGHT": 5,
	"SET_THRESHOLD":     6,
	"PAY_COIN":          7,
	"LOG":               8,
	"SET_PRIVILEGE":     9,
}

func (x Operation_Type) String() string {
	return proto.EnumName(Operation_Type_name, int32(x))
}
func (Operation_Type) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{16, 0}
}

type Transaction_Limit int32

const (
	Transaction_UNKNOWN    Transaction_Limit = 0
	Transaction_OPERATIONS Transaction_Limit = 1000
)

var Transaction_Limit_name = map[int32]string{
	0:    "UNKNOWN",
	1000: "OPERATIONS",
}
var Transaction_Limit_value = map[string]int32{
	"UNKNOWN":    0,
	"OPERATIONS": 1000,
}

func (x Transaction_Limit) String() string {
	return proto.EnumName(Transaction_Limit_name, int32(x))
}
func (Transaction_Limit) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{18, 0}
}

type Signer_Limit int32

const (
	Signer_SIGNER_NONE Signer_Limit = 0
	Signer_SIGNER      Signer_Limit = 100
)

var Signer_Limit_name = map[int32]string{
	0:   "SIGNER_NONE",
	100: "SIGNER",
}
var Signer_Limit_value = map[string]int32{
	"SIGNER_NONE": 0,
	"SIGNER":      100,
}

func (x Signer_Limit) String() string {
	return proto.EnumName(Signer_Limit_name, int32(x))
}
func (Signer_Limit) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{19, 0}
}

type Trigger_TransactionType int32

const (
	Trigger_NORMAL_TRANSACTION   Trigger_TransactionType = 0
	Trigger_CONTRACT_TRANSACTION Trigger_TransactionType = 1
)

var Trigger_TransactionType_name = map[int32]string{
	0: "NORMAL_TRANSACTION",
	1: "CONTRACT_TRANSACTION",
}
var Trigger_TransactionType_value = map[string]int32{
	"NORMAL_TRANSACTION":   0,
	"CONTRACT_TRANSACTION": 1,
}

func (x Trigger_TransactionType) String() string {
	return proto.EnumName(Trigger_TransactionType_name, int32(x))
}
func (Trigger_TransactionType) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{20, 0}
}

type Contract_ContractType int32

const (
	Contract_JAVASCRIPT Contract_ContractType = 0
)

var Contract_ContractType_name = map[int32]string{
	0: "JAVASCRIPT",
}
var Contract_ContractType_value = map[string]int32{
	"JAVASCRIPT": 0,
}

func (x Contract_ContractType) String() string {
	return proto.EnumName(Contract_ContractType_name, int32(x))
}
func (Contract_ContractType) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{26, 0}
}

type Account struct {
	Address              string            `protobuf:"bytes,1,opt,name=address" json:"address,omitempty"`
	Nonce                int64             `protobuf:"varint,2,opt,name=nonce" json:"nonce,omitempty"`
	Priv                 *AccountPrivilege `protobuf:"bytes,3,opt,name=priv" json:"priv,omitempty"`
	MetadatasHash        []byte            `protobuf:"bytes,4,opt,name=metadatas_hash,json=metadatasHash,proto3" json:"metadatas_hash,omitempty"`
	AssetsHash           []byte            `protobuf:"bytes,5,opt,name=assets_hash,json=assetsHash,proto3" json:"assets_hash,omitempty"`
	Contract             *Contract         `protobuf:"bytes,6,opt,name=contract" json:"contract,omitempty"`
	Balance              int64             `protobuf:"varint,7,opt,name=balance" json:"balance,omitempty"`
	XXX_NoUnkeyedLiteral struct{}          `json:"-"`
	XXX_unrecognized     []byte            `json:"-"`
	XXX_sizecache        int32             `json:"-"`
}

func (m *Account) Reset()         { *m = Account{} }
func (m *Account) String() string { return proto.CompactTextString(m) }
func (*Account) ProtoMessage()    {}
func (*Account) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{0}
}
func (m *Account) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Account.Unmarshal(m, b)
}
func (m *Account) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Account.Marshal(b, m, deterministic)
}
func (dst *Account) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Account.Merge(dst, src)
}
func (m *Account) XXX_Size() int {
	return xxx_messageInfo_Account.Size(m)
}
func (m *Account) XXX_DiscardUnknown() {
	xxx_messageInfo_Account.DiscardUnknown(m)
}

var xxx_messageInfo_Account proto.InternalMessageInfo

func (m *Account) GetAddress() string {
	if m != nil {
		return m.Address
	}
	return ""
}

func (m *Account) GetNonce() int64 {
	if m != nil {
		return m.Nonce
	}
	return 0
}

func (m *Account) GetPriv() *AccountPrivilege {
	if m != nil {
		return m.Priv
	}
	return nil
}

func (m *Account) GetMetadatasHash() []byte {
	if m != nil {
		return m.MetadatasHash
	}
	return nil
}

func (m *Account) GetAssetsHash() []byte {
	if m != nil {
		return m.AssetsHash
	}
	return nil
}

func (m *Account) GetContract() *Contract {
	if m != nil {
		return m.Contract
	}
	return nil
}

func (m *Account) GetBalance() int64 {
	if m != nil {
		return m.Balance
	}
	return 0
}

type AssetKey struct {
	Issuer               string   `protobuf:"bytes,1,opt,name=issuer" json:"issuer,omitempty"`
	Code                 string   `protobuf:"bytes,2,opt,name=code" json:"code,omitempty"`
	Type                 int32    `protobuf:"varint,3,opt,name=type" json:"type,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *AssetKey) Reset()         { *m = AssetKey{} }
func (m *AssetKey) String() string { return proto.CompactTextString(m) }
func (*AssetKey) ProtoMessage()    {}
func (*AssetKey) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{1}
}
func (m *AssetKey) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_AssetKey.Unmarshal(m, b)
}
func (m *AssetKey) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_AssetKey.Marshal(b, m, deterministic)
}
func (dst *AssetKey) XXX_Merge(src proto.Message) {
	xxx_messageInfo_AssetKey.Merge(dst, src)
}
func (m *AssetKey) XXX_Size() int {
	return xxx_messageInfo_AssetKey.Size(m)
}
func (m *AssetKey) XXX_DiscardUnknown() {
	xxx_messageInfo_AssetKey.DiscardUnknown(m)
}

var xxx_messageInfo_AssetKey proto.InternalMessageInfo

func (m *AssetKey) GetIssuer() string {
	if m != nil {
		return m.Issuer
	}
	return ""
}

func (m *AssetKey) GetCode() string {
	if m != nil {
		return m.Code
	}
	return ""
}

func (m *AssetKey) GetType() int32 {
	if m != nil {
		return m.Type
	}
	return 0
}

// payAsset
type Asset struct {
	Key                  *AssetKey `protobuf:"bytes,1,opt,name=key" json:"key,omitempty"`
	Amount               int64     `protobuf:"varint,2,opt,name=amount" json:"amount,omitempty"`
	XXX_NoUnkeyedLiteral struct{}  `json:"-"`
	XXX_unrecognized     []byte    `json:"-"`
	XXX_sizecache        int32     `json:"-"`
}

func (m *Asset) Reset()         { *m = Asset{} }
func (m *Asset) String() string { return proto.CompactTextString(m) }
func (*Asset) ProtoMessage()    {}
func (*Asset) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{2}
}
func (m *Asset) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Asset.Unmarshal(m, b)
}
func (m *Asset) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Asset.Marshal(b, m, deterministic)
}
func (dst *Asset) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Asset.Merge(dst, src)
}
func (m *Asset) XXX_Size() int {
	return xxx_messageInfo_Asset.Size(m)
}
func (m *Asset) XXX_DiscardUnknown() {
	xxx_messageInfo_Asset.DiscardUnknown(m)
}

var xxx_messageInfo_Asset proto.InternalMessageInfo

func (m *Asset) GetKey() *AssetKey {
	if m != nil {
		return m.Key
	}
	return nil
}

func (m *Asset) GetAmount() int64 {
	if m != nil {
		return m.Amount
	}
	return 0
}

type AssetProperty struct {
	Decimal              int32    `protobuf:"varint,1,opt,name=decimal" json:"decimal,omitempty"`
	Description          string   `protobuf:"bytes,2,opt,name=description" json:"description,omitempty"`
	MaxSupply            int64    `protobuf:"varint,3,opt,name=max_supply,json=maxSupply" json:"max_supply,omitempty"`
	IssuedAmount         int64    `protobuf:"varint,4,opt,name=issued_amount,json=issuedAmount" json:"issued_amount,omitempty"`
	FeePercent           int32    `protobuf:"varint,5,opt,name=fee_percent,json=feePercent" json:"fee_percent,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *AssetProperty) Reset()         { *m = AssetProperty{} }
func (m *AssetProperty) String() string { return proto.CompactTextString(m) }
func (*AssetProperty) ProtoMessage()    {}
func (*AssetProperty) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{3}
}
func (m *AssetProperty) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_AssetProperty.Unmarshal(m, b)
}
func (m *AssetProperty) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_AssetProperty.Marshal(b, m, deterministic)
}
func (dst *AssetProperty) XXX_Merge(src proto.Message) {
	xxx_messageInfo_AssetProperty.Merge(dst, src)
}
func (m *AssetProperty) XXX_Size() int {
	return xxx_messageInfo_AssetProperty.Size(m)
}
func (m *AssetProperty) XXX_DiscardUnknown() {
	xxx_messageInfo_AssetProperty.DiscardUnknown(m)
}

var xxx_messageInfo_AssetProperty proto.InternalMessageInfo

func (m *AssetProperty) GetDecimal() int32 {
	if m != nil {
		return m.Decimal
	}
	return 0
}

func (m *AssetProperty) GetDescription() string {
	if m != nil {
		return m.Description
	}
	return ""
}

func (m *AssetProperty) GetMaxSupply() int64 {
	if m != nil {
		return m.MaxSupply
	}
	return 0
}

func (m *AssetProperty) GetIssuedAmount() int64 {
	if m != nil {
		return m.IssuedAmount
	}
	return 0
}

func (m *AssetProperty) GetFeePercent() int32 {
	if m != nil {
		return m.FeePercent
	}
	return 0
}

type AssetStore struct {
	Key                  *AssetKey      `protobuf:"bytes,1,opt,name=key" json:"key,omitempty"`
	Amount               int64          `protobuf:"varint,2,opt,name=amount" json:"amount,omitempty"`
	Property             *AssetProperty `protobuf:"bytes,3,opt,name=property" json:"property,omitempty"`
	XXX_NoUnkeyedLiteral struct{}       `json:"-"`
	XXX_unrecognized     []byte         `json:"-"`
	XXX_sizecache        int32          `json:"-"`
}

func (m *AssetStore) Reset()         { *m = AssetStore{} }
func (m *AssetStore) String() string { return proto.CompactTextString(m) }
func (*AssetStore) ProtoMessage()    {}
func (*AssetStore) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{4}
}
func (m *AssetStore) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_AssetStore.Unmarshal(m, b)
}
func (m *AssetStore) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_AssetStore.Marshal(b, m, deterministic)
}
func (dst *AssetStore) XXX_Merge(src proto.Message) {
	xxx_messageInfo_AssetStore.Merge(dst, src)
}
func (m *AssetStore) XXX_Size() int {
	return xxx_messageInfo_AssetStore.Size(m)
}
func (m *AssetStore) XXX_DiscardUnknown() {
	xxx_messageInfo_AssetStore.DiscardUnknown(m)
}

var xxx_messageInfo_AssetStore proto.InternalMessageInfo

func (m *AssetStore) GetKey() *AssetKey {
	if m != nil {
		return m.Key
	}
	return nil
}

func (m *AssetStore) GetAmount() int64 {
	if m != nil {
		return m.Amount
	}
	return 0
}

func (m *AssetStore) GetProperty() *AssetProperty {
	if m != nil {
		return m.Property
	}
	return nil
}

type LedgerHeader struct {
	Seq                  int64    `protobuf:"varint,1,opt,name=seq" json:"seq,omitempty"`
	Hash                 []byte   `protobuf:"bytes,2,opt,name=hash,proto3" json:"hash,omitempty"`
	PreviousHash         []byte   `protobuf:"bytes,3,opt,name=previous_hash,json=previousHash,proto3" json:"previous_hash,omitempty"`
	AccountTreeHash      []byte   `protobuf:"bytes,4,opt,name=account_tree_hash,json=accountTreeHash,proto3" json:"account_tree_hash,omitempty"`
	CloseTime            int64    `protobuf:"varint,5,opt,name=close_time,json=closeTime" json:"close_time,omitempty"`
	ConsensusValueHash   []byte   `protobuf:"bytes,6,opt,name=consensus_value_hash,json=consensusValueHash,proto3" json:"consensus_value_hash,omitempty"`
	Version              int64    `protobuf:"varint,7,opt,name=version" json:"version,omitempty"`
	TxCount              int64    `protobuf:"varint,8,opt,name=tx_count,json=txCount" json:"tx_count,omitempty"`
	ValidatorsHash       []byte   `protobuf:"bytes,9,opt,name=validators_hash,json=validatorsHash,proto3" json:"validators_hash,omitempty"`
	FeesHash             []byte   `protobuf:"bytes,10,opt,name=fees_hash,json=feesHash,proto3" json:"fees_hash,omitempty"`
	Reserve              string   `protobuf:"bytes,11,opt,name=reserve" json:"reserve,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *LedgerHeader) Reset()         { *m = LedgerHeader{} }
func (m *LedgerHeader) String() string { return proto.CompactTextString(m) }
func (*LedgerHeader) ProtoMessage()    {}
func (*LedgerHeader) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{5}
}
func (m *LedgerHeader) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_LedgerHeader.Unmarshal(m, b)
}
func (m *LedgerHeader) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_LedgerHeader.Marshal(b, m, deterministic)
}
func (dst *LedgerHeader) XXX_Merge(src proto.Message) {
	xxx_messageInfo_LedgerHeader.Merge(dst, src)
}
func (m *LedgerHeader) XXX_Size() int {
	return xxx_messageInfo_LedgerHeader.Size(m)
}
func (m *LedgerHeader) XXX_DiscardUnknown() {
	xxx_messageInfo_LedgerHeader.DiscardUnknown(m)
}

var xxx_messageInfo_LedgerHeader proto.InternalMessageInfo

func (m *LedgerHeader) GetSeq() int64 {
	if m != nil {
		return m.Seq
	}
	return 0
}

func (m *LedgerHeader) GetHash() []byte {
	if m != nil {
		return m.Hash
	}
	return nil
}

func (m *LedgerHeader) GetPreviousHash() []byte {
	if m != nil {
		return m.PreviousHash
	}
	return nil
}

func (m *LedgerHeader) GetAccountTreeHash() []byte {
	if m != nil {
		return m.AccountTreeHash
	}
	return nil
}

func (m *LedgerHeader) GetCloseTime() int64 {
	if m != nil {
		return m.CloseTime
	}
	return 0
}

func (m *LedgerHeader) GetConsensusValueHash() []byte {
	if m != nil {
		return m.ConsensusValueHash
	}
	return nil
}

func (m *LedgerHeader) GetVersion() int64 {
	if m != nil {
		return m.Version
	}
	return 0
}

func (m *LedgerHeader) GetTxCount() int64 {
	if m != nil {
		return m.TxCount
	}
	return 0
}

func (m *LedgerHeader) GetValidatorsHash() []byte {
	if m != nil {
		return m.ValidatorsHash
	}
	return nil
}

func (m *LedgerHeader) GetFeesHash() []byte {
	if m != nil {
		return m.FeesHash
	}
	return nil
}

func (m *LedgerHeader) GetReserve() string {
	if m != nil {
		return m.Reserve
	}
	return ""
}

type Ledger struct {
	Header               *LedgerHeader     `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	TransactionEnvs      []*TransactionEnv `protobuf:"bytes,2,rep,name=transaction_envs,json=transactionEnvs" json:"transaction_envs,omitempty"`
	XXX_NoUnkeyedLiteral struct{}          `json:"-"`
	XXX_unrecognized     []byte            `json:"-"`
	XXX_sizecache        int32             `json:"-"`
}

func (m *Ledger) Reset()         { *m = Ledger{} }
func (m *Ledger) String() string { return proto.CompactTextString(m) }
func (*Ledger) ProtoMessage()    {}
func (*Ledger) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{6}
}
func (m *Ledger) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Ledger.Unmarshal(m, b)
}
func (m *Ledger) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Ledger.Marshal(b, m, deterministic)
}
func (dst *Ledger) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Ledger.Merge(dst, src)
}
func (m *Ledger) XXX_Size() int {
	return xxx_messageInfo_Ledger.Size(m)
}
func (m *Ledger) XXX_DiscardUnknown() {
	xxx_messageInfo_Ledger.DiscardUnknown(m)
}

var xxx_messageInfo_Ledger proto.InternalMessageInfo

func (m *Ledger) GetHeader() *LedgerHeader {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *Ledger) GetTransactionEnvs() []*TransactionEnv {
	if m != nil {
		return m.TransactionEnvs
	}
	return nil
}

type OperationPayAsset struct {
	DestAddress          string   `protobuf:"bytes,1,opt,name=dest_address,json=destAddress" json:"dest_address,omitempty"`
	Asset                *Asset   `protobuf:"bytes,2,opt,name=asset" json:"asset,omitempty"`
	Input                string   `protobuf:"bytes,3,opt,name=input" json:"input,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *OperationPayAsset) Reset()         { *m = OperationPayAsset{} }
func (m *OperationPayAsset) String() string { return proto.CompactTextString(m) }
func (*OperationPayAsset) ProtoMessage()    {}
func (*OperationPayAsset) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{7}
}
func (m *OperationPayAsset) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_OperationPayAsset.Unmarshal(m, b)
}
func (m *OperationPayAsset) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_OperationPayAsset.Marshal(b, m, deterministic)
}
func (dst *OperationPayAsset) XXX_Merge(src proto.Message) {
	xxx_messageInfo_OperationPayAsset.Merge(dst, src)
}
func (m *OperationPayAsset) XXX_Size() int {
	return xxx_messageInfo_OperationPayAsset.Size(m)
}
func (m *OperationPayAsset) XXX_DiscardUnknown() {
	xxx_messageInfo_OperationPayAsset.DiscardUnknown(m)
}

var xxx_messageInfo_OperationPayAsset proto.InternalMessageInfo

func (m *OperationPayAsset) GetDestAddress() string {
	if m != nil {
		return m.DestAddress
	}
	return ""
}

func (m *OperationPayAsset) GetAsset() *Asset {
	if m != nil {
		return m.Asset
	}
	return nil
}

func (m *OperationPayAsset) GetInput() string {
	if m != nil {
		return m.Input
	}
	return ""
}

type OperationTypeThreshold struct {
	Type                 Operation_Type `protobuf:"varint,1,opt,name=type,enum=protocol.Operation_Type" json:"type,omitempty"`
	Threshold            int64          `protobuf:"varint,2,opt,name=threshold" json:"threshold,omitempty"`
	XXX_NoUnkeyedLiteral struct{}       `json:"-"`
	XXX_unrecognized     []byte         `json:"-"`
	XXX_sizecache        int32          `json:"-"`
}

func (m *OperationTypeThreshold) Reset()         { *m = OperationTypeThreshold{} }
func (m *OperationTypeThreshold) String() string { return proto.CompactTextString(m) }
func (*OperationTypeThreshold) ProtoMessage()    {}
func (*OperationTypeThreshold) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{8}
}
func (m *OperationTypeThreshold) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_OperationTypeThreshold.Unmarshal(m, b)
}
func (m *OperationTypeThreshold) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_OperationTypeThreshold.Marshal(b, m, deterministic)
}
func (dst *OperationTypeThreshold) XXX_Merge(src proto.Message) {
	xxx_messageInfo_OperationTypeThreshold.Merge(dst, src)
}
func (m *OperationTypeThreshold) XXX_Size() int {
	return xxx_messageInfo_OperationTypeThreshold.Size(m)
}
func (m *OperationTypeThreshold) XXX_DiscardUnknown() {
	xxx_messageInfo_OperationTypeThreshold.DiscardUnknown(m)
}

var xxx_messageInfo_OperationTypeThreshold proto.InternalMessageInfo

func (m *OperationTypeThreshold) GetType() Operation_Type {
	if m != nil {
		return m.Type
	}
	return Operation_UNKNOWN
}

func (m *OperationTypeThreshold) GetThreshold() int64 {
	if m != nil {
		return m.Threshold
	}
	return 0
}

type AccountPrivilege struct {
	MasterWeight         int64             `protobuf:"varint,1,opt,name=master_weight,json=masterWeight" json:"master_weight,omitempty"`
	Signers              []*Signer         `protobuf:"bytes,2,rep,name=signers" json:"signers,omitempty"`
	Thresholds           *AccountThreshold `protobuf:"bytes,3,opt,name=thresholds" json:"thresholds,omitempty"`
	XXX_NoUnkeyedLiteral struct{}          `json:"-"`
	XXX_unrecognized     []byte            `json:"-"`
	XXX_sizecache        int32             `json:"-"`
}

func (m *AccountPrivilege) Reset()         { *m = AccountPrivilege{} }
func (m *AccountPrivilege) String() string { return proto.CompactTextString(m) }
func (*AccountPrivilege) ProtoMessage()    {}
func (*AccountPrivilege) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{9}
}
func (m *AccountPrivilege) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_AccountPrivilege.Unmarshal(m, b)
}
func (m *AccountPrivilege) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_AccountPrivilege.Marshal(b, m, deterministic)
}
func (dst *AccountPrivilege) XXX_Merge(src proto.Message) {
	xxx_messageInfo_AccountPrivilege.Merge(dst, src)
}
func (m *AccountPrivilege) XXX_Size() int {
	return xxx_messageInfo_AccountPrivilege.Size(m)
}
func (m *AccountPrivilege) XXX_DiscardUnknown() {
	xxx_messageInfo_AccountPrivilege.DiscardUnknown(m)
}

var xxx_messageInfo_AccountPrivilege proto.InternalMessageInfo

func (m *AccountPrivilege) GetMasterWeight() int64 {
	if m != nil {
		return m.MasterWeight
	}
	return 0
}

func (m *AccountPrivilege) GetSigners() []*Signer {
	if m != nil {
		return m.Signers
	}
	return nil
}

func (m *AccountPrivilege) GetThresholds() *AccountThreshold {
	if m != nil {
		return m.Thresholds
	}
	return nil
}

type AccountThreshold struct {
	TxThreshold          int64                     `protobuf:"varint,1,opt,name=tx_threshold,json=txThreshold" json:"tx_threshold,omitempty"`
	TypeThresholds       []*OperationTypeThreshold `protobuf:"bytes,2,rep,name=type_thresholds,json=typeThresholds" json:"type_thresholds,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                  `json:"-"`
	XXX_unrecognized     []byte                    `json:"-"`
	XXX_sizecache        int32                     `json:"-"`
}

func (m *AccountThreshold) Reset()         { *m = AccountThreshold{} }
func (m *AccountThreshold) String() string { return proto.CompactTextString(m) }
func (*AccountThreshold) ProtoMessage()    {}
func (*AccountThreshold) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{10}
}
func (m *AccountThreshold) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_AccountThreshold.Unmarshal(m, b)
}
func (m *AccountThreshold) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_AccountThreshold.Marshal(b, m, deterministic)
}
func (dst *AccountThreshold) XXX_Merge(src proto.Message) {
	xxx_messageInfo_AccountThreshold.Merge(dst, src)
}
func (m *AccountThreshold) XXX_Size() int {
	return xxx_messageInfo_AccountThreshold.Size(m)
}
func (m *AccountThreshold) XXX_DiscardUnknown() {
	xxx_messageInfo_AccountThreshold.DiscardUnknown(m)
}

var xxx_messageInfo_AccountThreshold proto.InternalMessageInfo

func (m *AccountThreshold) GetTxThreshold() int64 {
	if m != nil {
		return m.TxThreshold
	}
	return 0
}

func (m *AccountThreshold) GetTypeThresholds() []*OperationTypeThreshold {
	if m != nil {
		return m.TypeThresholds
	}
	return nil
}

type OperationIssueAsset struct {
	Code                 string   `protobuf:"bytes,1,opt,name=code" json:"code,omitempty"`
	Amount               int64    `protobuf:"varint,2,opt,name=amount" json:"amount,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *OperationIssueAsset) Reset()         { *m = OperationIssueAsset{} }
func (m *OperationIssueAsset) String() string { return proto.CompactTextString(m) }
func (*OperationIssueAsset) ProtoMessage()    {}
func (*OperationIssueAsset) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{11}
}
func (m *OperationIssueAsset) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_OperationIssueAsset.Unmarshal(m, b)
}
func (m *OperationIssueAsset) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_OperationIssueAsset.Marshal(b, m, deterministic)
}
func (dst *OperationIssueAsset) XXX_Merge(src proto.Message) {
	xxx_messageInfo_OperationIssueAsset.Merge(dst, src)
}
func (m *OperationIssueAsset) XXX_Size() int {
	return xxx_messageInfo_OperationIssueAsset.Size(m)
}
func (m *OperationIssueAsset) XXX_DiscardUnknown() {
	xxx_messageInfo_OperationIssueAsset.DiscardUnknown(m)
}

var xxx_messageInfo_OperationIssueAsset proto.InternalMessageInfo

func (m *OperationIssueAsset) GetCode() string {
	if m != nil {
		return m.Code
	}
	return ""
}

func (m *OperationIssueAsset) GetAmount() int64 {
	if m != nil {
		return m.Amount
	}
	return 0
}

type OperationPayCoin struct {
	DestAddress          string   `protobuf:"bytes,1,opt,name=dest_address,json=destAddress" json:"dest_address,omitempty"`
	Amount               int64    `protobuf:"varint,2,opt,name=amount" json:"amount,omitempty"`
	Input                string   `protobuf:"bytes,3,opt,name=input" json:"input,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *OperationPayCoin) Reset()         { *m = OperationPayCoin{} }
func (m *OperationPayCoin) String() string { return proto.CompactTextString(m) }
func (*OperationPayCoin) ProtoMessage()    {}
func (*OperationPayCoin) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{12}
}
func (m *OperationPayCoin) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_OperationPayCoin.Unmarshal(m, b)
}
func (m *OperationPayCoin) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_OperationPayCoin.Marshal(b, m, deterministic)
}
func (dst *OperationPayCoin) XXX_Merge(src proto.Message) {
	xxx_messageInfo_OperationPayCoin.Merge(dst, src)
}
func (m *OperationPayCoin) XXX_Size() int {
	return xxx_messageInfo_OperationPayCoin.Size(m)
}
func (m *OperationPayCoin) XXX_DiscardUnknown() {
	xxx_messageInfo_OperationPayCoin.DiscardUnknown(m)
}

var xxx_messageInfo_OperationPayCoin proto.InternalMessageInfo

func (m *OperationPayCoin) GetDestAddress() string {
	if m != nil {
		return m.DestAddress
	}
	return ""
}

func (m *OperationPayCoin) GetAmount() int64 {
	if m != nil {
		return m.Amount
	}
	return 0
}

func (m *OperationPayCoin) GetInput() string {
	if m != nil {
		return m.Input
	}
	return ""
}

type OperationSetSignerWeight struct {
	MasterWeight         int64     `protobuf:"varint,1,opt,name=master_weight,json=masterWeight" json:"master_weight,omitempty"`
	Signers              []*Signer `protobuf:"bytes,2,rep,name=signers" json:"signers,omitempty"`
	XXX_NoUnkeyedLiteral struct{}  `json:"-"`
	XXX_unrecognized     []byte    `json:"-"`
	XXX_sizecache        int32     `json:"-"`
}

func (m *OperationSetSignerWeight) Reset()         { *m = OperationSetSignerWeight{} }
func (m *OperationSetSignerWeight) String() string { return proto.CompactTextString(m) }
func (*OperationSetSignerWeight) ProtoMessage()    {}
func (*OperationSetSignerWeight) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{13}
}
func (m *OperationSetSignerWeight) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_OperationSetSignerWeight.Unmarshal(m, b)
}
func (m *OperationSetSignerWeight) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_OperationSetSignerWeight.Marshal(b, m, deterministic)
}
func (dst *OperationSetSignerWeight) XXX_Merge(src proto.Message) {
	xxx_messageInfo_OperationSetSignerWeight.Merge(dst, src)
}
func (m *OperationSetSignerWeight) XXX_Size() int {
	return xxx_messageInfo_OperationSetSignerWeight.Size(m)
}
func (m *OperationSetSignerWeight) XXX_DiscardUnknown() {
	xxx_messageInfo_OperationSetSignerWeight.DiscardUnknown(m)
}

var xxx_messageInfo_OperationSetSignerWeight proto.InternalMessageInfo

func (m *OperationSetSignerWeight) GetMasterWeight() int64 {
	if m != nil {
		return m.MasterWeight
	}
	return 0
}

func (m *OperationSetSignerWeight) GetSigners() []*Signer {
	if m != nil {
		return m.Signers
	}
	return nil
}

type OperationLog struct {
	Topic                string   `protobuf:"bytes,1,opt,name=topic" json:"topic,omitempty"`
	Datas                []string `protobuf:"bytes,2,rep,name=datas" json:"datas,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *OperationLog) Reset()         { *m = OperationLog{} }
func (m *OperationLog) String() string { return proto.CompactTextString(m) }
func (*OperationLog) ProtoMessage()    {}
func (*OperationLog) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{14}
}
func (m *OperationLog) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_OperationLog.Unmarshal(m, b)
}
func (m *OperationLog) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_OperationLog.Marshal(b, m, deterministic)
}
func (dst *OperationLog) XXX_Merge(src proto.Message) {
	xxx_messageInfo_OperationLog.Merge(dst, src)
}
func (m *OperationLog) XXX_Size() int {
	return xxx_messageInfo_OperationLog.Size(m)
}
func (m *OperationLog) XXX_DiscardUnknown() {
	xxx_messageInfo_OperationLog.DiscardUnknown(m)
}

var xxx_messageInfo_OperationLog proto.InternalMessageInfo

func (m *OperationLog) GetTopic() string {
	if m != nil {
		return m.Topic
	}
	return ""
}

func (m *OperationLog) GetDatas() []string {
	if m != nil {
		return m.Datas
	}
	return nil
}

type OperationSetPrivilege struct {
	MasterWeight         string                    `protobuf:"bytes,1,opt,name=master_weight,json=masterWeight" json:"master_weight,omitempty"`
	Signers              []*Signer                 `protobuf:"bytes,2,rep,name=signers" json:"signers,omitempty"`
	TxThreshold          string                    `protobuf:"bytes,3,opt,name=tx_threshold,json=txThreshold" json:"tx_threshold,omitempty"`
	TypeThresholds       []*OperationTypeThreshold `protobuf:"bytes,4,rep,name=type_thresholds,json=typeThresholds" json:"type_thresholds,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                  `json:"-"`
	XXX_unrecognized     []byte                    `json:"-"`
	XXX_sizecache        int32                     `json:"-"`
}

func (m *OperationSetPrivilege) Reset()         { *m = OperationSetPrivilege{} }
func (m *OperationSetPrivilege) String() string { return proto.CompactTextString(m) }
func (*OperationSetPrivilege) ProtoMessage()    {}
func (*OperationSetPrivilege) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{15}
}
func (m *OperationSetPrivilege) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_OperationSetPrivilege.Unmarshal(m, b)
}
func (m *OperationSetPrivilege) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_OperationSetPrivilege.Marshal(b, m, deterministic)
}
func (dst *OperationSetPrivilege) XXX_Merge(src proto.Message) {
	xxx_messageInfo_OperationSetPrivilege.Merge(dst, src)
}
func (m *OperationSetPrivilege) XXX_Size() int {
	return xxx_messageInfo_OperationSetPrivilege.Size(m)
}
func (m *OperationSetPrivilege) XXX_DiscardUnknown() {
	xxx_messageInfo_OperationSetPrivilege.DiscardUnknown(m)
}

var xxx_messageInfo_OperationSetPrivilege proto.InternalMessageInfo

func (m *OperationSetPrivilege) GetMasterWeight() string {
	if m != nil {
		return m.MasterWeight
	}
	return ""
}

func (m *OperationSetPrivilege) GetSigners() []*Signer {
	if m != nil {
		return m.Signers
	}
	return nil
}

func (m *OperationSetPrivilege) GetTxThreshold() string {
	if m != nil {
		return m.TxThreshold
	}
	return ""
}

func (m *OperationSetPrivilege) GetTypeThresholds() []*OperationTypeThreshold {
	if m != nil {
		return m.TypeThresholds
	}
	return nil
}

type Operation struct {
	Type          Operation_Type `protobuf:"varint,1,opt,name=type,enum=protocol.Operation_Type" json:"type,omitempty"`
	SourceAddress string         `protobuf:"bytes,2,opt,name=source_address,json=sourceAddress" json:"source_address,omitempty"`
	Metadata      []byte         `protobuf:"bytes,3,opt,name=metadata,proto3" json:"metadata,omitempty"`
	//
	CreateAccount        *OperationCreateAccount   `protobuf:"bytes,4,opt,name=create_account,json=createAccount" json:"create_account,omitempty"`
	IssueAsset           *OperationIssueAsset      `protobuf:"bytes,5,opt,name=issue_asset,json=issueAsset" json:"issue_asset,omitempty"`
	PayAsset             *OperationPayAsset        `protobuf:"bytes,6,opt,name=pay_asset,json=payAsset" json:"pay_asset,omitempty"`
	SetMetadata          *OperationSetMetadata     `protobuf:"bytes,7,opt,name=set_metadata,json=setMetadata" json:"set_metadata,omitempty"`
	SetSignerWeight      *OperationSetSignerWeight `protobuf:"bytes,8,opt,name=set_signer_weight,json=setSignerWeight" json:"set_signer_weight,omitempty"`
	SetThreshold         *OperationSetThreshold    `protobuf:"bytes,9,opt,name=set_threshold,json=setThreshold" json:"set_threshold,omitempty"`
	PayCoin              *OperationPayCoin         `protobuf:"bytes,10,opt,name=pay_coin,json=payCoin" json:"pay_coin,omitempty"`
	Log                  *OperationLog             `protobuf:"bytes,11,opt,name=log" json:"log,omitempty"`
	SetPrivilege         *OperationSetPrivilege    `protobuf:"bytes,12,opt,name=set_privilege,json=setPrivilege" json:"set_privilege,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                  `json:"-"`
	XXX_unrecognized     []byte                    `json:"-"`
	XXX_sizecache        int32                     `json:"-"`
}

func (m *Operation) Reset()         { *m = Operation{} }
func (m *Operation) String() string { return proto.CompactTextString(m) }
func (*Operation) ProtoMessage()    {}
func (*Operation) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{16}
}
func (m *Operation) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Operation.Unmarshal(m, b)
}
func (m *Operation) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Operation.Marshal(b, m, deterministic)
}
func (dst *Operation) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Operation.Merge(dst, src)
}
func (m *Operation) XXX_Size() int {
	return xxx_messageInfo_Operation.Size(m)
}
func (m *Operation) XXX_DiscardUnknown() {
	xxx_messageInfo_Operation.DiscardUnknown(m)
}

var xxx_messageInfo_Operation proto.InternalMessageInfo

func (m *Operation) GetType() Operation_Type {
	if m != nil {
		return m.Type
	}
	return Operation_UNKNOWN
}

func (m *Operation) GetSourceAddress() string {
	if m != nil {
		return m.SourceAddress
	}
	return ""
}

func (m *Operation) GetMetadata() []byte {
	if m != nil {
		return m.Metadata
	}
	return nil
}

func (m *Operation) GetCreateAccount() *OperationCreateAccount {
	if m != nil {
		return m.CreateAccount
	}
	return nil
}

func (m *Operation) GetIssueAsset() *OperationIssueAsset {
	if m != nil {
		return m.IssueAsset
	}
	return nil
}

func (m *Operation) GetPayAsset() *OperationPayAsset {
	if m != nil {
		return m.PayAsset
	}
	return nil
}

func (m *Operation) GetSetMetadata() *OperationSetMetadata {
	if m != nil {
		return m.SetMetadata
	}
	return nil
}

func (m *Operation) GetSetSignerWeight() *OperationSetSignerWeight {
	if m != nil {
		return m.SetSignerWeight
	}
	return nil
}

func (m *Operation) GetSetThreshold() *OperationSetThreshold {
	if m != nil {
		return m.SetThreshold
	}
	return nil
}

func (m *Operation) GetPayCoin() *OperationPayCoin {
	if m != nil {
		return m.PayCoin
	}
	return nil
}

func (m *Operation) GetLog() *OperationLog {
	if m != nil {
		return m.Log
	}
	return nil
}

func (m *Operation) GetSetPrivilege() *OperationSetPrivilege {
	if m != nil {
		return m.SetPrivilege
	}
	return nil
}

type OperationSetThreshold struct {
	TxThreshold          int64                     `protobuf:"varint,1,opt,name=tx_threshold,json=txThreshold" json:"tx_threshold,omitempty"`
	TypeThresholds       []*OperationTypeThreshold `protobuf:"bytes,2,rep,name=type_thresholds,json=typeThresholds" json:"type_thresholds,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                  `json:"-"`
	XXX_unrecognized     []byte                    `json:"-"`
	XXX_sizecache        int32                     `json:"-"`
}

func (m *OperationSetThreshold) Reset()         { *m = OperationSetThreshold{} }
func (m *OperationSetThreshold) String() string { return proto.CompactTextString(m) }
func (*OperationSetThreshold) ProtoMessage()    {}
func (*OperationSetThreshold) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{17}
}
func (m *OperationSetThreshold) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_OperationSetThreshold.Unmarshal(m, b)
}
func (m *OperationSetThreshold) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_OperationSetThreshold.Marshal(b, m, deterministic)
}
func (dst *OperationSetThreshold) XXX_Merge(src proto.Message) {
	xxx_messageInfo_OperationSetThreshold.Merge(dst, src)
}
func (m *OperationSetThreshold) XXX_Size() int {
	return xxx_messageInfo_OperationSetThreshold.Size(m)
}
func (m *OperationSetThreshold) XXX_DiscardUnknown() {
	xxx_messageInfo_OperationSetThreshold.DiscardUnknown(m)
}

var xxx_messageInfo_OperationSetThreshold proto.InternalMessageInfo

func (m *OperationSetThreshold) GetTxThreshold() int64 {
	if m != nil {
		return m.TxThreshold
	}
	return 0
}

func (m *OperationSetThreshold) GetTypeThresholds() []*OperationTypeThreshold {
	if m != nil {
		return m.TypeThresholds
	}
	return nil
}

type Transaction struct {
	SourceAddress        string       `protobuf:"bytes,1,opt,name=source_address,json=sourceAddress" json:"source_address,omitempty"`
	Nonce                int64        `protobuf:"varint,2,opt,name=nonce" json:"nonce,omitempty"`
	FeeLimit             int64        `protobuf:"varint,3,opt,name=fee_limit,json=feeLimit" json:"fee_limit,omitempty"`
	GasPrice             int64        `protobuf:"varint,4,opt,name=gas_price,json=gasPrice" json:"gas_price,omitempty"`
	CeilLedgerSeq        int64        `protobuf:"varint,5,opt,name=ceil_ledger_seq,json=ceilLedgerSeq" json:"ceil_ledger_seq,omitempty"`
	Metadata             []byte       `protobuf:"bytes,6,opt,name=metadata,proto3" json:"metadata,omitempty"`
	Operations           []*Operation `protobuf:"bytes,7,rep,name=operations" json:"operations,omitempty"`
	XXX_NoUnkeyedLiteral struct{}     `json:"-"`
	XXX_unrecognized     []byte       `json:"-"`
	XXX_sizecache        int32        `json:"-"`
}

func (m *Transaction) Reset()         { *m = Transaction{} }
func (m *Transaction) String() string { return proto.CompactTextString(m) }
func (*Transaction) ProtoMessage()    {}
func (*Transaction) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{18}
}
func (m *Transaction) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Transaction.Unmarshal(m, b)
}
func (m *Transaction) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Transaction.Marshal(b, m, deterministic)
}
func (dst *Transaction) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Transaction.Merge(dst, src)
}
func (m *Transaction) XXX_Size() int {
	return xxx_messageInfo_Transaction.Size(m)
}
func (m *Transaction) XXX_DiscardUnknown() {
	xxx_messageInfo_Transaction.DiscardUnknown(m)
}

var xxx_messageInfo_Transaction proto.InternalMessageInfo

func (m *Transaction) GetSourceAddress() string {
	if m != nil {
		return m.SourceAddress
	}
	return ""
}

func (m *Transaction) GetNonce() int64 {
	if m != nil {
		return m.Nonce
	}
	return 0
}

func (m *Transaction) GetFeeLimit() int64 {
	if m != nil {
		return m.FeeLimit
	}
	return 0
}

func (m *Transaction) GetGasPrice() int64 {
	if m != nil {
		return m.GasPrice
	}
	return 0
}

func (m *Transaction) GetCeilLedgerSeq() int64 {
	if m != nil {
		return m.CeilLedgerSeq
	}
	return 0
}

func (m *Transaction) GetMetadata() []byte {
	if m != nil {
		return m.Metadata
	}
	return nil
}

func (m *Transaction) GetOperations() []*Operation {
	if m != nil {
		return m.Operations
	}
	return nil
}

type Signer struct {
	Address              string   `protobuf:"bytes,1,opt,name=address" json:"address,omitempty"`
	Weight               int64    `protobuf:"varint,2,opt,name=weight" json:"weight,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Signer) Reset()         { *m = Signer{} }
func (m *Signer) String() string { return proto.CompactTextString(m) }
func (*Signer) ProtoMessage()    {}
func (*Signer) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{19}
}
func (m *Signer) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Signer.Unmarshal(m, b)
}
func (m *Signer) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Signer.Marshal(b, m, deterministic)
}
func (dst *Signer) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Signer.Merge(dst, src)
}
func (m *Signer) XXX_Size() int {
	return xxx_messageInfo_Signer.Size(m)
}
func (m *Signer) XXX_DiscardUnknown() {
	xxx_messageInfo_Signer.DiscardUnknown(m)
}

var xxx_messageInfo_Signer proto.InternalMessageInfo

func (m *Signer) GetAddress() string {
	if m != nil {
		return m.Address
	}
	return ""
}

func (m *Signer) GetWeight() int64 {
	if m != nil {
		return m.Weight
	}
	return 0
}

type Trigger struct {
	TransactionType      Trigger_TransactionType   `protobuf:"varint,1,opt,name=transaction_type,json=transactionType,enum=protocol.Trigger_TransactionType" json:"transaction_type,omitempty"`
	LedgerSeq            int64                     `protobuf:"varint,2,opt,name=ledger_seq,json=ledgerSeq" json:"ledger_seq,omitempty"`
	Transaction          *Trigger_OperationTrigger `protobuf:"bytes,3,opt,name=transaction" json:"transaction,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                  `json:"-"`
	XXX_unrecognized     []byte                    `json:"-"`
	XXX_sizecache        int32                     `json:"-"`
}

func (m *Trigger) Reset()         { *m = Trigger{} }
func (m *Trigger) String() string { return proto.CompactTextString(m) }
func (*Trigger) ProtoMessage()    {}
func (*Trigger) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{20}
}
func (m *Trigger) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Trigger.Unmarshal(m, b)
}
func (m *Trigger) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Trigger.Marshal(b, m, deterministic)
}
func (dst *Trigger) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Trigger.Merge(dst, src)
}
func (m *Trigger) XXX_Size() int {
	return xxx_messageInfo_Trigger.Size(m)
}
func (m *Trigger) XXX_DiscardUnknown() {
	xxx_messageInfo_Trigger.DiscardUnknown(m)
}

var xxx_messageInfo_Trigger proto.InternalMessageInfo

func (m *Trigger) GetTransactionType() Trigger_TransactionType {
	if m != nil {
		return m.TransactionType
	}
	return Trigger_NORMAL_TRANSACTION
}

func (m *Trigger) GetLedgerSeq() int64 {
	if m != nil {
		return m.LedgerSeq
	}
	return 0
}

func (m *Trigger) GetTransaction() *Trigger_OperationTrigger {
	if m != nil {
		return m.Transaction
	}
	return nil
}

type Trigger_OperationTrigger struct {
	Hash                 []byte   `protobuf:"bytes,1,opt,name=hash,proto3" json:"hash,omitempty"`
	Index                int64    `protobuf:"varint,2,opt,name=index" json:"index,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Trigger_OperationTrigger) Reset()         { *m = Trigger_OperationTrigger{} }
func (m *Trigger_OperationTrigger) String() string { return proto.CompactTextString(m) }
func (*Trigger_OperationTrigger) ProtoMessage()    {}
func (*Trigger_OperationTrigger) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{20, 0}
}
func (m *Trigger_OperationTrigger) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Trigger_OperationTrigger.Unmarshal(m, b)
}
func (m *Trigger_OperationTrigger) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Trigger_OperationTrigger.Marshal(b, m, deterministic)
}
func (dst *Trigger_OperationTrigger) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Trigger_OperationTrigger.Merge(dst, src)
}
func (m *Trigger_OperationTrigger) XXX_Size() int {
	return xxx_messageInfo_Trigger_OperationTrigger.Size(m)
}
func (m *Trigger_OperationTrigger) XXX_DiscardUnknown() {
	xxx_messageInfo_Trigger_OperationTrigger.DiscardUnknown(m)
}

var xxx_messageInfo_Trigger_OperationTrigger proto.InternalMessageInfo

func (m *Trigger_OperationTrigger) GetHash() []byte {
	if m != nil {
		return m.Hash
	}
	return nil
}

func (m *Trigger_OperationTrigger) GetIndex() int64 {
	if m != nil {
		return m.Index
	}
	return 0
}

type TransactionEnv struct {
	Transaction          *Transaction `protobuf:"bytes,1,opt,name=transaction" json:"transaction,omitempty"`
	Signatures           []*Signature `protobuf:"bytes,2,rep,name=signatures" json:"signatures,omitempty"`
	Trigger              *Trigger     `protobuf:"bytes,3,opt,name=trigger" json:"trigger,omitempty"`
	XXX_NoUnkeyedLiteral struct{}     `json:"-"`
	XXX_unrecognized     []byte       `json:"-"`
	XXX_sizecache        int32        `json:"-"`
}

func (m *TransactionEnv) Reset()         { *m = TransactionEnv{} }
func (m *TransactionEnv) String() string { return proto.CompactTextString(m) }
func (*TransactionEnv) ProtoMessage()    {}
func (*TransactionEnv) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{21}
}
func (m *TransactionEnv) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TransactionEnv.Unmarshal(m, b)
}
func (m *TransactionEnv) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TransactionEnv.Marshal(b, m, deterministic)
}
func (dst *TransactionEnv) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TransactionEnv.Merge(dst, src)
}
func (m *TransactionEnv) XXX_Size() int {
	return xxx_messageInfo_TransactionEnv.Size(m)
}
func (m *TransactionEnv) XXX_DiscardUnknown() {
	xxx_messageInfo_TransactionEnv.DiscardUnknown(m)
}

var xxx_messageInfo_TransactionEnv proto.InternalMessageInfo

func (m *TransactionEnv) GetTransaction() *Transaction {
	if m != nil {
		return m.Transaction
	}
	return nil
}

func (m *TransactionEnv) GetSignatures() []*Signature {
	if m != nil {
		return m.Signatures
	}
	return nil
}

func (m *TransactionEnv) GetTrigger() *Trigger {
	if m != nil {
		return m.Trigger
	}
	return nil
}

type TransactionEnvStore struct {
	TransactionEnv *TransactionEnv `protobuf:"bytes,1,opt,name=transaction_env,json=transactionEnv" json:"transaction_env,omitempty"`
	ErrorCode      int32           `protobuf:"varint,2,opt,name=error_code,json=errorCode" json:"error_code,omitempty"`
	ErrorDesc      string          `protobuf:"bytes,3,opt,name=error_desc,json=errorDesc" json:"error_desc,omitempty"`
	LedgerSeq      int64           `protobuf:"varint,4,opt,name=ledger_seq,json=ledgerSeq" json:"ledger_seq,omitempty"`
	CloseTime      int64           `protobuf:"varint,5,opt,name=close_time,json=closeTime" json:"close_time,omitempty"`
	// for notify
	Hash                 []byte   `protobuf:"bytes,6,opt,name=hash,proto3" json:"hash,omitempty"`
	ActualFee            int64    `protobuf:"varint,7,opt,name=actual_fee,json=actualFee" json:"actual_fee,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *TransactionEnvStore) Reset()         { *m = TransactionEnvStore{} }
func (m *TransactionEnvStore) String() string { return proto.CompactTextString(m) }
func (*TransactionEnvStore) ProtoMessage()    {}
func (*TransactionEnvStore) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{22}
}
func (m *TransactionEnvStore) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TransactionEnvStore.Unmarshal(m, b)
}
func (m *TransactionEnvStore) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TransactionEnvStore.Marshal(b, m, deterministic)
}
func (dst *TransactionEnvStore) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TransactionEnvStore.Merge(dst, src)
}
func (m *TransactionEnvStore) XXX_Size() int {
	return xxx_messageInfo_TransactionEnvStore.Size(m)
}
func (m *TransactionEnvStore) XXX_DiscardUnknown() {
	xxx_messageInfo_TransactionEnvStore.DiscardUnknown(m)
}

var xxx_messageInfo_TransactionEnvStore proto.InternalMessageInfo

func (m *TransactionEnvStore) GetTransactionEnv() *TransactionEnv {
	if m != nil {
		return m.TransactionEnv
	}
	return nil
}

func (m *TransactionEnvStore) GetErrorCode() int32 {
	if m != nil {
		return m.ErrorCode
	}
	return 0
}

func (m *TransactionEnvStore) GetErrorDesc() string {
	if m != nil {
		return m.ErrorDesc
	}
	return ""
}

func (m *TransactionEnvStore) GetLedgerSeq() int64 {
	if m != nil {
		return m.LedgerSeq
	}
	return 0
}

func (m *TransactionEnvStore) GetCloseTime() int64 {
	if m != nil {
		return m.CloseTime
	}
	return 0
}

func (m *TransactionEnvStore) GetHash() []byte {
	if m != nil {
		return m.Hash
	}
	return nil
}

func (m *TransactionEnvStore) GetActualFee() int64 {
	if m != nil {
		return m.ActualFee
	}
	return 0
}

type TransactionEnvSet struct {
	Txs                  []*TransactionEnv `protobuf:"bytes,2,rep,name=txs" json:"txs,omitempty"`
	XXX_NoUnkeyedLiteral struct{}          `json:"-"`
	XXX_unrecognized     []byte            `json:"-"`
	XXX_sizecache        int32             `json:"-"`
}

func (m *TransactionEnvSet) Reset()         { *m = TransactionEnvSet{} }
func (m *TransactionEnvSet) String() string { return proto.CompactTextString(m) }
func (*TransactionEnvSet) ProtoMessage()    {}
func (*TransactionEnvSet) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{23}
}
func (m *TransactionEnvSet) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TransactionEnvSet.Unmarshal(m, b)
}
func (m *TransactionEnvSet) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TransactionEnvSet.Marshal(b, m, deterministic)
}
func (dst *TransactionEnvSet) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TransactionEnvSet.Merge(dst, src)
}
func (m *TransactionEnvSet) XXX_Size() int {
	return xxx_messageInfo_TransactionEnvSet.Size(m)
}
func (m *TransactionEnvSet) XXX_DiscardUnknown() {
	xxx_messageInfo_TransactionEnvSet.DiscardUnknown(m)
}

var xxx_messageInfo_TransactionEnvSet proto.InternalMessageInfo

func (m *TransactionEnvSet) GetTxs() []*TransactionEnv {
	if m != nil {
		return m.Txs
	}
	return nil
}

type ConsensusValueValidation struct {
	ExpireTxIds          []int32  `protobuf:"varint,1,rep,packed,name=expire_tx_ids,json=expireTxIds" json:"expire_tx_ids,omitempty"`
	ErrorTxIds           []int32  `protobuf:"varint,2,rep,packed,name=error_tx_ids,json=errorTxIds" json:"error_tx_ids,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *ConsensusValueValidation) Reset()         { *m = ConsensusValueValidation{} }
func (m *ConsensusValueValidation) String() string { return proto.CompactTextString(m) }
func (*ConsensusValueValidation) ProtoMessage()    {}
func (*ConsensusValueValidation) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{24}
}
func (m *ConsensusValueValidation) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ConsensusValueValidation.Unmarshal(m, b)
}
func (m *ConsensusValueValidation) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ConsensusValueValidation.Marshal(b, m, deterministic)
}
func (dst *ConsensusValueValidation) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ConsensusValueValidation.Merge(dst, src)
}
func (m *ConsensusValueValidation) XXX_Size() int {
	return xxx_messageInfo_ConsensusValueValidation.Size(m)
}
func (m *ConsensusValueValidation) XXX_DiscardUnknown() {
	xxx_messageInfo_ConsensusValueValidation.DiscardUnknown(m)
}

var xxx_messageInfo_ConsensusValueValidation proto.InternalMessageInfo

func (m *ConsensusValueValidation) GetExpireTxIds() []int32 {
	if m != nil {
		return m.ExpireTxIds
	}
	return nil
}

func (m *ConsensusValueValidation) GetErrorTxIds() []int32 {
	if m != nil {
		return m.ErrorTxIds
	}
	return nil
}

type ConsensusValue struct {
	Txset                *TransactionEnvSet        `protobuf:"bytes,1,opt,name=txset" json:"txset,omitempty"`
	CloseTime            int64                     `protobuf:"varint,2,opt,name=close_time,json=closeTime" json:"close_time,omitempty"`
	PreviousProof        []byte                    `protobuf:"bytes,3,opt,name=previous_proof,json=previousProof,proto3" json:"previous_proof,omitempty"`
	LedgerSeq            int64                     `protobuf:"varint,4,opt,name=ledger_seq,json=ledgerSeq" json:"ledger_seq,omitempty"`
	PreviousLedgerHash   []byte                    `protobuf:"bytes,5,opt,name=previous_ledger_hash,json=previousLedgerHash,proto3" json:"previous_ledger_hash,omitempty"`
	LedgerUpgrade        *LedgerUpgrade            `protobuf:"bytes,6,opt,name=ledger_upgrade,json=ledgerUpgrade" json:"ledger_upgrade,omitempty"`
	Validation           *ConsensusValueValidation `protobuf:"bytes,7,opt,name=validation" json:"validation,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                  `json:"-"`
	XXX_unrecognized     []byte                    `json:"-"`
	XXX_sizecache        int32                     `json:"-"`
}

func (m *ConsensusValue) Reset()         { *m = ConsensusValue{} }
func (m *ConsensusValue) String() string { return proto.CompactTextString(m) }
func (*ConsensusValue) ProtoMessage()    {}
func (*ConsensusValue) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{25}
}
func (m *ConsensusValue) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ConsensusValue.Unmarshal(m, b)
}
func (m *ConsensusValue) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ConsensusValue.Marshal(b, m, deterministic)
}
func (dst *ConsensusValue) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ConsensusValue.Merge(dst, src)
}
func (m *ConsensusValue) XXX_Size() int {
	return xxx_messageInfo_ConsensusValue.Size(m)
}
func (m *ConsensusValue) XXX_DiscardUnknown() {
	xxx_messageInfo_ConsensusValue.DiscardUnknown(m)
}

var xxx_messageInfo_ConsensusValue proto.InternalMessageInfo

func (m *ConsensusValue) GetTxset() *TransactionEnvSet {
	if m != nil {
		return m.Txset
	}
	return nil
}

func (m *ConsensusValue) GetCloseTime() int64 {
	if m != nil {
		return m.CloseTime
	}
	return 0
}

func (m *ConsensusValue) GetPreviousProof() []byte {
	if m != nil {
		return m.PreviousProof
	}
	return nil
}

func (m *ConsensusValue) GetLedgerSeq() int64 {
	if m != nil {
		return m.LedgerSeq
	}
	return 0
}

func (m *ConsensusValue) GetPreviousLedgerHash() []byte {
	if m != nil {
		return m.PreviousLedgerHash
	}
	return nil
}

func (m *ConsensusValue) GetLedgerUpgrade() *LedgerUpgrade {
	if m != nil {
		return m.LedgerUpgrade
	}
	return nil
}

func (m *ConsensusValue) GetValidation() *ConsensusValueValidation {
	if m != nil {
		return m.Validation
	}
	return nil
}

type Contract struct {
	Type                 Contract_ContractType `protobuf:"varint,1,opt,name=type,enum=protocol.Contract_ContractType" json:"type,omitempty"`
	Payload              string                `protobuf:"bytes,2,opt,name=payload" json:"payload,omitempty"`
	XXX_NoUnkeyedLiteral struct{}              `json:"-"`
	XXX_unrecognized     []byte                `json:"-"`
	XXX_sizecache        int32                 `json:"-"`
}

func (m *Contract) Reset()         { *m = Contract{} }
func (m *Contract) String() string { return proto.CompactTextString(m) }
func (*Contract) ProtoMessage()    {}
func (*Contract) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{26}
}
func (m *Contract) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Contract.Unmarshal(m, b)
}
func (m *Contract) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Contract.Marshal(b, m, deterministic)
}
func (dst *Contract) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Contract.Merge(dst, src)
}
func (m *Contract) XXX_Size() int {
	return xxx_messageInfo_Contract.Size(m)
}
func (m *Contract) XXX_DiscardUnknown() {
	xxx_messageInfo_Contract.DiscardUnknown(m)
}

var xxx_messageInfo_Contract proto.InternalMessageInfo

func (m *Contract) GetType() Contract_ContractType {
	if m != nil {
		return m.Type
	}
	return Contract_JAVASCRIPT
}

func (m *Contract) GetPayload() string {
	if m != nil {
		return m.Payload
	}
	return ""
}

type OperationCreateAccount struct {
	DestAddress          string            `protobuf:"bytes,1,opt,name=dest_address,json=destAddress" json:"dest_address,omitempty"`
	Contract             *Contract         `protobuf:"bytes,2,opt,name=contract" json:"contract,omitempty"`
	Priv                 *AccountPrivilege `protobuf:"bytes,3,opt,name=priv" json:"priv,omitempty"`
	Metadatas            []*KeyPair        `protobuf:"bytes,4,rep,name=metadatas" json:"metadatas,omitempty"`
	InitBalance          int64             `protobuf:"varint,5,opt,name=init_balance,json=initBalance" json:"init_balance,omitempty"`
	InitInput            string            `protobuf:"bytes,6,opt,name=init_input,json=initInput" json:"init_input,omitempty"`
	XXX_NoUnkeyedLiteral struct{}          `json:"-"`
	XXX_unrecognized     []byte            `json:"-"`
	XXX_sizecache        int32             `json:"-"`
}

func (m *OperationCreateAccount) Reset()         { *m = OperationCreateAccount{} }
func (m *OperationCreateAccount) String() string { return proto.CompactTextString(m) }
func (*OperationCreateAccount) ProtoMessage()    {}
func (*OperationCreateAccount) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{27}
}
func (m *OperationCreateAccount) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_OperationCreateAccount.Unmarshal(m, b)
}
func (m *OperationCreateAccount) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_OperationCreateAccount.Marshal(b, m, deterministic)
}
func (dst *OperationCreateAccount) XXX_Merge(src proto.Message) {
	xxx_messageInfo_OperationCreateAccount.Merge(dst, src)
}
func (m *OperationCreateAccount) XXX_Size() int {
	return xxx_messageInfo_OperationCreateAccount.Size(m)
}
func (m *OperationCreateAccount) XXX_DiscardUnknown() {
	xxx_messageInfo_OperationCreateAccount.DiscardUnknown(m)
}

var xxx_messageInfo_OperationCreateAccount proto.InternalMessageInfo

func (m *OperationCreateAccount) GetDestAddress() string {
	if m != nil {
		return m.DestAddress
	}
	return ""
}

func (m *OperationCreateAccount) GetContract() *Contract {
	if m != nil {
		return m.Contract
	}
	return nil
}

func (m *OperationCreateAccount) GetPriv() *AccountPrivilege {
	if m != nil {
		return m.Priv
	}
	return nil
}

func (m *OperationCreateAccount) GetMetadatas() []*KeyPair {
	if m != nil {
		return m.Metadatas
	}
	return nil
}

func (m *OperationCreateAccount) GetInitBalance() int64 {
	if m != nil {
		return m.InitBalance
	}
	return 0
}

func (m *OperationCreateAccount) GetInitInput() string {
	if m != nil {
		return m.InitInput
	}
	return ""
}

type OperationSetMetadata struct {
	Key                  string   `protobuf:"bytes,1,opt,name=key" json:"key,omitempty"`
	Value                string   `protobuf:"bytes,2,opt,name=value" json:"value,omitempty"`
	Version              int64    `protobuf:"varint,3,opt,name=version" json:"version,omitempty"`
	DeleteFlag           bool     `protobuf:"varint,4,opt,name=delete_flag,json=deleteFlag" json:"delete_flag,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *OperationSetMetadata) Reset()         { *m = OperationSetMetadata{} }
func (m *OperationSetMetadata) String() string { return proto.CompactTextString(m) }
func (*OperationSetMetadata) ProtoMessage()    {}
func (*OperationSetMetadata) Descriptor() ([]byte, []int) {
	return fileDescriptor_chain_19d03ce82975f573, []int{28}
}
func (m *OperationSetMetadata) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_OperationSetMetadata.Unmarshal(m, b)
}
func (m *OperationSetMetadata) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_OperationSetMetadata.Marshal(b, m, deterministic)
}
func (dst *OperationSetMetadata) XXX_Merge(src proto.Message) {
	xxx_messageInfo_OperationSetMetadata.Merge(dst, src)
}
func (m *OperationSetMetadata) XXX_Size() int {
	return xxx_messageInfo_OperationSetMetadata.Size(m)
}
func (m *OperationSetMetadata) XXX_DiscardUnknown() {
	xxx_messageInfo_OperationSetMetadata.DiscardUnknown(m)
}

var xxx_messageInfo_OperationSetMetadata proto.InternalMessageInfo

func (m *OperationSetMetadata) GetKey() string {
	if m != nil {
		return m.Key
	}
	return ""
}

func (m *OperationSetMetadata) GetValue() string {
	if m != nil {
		return m.Value
	}
	return ""
}

func (m *OperationSetMetadata) GetVersion() int64 {
	if m != nil {
		return m.Version
	}
	return 0
}

func (m *OperationSetMetadata) GetDeleteFlag() bool {
	if m != nil {
		return m.DeleteFlag
	}
	return false
}

func init() {
	proto.RegisterType((*Account)(nil), "protocol.Account")
	proto.RegisterType((*AssetKey)(nil), "protocol.AssetKey")
	proto.RegisterType((*Asset)(nil), "protocol.Asset")
	proto.RegisterType((*AssetProperty)(nil), "protocol.AssetProperty")
	proto.RegisterType((*AssetStore)(nil), "protocol.AssetStore")
	proto.RegisterType((*LedgerHeader)(nil), "protocol.LedgerHeader")
	proto.RegisterType((*Ledger)(nil), "protocol.Ledger")
	proto.RegisterType((*OperationPayAsset)(nil), "protocol.OperationPayAsset")
	proto.RegisterType((*OperationTypeThreshold)(nil), "protocol.OperationTypeThreshold")
	proto.RegisterType((*AccountPrivilege)(nil), "protocol.AccountPrivilege")
	proto.RegisterType((*AccountThreshold)(nil), "protocol.AccountThreshold")
	proto.RegisterType((*OperationIssueAsset)(nil), "protocol.OperationIssueAsset")
	proto.RegisterType((*OperationPayCoin)(nil), "protocol.OperationPayCoin")
	proto.RegisterType((*OperationSetSignerWeight)(nil), "protocol.OperationSetSignerWeight")
	proto.RegisterType((*OperationLog)(nil), "protocol.OperationLog")
	proto.RegisterType((*OperationSetPrivilege)(nil), "protocol.OperationSetPrivilege")
	proto.RegisterType((*Operation)(nil), "protocol.Operation")
	proto.RegisterType((*OperationSetThreshold)(nil), "protocol.OperationSetThreshold")
	proto.RegisterType((*Transaction)(nil), "protocol.Transaction")
	proto.RegisterType((*Signer)(nil), "protocol.Signer")
	proto.RegisterType((*Trigger)(nil), "protocol.Trigger")
	proto.RegisterType((*Trigger_OperationTrigger)(nil), "protocol.Trigger.OperationTrigger")
	proto.RegisterType((*TransactionEnv)(nil), "protocol.TransactionEnv")
	proto.RegisterType((*TransactionEnvStore)(nil), "protocol.TransactionEnvStore")
	proto.RegisterType((*TransactionEnvSet)(nil), "protocol.TransactionEnvSet")
	proto.RegisterType((*ConsensusValueValidation)(nil), "protocol.ConsensusValueValidation")
	proto.RegisterType((*ConsensusValue)(nil), "protocol.ConsensusValue")
	proto.RegisterType((*Contract)(nil), "protocol.Contract")
	proto.RegisterType((*OperationCreateAccount)(nil), "protocol.OperationCreateAccount")
	proto.RegisterType((*OperationSetMetadata)(nil), "protocol.OperationSetMetadata")
	proto.RegisterEnum("protocol.Limit", Limit_name, Limit_value)
	proto.RegisterEnum("protocol.Operation_Type", Operation_Type_name, Operation_Type_value)
	proto.RegisterEnum("protocol.Transaction_Limit", Transaction_Limit_name, Transaction_Limit_value)
	proto.RegisterEnum("protocol.Signer_Limit", Signer_Limit_name, Signer_Limit_value)
	proto.RegisterEnum("protocol.Trigger_TransactionType", Trigger_TransactionType_name, Trigger_TransactionType_value)
	proto.RegisterEnum("protocol.Contract_ContractType", Contract_ContractType_name, Contract_ContractType_value)
}

func init() { proto.RegisterFile("chain.proto", fileDescriptor_chain_19d03ce82975f573) }

var fileDescriptor_chain_19d03ce82975f573 = []byte{
	// 2105 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xc4, 0x58, 0x4f, 0x8f, 0x1b, 0x49,
	0x15, 0x8f, 0xed, 0xf1, 0x9f, 0x7e, 0xfe, 0xd7, 0x53, 0x99, 0x64, 0x4d, 0x96, 0x6c, 0x26, 0xbd,
	0x1b, 0x18, 0x05, 0x64, 0x96, 0x44, 0x08, 0xb4, 0x42, 0x8b, 0x3a, 0x8e, 0x77, 0xc6, 0x9b, 0x89,
	0x6d, 0x95, 0x7b, 0x12, 0x71, 0xea, 0xed, 0x74, 0xd7, 0x78, 0x5a, 0x69, 0xbb, 0x7b, 0xbb, 0xca,
	0xc6, 0x3e, 0x20, 0xb8, 0x20, 0x6e, 0x7c, 0x05, 0x2e, 0xdc, 0x10, 0x12, 0xdf, 0x80, 0x6f, 0xc1,
	0x91, 0x33, 0x12, 0x07, 0x3e, 0x00, 0x17, 0x54, 0x7f, 0xfa, 0x9f, 0xe3, 0xec, 0x64, 0x59, 0xa4,
	0x3d, 0xd9, 0xef, 0xd5, 0xeb, 0x57, 0xef, 0xbd, 0xfa, 0xd5, 0xab, 0x5f, 0x15, 0x34, 0xdd, 0x2b,
	0xc7, 0x5f, 0xf6, 0xa3, 0x38, 0x64, 0x21, 0x6a, 0x88, 0x1f, 0x37, 0x0c, 0xee, 0xb4, 0xdc, 0x70,
	0xb1, 0x08, 0x95, 0xde, 0xf8, 0x4f, 0x09, 0xea, 0xa6, 0xeb, 0x86, 0xab, 0x25, 0x43, 0x3d, 0xa8,
	0x3b, 0x9e, 0x17, 0x13, 0x4a, 0x7b, 0xa5, 0xe3, 0xd2, 0x89, 0x86, 0x13, 0x11, 0x1d, 0x41, 0x75,
	0x19, 0x2e, 0x5d, 0xd2, 0x2b, 0x1f, 0x97, 0x4e, 0x2a, 0x58, 0x0a, 0xa8, 0x0f, 0x07, 0x51, 0xec,
	0xaf, 0x7b, 0x95, 0xe3, 0xd2, 0x49, 0xf3, 0xd1, 0x9d, 0x7e, 0x32, 0x45, 0x5f, 0x39, 0x9c, 0xc6,
	0xfe, 0xda, 0x0f, 0xc8, 0x9c, 0x60, 0x61, 0x87, 0x1e, 0x40, 0x67, 0x41, 0x98, 0xe3, 0x39, 0xcc,
	0xa1, 0xf6, 0x95, 0x43, 0xaf, 0x7a, 0x07, 0xc7, 0xa5, 0x93, 0x16, 0x6e, 0xa7, 0xda, 0x33, 0x87,
	0x5e, 0xa1, 0x7b, 0xd0, 0x74, 0x28, 0x25, 0x4c, 0xd9, 0x54, 0x85, 0x0d, 0x48, 0x95, 0x30, 0xe8,
	0x43, 0xc3, 0x0d, 0x97, 0x2c, 0x76, 0x5c, 0xd6, 0xab, 0x89, 0xb9, 0x51, 0x36, 0xf7, 0x40, 0x8d,
	0xe0, 0xd4, 0x86, 0xe7, 0xf5, 0xca, 0x09, 0x1c, 0x1e, 0x7f, 0x5d, 0xc4, 0x9f, 0x88, 0xc6, 0xe7,
	0xd0, 0x30, 0xb9, 0xdf, 0x67, 0x64, 0x8b, 0x6e, 0x43, 0xcd, 0xa7, 0x74, 0x45, 0x62, 0x95, 0xbc,
	0x92, 0x10, 0x82, 0x03, 0x37, 0xf4, 0x64, 0xea, 0x1a, 0x16, 0xff, 0xb9, 0x8e, 0x6d, 0x23, 0x22,
	0x32, 0xaf, 0x62, 0xf1, 0xdf, 0x18, 0x42, 0x55, 0xf8, 0x42, 0x1f, 0x41, 0xe5, 0x35, 0xd9, 0x0a,
	0x2f, 0x85, 0xc8, 0x92, 0x99, 0x30, 0x1f, 0xe6, 0xd3, 0x39, 0x0b, 0x5e, 0x25, 0x55, 0x53, 0x25,
	0x19, 0x7f, 0x2d, 0x41, 0x5b, 0x58, 0x4e, 0xe3, 0x30, 0x22, 0x31, 0xdb, 0xf2, 0xf0, 0x3d, 0xe2,
	0xfa, 0x0b, 0x27, 0x10, 0x3e, 0xab, 0x38, 0x11, 0xd1, 0x31, 0x34, 0x3d, 0x42, 0xdd, 0xd8, 0x8f,
	0x98, 0x1f, 0x2e, 0x55, 0x84, 0x79, 0x15, 0xba, 0x0b, 0xb0, 0x70, 0x36, 0x36, 0x5d, 0x45, 0x51,
	0xb0, 0x15, 0xe1, 0x56, 0xb0, 0xb6, 0x70, 0x36, 0x33, 0xa1, 0x40, 0x1f, 0x42, 0x5b, 0x64, 0xe9,
	0xd9, 0x2a, 0x96, 0x03, 0x61, 0xd1, 0x92, 0x4a, 0x53, 0xe8, 0xf8, 0x7a, 0x5c, 0x12, 0x62, 0x47,
	0x24, 0x76, 0xc9, 0x92, 0x89, 0xf5, 0xa8, 0x62, 0xb8, 0x24, 0x64, 0x2a, 0x35, 0xc6, 0x6f, 0x00,
	0x44, 0xc4, 0x33, 0x16, 0xc6, 0xe4, 0x9b, 0xa5, 0x8f, 0x1e, 0x03, 0x47, 0xaa, 0x48, 0x5c, 0xe1,
	0xea, 0xbd, 0x1d, 0x17, 0x49, 0x5d, 0x70, 0x6a, 0x68, 0xfc, 0xab, 0x0c, 0xad, 0x73, 0xe2, 0xcd,
	0x49, 0x7c, 0x46, 0x1c, 0x8f, 0xc4, 0x48, 0x87, 0x0a, 0x25, 0x5f, 0x8a, 0x18, 0x2a, 0x98, 0xff,
	0xe5, 0x2b, 0x26, 0xd0, 0x54, 0x16, 0x68, 0x12, 0xff, 0x79, 0xf6, 0x51, 0x4c, 0xd6, 0x7e, 0xb8,
	0x52, 0x50, 0xab, 0x88, 0xc1, 0x56, 0xa2, 0x14, 0x60, 0x7b, 0x08, 0x87, 0x8e, 0x84, 0xb3, 0xcd,
	0x62, 0x42, 0xf2, 0xb8, 0xed, 0xaa, 0x01, 0x2b, 0x26, 0x44, 0xd8, 0xde, 0x05, 0x70, 0x83, 0x90,
	0x12, 0x9b, 0xf9, 0x0b, 0x22, 0x0a, 0x55, 0xc1, 0x9a, 0xd0, 0x58, 0xfe, 0x82, 0xa0, 0x8f, 0xe1,
	0xc8, 0x0d, 0x97, 0x94, 0x2c, 0xe9, 0x8a, 0xda, 0x6b, 0x27, 0x58, 0x29, 0x6f, 0x35, 0xe1, 0x0d,
	0xa5, 0x63, 0x2f, 0xf8, 0x90, 0x70, 0xd8, 0x83, 0xfa, 0x9a, 0xc4, 0x94, 0x2f, 0xae, 0x42, 0xae,
	0x12, 0xd1, 0x77, 0xa0, 0xc1, 0x36, 0xb6, 0x98, 0xbe, 0xd7, 0x90, 0x43, 0x6c, 0x33, 0x10, 0x25,
	0xfc, 0x3e, 0x74, 0xd7, 0x4e, 0xe0, 0x7b, 0x0e, 0x0b, 0x63, 0x95, 0x98, 0x26, 0x66, 0xe8, 0x64,
	0x6a, 0xe1, 0xfd, 0x7d, 0xd0, 0x2e, 0x09, 0x51, 0x26, 0x20, 0x4c, 0x1a, 0x5c, 0x91, 0x4c, 0x1d,
	0x13, 0x4a, 0xe2, 0x35, 0xe9, 0x35, 0x65, 0x33, 0x50, 0xa2, 0xf1, 0x6b, 0xa8, 0xc9, 0x62, 0xa3,
	0x3e, 0xd4, 0xae, 0x44, 0xc1, 0xd5, 0x6a, 0xdf, 0xce, 0x96, 0x2a, 0xbf, 0x1c, 0x58, 0x59, 0xa1,
	0x01, 0xe8, 0x2c, 0x76, 0x96, 0xd4, 0x71, 0x39, 0x38, 0x6d, 0xb2, 0x5c, 0xd3, 0x5e, 0xf9, 0xb8,
	0x72, 0xd2, 0x7c, 0xd4, 0xcb, 0xbe, 0xb4, 0x32, 0x8b, 0xe1, 0x72, 0x8d, 0xbb, 0xac, 0x20, 0x53,
	0x83, 0xc2, 0xe1, 0x24, 0x22, 0xb1, 0xc3, 0x15, 0x53, 0x67, 0x2b, 0xf7, 0xdc, 0x7d, 0x68, 0x79,
	0x84, 0x32, 0xbb, 0xd8, 0xbf, 0xf8, 0x56, 0x60, 0xa6, 0xea, 0x61, 0x0f, 0xa0, 0x2a, 0x7a, 0x88,
	0x80, 0x40, 0xf3, 0x51, 0x77, 0x07, 0x56, 0x58, 0x8e, 0xf2, 0x56, 0xe7, 0x2f, 0xa3, 0x15, 0x13,
	0x60, 0xd0, 0xb0, 0x14, 0x0c, 0x0f, 0x6e, 0xa7, 0x93, 0x5a, 0xdb, 0x88, 0x58, 0x57, 0x31, 0xa1,
	0x57, 0x61, 0xe0, 0xa1, 0x1f, 0xaa, 0x56, 0xc0, 0x67, 0xec, 0xe4, 0xf3, 0x48, 0xed, 0xfb, 0xfc,
	0x03, 0xd9, 0x24, 0xd0, 0x77, 0x41, 0x63, 0xc9, 0xa7, 0x0a, 0xf9, 0x99, 0xc2, 0xf8, 0x63, 0x09,
	0xf4, 0xdd, 0xde, 0xc9, 0x51, 0xba, 0x70, 0x28, 0x23, 0xb1, 0xfd, 0x2b, 0xe2, 0xcf, 0xaf, 0x98,
	0x42, 0x75, 0x4b, 0x2a, 0x5f, 0x0a, 0x1d, 0x7a, 0x08, 0x75, 0xea, 0xcf, 0x97, 0x24, 0x4e, 0x0a,
	0xaa, 0x67, 0x81, 0xcc, 0xc4, 0x00, 0x4e, 0x0c, 0xd0, 0x27, 0x00, 0xe9, 0x94, 0xf4, 0xad, 0xcd,
	0x3b, 0xcd, 0x10, 0xe7, 0xac, 0x8d, 0xdf, 0x66, 0x11, 0x66, 0x25, 0xb8, 0x0f, 0x2d, 0xb6, 0xb1,
	0xb3, 0xbc, 0x64, 0x80, 0x4d, 0xb6, 0xc9, 0x4c, 0x46, 0xd0, 0xe5, 0xf9, 0xdb, 0xb9, 0x89, 0x65,
	0x9c, 0xc7, 0x7b, 0x0a, 0x56, 0x28, 0x30, 0xee, 0xb0, 0xbc, 0x48, 0x0d, 0x13, 0x6e, 0xa6, 0x96,
	0x23, 0xde, 0xa7, 0x24, 0x02, 0x92, 0x36, 0x5d, 0xca, 0xb5, 0xe9, 0xb7, 0xf5, 0x58, 0x17, 0xf4,
	0x3c, 0x84, 0x06, 0xa1, 0xbf, 0x7c, 0x17, 0x04, 0xbd, 0xad, 0x67, 0xed, 0x87, 0xcc, 0x6b, 0xe8,
	0xa5, 0x93, 0xcc, 0x08, 0x93, 0xab, 0xa0, 0x96, 0xeb, 0xff, 0xbd, 0xa6, 0xc6, 0x27, 0xd0, 0x4a,
	0x27, 0x3b, 0x0f, 0xe7, 0x3c, 0x24, 0x16, 0x46, 0xbe, 0xab, 0xd2, 0x90, 0x02, 0xd7, 0x8a, 0x63,
	0x56, 0xf8, 0xd3, 0xb0, 0x14, 0x8c, 0xbf, 0x97, 0xe0, 0x56, 0x3e, 0xd2, 0x6b, 0xa0, 0xa7, 0x7d,
	0x03, 0xe8, 0xed, 0x22, 0x45, 0x16, 0xec, 0x3a, 0xa4, 0x1c, 0xfc, 0x8f, 0x48, 0xf9, 0x77, 0x0d,
	0xb4, 0xd4, 0xf4, 0x6b, 0x6e, 0xd4, 0x07, 0xd0, 0xa1, 0xe1, 0x2a, 0x76, 0x49, 0x0a, 0x08, 0x79,
	0xba, 0xb6, 0xa5, 0x36, 0x81, 0xc4, 0x1d, 0x68, 0x24, 0xe4, 0x45, 0x9d, 0x1e, 0xa9, 0x8c, 0x4e,
	0xa1, 0xe3, 0xc6, 0xc4, 0x61, 0xc4, 0x56, 0xe7, 0x84, 0x38, 0x36, 0xf6, 0x27, 0x32, 0x10, 0x86,
	0x6a, 0x67, 0xe1, 0xb6, 0x9b, 0x17, 0xd1, 0xa7, 0xd0, 0x14, 0x07, 0xb2, 0x2d, 0xfb, 0x57, 0x55,
	0x78, 0xb9, 0xbb, 0xc7, 0x4b, 0xb6, 0x1d, 0x30, 0xf8, 0xd9, 0xd6, 0xf8, 0x19, 0x68, 0x91, 0xb3,
	0x55, 0x5f, 0x4b, 0xc2, 0xf4, 0xfe, 0x9e, 0xaf, 0x93, 0x66, 0x8a, 0x1b, 0x51, 0xd2, 0x56, 0x4d,
	0x68, 0x51, 0xc2, 0xec, 0x34, 0xc5, 0xba, 0xf8, 0xf8, 0x83, 0x3d, 0x1f, 0xcf, 0x08, 0x7b, 0xae,
	0xac, 0x70, 0x93, 0x66, 0x02, 0x1a, 0xc3, 0x21, 0x77, 0x21, 0x11, 0x90, 0xe0, 0xa8, 0x21, 0xfc,
	0x18, 0xfb, 0xfd, 0xe4, 0x77, 0x0a, 0xee, 0xd2, 0x9d, 0xad, 0xf3, 0x14, 0xda, 0xdc, 0x5f, 0x86,
	0x21, 0x4d, 0xf8, 0xba, 0xb7, 0xdf, 0x57, 0x06, 0x0e, 0x9e, 0x48, 0x86, 0xb2, 0x9f, 0x00, 0x4f,
	0xd2, 0x76, 0x43, 0x7f, 0x29, 0x4e, 0xbe, 0x42, 0x07, 0xdc, 0xed, 0x0d, 0xb8, 0x1e, 0xa9, 0x26,
	0x71, 0x02, 0x95, 0x20, 0x9c, 0x8b, 0x03, 0xb1, 0x70, 0xda, 0xe5, 0xf7, 0x1e, 0xe6, 0x26, 0x49,
	0x98, 0x51, 0xb2, 0x97, 0x7a, 0xad, 0xaf, 0x0a, 0x33, 0x63, 0xca, 0x2d, 0x9a, 0x93, 0x8c, 0xbf,
	0x94, 0xe0, 0x80, 0x83, 0x12, 0x35, 0xa1, 0x7e, 0x31, 0x7e, 0x36, 0x9e, 0xbc, 0x1c, 0xeb, 0x37,
	0x10, 0x82, 0xce, 0x00, 0x0f, 0x4d, 0x6b, 0x68, 0x9b, 0x83, 0xc1, 0xe4, 0x62, 0x6c, 0xe9, 0x25,
	0xd4, 0x85, 0xe6, 0x68, 0x36, 0xbb, 0x18, 0xda, 0xe6, 0x6c, 0x36, 0xb4, 0xf4, 0x32, 0x6a, 0x83,
	0x36, 0x35, 0x7f, 0xa9, 0xc4, 0x0a, 0xd2, 0xa1, 0x35, 0x1b, 0x5a, 0xf6, 0xf3, 0xa1, 0x65, 0x3e,
	0x35, 0x2d, 0x53, 0x3f, 0x40, 0xb7, 0xe0, 0x90, 0x6b, 0x66, 0xa3, 0xd3, 0xf1, 0x10, 0xdb, 0x2f,
	0x87, 0xa3, 0xd3, 0x33, 0x4b, 0xaf, 0xa2, 0x43, 0x68, 0x73, 0xb5, 0x75, 0x86, 0x87, 0xb3, 0xb3,
	0xc9, 0xf9, 0x53, 0xbd, 0x86, 0x5a, 0xd0, 0xe0, 0xae, 0x06, 0x93, 0xd1, 0x58, 0xaf, 0xa3, 0x3a,
	0x54, 0xce, 0x27, 0xa7, 0x7a, 0x23, 0xb1, 0x9c, 0xe2, 0xd1, 0x8b, 0xd1, 0xf9, 0xf0, 0x74, 0xa8,
	0x6b, 0xc6, 0xef, 0x76, 0x5a, 0xc9, 0xb7, 0x75, 0x46, 0xfc, 0xa9, 0x0c, 0xcd, 0x1c, 0x8f, 0xd8,
	0xb3, 0x9b, 0x4b, 0xfb, 0x76, 0xf3, 0xfe, 0x6b, 0x8e, 0xa4, 0x49, 0x76, 0xe0, 0x2f, 0x7c, 0xa6,
	0x28, 0x34, 0xa7, 0x49, 0xe7, 0x5c, 0xe6, 0x83, 0x73, 0x87, 0xf2, 0x75, 0x76, 0x89, 0x62, 0xcf,
	0x8d, 0xb9, 0x43, 0xa7, 0x5c, 0x46, 0xdf, 0x83, 0xae, 0x4b, 0xfc, 0xc0, 0x0e, 0x04, 0x19, 0xb2,
	0x39, 0x25, 0x95, 0xa4, 0xb0, 0xcd, 0xd5, 0x92, 0x22, 0xcd, 0xc8, 0x97, 0x85, 0x2e, 0x52, 0xdb,
	0xe9, 0x22, 0x8f, 0x01, 0xc2, 0x24, 0x69, 0xda, 0xab, 0x8b, 0x82, 0xdc, 0xdc, 0x53, 0x10, 0x9c,
	0x33, 0x33, 0x1e, 0x40, 0x55, 0x86, 0x57, 0xc0, 0x4d, 0x17, 0x60, 0x32, 0x1d, 0x62, 0xd3, 0x1a,
	0x4d, 0xc6, 0x33, 0xfd, 0x9f, 0x75, 0xe3, 0x0b, 0xa8, 0xc9, 0xbd, 0xf5, 0x15, 0x57, 0xbf, 0xdb,
	0x50, 0x53, 0x9b, 0x56, 0x1d, 0x7a, 0x52, 0x32, 0x3e, 0x4a, 0xa6, 0xe8, 0x42, 0x53, 0x61, 0x68,
	0x3c, 0x19, 0x0f, 0xf5, 0x1b, 0x08, 0xa0, 0x26, 0x15, 0xba, 0x67, 0xfc, 0xad, 0x0c, 0x75, 0x2b,
	0xf6, 0xe7, 0x9c, 0x2d, 0x9e, 0x17, 0xd9, 0x5f, 0xae, 0x19, 0xdf, 0xcf, 0xb3, 0x3f, 0x61, 0x9c,
	0x67, 0x81, 0xa2, 0x2b, 0xe7, 0x69, 0xa0, 0xd8, 0x11, 0x77, 0x01, 0x72, 0x65, 0x55, 0x54, 0x2a,
	0x48, 0x4b, 0xfa, 0x14, 0x9a, 0xb9, 0x2f, 0x14, 0xcb, 0x31, 0xde, 0x9c, 0x27, 0x03, 0x94, 0x54,
	0xe0, 0xfc, 0x67, 0x77, 0x7e, 0x9e, 0x23, 0x0a, 0x49, 0x1a, 0xc9, 0x4d, 0xa2, 0x94, 0xbb, 0x49,
	0x08, 0x06, 0xe0, 0x91, 0x4d, 0x02, 0x1c, 0x21, 0x18, 0x03, 0xe8, 0xee, 0xa4, 0x81, 0x6e, 0x03,
	0x1a, 0x4f, 0xf0, 0x73, 0xf3, 0xdc, 0xb6, 0xb0, 0x39, 0x9e, 0x99, 0x03, 0xbe, 0x16, 0xfa, 0x0d,
	0xd4, 0x83, 0xa3, 0xc1, 0x64, 0x6c, 0x61, 0x73, 0x60, 0x15, 0x46, 0x4a, 0xc6, 0x9f, 0x4b, 0xd0,
	0x29, 0x52, 0x62, 0xf4, 0xd3, 0x62, 0x6e, 0x92, 0x7b, 0xdf, 0xda, 0xcb, 0xa0, 0x0b, 0xe9, 0x70,
	0x2c, 0xf1, 0x3e, 0xec, 0xb0, 0x55, 0x4c, 0x92, 0xcd, 0x75, 0xb3, 0x78, 0x5a, 0x8b, 0x31, 0x9c,
	0x33, 0x43, 0x3f, 0x80, 0x3a, 0x93, 0xa9, 0xab, 0x2a, 0x1e, 0xbe, 0x51, 0x45, 0x9c, 0x58, 0x18,
	0xbf, 0x2f, 0xc3, 0xcd, 0x62, 0xb4, 0xf2, 0x52, 0x68, 0x42, 0x77, 0x87, 0xf9, 0xab, 0xb0, 0xdf,
	0x4e, 0xfc, 0x3b, 0x45, 0xe2, 0xcf, 0x17, 0x9c, 0xc4, 0x71, 0x18, 0xdb, 0xe9, 0x6d, 0xbc, 0x8a,
	0x35, 0xa1, 0x19, 0x70, 0xae, 0x97, 0x0e, 0xf3, 0xeb, 0xaf, 0x22, 0x16, 0x72, 0xf8, 0x29, 0xa1,
	0xee, 0x0e, 0x5c, 0x0e, 0x76, 0xe1, 0x72, 0xcd, 0xcd, 0x2d, 0x59, 0xf3, 0x5a, 0x6e, 0xcd, 0xef,
	0x02, 0x38, 0x2e, 0x5b, 0x39, 0x81, 0x7d, 0x49, 0x92, 0x87, 0x05, 0x4d, 0x6a, 0x3e, 0x23, 0xc4,
	0xf8, 0x05, 0x1c, 0xee, 0x14, 0x82, 0x70, 0xae, 0x54, 0x61, 0x9b, 0xeb, 0xef, 0x3c, 0xdc, 0xc8,
	0xf8, 0x02, 0x7a, 0x83, 0xc2, 0x8d, 0xf0, 0x85, 0xbc, 0xbd, 0xf1, 0x85, 0x34, 0xa0, 0x4d, 0x36,
	0x91, 0x1f, 0x13, 0x9b, 0x6d, 0x6c, 0xdf, 0xe3, 0x9b, 0xb6, 0x72, 0x52, 0xc5, 0x4d, 0xa9, 0xb4,
	0x36, 0x23, 0x8f, 0xa2, 0x63, 0x68, 0xc9, 0x82, 0x28, 0x93, 0xb2, 0x30, 0x91, 0x45, 0x12, 0x16,
	0xc6, 0x3f, 0xca, 0xd0, 0x29, 0x4e, 0x81, 0x7e, 0x0c, 0x55, 0xb6, 0xe1, 0x34, 0xa1, 0xb4, 0x4b,
	0x13, 0xde, 0x48, 0x06, 0x4b, 0xcb, 0x9d, 0xd2, 0x95, 0x77, 0x4b, 0xf7, 0x00, 0x3a, 0xe9, 0x25,
	0x3b, 0x8a, 0xc3, 0xf0, 0x52, 0xf1, 0xa4, 0xf4, 0xea, 0x3d, 0xe5, 0xca, 0xeb, 0xd6, 0xe7, 0x63,
	0x38, 0x4a, 0xbd, 0x28, 0xbb, 0xdc, 0xe3, 0x10, 0x4a, 0xc6, 0xd4, 0xad, 0x93, 0x2f, 0xcf, 0xa7,
	0xd0, 0x51, 0x86, 0xab, 0x68, 0x1e, 0x3b, 0x1e, 0x51, 0xcc, 0xe7, 0xbd, 0xdd, 0x3b, 0xea, 0x85,
	0x1c, 0xc6, 0xed, 0x20, 0x2f, 0xa2, 0x27, 0x00, 0xeb, 0xb4, 0xe0, 0x8a, 0xf8, 0x18, 0x85, 0x67,
	0xa6, 0xbd, 0x4b, 0x83, 0x73, 0x5f, 0x19, 0x5b, 0x68, 0x24, 0xcf, 0x51, 0xe8, 0x71, 0x81, 0x7e,
	0xde, 0x7b, 0xf3, 0xc1, 0x2a, 0xfd, 0x93, 0x63, 0xa1, 0x3d, 0xe0, 0xd4, 0x23, 0x08, 0x1d, 0x4f,
	0xd1, 0xcf, 0x44, 0x34, 0x3e, 0x80, 0x56, 0xde, 0x1e, 0x75, 0x00, 0x3e, 0x37, 0x5f, 0x98, 0xb3,
	0x01, 0x1e, 0x4d, 0x2d, 0xfd, 0x86, 0xf1, 0x87, 0x72, 0xee, 0xc6, 0x5a, 0x60, 0x97, 0xef, 0x72,
	0xd3, 0xc9, 0xbf, 0xb0, 0x95, 0xdf, 0xe1, 0x85, 0xed, 0xeb, 0xbe, 0x04, 0xfe, 0x08, 0xb4, 0xf4,
	0xcd, 0x4f, 0xd1, 0xfb, 0x5c, 0x57, 0x79, 0x46, 0xb6, 0x53, 0xc7, 0x8f, 0x71, 0x66, 0xc3, 0x63,
	0xf6, 0x97, 0x3e, 0xb3, 0x93, 0x77, 0x3c, 0xb9, 0x43, 0x9b, 0x5c, 0xf7, 0x44, 0xaa, 0x38, 0x82,
	0x84, 0x89, 0xbc, 0x8a, 0xd5, 0x64, 0x03, 0xe0, 0x9a, 0x91, 0xb8, 0x8e, 0x6d, 0xe1, 0x68, 0x1f,
	0x59, 0x45, 0x7a, 0xf6, 0x5c, 0xa5, 0xc9, 0xa7, 0xa9, 0x23, 0xa8, 0x8a, 0xc7, 0x19, 0x55, 0x72,
	0x29, 0xe4, 0x9f, 0x62, 0x2a, 0xc5, 0xa7, 0x98, 0x7b, 0xd0, 0xf4, 0x48, 0x40, 0x18, 0xb1, 0x2f,
	0x03, 0x67, 0x2e, 0xb0, 0xdb, 0xc0, 0x20, 0x55, 0x9f, 0x05, 0xce, 0xfc, 0xe1, 0x87, 0x7b, 0x4f,
	0xe3, 0x36, 0x68, 0xfc, 0x98, 0x34, 0xad, 0x0b, 0x3c, 0xd4, 0xbd, 0x27, 0x06, 0x1c, 0xfb, 0x61,
	0xff, 0xd5, 0x6a, 0x11, 0xf6, 0xa9, 0xf7, 0xba, 0xef, 0x86, 0x31, 0xe9, 0x93, 0x0d, 0x23, 0x4b,
	0x4f, 0x16, 0xe6, 0xd5, 0xea, 0xf2, 0x55, 0x4d, 0xfc, 0x7b, 0xfc, 0xdf, 0x00, 0x00, 0x00, 0xff,
	0xff, 0x0a, 0x79, 0x7c, 0xb8, 0xda, 0x15, 0x00, 0x00,
}
