

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

type OVERLAY_MESSAGE_TYPE int32

const (
	OVERLAY_MESSAGE_TYPE_OVERLAY_MSGTYPE_NONE                  OVERLAY_MESSAGE_TYPE = 0
	OVERLAY_MESSAGE_TYPE_OVERLAY_MSGTYPE_PING                  OVERLAY_MESSAGE_TYPE = 1
	OVERLAY_MESSAGE_TYPE_OVERLAY_MSGTYPE_HELLO                 OVERLAY_MESSAGE_TYPE = 2
	OVERLAY_MESSAGE_TYPE_OVERLAY_MSGTYPE_PEERS                 OVERLAY_MESSAGE_TYPE = 3
	OVERLAY_MESSAGE_TYPE_OVERLAY_MSGTYPE_TRANSACTION           OVERLAY_MESSAGE_TYPE = 4
	OVERLAY_MESSAGE_TYPE_OVERLAY_MSGTYPE_LEDGERS               OVERLAY_MESSAGE_TYPE = 5
	OVERLAY_MESSAGE_TYPE_OVERLAY_MSGTYPE_PBFT                  OVERLAY_MESSAGE_TYPE = 6
	OVERLAY_MESSAGE_TYPE_OVERLAY_MSGTYPE_LEDGER_UPGRADE_NOTIFY OVERLAY_MESSAGE_TYPE = 7
)

var OVERLAY_MESSAGE_TYPE_name = map[int32]string{
	0: "OVERLAY_MSGTYPE_NONE",
	1: "OVERLAY_MSGTYPE_PING",
	2: "OVERLAY_MSGTYPE_HELLO",
	3: "OVERLAY_MSGTYPE_PEERS",
	4: "OVERLAY_MSGTYPE_TRANSACTION",
	5: "OVERLAY_MSGTYPE_LEDGERS",
	6: "OVERLAY_MSGTYPE_PBFT",
	7: "OVERLAY_MSGTYPE_LEDGER_UPGRADE_NOTIFY",
}
var OVERLAY_MESSAGE_TYPE_value = map[string]int32{
	"OVERLAY_MSGTYPE_NONE":                  0,
	"OVERLAY_MSGTYPE_PING":                  1,
	"OVERLAY_MSGTYPE_HELLO":                 2,
	"OVERLAY_MSGTYPE_PEERS":                 3,
	"OVERLAY_MSGTYPE_TRANSACTION":           4,
	"OVERLAY_MSGTYPE_LEDGERS":               5,
	"OVERLAY_MSGTYPE_PBFT":                  6,
	"OVERLAY_MSGTYPE_LEDGER_UPGRADE_NOTIFY": 7,
}

func (x OVERLAY_MESSAGE_TYPE) String() string {
	return proto.EnumName(OVERLAY_MESSAGE_TYPE_name, int32(x))
}
func (OVERLAY_MESSAGE_TYPE) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{0}
}

// message interfaces for java
type ChainMessageType int32

const (
	ChainMessageType_CHAIN_TYPE_NONE         ChainMessageType = 0
	ChainMessageType_CHAIN_HELLO             ChainMessageType = 10
	ChainMessageType_CHAIN_TX_STATUS         ChainMessageType = 11
	ChainMessageType_CHAIN_PEER_ONLINE       ChainMessageType = 12
	ChainMessageType_CHAIN_PEER_OFFLINE      ChainMessageType = 13
	ChainMessageType_CHAIN_PEER_MESSAGE      ChainMessageType = 14
	ChainMessageType_CHAIN_SUBMITTRANSACTION ChainMessageType = 15
	ChainMessageType_CHAIN_LEDGER_HEADER     ChainMessageType = 16
	ChainMessageType_CHAIN_SUBSCRIBE_TX      ChainMessageType = 17
	ChainMessageType_CHAIN_TX_ENV_STORE      ChainMessageType = 18
)

var ChainMessageType_name = map[int32]string{
	0:  "CHAIN_TYPE_NONE",
	10: "CHAIN_HELLO",
	11: "CHAIN_TX_STATUS",
	12: "CHAIN_PEER_ONLINE",
	13: "CHAIN_PEER_OFFLINE",
	14: "CHAIN_PEER_MESSAGE",
	15: "CHAIN_SUBMITTRANSACTION",
	16: "CHAIN_LEDGER_HEADER",
	17: "CHAIN_SUBSCRIBE_TX",
	18: "CHAIN_TX_ENV_STORE",
}
var ChainMessageType_value = map[string]int32{
	"CHAIN_TYPE_NONE":         0,
	"CHAIN_HELLO":             10,
	"CHAIN_TX_STATUS":         11,
	"CHAIN_PEER_ONLINE":       12,
	"CHAIN_PEER_OFFLINE":      13,
	"CHAIN_PEER_MESSAGE":      14,
	"CHAIN_SUBMITTRANSACTION": 15,
	"CHAIN_LEDGER_HEADER":     16,
	"CHAIN_SUBSCRIBE_TX":      17,
	"CHAIN_TX_ENV_STORE":      18,
}

func (x ChainMessageType) String() string {
	return proto.EnumName(ChainMessageType_name, int32(x))
}
func (ChainMessageType) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{1}
}

type Ledgers_SyncCode int32

const (
	Ledgers_OK             Ledgers_SyncCode = 0
	Ledgers_OUT_OF_SYNC    Ledgers_SyncCode = 1
	Ledgers_OUT_OF_LEDGERS Ledgers_SyncCode = 2
	Ledgers_BUSY           Ledgers_SyncCode = 3
	Ledgers_REFUSE         Ledgers_SyncCode = 4
	Ledgers_INTERNAL       Ledgers_SyncCode = 5
)

var Ledgers_SyncCode_name = map[int32]string{
	0: "OK",
	1: "OUT_OF_SYNC",
	2: "OUT_OF_LEDGERS",
	3: "BUSY",
	4: "REFUSE",
	5: "INTERNAL",
}
var Ledgers_SyncCode_value = map[string]int32{
	"OK":             0,
	"OUT_OF_SYNC":    1,
	"OUT_OF_LEDGERS": 2,
	"BUSY":           3,
	"REFUSE":         4,
	"INTERNAL":       5,
}

func (x Ledgers_SyncCode) String() string {
	return proto.EnumName(Ledgers_SyncCode_name, int32(x))
}
func (Ledgers_SyncCode) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{5, 0}
}

type ChainTxStatus_TxStatus int32

const (
	ChainTxStatus_UNDEFINED ChainTxStatus_TxStatus = 0
	ChainTxStatus_CONFIRMED ChainTxStatus_TxStatus = 1
	ChainTxStatus_PENDING   ChainTxStatus_TxStatus = 2
	ChainTxStatus_COMPLETE  ChainTxStatus_TxStatus = 3
	ChainTxStatus_FAILURE   ChainTxStatus_TxStatus = 4
)

var ChainTxStatus_TxStatus_name = map[int32]string{
	0: "UNDEFINED",
	1: "CONFIRMED",
	2: "PENDING",
	3: "COMPLETE",
	4: "FAILURE",
}
var ChainTxStatus_TxStatus_value = map[string]int32{
	"UNDEFINED": 0,
	"CONFIRMED": 1,
	"PENDING":   2,
	"COMPLETE":  3,
	"FAILURE":   4,
}

func (x ChainTxStatus_TxStatus) String() string {
	return proto.EnumName(ChainTxStatus_TxStatus_name, int32(x))
}
func (ChainTxStatus_TxStatus) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{14, 0}
}

type Hello struct {
	NetworkId            int64    `protobuf:"varint,1,opt,name=network_id,json=networkId" json:"network_id,omitempty"`
	LedgerVersion        int64    `protobuf:"varint,2,opt,name=ledger_version,json=ledgerVersion" json:"ledger_version,omitempty"`
	OverlayVersion       int64    `protobuf:"varint,3,opt,name=overlay_version,json=overlayVersion" json:"overlay_version,omitempty"`
	RexxVersion          string   `protobuf:"bytes,4,opt,name=rexx_version,json=rexxVersion" json:"rexx_version,omitempty"`
	ListeningPort        int64    `protobuf:"varint,5,opt,name=listening_port,json=listeningPort" json:"listening_port,omitempty"`
	NodeAddress          string   `protobuf:"bytes,6,opt,name=node_address,json=nodeAddress" json:"node_address,omitempty"`
	NodeRand             string   `protobuf:"bytes,7,opt,name=node_rand,json=nodeRand" json:"node_rand,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Hello) Reset()         { *m = Hello{} }
func (m *Hello) String() string { return proto.CompactTextString(m) }
func (*Hello) ProtoMessage()    {}
func (*Hello) Descriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{0}
}
func (m *Hello) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Hello.Unmarshal(m, b)
}
func (m *Hello) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Hello.Marshal(b, m, deterministic)
}
func (dst *Hello) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Hello.Merge(dst, src)
}
func (m *Hello) XXX_Size() int {
	return xxx_messageInfo_Hello.Size(m)
}
func (m *Hello) XXX_DiscardUnknown() {
	xxx_messageInfo_Hello.DiscardUnknown(m)
}

var xxx_messageInfo_Hello proto.InternalMessageInfo

func (m *Hello) GetNetworkId() int64 {
	if m != nil {
		return m.NetworkId
	}
	return 0
}

func (m *Hello) GetLedgerVersion() int64 {
	if m != nil {
		return m.LedgerVersion
	}
	return 0
}

func (m *Hello) GetOverlayVersion() int64 {
	if m != nil {
		return m.OverlayVersion
	}
	return 0
}

func (m *Hello) GetRexxVersion() string {
	if m != nil {
		return m.RexxVersion
	}
	return ""
}

func (m *Hello) GetListeningPort() int64 {
	if m != nil {
		return m.ListeningPort
	}
	return 0
}

func (m *Hello) GetNodeAddress() string {
	if m != nil {
		return m.NodeAddress
	}
	return ""
}

func (m *Hello) GetNodeRand() string {
	if m != nil {
		return m.NodeRand
	}
	return ""
}

type HelloResponse struct {
	ErrorCode            ERRORCODE `protobuf:"varint,1,opt,name=error_code,json=errorCode,enum=protocol.ERRORCODE" json:"error_code,omitempty"`
	ErrorDesc            string    `protobuf:"bytes,2,opt,name=error_desc,json=errorDesc" json:"error_desc,omitempty"`
	XXX_NoUnkeyedLiteral struct{}  `json:"-"`
	XXX_unrecognized     []byte    `json:"-"`
	XXX_sizecache        int32     `json:"-"`
}

func (m *HelloResponse) Reset()         { *m = HelloResponse{} }
func (m *HelloResponse) String() string { return proto.CompactTextString(m) }
func (*HelloResponse) ProtoMessage()    {}
func (*HelloResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{1}
}
func (m *HelloResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_HelloResponse.Unmarshal(m, b)
}
func (m *HelloResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_HelloResponse.Marshal(b, m, deterministic)
}
func (dst *HelloResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_HelloResponse.Merge(dst, src)
}
func (m *HelloResponse) XXX_Size() int {
	return xxx_messageInfo_HelloResponse.Size(m)
}
func (m *HelloResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_HelloResponse.DiscardUnknown(m)
}

var xxx_messageInfo_HelloResponse proto.InternalMessageInfo

func (m *HelloResponse) GetErrorCode() ERRORCODE {
	if m != nil {
		return m.ErrorCode
	}
	return ERRORCODE_ERRCODE_SUCCESS
}

func (m *HelloResponse) GetErrorDesc() string {
	if m != nil {
		return m.ErrorDesc
	}
	return ""
}

// for peers message
type Peer struct {
	Ip                   string   `protobuf:"bytes,1,opt,name=ip" json:"ip,omitempty"`
	Port                 int64    `protobuf:"varint,2,opt,name=port" json:"port,omitempty"`
	NumFailures          int64    `protobuf:"varint,3,opt,name=num_failures,json=numFailures" json:"num_failures,omitempty"`
	NextAttemptTime      int64    `protobuf:"varint,4,opt,name=next_attempt_time,json=nextAttemptTime" json:"next_attempt_time,omitempty"`
	ActiveTime           int64    `protobuf:"varint,5,opt,name=active_time,json=activeTime" json:"active_time,omitempty"`
	ConnectionId         int64    `protobuf:"varint,6,opt,name=connection_id,json=connectionId" json:"connection_id,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Peer) Reset()         { *m = Peer{} }
func (m *Peer) String() string { return proto.CompactTextString(m) }
func (*Peer) ProtoMessage()    {}
func (*Peer) Descriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{2}
}
func (m *Peer) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Peer.Unmarshal(m, b)
}
func (m *Peer) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Peer.Marshal(b, m, deterministic)
}
func (dst *Peer) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Peer.Merge(dst, src)
}
func (m *Peer) XXX_Size() int {
	return xxx_messageInfo_Peer.Size(m)
}
func (m *Peer) XXX_DiscardUnknown() {
	xxx_messageInfo_Peer.DiscardUnknown(m)
}

var xxx_messageInfo_Peer proto.InternalMessageInfo

func (m *Peer) GetIp() string {
	if m != nil {
		return m.Ip
	}
	return ""
}

func (m *Peer) GetPort() int64 {
	if m != nil {
		return m.Port
	}
	return 0
}

func (m *Peer) GetNumFailures() int64 {
	if m != nil {
		return m.NumFailures
	}
	return 0
}

func (m *Peer) GetNextAttemptTime() int64 {
	if m != nil {
		return m.NextAttemptTime
	}
	return 0
}

func (m *Peer) GetActiveTime() int64 {
	if m != nil {
		return m.ActiveTime
	}
	return 0
}

func (m *Peer) GetConnectionId() int64 {
	if m != nil {
		return m.ConnectionId
	}
	return 0
}

type Peers struct {
	Peers                []*Peer  `protobuf:"bytes,1,rep,name=peers" json:"peers,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Peers) Reset()         { *m = Peers{} }
func (m *Peers) String() string { return proto.CompactTextString(m) }
func (*Peers) ProtoMessage()    {}
func (*Peers) Descriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{3}
}
func (m *Peers) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Peers.Unmarshal(m, b)
}
func (m *Peers) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Peers.Marshal(b, m, deterministic)
}
func (dst *Peers) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Peers.Merge(dst, src)
}
func (m *Peers) XXX_Size() int {
	return xxx_messageInfo_Peers.Size(m)
}
func (m *Peers) XXX_DiscardUnknown() {
	xxx_messageInfo_Peers.DiscardUnknown(m)
}

var xxx_messageInfo_Peers proto.InternalMessageInfo

func (m *Peers) GetPeers() []*Peer {
	if m != nil {
		return m.Peers
	}
	return nil
}

// for getledgers
type GetLedgers struct {
	Begin                int64    `protobuf:"varint,1,opt,name=begin" json:"begin,omitempty"`
	End                  int64    `protobuf:"varint,2,opt,name=end" json:"end,omitempty"`
	Timestamp            int64    `protobuf:"varint,3,opt,name=timestamp" json:"timestamp,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *GetLedgers) Reset()         { *m = GetLedgers{} }
func (m *GetLedgers) String() string { return proto.CompactTextString(m) }
func (*GetLedgers) ProtoMessage()    {}
func (*GetLedgers) Descriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{4}
}
func (m *GetLedgers) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_GetLedgers.Unmarshal(m, b)
}
func (m *GetLedgers) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_GetLedgers.Marshal(b, m, deterministic)
}
func (dst *GetLedgers) XXX_Merge(src proto.Message) {
	xxx_messageInfo_GetLedgers.Merge(dst, src)
}
func (m *GetLedgers) XXX_Size() int {
	return xxx_messageInfo_GetLedgers.Size(m)
}
func (m *GetLedgers) XXX_DiscardUnknown() {
	xxx_messageInfo_GetLedgers.DiscardUnknown(m)
}

var xxx_messageInfo_GetLedgers proto.InternalMessageInfo

func (m *GetLedgers) GetBegin() int64 {
	if m != nil {
		return m.Begin
	}
	return 0
}

func (m *GetLedgers) GetEnd() int64 {
	if m != nil {
		return m.End
	}
	return 0
}

func (m *GetLedgers) GetTimestamp() int64 {
	if m != nil {
		return m.Timestamp
	}
	return 0
}

// for ledgers
type Ledgers struct {
	Values               []*ConsensusValue `protobuf:"bytes,1,rep,name=values" json:"values,omitempty"`
	SyncCode             Ledgers_SyncCode  `protobuf:"varint,2,opt,name=sync_code,json=syncCode,enum=protocol.Ledgers_SyncCode" json:"sync_code,omitempty"`
	MaxSeq               int64             `protobuf:"varint,3,opt,name=max_seq,json=maxSeq" json:"max_seq,omitempty"`
	Proof                []byte            `protobuf:"bytes,4,opt,name=proof,proto3" json:"proof,omitempty"`
	XXX_NoUnkeyedLiteral struct{}          `json:"-"`
	XXX_unrecognized     []byte            `json:"-"`
	XXX_sizecache        int32             `json:"-"`
}

func (m *Ledgers) Reset()         { *m = Ledgers{} }
func (m *Ledgers) String() string { return proto.CompactTextString(m) }
func (*Ledgers) ProtoMessage()    {}
func (*Ledgers) Descriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{5}
}
func (m *Ledgers) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Ledgers.Unmarshal(m, b)
}
func (m *Ledgers) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Ledgers.Marshal(b, m, deterministic)
}
func (dst *Ledgers) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Ledgers.Merge(dst, src)
}
func (m *Ledgers) XXX_Size() int {
	return xxx_messageInfo_Ledgers.Size(m)
}
func (m *Ledgers) XXX_DiscardUnknown() {
	xxx_messageInfo_Ledgers.DiscardUnknown(m)
}

var xxx_messageInfo_Ledgers proto.InternalMessageInfo

func (m *Ledgers) GetValues() []*ConsensusValue {
	if m != nil {
		return m.Values
	}
	return nil
}

func (m *Ledgers) GetSyncCode() Ledgers_SyncCode {
	if m != nil {
		return m.SyncCode
	}
	return Ledgers_OK
}

func (m *Ledgers) GetMaxSeq() int64 {
	if m != nil {
		return m.MaxSeq
	}
	return 0
}

func (m *Ledgers) GetProof() []byte {
	if m != nil {
		return m.Proof
	}
	return nil
}

// for dont have
type DontHave struct {
	Type                 int64    `protobuf:"varint,1,opt,name=type" json:"type,omitempty"`
	Hash                 []byte   `protobuf:"bytes,2,opt,name=hash,proto3" json:"hash,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *DontHave) Reset()         { *m = DontHave{} }
func (m *DontHave) String() string { return proto.CompactTextString(m) }
func (*DontHave) ProtoMessage()    {}
func (*DontHave) Descriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{6}
}
func (m *DontHave) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_DontHave.Unmarshal(m, b)
}
func (m *DontHave) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_DontHave.Marshal(b, m, deterministic)
}
func (dst *DontHave) XXX_Merge(src proto.Message) {
	xxx_messageInfo_DontHave.Merge(dst, src)
}
func (m *DontHave) XXX_Size() int {
	return xxx_messageInfo_DontHave.Size(m)
}
func (m *DontHave) XXX_DiscardUnknown() {
	xxx_messageInfo_DontHave.DiscardUnknown(m)
}

var xxx_messageInfo_DontHave proto.InternalMessageInfo

func (m *DontHave) GetType() int64 {
	if m != nil {
		return m.Type
	}
	return 0
}

func (m *DontHave) GetHash() []byte {
	if m != nil {
		return m.Hash
	}
	return nil
}

// for ledger upgrade
type LedgerUpgradeNotify struct {
	Nonce                int64          `protobuf:"varint,1,opt,name=nonce" json:"nonce,omitempty"`
	Upgrade              *LedgerUpgrade `protobuf:"bytes,2,opt,name=upgrade" json:"upgrade,omitempty"`
	Signature            *Signature     `protobuf:"bytes,3,opt,name=signature" json:"signature,omitempty"`
	XXX_NoUnkeyedLiteral struct{}       `json:"-"`
	XXX_unrecognized     []byte         `json:"-"`
	XXX_sizecache        int32          `json:"-"`
}

func (m *LedgerUpgradeNotify) Reset()         { *m = LedgerUpgradeNotify{} }
func (m *LedgerUpgradeNotify) String() string { return proto.CompactTextString(m) }
func (*LedgerUpgradeNotify) ProtoMessage()    {}
func (*LedgerUpgradeNotify) Descriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{7}
}
func (m *LedgerUpgradeNotify) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_LedgerUpgradeNotify.Unmarshal(m, b)
}
func (m *LedgerUpgradeNotify) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_LedgerUpgradeNotify.Marshal(b, m, deterministic)
}
func (dst *LedgerUpgradeNotify) XXX_Merge(src proto.Message) {
	xxx_messageInfo_LedgerUpgradeNotify.Merge(dst, src)
}
func (m *LedgerUpgradeNotify) XXX_Size() int {
	return xxx_messageInfo_LedgerUpgradeNotify.Size(m)
}
func (m *LedgerUpgradeNotify) XXX_DiscardUnknown() {
	xxx_messageInfo_LedgerUpgradeNotify.DiscardUnknown(m)
}

var xxx_messageInfo_LedgerUpgradeNotify proto.InternalMessageInfo

func (m *LedgerUpgradeNotify) GetNonce() int64 {
	if m != nil {
		return m.Nonce
	}
	return 0
}

func (m *LedgerUpgradeNotify) GetUpgrade() *LedgerUpgrade {
	if m != nil {
		return m.Upgrade
	}
	return nil
}

func (m *LedgerUpgradeNotify) GetSignature() *Signature {
	if m != nil {
		return m.Signature
	}
	return nil
}

// for key value db storage
type EntryList struct {
	Entry                [][]byte `protobuf:"bytes,1,rep,name=entry,proto3" json:"entry,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *EntryList) Reset()         { *m = EntryList{} }
func (m *EntryList) String() string { return proto.CompactTextString(m) }
func (*EntryList) ProtoMessage()    {}
func (*EntryList) Descriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{8}
}
func (m *EntryList) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_EntryList.Unmarshal(m, b)
}
func (m *EntryList) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_EntryList.Marshal(b, m, deterministic)
}
func (dst *EntryList) XXX_Merge(src proto.Message) {
	xxx_messageInfo_EntryList.Merge(dst, src)
}
func (m *EntryList) XXX_Size() int {
	return xxx_messageInfo_EntryList.Size(m)
}
func (m *EntryList) XXX_DiscardUnknown() {
	xxx_messageInfo_EntryList.DiscardUnknown(m)
}

var xxx_messageInfo_EntryList proto.InternalMessageInfo

func (m *EntryList) GetEntry() [][]byte {
	if m != nil {
		return m.Entry
	}
	return nil
}

// register notification events
type ChainHello struct {
	ApiList              []ChainMessageType `protobuf:"varint,1,rep,packed,name=api_list,json=apiList,enum=protocol.ChainMessageType" json:"api_list,omitempty"`
	Timestamp            int64              `protobuf:"varint,2,opt,name=timestamp" json:"timestamp,omitempty"`
	XXX_NoUnkeyedLiteral struct{}           `json:"-"`
	XXX_unrecognized     []byte             `json:"-"`
	XXX_sizecache        int32              `json:"-"`
}

func (m *ChainHello) Reset()         { *m = ChainHello{} }
func (m *ChainHello) String() string { return proto.CompactTextString(m) }
func (*ChainHello) ProtoMessage()    {}
func (*ChainHello) Descriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{9}
}
func (m *ChainHello) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ChainHello.Unmarshal(m, b)
}
func (m *ChainHello) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ChainHello.Marshal(b, m, deterministic)
}
func (dst *ChainHello) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ChainHello.Merge(dst, src)
}
func (m *ChainHello) XXX_Size() int {
	return xxx_messageInfo_ChainHello.Size(m)
}
func (m *ChainHello) XXX_DiscardUnknown() {
	xxx_messageInfo_ChainHello.DiscardUnknown(m)
}

var xxx_messageInfo_ChainHello proto.InternalMessageInfo

func (m *ChainHello) GetApiList() []ChainMessageType {
	if m != nil {
		return m.ApiList
	}
	return nil
}

func (m *ChainHello) GetTimestamp() int64 {
	if m != nil {
		return m.Timestamp
	}
	return 0
}

// 1.ChainHello response
// 2.async notification from local
type ChainStatus struct {
	SelfAddr             string   `protobuf:"bytes,1,opt,name=self_addr,json=selfAddr" json:"self_addr,omitempty"`
	LedgerVersion        int64    `protobuf:"varint,2,opt,name=ledger_version,json=ledgerVersion" json:"ledger_version,omitempty"`
	MonitorVersion       int64    `protobuf:"varint,3,opt,name=monitor_version,json=monitorVersion" json:"monitor_version,omitempty"`
	RexxVersion          string   `protobuf:"bytes,4,opt,name=rexx_version,json=rexxVersion" json:"rexx_version,omitempty"`
	Timestamp            int64    `protobuf:"varint,5,opt,name=timestamp" json:"timestamp,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *ChainStatus) Reset()         { *m = ChainStatus{} }
func (m *ChainStatus) String() string { return proto.CompactTextString(m) }
func (*ChainStatus) ProtoMessage()    {}
func (*ChainStatus) Descriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{10}
}
func (m *ChainStatus) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ChainStatus.Unmarshal(m, b)
}
func (m *ChainStatus) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ChainStatus.Marshal(b, m, deterministic)
}
func (dst *ChainStatus) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ChainStatus.Merge(dst, src)
}
func (m *ChainStatus) XXX_Size() int {
	return xxx_messageInfo_ChainStatus.Size(m)
}
func (m *ChainStatus) XXX_DiscardUnknown() {
	xxx_messageInfo_ChainStatus.DiscardUnknown(m)
}

var xxx_messageInfo_ChainStatus proto.InternalMessageInfo

func (m *ChainStatus) GetSelfAddr() string {
	if m != nil {
		return m.SelfAddr
	}
	return ""
}

func (m *ChainStatus) GetLedgerVersion() int64 {
	if m != nil {
		return m.LedgerVersion
	}
	return 0
}

func (m *ChainStatus) GetMonitorVersion() int64 {
	if m != nil {
		return m.MonitorVersion
	}
	return 0
}

func (m *ChainStatus) GetRexxVersion() string {
	if m != nil {
		return m.RexxVersion
	}
	return ""
}

func (m *ChainStatus) GetTimestamp() int64 {
	if m != nil {
		return m.Timestamp
	}
	return 0
}

type ChainPeerMessage struct {
	SrcPeerAddr          string   `protobuf:"bytes,1,opt,name=src_peer_addr,json=srcPeerAddr" json:"src_peer_addr,omitempty"`
	DesPeerAddrs         []string `protobuf:"bytes,2,rep,name=des_peer_addrs,json=desPeerAddrs" json:"des_peer_addrs,omitempty"`
	Data                 []byte   `protobuf:"bytes,3,opt,name=data,proto3" json:"data,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *ChainPeerMessage) Reset()         { *m = ChainPeerMessage{} }
func (m *ChainPeerMessage) String() string { return proto.CompactTextString(m) }
func (*ChainPeerMessage) ProtoMessage()    {}
func (*ChainPeerMessage) Descriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{11}
}
func (m *ChainPeerMessage) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ChainPeerMessage.Unmarshal(m, b)
}
func (m *ChainPeerMessage) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ChainPeerMessage.Marshal(b, m, deterministic)
}
func (dst *ChainPeerMessage) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ChainPeerMessage.Merge(dst, src)
}
func (m *ChainPeerMessage) XXX_Size() int {
	return xxx_messageInfo_ChainPeerMessage.Size(m)
}
func (m *ChainPeerMessage) XXX_DiscardUnknown() {
	xxx_messageInfo_ChainPeerMessage.DiscardUnknown(m)
}

var xxx_messageInfo_ChainPeerMessage proto.InternalMessageInfo

func (m *ChainPeerMessage) GetSrcPeerAddr() string {
	if m != nil {
		return m.SrcPeerAddr
	}
	return ""
}

func (m *ChainPeerMessage) GetDesPeerAddrs() []string {
	if m != nil {
		return m.DesPeerAddrs
	}
	return nil
}

func (m *ChainPeerMessage) GetData() []byte {
	if m != nil {
		return m.Data
	}
	return nil
}

type ChainSubscribeTx struct {
	Address              []string `protobuf:"bytes,1,rep,name=address" json:"address,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *ChainSubscribeTx) Reset()         { *m = ChainSubscribeTx{} }
func (m *ChainSubscribeTx) String() string { return proto.CompactTextString(m) }
func (*ChainSubscribeTx) ProtoMessage()    {}
func (*ChainSubscribeTx) Descriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{12}
}
func (m *ChainSubscribeTx) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ChainSubscribeTx.Unmarshal(m, b)
}
func (m *ChainSubscribeTx) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ChainSubscribeTx.Marshal(b, m, deterministic)
}
func (dst *ChainSubscribeTx) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ChainSubscribeTx.Merge(dst, src)
}
func (m *ChainSubscribeTx) XXX_Size() int {
	return xxx_messageInfo_ChainSubscribeTx.Size(m)
}
func (m *ChainSubscribeTx) XXX_DiscardUnknown() {
	xxx_messageInfo_ChainSubscribeTx.DiscardUnknown(m)
}

var xxx_messageInfo_ChainSubscribeTx proto.InternalMessageInfo

func (m *ChainSubscribeTx) GetAddress() []string {
	if m != nil {
		return m.Address
	}
	return nil
}

type ChainResponse struct {
	ErrorCode            int32    `protobuf:"varint,1,opt,name=error_code,json=errorCode" json:"error_code,omitempty"`
	ErrorDesc            string   `protobuf:"bytes,2,opt,name=error_desc,json=errorDesc" json:"error_desc,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *ChainResponse) Reset()         { *m = ChainResponse{} }
func (m *ChainResponse) String() string { return proto.CompactTextString(m) }
func (*ChainResponse) ProtoMessage()    {}
func (*ChainResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{13}
}
func (m *ChainResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ChainResponse.Unmarshal(m, b)
}
func (m *ChainResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ChainResponse.Marshal(b, m, deterministic)
}
func (dst *ChainResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ChainResponse.Merge(dst, src)
}
func (m *ChainResponse) XXX_Size() int {
	return xxx_messageInfo_ChainResponse.Size(m)
}
func (m *ChainResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_ChainResponse.DiscardUnknown(m)
}

var xxx_messageInfo_ChainResponse proto.InternalMessageInfo

func (m *ChainResponse) GetErrorCode() int32 {
	if m != nil {
		return m.ErrorCode
	}
	return 0
}

func (m *ChainResponse) GetErrorDesc() string {
	if m != nil {
		return m.ErrorDesc
	}
	return ""
}

type ChainTxStatus struct {
	Status               ChainTxStatus_TxStatus `protobuf:"varint,1,opt,name=status,enum=protocol.ChainTxStatus_TxStatus" json:"status,omitempty"`
	TxHash               string                 `protobuf:"bytes,2,opt,name=tx_hash,json=txHash" json:"tx_hash,omitempty"`
	SourceAddress        string                 `protobuf:"bytes,3,opt,name=source_address,json=sourceAddress" json:"source_address,omitempty"`
	SourceAccountSeq     int64                  `protobuf:"varint,4,opt,name=source_account_seq,json=sourceAccountSeq" json:"source_account_seq,omitempty"`
	LedgerSeq            int64                  `protobuf:"varint,5,opt,name=ledger_seq,json=ledgerSeq" json:"ledger_seq,omitempty"`
	NewAccountSeq        int64                  `protobuf:"varint,6,opt,name=new_account_seq,json=newAccountSeq" json:"new_account_seq,omitempty"`
	ErrorCode            ERRORCODE              `protobuf:"varint,7,opt,name=error_code,json=errorCode,enum=protocol.ERRORCODE" json:"error_code,omitempty"`
	ErrorDesc            string                 `protobuf:"bytes,8,opt,name=error_desc,json=errorDesc" json:"error_desc,omitempty"`
	Timestamp            int64                  `protobuf:"varint,9,opt,name=timestamp" json:"timestamp,omitempty"`
	XXX_NoUnkeyedLiteral struct{}               `json:"-"`
	XXX_unrecognized     []byte                 `json:"-"`
	XXX_sizecache        int32                  `json:"-"`
}

func (m *ChainTxStatus) Reset()         { *m = ChainTxStatus{} }
func (m *ChainTxStatus) String() string { return proto.CompactTextString(m) }
func (*ChainTxStatus) ProtoMessage()    {}
func (*ChainTxStatus) Descriptor() ([]byte, []int) {
	return fileDescriptor_overlay_026c4eb10906066d, []int{14}
}
func (m *ChainTxStatus) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ChainTxStatus.Unmarshal(m, b)
}
func (m *ChainTxStatus) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ChainTxStatus.Marshal(b, m, deterministic)
}
func (dst *ChainTxStatus) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ChainTxStatus.Merge(dst, src)
}
func (m *ChainTxStatus) XXX_Size() int {
	return xxx_messageInfo_ChainTxStatus.Size(m)
}
func (m *ChainTxStatus) XXX_DiscardUnknown() {
	xxx_messageInfo_ChainTxStatus.DiscardUnknown(m)
}

var xxx_messageInfo_ChainTxStatus proto.InternalMessageInfo

func (m *ChainTxStatus) GetStatus() ChainTxStatus_TxStatus {
	if m != nil {
		return m.Status
	}
	return ChainTxStatus_UNDEFINED
}

func (m *ChainTxStatus) GetTxHash() string {
	if m != nil {
		return m.TxHash
	}
	return ""
}

func (m *ChainTxStatus) GetSourceAddress() string {
	if m != nil {
		return m.SourceAddress
	}
	return ""
}

func (m *ChainTxStatus) GetSourceAccountSeq() int64 {
	if m != nil {
		return m.SourceAccountSeq
	}
	return 0
}

func (m *ChainTxStatus) GetLedgerSeq() int64 {
	if m != nil {
		return m.LedgerSeq
	}
	return 0
}

func (m *ChainTxStatus) GetNewAccountSeq() int64 {
	if m != nil {
		return m.NewAccountSeq
	}
	return 0
}

func (m *ChainTxStatus) GetErrorCode() ERRORCODE {
	if m != nil {
		return m.ErrorCode
	}
	return ERRORCODE_ERRCODE_SUCCESS
}

func (m *ChainTxStatus) GetErrorDesc() string {
	if m != nil {
		return m.ErrorDesc
	}
	return ""
}

func (m *ChainTxStatus) GetTimestamp() int64 {
	if m != nil {
		return m.Timestamp
	}
	return 0
}

func init() {
	proto.RegisterType((*Hello)(nil), "protocol.Hello")
	proto.RegisterType((*HelloResponse)(nil), "protocol.HelloResponse")
	proto.RegisterType((*Peer)(nil), "protocol.Peer")
	proto.RegisterType((*Peers)(nil), "protocol.Peers")
	proto.RegisterType((*GetLedgers)(nil), "protocol.GetLedgers")
	proto.RegisterType((*Ledgers)(nil), "protocol.Ledgers")
	proto.RegisterType((*DontHave)(nil), "protocol.DontHave")
	proto.RegisterType((*LedgerUpgradeNotify)(nil), "protocol.LedgerUpgradeNotify")
	proto.RegisterType((*EntryList)(nil), "protocol.EntryList")
	proto.RegisterType((*ChainHello)(nil), "protocol.ChainHello")
	proto.RegisterType((*ChainStatus)(nil), "protocol.ChainStatus")
	proto.RegisterType((*ChainPeerMessage)(nil), "protocol.ChainPeerMessage")
	proto.RegisterType((*ChainSubscribeTx)(nil), "protocol.ChainSubscribeTx")
	proto.RegisterType((*ChainResponse)(nil), "protocol.ChainResponse")
	proto.RegisterType((*ChainTxStatus)(nil), "protocol.ChainTxStatus")
	proto.RegisterEnum("protocol.OVERLAY_MESSAGE_TYPE", OVERLAY_MESSAGE_TYPE_name, OVERLAY_MESSAGE_TYPE_value)
	proto.RegisterEnum("protocol.ChainMessageType", ChainMessageType_name, ChainMessageType_value)
	proto.RegisterEnum("protocol.Ledgers_SyncCode", Ledgers_SyncCode_name, Ledgers_SyncCode_value)
	proto.RegisterEnum("protocol.ChainTxStatus_TxStatus", ChainTxStatus_TxStatus_name, ChainTxStatus_TxStatus_value)
}

func init() { proto.RegisterFile("overlay.proto", fileDescriptor_overlay_026c4eb10906066d) }

var fileDescriptor_overlay_026c4eb10906066d = []byte{
	// 1336 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x9c, 0x55, 0x4b, 0x6f, 0xdb, 0xc6,
	0x16, 0x8e, 0x24, 0xeb, 0x75, 0xf4, 0x30, 0x33, 0x4e, 0xae, 0x75, 0x93, 0x1b, 0xc4, 0xd1, 0x4d,
	0xee, 0x75, 0x83, 0x54, 0x68, 0x5c, 0x14, 0xed, 0x56, 0x96, 0x28, 0x5b, 0xa8, 0x4c, 0x09, 0x43,
	0xca, 0x88, 0xd1, 0x05, 0x41, 0x93, 0x63, 0x9b, 0x88, 0x34, 0xc3, 0x70, 0x46, 0x8e, 0xb4, 0x2b,
	0xd0, 0x5f, 0xd0, 0xdf, 0xd3, 0x45, 0xd1, 0xbf, 0xd5, 0x55, 0x31, 0x0f, 0x5a, 0xb2, 0xea, 0x4d,
	0xba, 0xe2, 0x99, 0xef, 0x7c, 0x3c, 0x3c, 0xaf, 0xf9, 0x08, 0x0d, 0x76, 0x4b, 0xd2, 0x59, 0xb0,
	0xea, 0x24, 0x29, 0x13, 0x0c, 0x55, 0xd4, 0x23, 0x64, 0xb3, 0x67, 0xf5, 0x90, 0xcd, 0xe7, 0x8c,
	0x6a, 0xfc, 0x59, 0x2d, 0xbc, 0x09, 0x62, 0x73, 0x68, 0xff, 0x9c, 0x87, 0xe2, 0x29, 0x99, 0xcd,
	0x18, 0x7a, 0x01, 0x40, 0x89, 0xf8, 0xcc, 0xd2, 0x8f, 0x7e, 0x1c, 0xb5, 0x72, 0x07, 0xb9, 0xc3,
	0x02, 0xae, 0x1a, 0x64, 0x18, 0xa1, 0x37, 0xd0, 0x9c, 0x91, 0xe8, 0x9a, 0xa4, 0xfe, 0x2d, 0x49,
	0x79, 0xcc, 0x68, 0x2b, 0xaf, 0x28, 0x0d, 0x8d, 0x9e, 0x6b, 0x10, 0xfd, 0x1f, 0x76, 0x4d, 0x16,
	0x77, 0xbc, 0x82, 0xe2, 0x35, 0x0d, 0x9c, 0x11, 0x5f, 0x41, 0xfd, 0x72, 0x31, 0x67, 0x77, 0xac,
	0x9d, 0x83, 0xdc, 0x61, 0x15, 0xd7, 0x24, 0x96, 0x51, 0xe4, 0x27, 0x63, 0x2e, 0x08, 0x8d, 0xe9,
	0xb5, 0x9f, 0xb0, 0x54, 0xb4, 0x8a, 0xe6, 0x93, 0x19, 0x3a, 0x61, 0xa9, 0x90, 0x91, 0x28, 0x8b,
	0x88, 0x1f, 0x44, 0x51, 0x4a, 0x38, 0x6f, 0x95, 0x74, 0x24, 0x89, 0x75, 0x35, 0x84, 0x9e, 0x43,
	0x55, 0x51, 0xd2, 0x80, 0x46, 0xad, 0xb2, 0xf2, 0x57, 0x24, 0x80, 0x03, 0x1a, 0xb5, 0x2f, 0xa1,
	0xa1, 0x3a, 0x80, 0x09, 0x4f, 0x18, 0xe5, 0x04, 0x1d, 0x01, 0x90, 0x34, 0x65, 0xa9, 0x1f, 0xb2,
	0x88, 0xa8, 0x4e, 0x34, 0x8f, 0xf6, 0x3a, 0x59, 0x37, 0x3b, 0x36, 0xc6, 0x63, 0xdc, 0x1b, 0xf7,
	0x6d, 0x5c, 0x55, 0xb4, 0x1e, 0x8b, 0x88, 0xec, 0x9e, 0x7e, 0x27, 0x22, 0x3c, 0x54, 0xad, 0xa9,
	0x1a, 0x77, 0x9f, 0xf0, 0xb0, 0xfd, 0x7b, 0x0e, 0x76, 0x26, 0x84, 0xa4, 0xa8, 0x09, 0xf9, 0x38,
	0x51, 0x31, 0xab, 0x38, 0x1f, 0x27, 0x08, 0xc1, 0x8e, 0xaa, 0x4c, 0x37, 0x53, 0xd9, 0xaa, 0xa0,
	0xc5, 0xdc, 0xbf, 0x0a, 0xe2, 0xd9, 0x22, 0x25, 0xdc, 0x34, 0xb0, 0x46, 0x17, 0xf3, 0x81, 0x81,
	0xd0, 0x5b, 0x78, 0x4c, 0xc9, 0x52, 0xf8, 0x81, 0x10, 0x64, 0x9e, 0x08, 0x5f, 0xc4, 0x73, 0xa2,
	0x5a, 0x58, 0xc0, 0xbb, 0xd2, 0xd1, 0xd5, 0xb8, 0x17, 0xcf, 0x09, 0x7a, 0x09, 0xb5, 0x20, 0x14,
	0xf1, 0x2d, 0xd1, 0x2c, 0xdd, 0x43, 0xd0, 0x90, 0x22, 0xfc, 0x17, 0x1a, 0x21, 0xa3, 0x94, 0x84,
	0x22, 0x66, 0x54, 0x0e, 0xbf, 0xa4, 0x28, 0xf5, 0x35, 0x38, 0x8c, 0xda, 0x5f, 0x43, 0x51, 0x16,
	0xc0, 0xd1, 0x6b, 0x28, 0x26, 0xd2, 0x68, 0xe5, 0x0e, 0x0a, 0x87, 0xb5, 0xa3, 0xe6, 0xba, 0x31,
	0xd2, 0x8f, 0xb5, 0xb3, 0x8d, 0x01, 0x4e, 0x88, 0x18, 0xa9, 0xdd, 0xe0, 0xe8, 0x09, 0x14, 0x2f,
	0xc9, 0x75, 0x4c, 0xcd, 0x5a, 0xe9, 0x03, 0xb2, 0xa0, 0x40, 0x68, 0x64, 0x4a, 0x97, 0x26, 0xfa,
	0x0f, 0x54, 0x65, 0x8e, 0x5c, 0x04, 0xf3, 0xc4, 0x94, 0xbd, 0x06, 0xe4, 0xae, 0x96, 0xb3, 0x88,
	0xdf, 0x40, 0xe9, 0x36, 0x98, 0x2d, 0x48, 0x96, 0x46, 0x6b, 0x9d, 0x46, 0x4f, 0x0e, 0x91, 0xf2,
	0x05, 0x3f, 0x97, 0x04, 0x6c, 0x78, 0xe8, 0x7b, 0xa8, 0xf2, 0x15, 0x0d, 0xf5, 0x50, 0xf3, 0x6a,
	0xa8, 0xcf, 0xd6, 0x2f, 0x99, 0xb8, 0x1d, 0x77, 0x45, 0x43, 0x39, 0x50, 0x5c, 0xe1, 0xc6, 0x42,
	0xfb, 0x50, 0x9e, 0x07, 0x4b, 0x9f, 0x93, 0x4f, 0x26, 0xa5, 0xd2, 0x3c, 0x58, 0xba, 0xe4, 0x93,
	0xac, 0x2a, 0x49, 0x19, 0xbb, 0x52, 0x8d, 0xaf, 0x63, 0x7d, 0x68, 0xff, 0x04, 0x95, 0x2c, 0x08,
	0x2a, 0x41, 0x7e, 0xfc, 0xa3, 0xf5, 0x08, 0xed, 0x42, 0x6d, 0x3c, 0xf5, 0xfc, 0xf1, 0xc0, 0x77,
	0x2f, 0x9c, 0x9e, 0x95, 0x43, 0x08, 0x9a, 0x06, 0x18, 0xd9, 0xfd, 0x13, 0x1b, 0xbb, 0x56, 0x1e,
	0x55, 0x60, 0xe7, 0x78, 0xea, 0x5e, 0x58, 0x05, 0x04, 0x50, 0xc2, 0xf6, 0x60, 0xea, 0xda, 0xd6,
	0x0e, 0xaa, 0x43, 0x65, 0xe8, 0x78, 0x36, 0x76, 0xba, 0x23, 0xab, 0xd8, 0x3e, 0x82, 0x4a, 0x9f,
	0x51, 0x71, 0x1a, 0xdc, 0x12, 0xb9, 0x3a, 0x62, 0x95, 0x10, 0xd3, 0x53, 0x65, 0x4b, 0xec, 0x26,
	0xe0, 0x37, 0xaa, 0xbe, 0x3a, 0x56, 0x76, 0xfb, 0xd7, 0x1c, 0xec, 0xe9, 0xf2, 0xa6, 0xc9, 0x75,
	0x1a, 0x44, 0xc4, 0x61, 0x22, 0xbe, 0x5a, 0xc9, 0xf4, 0x29, 0xa3, 0x61, 0x16, 0x40, 0x1f, 0xd0,
	0x7b, 0x28, 0x2f, 0x34, 0x4d, 0x05, 0xa9, 0x1d, 0xed, 0x6f, 0x37, 0xc9, 0x44, 0xc1, 0x19, 0x0f,
	0xbd, 0x87, 0x2a, 0x8f, 0xaf, 0x69, 0x20, 0x16, 0x29, 0x51, 0x2d, 0xaa, 0x6d, 0x5e, 0x17, 0x37,
	0x73, 0xe1, 0x35, 0xab, 0xfd, 0x0a, 0xaa, 0x36, 0x15, 0xe9, 0x6a, 0x14, 0x73, 0x21, 0x13, 0x21,
	0xf2, 0xa0, 0x46, 0x59, 0xc7, 0xfa, 0xd0, 0x0e, 0x00, 0x7a, 0x52, 0xa8, 0xb4, 0x3a, 0x7d, 0x07,
	0x95, 0x20, 0x89, 0x7d, 0x79, 0xf3, 0x15, 0xed, 0xde, 0xf0, 0x14, 0xef, 0x8c, 0x70, 0x1e, 0x5c,
	0x13, 0x6f, 0x95, 0x10, 0x5c, 0x0e, 0x92, 0x58, 0x85, 0xbe, 0xb7, 0x50, 0xf9, 0xed, 0x85, 0xfa,
	0x2d, 0x07, 0x35, 0xf5, 0xae, 0x2b, 0x02, 0xb1, 0x50, 0x32, 0xc1, 0xc9, 0xec, 0x4a, 0x29, 0x89,
	0xb9, 0xa3, 0x15, 0x09, 0x48, 0x19, 0xf9, 0x02, 0x01, 0x9c, 0x33, 0x1a, 0x0b, 0x96, 0x6e, 0x0b,
	0xa0, 0x81, 0xbf, 0x40, 0x00, 0xef, 0x65, 0x5f, 0xdc, 0xce, 0x3e, 0x01, 0x4b, 0x25, 0x2f, 0xaf,
	0x9d, 0x29, 0x1e, 0xb5, 0xa1, 0xc1, 0xd3, 0xd0, 0x97, 0x77, 0x70, 0xb3, 0x8a, 0x1a, 0x4f, 0x43,
	0x49, 0x53, 0x85, 0xbc, 0x86, 0x66, 0x44, 0xf8, 0x9a, 0xc3, 0x5b, 0xf9, 0x83, 0xc2, 0x61, 0x15,
	0xd7, 0x23, 0xc2, 0x33, 0x12, 0x97, 0x9b, 0x14, 0x05, 0x22, 0x50, 0xc9, 0xd7, 0xb1, 0xb2, 0xdb,
	0xef, 0xcc, 0x17, 0xdd, 0xc5, 0x25, 0x0f, 0xd3, 0xf8, 0x92, 0x78, 0x4b, 0xd4, 0x82, 0x72, 0x26,
	0xbc, 0x39, 0x15, 0x26, 0x3b, 0xb6, 0xcf, 0xa0, 0xa1, 0xd8, 0x77, 0xba, 0xfa, 0xe2, 0x6f, 0xba,
	0x5a, 0xfc, 0x02, 0x09, 0xfd, 0xa3, 0x60, 0xe2, 0x79, 0x4b, 0x33, 0xae, 0x1f, 0xa0, 0xc4, 0x95,
	0x65, 0x34, 0xfa, 0x60, 0x6b, 0x23, 0x32, 0x62, 0x27, 0x33, 0xb0, 0xe1, 0xcb, 0x2b, 0x2d, 0x96,
	0xfe, 0xdd, 0x4d, 0xa9, 0xe2, 0x92, 0x58, 0x9e, 0x06, 0xfc, 0x46, 0x0e, 0x99, 0xb3, 0x45, 0x1a,
	0xae, 0xff, 0x26, 0x05, 0xe5, 0x6f, 0x68, 0x34, 0xfb, 0x9f, 0xbc, 0x03, 0x94, 0xd1, 0xc2, 0x90,
	0x2d, 0xa8, 0x50, 0xea, 0xa0, 0xf5, 0xd7, 0x32, 0x54, 0xed, 0x90, 0x3a, 0xf1, 0x02, 0xc0, 0x6c,
	0x8e, 0x64, 0x99, 0x39, 0x6a, 0x44, 0xba, 0xff, 0x07, 0xbb, 0x94, 0x7c, 0xbe, 0x17, 0x49, 0x0b,
	0x70, 0x83, 0x92, 0xcf, 0x1b, 0x61, 0xee, 0xff, 0x96, 0xca, 0xff, 0xe0, 0xb7, 0x54, 0xd9, 0xea,
	0xe9, 0xfd, 0x05, 0xab, 0x6e, 0x2f, 0xd8, 0x04, 0x2a, 0x77, 0xbd, 0x6e, 0x40, 0x75, 0xea, 0xf4,
	0xed, 0xc1, 0xd0, 0xb1, 0xfb, 0xd6, 0x23, 0x79, 0xec, 0x8d, 0x9d, 0xc1, 0x10, 0x9f, 0xd9, 0x7d,
	0x2b, 0x87, 0x6a, 0x50, 0x9e, 0xd8, 0x4e, 0x7f, 0xe8, 0x9c, 0x58, 0x79, 0xa9, 0x58, 0xbd, 0xf1,
	0xd9, 0x64, 0x64, 0x7b, 0xb6, 0x55, 0x90, 0xae, 0x41, 0x77, 0x38, 0x9a, 0x62, 0xdb, 0xda, 0x79,
	0xfb, 0x4b, 0x1e, 0x9e, 0x8c, 0xcf, 0x6d, 0x3c, 0xea, 0x5e, 0xf8, 0x67, 0xb6, 0xeb, 0x76, 0x4f,
	0x6c, 0xdf, 0xbb, 0x98, 0xd8, 0xa8, 0xb5, 0x81, 0xbb, 0x27, 0x12, 0xf2, 0x9d, 0xb1, 0x63, 0x5b,
	0x8f, 0x1e, 0xf2, 0x4c, 0xe4, 0x77, 0x72, 0xe8, 0xdf, 0xf0, 0x74, 0xdb, 0x73, 0x6a, 0x8f, 0x46,
	0x63, 0x2b, 0xff, 0x90, 0x6b, 0x62, 0x4b, 0x95, 0x2d, 0xa0, 0x97, 0xf0, 0x7c, 0xdb, 0xe5, 0xe1,
	0xae, 0xe3, 0x76, 0x7b, 0xde, 0x70, 0xec, 0x58, 0x3b, 0xe8, 0x39, 0xec, 0x6f, 0x13, 0x32, 0x8d,
	0x2e, 0x3e, 0x98, 0xcd, 0xf1, 0xc0, 0xb3, 0x4a, 0xe8, 0x2b, 0x78, 0xf3, 0xf0, 0x6b, 0xfe, 0x74,
	0x72, 0x82, 0xbb, 0x7d, 0x59, 0x90, 0x37, 0x1c, 0x5c, 0x58, 0xe5, 0xb7, 0x7f, 0xe6, 0xcc, 0x3d,
	0xda, 0x90, 0x2c, 0xb4, 0x07, 0xbb, 0xbd, 0xd3, 0xee, 0xd0, 0xf1, 0x37, 0x8b, 0xdf, 0x85, 0x9a,
	0x06, 0x75, 0x61, 0xb0, 0xc1, 0xfa, 0xe0, 0xbb, 0x5e, 0xd7, 0x9b, 0xba, 0x56, 0x0d, 0x3d, 0x85,
	0xc7, 0x1a, 0x94, 0x35, 0xfa, 0x63, 0x67, 0x34, 0x74, 0x6c, 0xab, 0x8e, 0xfe, 0x05, 0x68, 0x13,
	0x1e, 0x0c, 0x14, 0xde, 0xd8, 0xc2, 0xcd, 0x18, 0xac, 0xa6, 0x2c, 0x5c, 0xe3, 0xee, 0xf4, 0xf8,
	0x6c, 0xe8, 0x6d, 0x76, 0x65, 0x17, 0xed, 0xc3, 0x9e, 0x76, 0x9a, 0xa2, 0x4e, 0xed, 0x6e, 0xdf,
	0xc6, 0x96, 0xb5, 0x8e, 0xe6, 0x4e, 0x8f, 0xdd, 0x1e, 0x1e, 0x1e, 0xdb, 0xbe, 0xf7, 0xc1, 0x7a,
	0xbc, 0xc6, 0xbd, 0x0f, 0xbe, 0xed, 0x9c, 0xfb, 0xae, 0x37, 0xc6, 0xb6, 0x85, 0x8e, 0xdb, 0x70,
	0x10, 0xb3, 0x8e, 0x54, 0xb9, 0x0e, 0x8f, 0x3e, 0x76, 0x42, 0x96, 0x92, 0x0e, 0x59, 0x0a, 0x42,
	0x23, 0xbd, 0xca, 0x97, 0x8b, 0xab, 0xcb, 0x92, 0xb2, 0xbe, 0xfd, 0x2b, 0x00, 0x00, 0xff, 0xff,
	0xfa, 0xc6, 0x07, 0x01, 0xd1, 0x0a, 0x00, 0x00,
}
