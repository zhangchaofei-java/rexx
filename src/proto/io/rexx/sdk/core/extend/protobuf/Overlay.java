

package io.rexx.sdk.core.extend.protobuf;

public final class Overlay {
  private Overlay() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  /**
   * Protobuf enum {@code protocol.OVERLAY_MESSAGE_TYPE}
   */
  public enum OVERLAY_MESSAGE_TYPE
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>OVERLAY_MSGTYPE_NONE = 0;</code>
     */
    OVERLAY_MSGTYPE_NONE(0),
    /**
     * <code>OVERLAY_MSGTYPE_PING = 1;</code>
     */
    OVERLAY_MSGTYPE_PING(1),
    /**
     * <code>OVERLAY_MSGTYPE_HELLO = 2;</code>
     */
    OVERLAY_MSGTYPE_HELLO(2),
    /**
     * <code>OVERLAY_MSGTYPE_PEERS = 3;</code>
     */
    OVERLAY_MSGTYPE_PEERS(3),
    /**
     * <code>OVERLAY_MSGTYPE_TRANSACTION = 4;</code>
     */
    OVERLAY_MSGTYPE_TRANSACTION(4),
    /**
     * <code>OVERLAY_MSGTYPE_LEDGERS = 5;</code>
     */
    OVERLAY_MSGTYPE_LEDGERS(5),
    /**
     * <code>OVERLAY_MSGTYPE_PBFT = 6;</code>
     */
    OVERLAY_MSGTYPE_PBFT(6),
    /**
     * <pre>
     *broadcast the ledger upgrade status
     * </pre>
     *
     * <code>OVERLAY_MSGTYPE_LEDGER_UPGRADE_NOTIFY = 7;</code>
     */
    OVERLAY_MSGTYPE_LEDGER_UPGRADE_NOTIFY(7),
    UNRECOGNIZED(-1),
    ;

    /**
     * <code>OVERLAY_MSGTYPE_NONE = 0;</code>
     */
    public static final int OVERLAY_MSGTYPE_NONE_VALUE = 0;
    /**
     * <code>OVERLAY_MSGTYPE_PING = 1;</code>
     */
    public static final int OVERLAY_MSGTYPE_PING_VALUE = 1;
    /**
     * <code>OVERLAY_MSGTYPE_HELLO = 2;</code>
     */
    public static final int OVERLAY_MSGTYPE_HELLO_VALUE = 2;
    /**
     * <code>OVERLAY_MSGTYPE_PEERS = 3;</code>
     */
    public static final int OVERLAY_MSGTYPE_PEERS_VALUE = 3;
    /**
     * <code>OVERLAY_MSGTYPE_TRANSACTION = 4;</code>
     */
    public static final int OVERLAY_MSGTYPE_TRANSACTION_VALUE = 4;
    /**
     * <code>OVERLAY_MSGTYPE_LEDGERS = 5;</code>
     */
    public static final int OVERLAY_MSGTYPE_LEDGERS_VALUE = 5;
    /**
     * <code>OVERLAY_MSGTYPE_PBFT = 6;</code>
     */
    public static final int OVERLAY_MSGTYPE_PBFT_VALUE = 6;
    /**
     * <pre>
     *broadcast the ledger upgrade status
     * </pre>
     *
     * <code>OVERLAY_MSGTYPE_LEDGER_UPGRADE_NOTIFY = 7;</code>
     */
    public static final int OVERLAY_MSGTYPE_LEDGER_UPGRADE_NOTIFY_VALUE = 7;


    public final int getNumber() {
      if (this == UNRECOGNIZED) {
        throw new java.lang.IllegalArgumentException(
            "Can't get the number of an unknown enum value.");
      }
      return value;
    }

    /**
     * @deprecated Use {@link #forNumber(int)} instead.
     */
    @java.lang.Deprecated
    public static OVERLAY_MESSAGE_TYPE valueOf(int value) {
      return forNumber(value);
    }

    public static OVERLAY_MESSAGE_TYPE forNumber(int value) {
      switch (value) {
        case 0: return OVERLAY_MSGTYPE_NONE;
        case 1: return OVERLAY_MSGTYPE_PING;
        case 2: return OVERLAY_MSGTYPE_HELLO;
        case 3: return OVERLAY_MSGTYPE_PEERS;
        case 4: return OVERLAY_MSGTYPE_TRANSACTION;
        case 5: return OVERLAY_MSGTYPE_LEDGERS;
        case 6: return OVERLAY_MSGTYPE_PBFT;
        case 7: return OVERLAY_MSGTYPE_LEDGER_UPGRADE_NOTIFY;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<OVERLAY_MESSAGE_TYPE>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static final com.google.protobuf.Internal.EnumLiteMap<
        OVERLAY_MESSAGE_TYPE> internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<OVERLAY_MESSAGE_TYPE>() {
            public OVERLAY_MESSAGE_TYPE findValueByNumber(int number) {
              return OVERLAY_MESSAGE_TYPE.forNumber(number);
            }
          };

    public final com.google.protobuf.Descriptors.EnumValueDescriptor
        getValueDescriptor() {
      return getDescriptor().getValues().get(ordinal());
    }
    public final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptorForType() {
      return getDescriptor();
    }
    public static final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.getDescriptor().getEnumTypes().get(0);
    }

    private static final OVERLAY_MESSAGE_TYPE[] VALUES = values();

    public static OVERLAY_MESSAGE_TYPE valueOf(
        com.google.protobuf.Descriptors.EnumValueDescriptor desc) {
      if (desc.getType() != getDescriptor()) {
        throw new java.lang.IllegalArgumentException(
          "EnumValueDescriptor is not for this type.");
      }
      if (desc.getIndex() == -1) {
        return UNRECOGNIZED;
      }
      return VALUES[desc.getIndex()];
    }

    private final int value;

    private OVERLAY_MESSAGE_TYPE(int value) {
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:protocol.OVERLAY_MESSAGE_TYPE)
  }

  /**
   * <pre>
   *message interfaces for java
   * </pre>
   *
   * Protobuf enum {@code protocol.ChainMessageType}
   */
  public enum ChainMessageType
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>CHAIN_TYPE_NONE = 0;</code>
     */
    CHAIN_TYPE_NONE(0),
    /**
     * <pre>
     * response with CHAIN_STATUS = 2;
     * </pre>
     *
     * <code>CHAIN_HELLO = 10;</code>
     */
    CHAIN_HELLO(10),
    /**
     * <code>CHAIN_TX_STATUS = 11;</code>
     */
    CHAIN_TX_STATUS(11),
    /**
     * <code>CHAIN_PEER_ONLINE = 12;</code>
     */
    CHAIN_PEER_ONLINE(12),
    /**
     * <code>CHAIN_PEER_OFFLINE = 13;</code>
     */
    CHAIN_PEER_OFFLINE(13),
    /**
     * <code>CHAIN_PEER_MESSAGE = 14;</code>
     */
    CHAIN_PEER_MESSAGE(14),
    /**
     * <code>CHAIN_SUBMITTRANSACTION = 15;</code>
     */
    CHAIN_SUBMITTRANSACTION(15),
    /**
     * <pre>
     *rexx notify the client ledger(protocol::LedgerHeader) when closed
     * </pre>
     *
     * <code>CHAIN_LEDGER_HEADER = 16;</code>
     */
    CHAIN_LEDGER_HEADER(16),
    /**
     * <pre>
     *response with CHAIN_RESPONSE
     * </pre>
     *
     * <code>CHAIN_SUBSCRIBE_TX = 17;</code>
     */
    CHAIN_SUBSCRIBE_TX(17),
    /**
     * <code>CHAIN_TX_ENV_STORE = 18;</code>
     */
    CHAIN_TX_ENV_STORE(18),
    UNRECOGNIZED(-1),
    ;

    /**
     * <code>CHAIN_TYPE_NONE = 0;</code>
     */
    public static final int CHAIN_TYPE_NONE_VALUE = 0;
    /**
     * <pre>
     * response with CHAIN_STATUS = 2;
     * </pre>
     *
     * <code>CHAIN_HELLO = 10;</code>
     */
    public static final int CHAIN_HELLO_VALUE = 10;
    /**
     * <code>CHAIN_TX_STATUS = 11;</code>
     */
    public static final int CHAIN_TX_STATUS_VALUE = 11;
    /**
     * <code>CHAIN_PEER_ONLINE = 12;</code>
     */
    public static final int CHAIN_PEER_ONLINE_VALUE = 12;
    /**
     * <code>CHAIN_PEER_OFFLINE = 13;</code>
     */
    public static final int CHAIN_PEER_OFFLINE_VALUE = 13;
    /**
     * <code>CHAIN_PEER_MESSAGE = 14;</code>
     */
    public static final int CHAIN_PEER_MESSAGE_VALUE = 14;
    /**
     * <code>CHAIN_SUBMITTRANSACTION = 15;</code>
     */
    public static final int CHAIN_SUBMITTRANSACTION_VALUE = 15;
    /**
     * <pre>
     *rexx notify the client ledger(protocol::LedgerHeader) when closed
     * </pre>
     *
     * <code>CHAIN_LEDGER_HEADER = 16;</code>
     */
    public static final int CHAIN_LEDGER_HEADER_VALUE = 16;
    /**
     * <pre>
     *response with CHAIN_RESPONSE
     * </pre>
     *
     * <code>CHAIN_SUBSCRIBE_TX = 17;</code>
     */
    public static final int CHAIN_SUBSCRIBE_TX_VALUE = 17;
    /**
     * <code>CHAIN_TX_ENV_STORE = 18;</code>
     */
    public static final int CHAIN_TX_ENV_STORE_VALUE = 18;


    public final int getNumber() {
      if (this == UNRECOGNIZED) {
        throw new java.lang.IllegalArgumentException(
            "Can't get the number of an unknown enum value.");
      }
      return value;
    }

    /**
     * @deprecated Use {@link #forNumber(int)} instead.
     */
    @java.lang.Deprecated
    public static ChainMessageType valueOf(int value) {
      return forNumber(value);
    }

    public static ChainMessageType forNumber(int value) {
      switch (value) {
        case 0: return CHAIN_TYPE_NONE;
        case 10: return CHAIN_HELLO;
        case 11: return CHAIN_TX_STATUS;
        case 12: return CHAIN_PEER_ONLINE;
        case 13: return CHAIN_PEER_OFFLINE;
        case 14: return CHAIN_PEER_MESSAGE;
        case 15: return CHAIN_SUBMITTRANSACTION;
        case 16: return CHAIN_LEDGER_HEADER;
        case 17: return CHAIN_SUBSCRIBE_TX;
        case 18: return CHAIN_TX_ENV_STORE;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<ChainMessageType>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static final com.google.protobuf.Internal.EnumLiteMap<
        ChainMessageType> internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<ChainMessageType>() {
            public ChainMessageType findValueByNumber(int number) {
              return ChainMessageType.forNumber(number);
            }
          };

    public final com.google.protobuf.Descriptors.EnumValueDescriptor
        getValueDescriptor() {
      return getDescriptor().getValues().get(ordinal());
    }
    public final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptorForType() {
      return getDescriptor();
    }
    public static final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.getDescriptor().getEnumTypes().get(1);
    }

    private static final ChainMessageType[] VALUES = values();

    public static ChainMessageType valueOf(
        com.google.protobuf.Descriptors.EnumValueDescriptor desc) {
      if (desc.getType() != getDescriptor()) {
        throw new java.lang.IllegalArgumentException(
          "EnumValueDescriptor is not for this type.");
      }
      if (desc.getIndex() == -1) {
        return UNRECOGNIZED;
      }
      return VALUES[desc.getIndex()];
    }

    private final int value;

    private ChainMessageType(int value) {
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:protocol.ChainMessageType)
  }

  public interface HelloOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.Hello)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int64 network_id = 1;</code>
     */
    long getNetworkId();

    /**
     * <code>int64 ledger_version = 2;</code>
     */
    long getLedgerVersion();

    /**
     * <code>int64 overlay_version = 3;</code>
     */
    long getOverlayVersion();

    /**
     * <code>string rexx_version = 4;</code>
     */
    java.lang.String getRexxVersion();
    /**
     * <code>string rexx_version = 4;</code>
     */
    com.google.protobuf.ByteString
        getRexxVersionBytes();

    /**
     * <code>int64 listening_port = 5;</code>
     */
    long getListeningPort();

    /**
     * <code>string node_address = 6;</code>
     */
    java.lang.String getNodeAddress();
    /**
     * <code>string node_address = 6;</code>
     */
    com.google.protobuf.ByteString
        getNodeAddressBytes();

    /**
     * <code>string node_rand = 7;</code>
     */
    java.lang.String getNodeRand();
    /**
     * <code>string node_rand = 7;</code>
     */
    com.google.protobuf.ByteString
        getNodeRandBytes();
  }
  /**
   * Protobuf type {@code protocol.Hello}
   */
  public  static final class Hello extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.Hello)
      HelloOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Hello.newBuilder() to construct.
    private Hello(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Hello() {
      networkId_ = 0L;
      ledgerVersion_ = 0L;
      overlayVersion_ = 0L;
      rexxVersion_ = "";
      listeningPort_ = 0L;
      nodeAddress_ = "";
      nodeRand_ = "";
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Hello(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {

              networkId_ = input.readInt64();
              break;
            }
            case 16: {

              ledgerVersion_ = input.readInt64();
              break;
            }
            case 24: {

              overlayVersion_ = input.readInt64();
              break;
            }
            case 34: {
              java.lang.String s = input.readStringRequireUtf8();

              rexxVersion_ = s;
              break;
            }
            case 40: {

              listeningPort_ = input.readInt64();
              break;
            }
            case 50: {
              java.lang.String s = input.readStringRequireUtf8();

              nodeAddress_ = s;
              break;
            }
            case 58: {
              java.lang.String s = input.readStringRequireUtf8();

              nodeRand_ = s;
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Hello_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Hello_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Overlay.Hello.class, io.rexx.sdk.core.extend.protobuf.Overlay.Hello.Builder.class);
    }

    public static final int NETWORK_ID_FIELD_NUMBER = 1;
    private long networkId_;
    /**
     * <code>int64 network_id = 1;</code>
     */
    public long getNetworkId() {
      return networkId_;
    }

    public static final int LEDGER_VERSION_FIELD_NUMBER = 2;
    private long ledgerVersion_;
    /**
     * <code>int64 ledger_version = 2;</code>
     */
    public long getLedgerVersion() {
      return ledgerVersion_;
    }

    public static final int OVERLAY_VERSION_FIELD_NUMBER = 3;
    private long overlayVersion_;
    /**
     * <code>int64 overlay_version = 3;</code>
     */
    public long getOverlayVersion() {
      return overlayVersion_;
    }

    public static final int REXX_VERSION_FIELD_NUMBER = 4;
    private volatile java.lang.Object rexxVersion_;
    /**
     * <code>string rexx_version = 4;</code>
     */
    public java.lang.String getRexxVersion() {
      java.lang.Object ref = rexxVersion_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        rexxVersion_ = s;
        return s;
      }
    }
    /**
     * <code>string rexx_version = 4;</code>
     */
    public com.google.protobuf.ByteString
        getRexxVersionBytes() {
      java.lang.Object ref = rexxVersion_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        rexxVersion_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int LISTENING_PORT_FIELD_NUMBER = 5;
    private long listeningPort_;
    /**
     * <code>int64 listening_port = 5;</code>
     */
    public long getListeningPort() {
      return listeningPort_;
    }

    public static final int NODE_ADDRESS_FIELD_NUMBER = 6;
    private volatile java.lang.Object nodeAddress_;
    /**
     * <code>string node_address = 6;</code>
     */
    public java.lang.String getNodeAddress() {
      java.lang.Object ref = nodeAddress_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        nodeAddress_ = s;
        return s;
      }
    }
    /**
     * <code>string node_address = 6;</code>
     */
    public com.google.protobuf.ByteString
        getNodeAddressBytes() {
      java.lang.Object ref = nodeAddress_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        nodeAddress_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int NODE_RAND_FIELD_NUMBER = 7;
    private volatile java.lang.Object nodeRand_;
    /**
     * <code>string node_rand = 7;</code>
     */
    public java.lang.String getNodeRand() {
      java.lang.Object ref = nodeRand_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        nodeRand_ = s;
        return s;
      }
    }
    /**
     * <code>string node_rand = 7;</code>
     */
    public com.google.protobuf.ByteString
        getNodeRandBytes() {
      java.lang.Object ref = nodeRand_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        nodeRand_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (networkId_ != 0L) {
        output.writeInt64(1, networkId_);
      }
      if (ledgerVersion_ != 0L) {
        output.writeInt64(2, ledgerVersion_);
      }
      if (overlayVersion_ != 0L) {
        output.writeInt64(3, overlayVersion_);
      }
      if (!getRexxVersionBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 4, rexxVersion_);
      }
      if (listeningPort_ != 0L) {
        output.writeInt64(5, listeningPort_);
      }
      if (!getNodeAddressBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 6, nodeAddress_);
      }
      if (!getNodeRandBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 7, nodeRand_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (networkId_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, networkId_);
      }
      if (ledgerVersion_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, ledgerVersion_);
      }
      if (overlayVersion_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(3, overlayVersion_);
      }
      if (!getRexxVersionBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(4, rexxVersion_);
      }
      if (listeningPort_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(5, listeningPort_);
      }
      if (!getNodeAddressBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(6, nodeAddress_);
      }
      if (!getNodeRandBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(7, nodeRand_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Overlay.Hello)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Overlay.Hello other = (io.rexx.sdk.core.extend.protobuf.Overlay.Hello) obj;

      boolean result = true;
      result = result && (getNetworkId()
          == other.getNetworkId());
      result = result && (getLedgerVersion()
          == other.getLedgerVersion());
      result = result && (getOverlayVersion()
          == other.getOverlayVersion());
      result = result && getRexxVersion()
          .equals(other.getRexxVersion());
      result = result && (getListeningPort()
          == other.getListeningPort());
      result = result && getNodeAddress()
          .equals(other.getNodeAddress());
      result = result && getNodeRand()
          .equals(other.getNodeRand());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + NETWORK_ID_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getNetworkId());
      hash = (37 * hash) + LEDGER_VERSION_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getLedgerVersion());
      hash = (37 * hash) + OVERLAY_VERSION_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getOverlayVersion());
      hash = (37 * hash) + REXX_VERSION_FIELD_NUMBER;
      hash = (53 * hash) + getRexxVersion().hashCode();
      hash = (37 * hash) + LISTENING_PORT_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getListeningPort());
      hash = (37 * hash) + NODE_ADDRESS_FIELD_NUMBER;
      hash = (53 * hash) + getNodeAddress().hashCode();
      hash = (37 * hash) + NODE_RAND_FIELD_NUMBER;
      hash = (53 * hash) + getNodeRand().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.Hello parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Hello parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Hello parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Hello parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Hello parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Hello parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Hello parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Hello parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Hello parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Hello parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Hello parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Hello parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Overlay.Hello prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code protocol.Hello}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.Hello)
        io.rexx.sdk.core.extend.protobuf.Overlay.HelloOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Hello_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Hello_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Overlay.Hello.class, io.rexx.sdk.core.extend.protobuf.Overlay.Hello.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Overlay.Hello.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        networkId_ = 0L;

        ledgerVersion_ = 0L;

        overlayVersion_ = 0L;

        rexxVersion_ = "";

        listeningPort_ = 0L;

        nodeAddress_ = "";

        nodeRand_ = "";

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Hello_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.Hello getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.Hello.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.Hello build() {
        io.rexx.sdk.core.extend.protobuf.Overlay.Hello result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.Hello buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Overlay.Hello result = new io.rexx.sdk.core.extend.protobuf.Overlay.Hello(this);
        result.networkId_ = networkId_;
        result.ledgerVersion_ = ledgerVersion_;
        result.overlayVersion_ = overlayVersion_;
        result.rexxVersion_ = rexxVersion_;
        result.listeningPort_ = listeningPort_;
        result.nodeAddress_ = nodeAddress_;
        result.nodeRand_ = nodeRand_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Overlay.Hello) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Overlay.Hello)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Overlay.Hello other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Overlay.Hello.getDefaultInstance()) return this;
        if (other.getNetworkId() != 0L) {
          setNetworkId(other.getNetworkId());
        }
        if (other.getLedgerVersion() != 0L) {
          setLedgerVersion(other.getLedgerVersion());
        }
        if (other.getOverlayVersion() != 0L) {
          setOverlayVersion(other.getOverlayVersion());
        }
        if (!other.getRexxVersion().isEmpty()) {
          rexxVersion_ = other.rexxVersion_;
          onChanged();
        }
        if (other.getListeningPort() != 0L) {
          setListeningPort(other.getListeningPort());
        }
        if (!other.getNodeAddress().isEmpty()) {
          nodeAddress_ = other.nodeAddress_;
          onChanged();
        }
        if (!other.getNodeRand().isEmpty()) {
          nodeRand_ = other.nodeRand_;
          onChanged();
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Overlay.Hello parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Overlay.Hello) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private long networkId_ ;
      /**
       * <code>int64 network_id = 1;</code>
       */
      public long getNetworkId() {
        return networkId_;
      }
      /**
       * <code>int64 network_id = 1;</code>
       */
      public Builder setNetworkId(long value) {
        
        networkId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 network_id = 1;</code>
       */
      public Builder clearNetworkId() {
        
        networkId_ = 0L;
        onChanged();
        return this;
      }

      private long ledgerVersion_ ;
      /**
       * <code>int64 ledger_version = 2;</code>
       */
      public long getLedgerVersion() {
        return ledgerVersion_;
      }
      /**
       * <code>int64 ledger_version = 2;</code>
       */
      public Builder setLedgerVersion(long value) {
        
        ledgerVersion_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 ledger_version = 2;</code>
       */
      public Builder clearLedgerVersion() {
        
        ledgerVersion_ = 0L;
        onChanged();
        return this;
      }

      private long overlayVersion_ ;
      /**
       * <code>int64 overlay_version = 3;</code>
       */
      public long getOverlayVersion() {
        return overlayVersion_;
      }
      /**
       * <code>int64 overlay_version = 3;</code>
       */
      public Builder setOverlayVersion(long value) {
        
        overlayVersion_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 overlay_version = 3;</code>
       */
      public Builder clearOverlayVersion() {
        
        overlayVersion_ = 0L;
        onChanged();
        return this;
      }

      private java.lang.Object rexxVersion_ = "";
      /**
       * <code>string rexx_version = 4;</code>
       */
      public java.lang.String getRexxVersion() {
        java.lang.Object ref = rexxVersion_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          rexxVersion_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string rexx_version = 4;</code>
       */
      public com.google.protobuf.ByteString
          getRexxVersionBytes() {
        java.lang.Object ref = rexxVersion_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          rexxVersion_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string rexx_version = 4;</code>
       */
      public Builder setRexxVersion(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        rexxVersion_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string rexx_version = 4;</code>
       */
      public Builder clearRexxVersion() {
        
        rexxVersion_ = getDefaultInstance().getRexxVersion();
        onChanged();
        return this;
      }
      /**
       * <code>string rexx_version = 4;</code>
       */
      public Builder setRexxVersionBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        rexxVersion_ = value;
        onChanged();
        return this;
      }

      private long listeningPort_ ;
      /**
       * <code>int64 listening_port = 5;</code>
       */
      public long getListeningPort() {
        return listeningPort_;
      }
      /**
       * <code>int64 listening_port = 5;</code>
       */
      public Builder setListeningPort(long value) {
        
        listeningPort_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 listening_port = 5;</code>
       */
      public Builder clearListeningPort() {
        
        listeningPort_ = 0L;
        onChanged();
        return this;
      }

      private java.lang.Object nodeAddress_ = "";
      /**
       * <code>string node_address = 6;</code>
       */
      public java.lang.String getNodeAddress() {
        java.lang.Object ref = nodeAddress_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          nodeAddress_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string node_address = 6;</code>
       */
      public com.google.protobuf.ByteString
          getNodeAddressBytes() {
        java.lang.Object ref = nodeAddress_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          nodeAddress_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string node_address = 6;</code>
       */
      public Builder setNodeAddress(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        nodeAddress_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string node_address = 6;</code>
       */
      public Builder clearNodeAddress() {
        
        nodeAddress_ = getDefaultInstance().getNodeAddress();
        onChanged();
        return this;
      }
      /**
       * <code>string node_address = 6;</code>
       */
      public Builder setNodeAddressBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        nodeAddress_ = value;
        onChanged();
        return this;
      }

      private java.lang.Object nodeRand_ = "";
      /**
       * <code>string node_rand = 7;</code>
       */
      public java.lang.String getNodeRand() {
        java.lang.Object ref = nodeRand_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          nodeRand_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string node_rand = 7;</code>
       */
      public com.google.protobuf.ByteString
          getNodeRandBytes() {
        java.lang.Object ref = nodeRand_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          nodeRand_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string node_rand = 7;</code>
       */
      public Builder setNodeRand(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        nodeRand_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string node_rand = 7;</code>
       */
      public Builder clearNodeRand() {
        
        nodeRand_ = getDefaultInstance().getNodeRand();
        onChanged();
        return this;
      }
      /**
       * <code>string node_rand = 7;</code>
       */
      public Builder setNodeRandBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        nodeRand_ = value;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.Hello)
    }

    // @@protoc_insertion_point(class_scope:protocol.Hello)
    private static final io.rexx.sdk.core.extend.protobuf.Overlay.Hello DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Overlay.Hello();
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.Hello getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Hello>
        PARSER = new com.google.protobuf.AbstractParser<Hello>() {
      public Hello parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Hello(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Hello> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Hello> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Overlay.Hello getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface HelloResponseOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.HelloResponse)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>.protocol.ERRORCODE error_code = 1;</code>
     */
    int getErrorCodeValue();
    /**
     * <code>.protocol.ERRORCODE error_code = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE getErrorCode();

    /**
     * <code>string error_desc = 2;</code>
     */
    java.lang.String getErrorDesc();
    /**
     * <code>string error_desc = 2;</code>
     */
    com.google.protobuf.ByteString
        getErrorDescBytes();
  }
  /**
   * Protobuf type {@code protocol.HelloResponse}
   */
  public  static final class HelloResponse extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.HelloResponse)
      HelloResponseOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use HelloResponse.newBuilder() to construct.
    private HelloResponse(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private HelloResponse() {
      errorCode_ = 0;
      errorDesc_ = "";
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private HelloResponse(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {
              int rawValue = input.readEnum();

              errorCode_ = rawValue;
              break;
            }
            case 18: {
              java.lang.String s = input.readStringRequireUtf8();

              errorDesc_ = s;
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_HelloResponse_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_HelloResponse_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse.class, io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse.Builder.class);
    }

    public static final int ERROR_CODE_FIELD_NUMBER = 1;
    private int errorCode_;
    /**
     * <code>.protocol.ERRORCODE error_code = 1;</code>
     */
    public int getErrorCodeValue() {
      return errorCode_;
    }
    /**
     * <code>.protocol.ERRORCODE error_code = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE getErrorCode() {
      io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE result = io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE.valueOf(errorCode_);
      return result == null ? io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE.UNRECOGNIZED : result;
    }

    public static final int ERROR_DESC_FIELD_NUMBER = 2;
    private volatile java.lang.Object errorDesc_;
    /**
     * <code>string error_desc = 2;</code>
     */
    public java.lang.String getErrorDesc() {
      java.lang.Object ref = errorDesc_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        errorDesc_ = s;
        return s;
      }
    }
    /**
     * <code>string error_desc = 2;</code>
     */
    public com.google.protobuf.ByteString
        getErrorDescBytes() {
      java.lang.Object ref = errorDesc_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        errorDesc_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (errorCode_ != io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE.ERRCODE_SUCCESS.getNumber()) {
        output.writeEnum(1, errorCode_);
      }
      if (!getErrorDescBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 2, errorDesc_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (errorCode_ != io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE.ERRCODE_SUCCESS.getNumber()) {
        size += com.google.protobuf.CodedOutputStream
          .computeEnumSize(1, errorCode_);
      }
      if (!getErrorDescBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, errorDesc_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse other = (io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse) obj;

      boolean result = true;
      result = result && errorCode_ == other.errorCode_;
      result = result && getErrorDesc()
          .equals(other.getErrorDesc());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + ERROR_CODE_FIELD_NUMBER;
      hash = (53 * hash) + errorCode_;
      hash = (37 * hash) + ERROR_DESC_FIELD_NUMBER;
      hash = (53 * hash) + getErrorDesc().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code protocol.HelloResponse}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.HelloResponse)
        io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponseOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_HelloResponse_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_HelloResponse_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse.class, io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        errorCode_ = 0;

        errorDesc_ = "";

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_HelloResponse_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse build() {
        io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse result = new io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse(this);
        result.errorCode_ = errorCode_;
        result.errorDesc_ = errorDesc_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse.getDefaultInstance()) return this;
        if (other.errorCode_ != 0) {
          setErrorCodeValue(other.getErrorCodeValue());
        }
        if (!other.getErrorDesc().isEmpty()) {
          errorDesc_ = other.errorDesc_;
          onChanged();
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private int errorCode_ = 0;
      /**
       * <code>.protocol.ERRORCODE error_code = 1;</code>
       */
      public int getErrorCodeValue() {
        return errorCode_;
      }
      /**
       * <code>.protocol.ERRORCODE error_code = 1;</code>
       */
      public Builder setErrorCodeValue(int value) {
        errorCode_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>.protocol.ERRORCODE error_code = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE getErrorCode() {
        io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE result = io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE.valueOf(errorCode_);
        return result == null ? io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE.UNRECOGNIZED : result;
      }
      /**
       * <code>.protocol.ERRORCODE error_code = 1;</code>
       */
      public Builder setErrorCode(io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE value) {
        if (value == null) {
          throw new NullPointerException();
        }
        
        errorCode_ = value.getNumber();
        onChanged();
        return this;
      }
      /**
       * <code>.protocol.ERRORCODE error_code = 1;</code>
       */
      public Builder clearErrorCode() {
        
        errorCode_ = 0;
        onChanged();
        return this;
      }

      private java.lang.Object errorDesc_ = "";
      /**
       * <code>string error_desc = 2;</code>
       */
      public java.lang.String getErrorDesc() {
        java.lang.Object ref = errorDesc_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          errorDesc_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string error_desc = 2;</code>
       */
      public com.google.protobuf.ByteString
          getErrorDescBytes() {
        java.lang.Object ref = errorDesc_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          errorDesc_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string error_desc = 2;</code>
       */
      public Builder setErrorDesc(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        errorDesc_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string error_desc = 2;</code>
       */
      public Builder clearErrorDesc() {
        
        errorDesc_ = getDefaultInstance().getErrorDesc();
        onChanged();
        return this;
      }
      /**
       * <code>string error_desc = 2;</code>
       */
      public Builder setErrorDescBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        errorDesc_ = value;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.HelloResponse)
    }

    // @@protoc_insertion_point(class_scope:protocol.HelloResponse)
    private static final io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse();
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<HelloResponse>
        PARSER = new com.google.protobuf.AbstractParser<HelloResponse>() {
      public HelloResponse parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new HelloResponse(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<HelloResponse> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<HelloResponse> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Overlay.HelloResponse getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PeerOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.Peer)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string ip = 1;</code>
     */
    java.lang.String getIp();
    /**
     * <code>string ip = 1;</code>
     */
    com.google.protobuf.ByteString
        getIpBytes();

    /**
     * <code>int64 port = 2;</code>
     */
    long getPort();

    /**
     * <code>int64 num_failures = 3;</code>
     */
    long getNumFailures();

    /**
     * <code>int64 next_attempt_time = 4;</code>
     */
    long getNextAttemptTime();

    /**
     * <code>int64 active_time = 5;</code>
     */
    long getActiveTime();

    /**
     * <code>int64 connection_id = 6;</code>
     */
    long getConnectionId();
  }
  /**
   * <pre>
   *for peers message
   * </pre>
   *
   * Protobuf type {@code protocol.Peer}
   */
  public  static final class Peer extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.Peer)
      PeerOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Peer.newBuilder() to construct.
    private Peer(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Peer() {
      ip_ = "";
      port_ = 0L;
      numFailures_ = 0L;
      nextAttemptTime_ = 0L;
      activeTime_ = 0L;
      connectionId_ = 0L;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Peer(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              java.lang.String s = input.readStringRequireUtf8();

              ip_ = s;
              break;
            }
            case 16: {

              port_ = input.readInt64();
              break;
            }
            case 24: {

              numFailures_ = input.readInt64();
              break;
            }
            case 32: {

              nextAttemptTime_ = input.readInt64();
              break;
            }
            case 40: {

              activeTime_ = input.readInt64();
              break;
            }
            case 48: {

              connectionId_ = input.readInt64();
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Peer_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Peer_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Overlay.Peer.class, io.rexx.sdk.core.extend.protobuf.Overlay.Peer.Builder.class);
    }

    public static final int IP_FIELD_NUMBER = 1;
    private volatile java.lang.Object ip_;
    /**
     * <code>string ip = 1;</code>
     */
    public java.lang.String getIp() {
      java.lang.Object ref = ip_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        ip_ = s;
        return s;
      }
    }
    /**
     * <code>string ip = 1;</code>
     */
    public com.google.protobuf.ByteString
        getIpBytes() {
      java.lang.Object ref = ip_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        ip_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int PORT_FIELD_NUMBER = 2;
    private long port_;
    /**
     * <code>int64 port = 2;</code>
     */
    public long getPort() {
      return port_;
    }

    public static final int NUM_FAILURES_FIELD_NUMBER = 3;
    private long numFailures_;
    /**
     * <code>int64 num_failures = 3;</code>
     */
    public long getNumFailures() {
      return numFailures_;
    }

    public static final int NEXT_ATTEMPT_TIME_FIELD_NUMBER = 4;
    private long nextAttemptTime_;
    /**
     * <code>int64 next_attempt_time = 4;</code>
     */
    public long getNextAttemptTime() {
      return nextAttemptTime_;
    }

    public static final int ACTIVE_TIME_FIELD_NUMBER = 5;
    private long activeTime_;
    /**
     * <code>int64 active_time = 5;</code>
     */
    public long getActiveTime() {
      return activeTime_;
    }

    public static final int CONNECTION_ID_FIELD_NUMBER = 6;
    private long connectionId_;
    /**
     * <code>int64 connection_id = 6;</code>
     */
    public long getConnectionId() {
      return connectionId_;
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (!getIpBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, ip_);
      }
      if (port_ != 0L) {
        output.writeInt64(2, port_);
      }
      if (numFailures_ != 0L) {
        output.writeInt64(3, numFailures_);
      }
      if (nextAttemptTime_ != 0L) {
        output.writeInt64(4, nextAttemptTime_);
      }
      if (activeTime_ != 0L) {
        output.writeInt64(5, activeTime_);
      }
      if (connectionId_ != 0L) {
        output.writeInt64(6, connectionId_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!getIpBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, ip_);
      }
      if (port_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, port_);
      }
      if (numFailures_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(3, numFailures_);
      }
      if (nextAttemptTime_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(4, nextAttemptTime_);
      }
      if (activeTime_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(5, activeTime_);
      }
      if (connectionId_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(6, connectionId_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Overlay.Peer)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Overlay.Peer other = (io.rexx.sdk.core.extend.protobuf.Overlay.Peer) obj;

      boolean result = true;
      result = result && getIp()
          .equals(other.getIp());
      result = result && (getPort()
          == other.getPort());
      result = result && (getNumFailures()
          == other.getNumFailures());
      result = result && (getNextAttemptTime()
          == other.getNextAttemptTime());
      result = result && (getActiveTime()
          == other.getActiveTime());
      result = result && (getConnectionId()
          == other.getConnectionId());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + IP_FIELD_NUMBER;
      hash = (53 * hash) + getIp().hashCode();
      hash = (37 * hash) + PORT_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getPort());
      hash = (37 * hash) + NUM_FAILURES_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getNumFailures());
      hash = (37 * hash) + NEXT_ATTEMPT_TIME_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getNextAttemptTime());
      hash = (37 * hash) + ACTIVE_TIME_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getActiveTime());
      hash = (37 * hash) + CONNECTION_ID_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getConnectionId());
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peer parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peer parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peer parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peer parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peer parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peer parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peer parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peer parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peer parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peer parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peer parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peer parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Overlay.Peer prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * <pre>
     *for peers message
     * </pre>
     *
     * Protobuf type {@code protocol.Peer}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.Peer)
        io.rexx.sdk.core.extend.protobuf.Overlay.PeerOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Peer_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Peer_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Overlay.Peer.class, io.rexx.sdk.core.extend.protobuf.Overlay.Peer.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Overlay.Peer.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        ip_ = "";

        port_ = 0L;

        numFailures_ = 0L;

        nextAttemptTime_ = 0L;

        activeTime_ = 0L;

        connectionId_ = 0L;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Peer_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.Peer getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.Peer.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.Peer build() {
        io.rexx.sdk.core.extend.protobuf.Overlay.Peer result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.Peer buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Overlay.Peer result = new io.rexx.sdk.core.extend.protobuf.Overlay.Peer(this);
        result.ip_ = ip_;
        result.port_ = port_;
        result.numFailures_ = numFailures_;
        result.nextAttemptTime_ = nextAttemptTime_;
        result.activeTime_ = activeTime_;
        result.connectionId_ = connectionId_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Overlay.Peer) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Overlay.Peer)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Overlay.Peer other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Overlay.Peer.getDefaultInstance()) return this;
        if (!other.getIp().isEmpty()) {
          ip_ = other.ip_;
          onChanged();
        }
        if (other.getPort() != 0L) {
          setPort(other.getPort());
        }
        if (other.getNumFailures() != 0L) {
          setNumFailures(other.getNumFailures());
        }
        if (other.getNextAttemptTime() != 0L) {
          setNextAttemptTime(other.getNextAttemptTime());
        }
        if (other.getActiveTime() != 0L) {
          setActiveTime(other.getActiveTime());
        }
        if (other.getConnectionId() != 0L) {
          setConnectionId(other.getConnectionId());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Overlay.Peer parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Overlay.Peer) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private java.lang.Object ip_ = "";
      /**
       * <code>string ip = 1;</code>
       */
      public java.lang.String getIp() {
        java.lang.Object ref = ip_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          ip_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string ip = 1;</code>
       */
      public com.google.protobuf.ByteString
          getIpBytes() {
        java.lang.Object ref = ip_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          ip_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string ip = 1;</code>
       */
      public Builder setIp(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        ip_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string ip = 1;</code>
       */
      public Builder clearIp() {
        
        ip_ = getDefaultInstance().getIp();
        onChanged();
        return this;
      }
      /**
       * <code>string ip = 1;</code>
       */
      public Builder setIpBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        ip_ = value;
        onChanged();
        return this;
      }

      private long port_ ;
      /**
       * <code>int64 port = 2;</code>
       */
      public long getPort() {
        return port_;
      }
      /**
       * <code>int64 port = 2;</code>
       */
      public Builder setPort(long value) {
        
        port_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 port = 2;</code>
       */
      public Builder clearPort() {
        
        port_ = 0L;
        onChanged();
        return this;
      }

      private long numFailures_ ;
      /**
       * <code>int64 num_failures = 3;</code>
       */
      public long getNumFailures() {
        return numFailures_;
      }
      /**
       * <code>int64 num_failures = 3;</code>
       */
      public Builder setNumFailures(long value) {
        
        numFailures_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 num_failures = 3;</code>
       */
      public Builder clearNumFailures() {
        
        numFailures_ = 0L;
        onChanged();
        return this;
      }

      private long nextAttemptTime_ ;
      /**
       * <code>int64 next_attempt_time = 4;</code>
       */
      public long getNextAttemptTime() {
        return nextAttemptTime_;
      }
      /**
       * <code>int64 next_attempt_time = 4;</code>
       */
      public Builder setNextAttemptTime(long value) {
        
        nextAttemptTime_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 next_attempt_time = 4;</code>
       */
      public Builder clearNextAttemptTime() {
        
        nextAttemptTime_ = 0L;
        onChanged();
        return this;
      }

      private long activeTime_ ;
      /**
       * <code>int64 active_time = 5;</code>
       */
      public long getActiveTime() {
        return activeTime_;
      }
      /**
       * <code>int64 active_time = 5;</code>
       */
      public Builder setActiveTime(long value) {
        
        activeTime_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 active_time = 5;</code>
       */
      public Builder clearActiveTime() {
        
        activeTime_ = 0L;
        onChanged();
        return this;
      }

      private long connectionId_ ;
      /**
       * <code>int64 connection_id = 6;</code>
       */
      public long getConnectionId() {
        return connectionId_;
      }
      /**
       * <code>int64 connection_id = 6;</code>
       */
      public Builder setConnectionId(long value) {
        
        connectionId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 connection_id = 6;</code>
       */
      public Builder clearConnectionId() {
        
        connectionId_ = 0L;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.Peer)
    }

    // @@protoc_insertion_point(class_scope:protocol.Peer)
    private static final io.rexx.sdk.core.extend.protobuf.Overlay.Peer DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Overlay.Peer();
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peer getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Peer>
        PARSER = new com.google.protobuf.AbstractParser<Peer>() {
      public Peer parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Peer(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Peer> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Peer> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Overlay.Peer getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PeersOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.Peers)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>repeated .protocol.Peer peers = 1;</code>
     */
    java.util.List<io.rexx.sdk.core.extend.protobuf.Overlay.Peer>
        getPeersList();
    /**
     * <code>repeated .protocol.Peer peers = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Overlay.Peer getPeers(int index);
    /**
     * <code>repeated .protocol.Peer peers = 1;</code>
     */
    int getPeersCount();
    /**
     * <code>repeated .protocol.Peer peers = 1;</code>
     */
    java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Overlay.PeerOrBuilder>
        getPeersOrBuilderList();
    /**
     * <code>repeated .protocol.Peer peers = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Overlay.PeerOrBuilder getPeersOrBuilder(
        int index);
  }
  /**
   * Protobuf type {@code protocol.Peers}
   */
  public  static final class Peers extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.Peers)
      PeersOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Peers.newBuilder() to construct.
    private Peers(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Peers() {
      peers_ = java.util.Collections.emptyList();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Peers(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              if (!((mutable_bitField0_ & 0x00000001) == 0x00000001)) {
                peers_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Overlay.Peer>();
                mutable_bitField0_ |= 0x00000001;
              }
              peers_.add(
                  input.readMessage(io.rexx.sdk.core.extend.protobuf.Overlay.Peer.parser(), extensionRegistry));
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        if (((mutable_bitField0_ & 0x00000001) == 0x00000001)) {
          peers_ = java.util.Collections.unmodifiableList(peers_);
        }
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Peers_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Peers_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Overlay.Peers.class, io.rexx.sdk.core.extend.protobuf.Overlay.Peers.Builder.class);
    }

    public static final int PEERS_FIELD_NUMBER = 1;
    private java.util.List<io.rexx.sdk.core.extend.protobuf.Overlay.Peer> peers_;
    /**
     * <code>repeated .protocol.Peer peers = 1;</code>
     */
    public java.util.List<io.rexx.sdk.core.extend.protobuf.Overlay.Peer> getPeersList() {
      return peers_;
    }
    /**
     * <code>repeated .protocol.Peer peers = 1;</code>
     */
    public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Overlay.PeerOrBuilder>
        getPeersOrBuilderList() {
      return peers_;
    }
    /**
     * <code>repeated .protocol.Peer peers = 1;</code>
     */
    public int getPeersCount() {
      return peers_.size();
    }
    /**
     * <code>repeated .protocol.Peer peers = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Overlay.Peer getPeers(int index) {
      return peers_.get(index);
    }
    /**
     * <code>repeated .protocol.Peer peers = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Overlay.PeerOrBuilder getPeersOrBuilder(
        int index) {
      return peers_.get(index);
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      for (int i = 0; i < peers_.size(); i++) {
        output.writeMessage(1, peers_.get(i));
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      for (int i = 0; i < peers_.size(); i++) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, peers_.get(i));
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Overlay.Peers)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Overlay.Peers other = (io.rexx.sdk.core.extend.protobuf.Overlay.Peers) obj;

      boolean result = true;
      result = result && getPeersList()
          .equals(other.getPeersList());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      if (getPeersCount() > 0) {
        hash = (37 * hash) + PEERS_FIELD_NUMBER;
        hash = (53 * hash) + getPeersList().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peers parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peers parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peers parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peers parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peers parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peers parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peers parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peers parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peers parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peers parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peers parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peers parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Overlay.Peers prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code protocol.Peers}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.Peers)
        io.rexx.sdk.core.extend.protobuf.Overlay.PeersOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Peers_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Peers_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Overlay.Peers.class, io.rexx.sdk.core.extend.protobuf.Overlay.Peers.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Overlay.Peers.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
          getPeersFieldBuilder();
        }
      }
      public Builder clear() {
        super.clear();
        if (peersBuilder_ == null) {
          peers_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000001);
        } else {
          peersBuilder_.clear();
        }
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Peers_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.Peers getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.Peers.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.Peers build() {
        io.rexx.sdk.core.extend.protobuf.Overlay.Peers result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.Peers buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Overlay.Peers result = new io.rexx.sdk.core.extend.protobuf.Overlay.Peers(this);
        int from_bitField0_ = bitField0_;
        if (peersBuilder_ == null) {
          if (((bitField0_ & 0x00000001) == 0x00000001)) {
            peers_ = java.util.Collections.unmodifiableList(peers_);
            bitField0_ = (bitField0_ & ~0x00000001);
          }
          result.peers_ = peers_;
        } else {
          result.peers_ = peersBuilder_.build();
        }
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Overlay.Peers) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Overlay.Peers)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Overlay.Peers other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Overlay.Peers.getDefaultInstance()) return this;
        if (peersBuilder_ == null) {
          if (!other.peers_.isEmpty()) {
            if (peers_.isEmpty()) {
              peers_ = other.peers_;
              bitField0_ = (bitField0_ & ~0x00000001);
            } else {
              ensurePeersIsMutable();
              peers_.addAll(other.peers_);
            }
            onChanged();
          }
        } else {
          if (!other.peers_.isEmpty()) {
            if (peersBuilder_.isEmpty()) {
              peersBuilder_.dispose();
              peersBuilder_ = null;
              peers_ = other.peers_;
              bitField0_ = (bitField0_ & ~0x00000001);
              peersBuilder_ = 
                com.google.protobuf.GeneratedMessageV3.alwaysUseFieldBuilders ?
                   getPeersFieldBuilder() : null;
            } else {
              peersBuilder_.addAllMessages(other.peers_);
            }
          }
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Overlay.Peers parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Overlay.Peers) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private java.util.List<io.rexx.sdk.core.extend.protobuf.Overlay.Peer> peers_ =
        java.util.Collections.emptyList();
      private void ensurePeersIsMutable() {
        if (!((bitField0_ & 0x00000001) == 0x00000001)) {
          peers_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Overlay.Peer>(peers_);
          bitField0_ |= 0x00000001;
         }
      }

      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Overlay.Peer, io.rexx.sdk.core.extend.protobuf.Overlay.Peer.Builder, io.rexx.sdk.core.extend.protobuf.Overlay.PeerOrBuilder> peersBuilder_;

      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Overlay.Peer> getPeersList() {
        if (peersBuilder_ == null) {
          return java.util.Collections.unmodifiableList(peers_);
        } else {
          return peersBuilder_.getMessageList();
        }
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public int getPeersCount() {
        if (peersBuilder_ == null) {
          return peers_.size();
        } else {
          return peersBuilder_.getCount();
        }
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Overlay.Peer getPeers(int index) {
        if (peersBuilder_ == null) {
          return peers_.get(index);
        } else {
          return peersBuilder_.getMessage(index);
        }
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public Builder setPeers(
          int index, io.rexx.sdk.core.extend.protobuf.Overlay.Peer value) {
        if (peersBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensurePeersIsMutable();
          peers_.set(index, value);
          onChanged();
        } else {
          peersBuilder_.setMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public Builder setPeers(
          int index, io.rexx.sdk.core.extend.protobuf.Overlay.Peer.Builder builderForValue) {
        if (peersBuilder_ == null) {
          ensurePeersIsMutable();
          peers_.set(index, builderForValue.build());
          onChanged();
        } else {
          peersBuilder_.setMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public Builder addPeers(io.rexx.sdk.core.extend.protobuf.Overlay.Peer value) {
        if (peersBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensurePeersIsMutable();
          peers_.add(value);
          onChanged();
        } else {
          peersBuilder_.addMessage(value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public Builder addPeers(
          int index, io.rexx.sdk.core.extend.protobuf.Overlay.Peer value) {
        if (peersBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensurePeersIsMutable();
          peers_.add(index, value);
          onChanged();
        } else {
          peersBuilder_.addMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public Builder addPeers(
          io.rexx.sdk.core.extend.protobuf.Overlay.Peer.Builder builderForValue) {
        if (peersBuilder_ == null) {
          ensurePeersIsMutable();
          peers_.add(builderForValue.build());
          onChanged();
        } else {
          peersBuilder_.addMessage(builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public Builder addPeers(
          int index, io.rexx.sdk.core.extend.protobuf.Overlay.Peer.Builder builderForValue) {
        if (peersBuilder_ == null) {
          ensurePeersIsMutable();
          peers_.add(index, builderForValue.build());
          onChanged();
        } else {
          peersBuilder_.addMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public Builder addAllPeers(
          java.lang.Iterable<? extends io.rexx.sdk.core.extend.protobuf.Overlay.Peer> values) {
        if (peersBuilder_ == null) {
          ensurePeersIsMutable();
          com.google.protobuf.AbstractMessageLite.Builder.addAll(
              values, peers_);
          onChanged();
        } else {
          peersBuilder_.addAllMessages(values);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public Builder clearPeers() {
        if (peersBuilder_ == null) {
          peers_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000001);
          onChanged();
        } else {
          peersBuilder_.clear();
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public Builder removePeers(int index) {
        if (peersBuilder_ == null) {
          ensurePeersIsMutable();
          peers_.remove(index);
          onChanged();
        } else {
          peersBuilder_.remove(index);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Overlay.Peer.Builder getPeersBuilder(
          int index) {
        return getPeersFieldBuilder().getBuilder(index);
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Overlay.PeerOrBuilder getPeersOrBuilder(
          int index) {
        if (peersBuilder_ == null) {
          return peers_.get(index);  } else {
          return peersBuilder_.getMessageOrBuilder(index);
        }
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Overlay.PeerOrBuilder>
           getPeersOrBuilderList() {
        if (peersBuilder_ != null) {
          return peersBuilder_.getMessageOrBuilderList();
        } else {
          return java.util.Collections.unmodifiableList(peers_);
        }
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Overlay.Peer.Builder addPeersBuilder() {
        return getPeersFieldBuilder().addBuilder(
            io.rexx.sdk.core.extend.protobuf.Overlay.Peer.getDefaultInstance());
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Overlay.Peer.Builder addPeersBuilder(
          int index) {
        return getPeersFieldBuilder().addBuilder(
            index, io.rexx.sdk.core.extend.protobuf.Overlay.Peer.getDefaultInstance());
      }
      /**
       * <code>repeated .protocol.Peer peers = 1;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Overlay.Peer.Builder>
           getPeersBuilderList() {
        return getPeersFieldBuilder().getBuilderList();
      }
      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Overlay.Peer, io.rexx.sdk.core.extend.protobuf.Overlay.Peer.Builder, io.rexx.sdk.core.extend.protobuf.Overlay.PeerOrBuilder>
          getPeersFieldBuilder() {
        if (peersBuilder_ == null) {
          peersBuilder_ = new com.google.protobuf.RepeatedFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Overlay.Peer, io.rexx.sdk.core.extend.protobuf.Overlay.Peer.Builder, io.rexx.sdk.core.extend.protobuf.Overlay.PeerOrBuilder>(
                  peers_,
                  ((bitField0_ & 0x00000001) == 0x00000001),
                  getParentForChildren(),
                  isClean());
          peers_ = null;
        }
        return peersBuilder_;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.Peers)
    }

    // @@protoc_insertion_point(class_scope:protocol.Peers)
    private static final io.rexx.sdk.core.extend.protobuf.Overlay.Peers DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Overlay.Peers();
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.Peers getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Peers>
        PARSER = new com.google.protobuf.AbstractParser<Peers>() {
      public Peers parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Peers(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Peers> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Peers> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Overlay.Peers getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface GetLedgersOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.GetLedgers)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int64 begin = 1;</code>
     */
    long getBegin();

    /**
     * <code>int64 end = 2;</code>
     */
    long getEnd();

    /**
     * <code>int64 timestamp = 3;</code>
     */
    long getTimestamp();
  }
  /**
   * <pre>
   *for getledgers
   * </pre>
   *
   * Protobuf type {@code protocol.GetLedgers}
   */
  public  static final class GetLedgers extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.GetLedgers)
      GetLedgersOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use GetLedgers.newBuilder() to construct.
    private GetLedgers(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private GetLedgers() {
      begin_ = 0L;
      end_ = 0L;
      timestamp_ = 0L;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private GetLedgers(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {

              begin_ = input.readInt64();
              break;
            }
            case 16: {

              end_ = input.readInt64();
              break;
            }
            case 24: {

              timestamp_ = input.readInt64();
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_GetLedgers_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_GetLedgers_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers.class, io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers.Builder.class);
    }

    public static final int BEGIN_FIELD_NUMBER = 1;
    private long begin_;
    /**
     * <code>int64 begin = 1;</code>
     */
    public long getBegin() {
      return begin_;
    }

    public static final int END_FIELD_NUMBER = 2;
    private long end_;
    /**
     * <code>int64 end = 2;</code>
     */
    public long getEnd() {
      return end_;
    }

    public static final int TIMESTAMP_FIELD_NUMBER = 3;
    private long timestamp_;
    /**
     * <code>int64 timestamp = 3;</code>
     */
    public long getTimestamp() {
      return timestamp_;
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (begin_ != 0L) {
        output.writeInt64(1, begin_);
      }
      if (end_ != 0L) {
        output.writeInt64(2, end_);
      }
      if (timestamp_ != 0L) {
        output.writeInt64(3, timestamp_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (begin_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, begin_);
      }
      if (end_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, end_);
      }
      if (timestamp_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(3, timestamp_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers other = (io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers) obj;

      boolean result = true;
      result = result && (getBegin()
          == other.getBegin());
      result = result && (getEnd()
          == other.getEnd());
      result = result && (getTimestamp()
          == other.getTimestamp());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + BEGIN_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getBegin());
      hash = (37 * hash) + END_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getEnd());
      hash = (37 * hash) + TIMESTAMP_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getTimestamp());
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * <pre>
     *for getledgers
     * </pre>
     *
     * Protobuf type {@code protocol.GetLedgers}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.GetLedgers)
        io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgersOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_GetLedgers_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_GetLedgers_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers.class, io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        begin_ = 0L;

        end_ = 0L;

        timestamp_ = 0L;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_GetLedgers_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers build() {
        io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers result = new io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers(this);
        result.begin_ = begin_;
        result.end_ = end_;
        result.timestamp_ = timestamp_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers.getDefaultInstance()) return this;
        if (other.getBegin() != 0L) {
          setBegin(other.getBegin());
        }
        if (other.getEnd() != 0L) {
          setEnd(other.getEnd());
        }
        if (other.getTimestamp() != 0L) {
          setTimestamp(other.getTimestamp());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private long begin_ ;
      /**
       * <code>int64 begin = 1;</code>
       */
      public long getBegin() {
        return begin_;
      }
      /**
       * <code>int64 begin = 1;</code>
       */
      public Builder setBegin(long value) {
        
        begin_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 begin = 1;</code>
       */
      public Builder clearBegin() {
        
        begin_ = 0L;
        onChanged();
        return this;
      }

      private long end_ ;
      /**
       * <code>int64 end = 2;</code>
       */
      public long getEnd() {
        return end_;
      }
      /**
       * <code>int64 end = 2;</code>
       */
      public Builder setEnd(long value) {
        
        end_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 end = 2;</code>
       */
      public Builder clearEnd() {
        
        end_ = 0L;
        onChanged();
        return this;
      }

      private long timestamp_ ;
      /**
       * <code>int64 timestamp = 3;</code>
       */
      public long getTimestamp() {
        return timestamp_;
      }
      /**
       * <code>int64 timestamp = 3;</code>
       */
      public Builder setTimestamp(long value) {
        
        timestamp_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 timestamp = 3;</code>
       */
      public Builder clearTimestamp() {
        
        timestamp_ = 0L;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.GetLedgers)
    }

    // @@protoc_insertion_point(class_scope:protocol.GetLedgers)
    private static final io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers();
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<GetLedgers>
        PARSER = new com.google.protobuf.AbstractParser<GetLedgers>() {
      public GetLedgers parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new GetLedgers(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<GetLedgers> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<GetLedgers> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Overlay.GetLedgers getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface LedgersOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.Ledgers)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>repeated .protocol.ConsensusValue values = 1;</code>
     */
    java.util.List<io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue>
        getValuesList();
    /**
     * <code>repeated .protocol.ConsensusValue values = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue getValues(int index);
    /**
     * <code>repeated .protocol.ConsensusValue values = 1;</code>
     */
    int getValuesCount();
    /**
     * <code>repeated .protocol.ConsensusValue values = 1;</code>
     */
    java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValueOrBuilder>
        getValuesOrBuilderList();
    /**
     * <code>repeated .protocol.ConsensusValue values = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValueOrBuilder getValuesOrBuilder(
        int index);

    /**
     * <code>.protocol.Ledgers.SyncCode sync_code = 2;</code>
     */
    int getSyncCodeValue();
    /**
     * <code>.protocol.Ledgers.SyncCode sync_code = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.SyncCode getSyncCode();

    /**
     * <code>int64 max_seq = 3;</code>
     */
    long getMaxSeq();

    /**
     * <code>bytes proof = 4;</code>
     */
    com.google.protobuf.ByteString getProof();
  }
  /**
   * <pre>
   *for ledgers
   * </pre>
   *
   * Protobuf type {@code protocol.Ledgers}
   */
  public  static final class Ledgers extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.Ledgers)
      LedgersOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Ledgers.newBuilder() to construct.
    private Ledgers(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Ledgers() {
      values_ = java.util.Collections.emptyList();
      syncCode_ = 0;
      maxSeq_ = 0L;
      proof_ = com.google.protobuf.ByteString.EMPTY;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Ledgers(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              if (!((mutable_bitField0_ & 0x00000001) == 0x00000001)) {
                values_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue>();
                mutable_bitField0_ |= 0x00000001;
              }
              values_.add(
                  input.readMessage(io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue.parser(), extensionRegistry));
              break;
            }
            case 16: {
              int rawValue = input.readEnum();

              syncCode_ = rawValue;
              break;
            }
            case 24: {

              maxSeq_ = input.readInt64();
              break;
            }
            case 34: {

              proof_ = input.readBytes();
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        if (((mutable_bitField0_ & 0x00000001) == 0x00000001)) {
          values_ = java.util.Collections.unmodifiableList(values_);
        }
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Ledgers_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Ledgers_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.class, io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.Builder.class);
    }

    /**
     * Protobuf enum {@code protocol.Ledgers.SyncCode}
     */
    public enum SyncCode
        implements com.google.protobuf.ProtocolMessageEnum {
      /**
       * <pre>
       *成功
       * </pre>
       *
       * <code>OK = 0;</code>
       */
      OK(0),
      /**
       * <pre>
       *节点本身处于非同步状态
       * </pre>
       *
       * <code>OUT_OF_SYNC = 1;</code>
       */
      OUT_OF_SYNC(1),
      /**
       * <pre>
       *请求的ledger数过多
       * </pre>
       *
       * <code>OUT_OF_LEDGERS = 2;</code>
       */
      OUT_OF_LEDGERS(2),
      /**
       * <pre>
       *本节点正忙
       * </pre>
       *
       * <code>BUSY = 3;</code>
       */
      BUSY(3),
      /**
       * <pre>
       *节点本身不允许同步
       * </pre>
       *
       * <code>REFUSE = 4;</code>
       */
      REFUSE(4),
      /**
       * <pre>
       *内部错误
       * </pre>
       *
       * <code>INTERNAL = 5;</code>
       */
      INTERNAL(5),
      UNRECOGNIZED(-1),
      ;

      /**
       * <pre>
       *成功
       * </pre>
       *
       * <code>OK = 0;</code>
       */
      public static final int OK_VALUE = 0;
      /**
       * <pre>
       *节点本身处于非同步状态
       * </pre>
       *
       * <code>OUT_OF_SYNC = 1;</code>
       */
      public static final int OUT_OF_SYNC_VALUE = 1;
      /**
       * <pre>
       *请求的ledger数过多
       * </pre>
       *
       * <code>OUT_OF_LEDGERS = 2;</code>
       */
      public static final int OUT_OF_LEDGERS_VALUE = 2;
      /**
       * <pre>
       *本节点正忙
       * </pre>
       *
       * <code>BUSY = 3;</code>
       */
      public static final int BUSY_VALUE = 3;
      /**
       * <pre>
       *节点本身不允许同步
       * </pre>
       *
       * <code>REFUSE = 4;</code>
       */
      public static final int REFUSE_VALUE = 4;
      /**
       * <pre>
       *内部错误
       * </pre>
       *
       * <code>INTERNAL = 5;</code>
       */
      public static final int INTERNAL_VALUE = 5;


      public final int getNumber() {
        if (this == UNRECOGNIZED) {
          throw new java.lang.IllegalArgumentException(
              "Can't get the number of an unknown enum value.");
        }
        return value;
      }

      /**
       * @deprecated Use {@link #forNumber(int)} instead.
       */
      @java.lang.Deprecated
      public static SyncCode valueOf(int value) {
        return forNumber(value);
      }

      public static SyncCode forNumber(int value) {
        switch (value) {
          case 0: return OK;
          case 1: return OUT_OF_SYNC;
          case 2: return OUT_OF_LEDGERS;
          case 3: return BUSY;
          case 4: return REFUSE;
          case 5: return INTERNAL;
          default: return null;
        }
      }

      public static com.google.protobuf.Internal.EnumLiteMap<SyncCode>
          internalGetValueMap() {
        return internalValueMap;
      }
      private static final com.google.protobuf.Internal.EnumLiteMap<
          SyncCode> internalValueMap =
            new com.google.protobuf.Internal.EnumLiteMap<SyncCode>() {
              public SyncCode findValueByNumber(int number) {
                return SyncCode.forNumber(number);
              }
            };

      public final com.google.protobuf.Descriptors.EnumValueDescriptor
          getValueDescriptor() {
        return getDescriptor().getValues().get(ordinal());
      }
      public final com.google.protobuf.Descriptors.EnumDescriptor
          getDescriptorForType() {
        return getDescriptor();
      }
      public static final com.google.protobuf.Descriptors.EnumDescriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.getDescriptor().getEnumTypes().get(0);
      }

      private static final SyncCode[] VALUES = values();

      public static SyncCode valueOf(
          com.google.protobuf.Descriptors.EnumValueDescriptor desc) {
        if (desc.getType() != getDescriptor()) {
          throw new java.lang.IllegalArgumentException(
            "EnumValueDescriptor is not for this type.");
        }
        if (desc.getIndex() == -1) {
          return UNRECOGNIZED;
        }
        return VALUES[desc.getIndex()];
      }

      private final int value;

      private SyncCode(int value) {
        this.value = value;
      }

      // @@protoc_insertion_point(enum_scope:protocol.Ledgers.SyncCode)
    }

    private int bitField0_;
    public static final int VALUES_FIELD_NUMBER = 1;
    private java.util.List<io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue> values_;
    /**
     * <code>repeated .protocol.ConsensusValue values = 1;</code>
     */
    public java.util.List<io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue> getValuesList() {
      return values_;
    }
    /**
     * <code>repeated .protocol.ConsensusValue values = 1;</code>
     */
    public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValueOrBuilder>
        getValuesOrBuilderList() {
      return values_;
    }
    /**
     * <code>repeated .protocol.ConsensusValue values = 1;</code>
     */
    public int getValuesCount() {
      return values_.size();
    }
    /**
     * <code>repeated .protocol.ConsensusValue values = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue getValues(int index) {
      return values_.get(index);
    }
    /**
     * <code>repeated .protocol.ConsensusValue values = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValueOrBuilder getValuesOrBuilder(
        int index) {
      return values_.get(index);
    }

    public static final int SYNC_CODE_FIELD_NUMBER = 2;
    private int syncCode_;
    /**
     * <code>.protocol.Ledgers.SyncCode sync_code = 2;</code>
     */
    public int getSyncCodeValue() {
      return syncCode_;
    }
    /**
     * <code>.protocol.Ledgers.SyncCode sync_code = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.SyncCode getSyncCode() {
      io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.SyncCode result = io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.SyncCode.valueOf(syncCode_);
      return result == null ? io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.SyncCode.UNRECOGNIZED : result;
    }

    public static final int MAX_SEQ_FIELD_NUMBER = 3;
    private long maxSeq_;
    /**
     * <code>int64 max_seq = 3;</code>
     */
    public long getMaxSeq() {
      return maxSeq_;
    }

    public static final int PROOF_FIELD_NUMBER = 4;
    private com.google.protobuf.ByteString proof_;
    /**
     * <code>bytes proof = 4;</code>
     */
    public com.google.protobuf.ByteString getProof() {
      return proof_;
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      for (int i = 0; i < values_.size(); i++) {
        output.writeMessage(1, values_.get(i));
      }
      if (syncCode_ != io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.SyncCode.OK.getNumber()) {
        output.writeEnum(2, syncCode_);
      }
      if (maxSeq_ != 0L) {
        output.writeInt64(3, maxSeq_);
      }
      if (!proof_.isEmpty()) {
        output.writeBytes(4, proof_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      for (int i = 0; i < values_.size(); i++) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, values_.get(i));
      }
      if (syncCode_ != io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.SyncCode.OK.getNumber()) {
        size += com.google.protobuf.CodedOutputStream
          .computeEnumSize(2, syncCode_);
      }
      if (maxSeq_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(3, maxSeq_);
      }
      if (!proof_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(4, proof_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers other = (io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers) obj;

      boolean result = true;
      result = result && getValuesList()
          .equals(other.getValuesList());
      result = result && syncCode_ == other.syncCode_;
      result = result && (getMaxSeq()
          == other.getMaxSeq());
      result = result && getProof()
          .equals(other.getProof());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      if (getValuesCount() > 0) {
        hash = (37 * hash) + VALUES_FIELD_NUMBER;
        hash = (53 * hash) + getValuesList().hashCode();
      }
      hash = (37 * hash) + SYNC_CODE_FIELD_NUMBER;
      hash = (53 * hash) + syncCode_;
      hash = (37 * hash) + MAX_SEQ_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getMaxSeq());
      hash = (37 * hash) + PROOF_FIELD_NUMBER;
      hash = (53 * hash) + getProof().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * <pre>
     *for ledgers
     * </pre>
     *
     * Protobuf type {@code protocol.Ledgers}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.Ledgers)
        io.rexx.sdk.core.extend.protobuf.Overlay.LedgersOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Ledgers_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Ledgers_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.class, io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
          getValuesFieldBuilder();
        }
      }
      public Builder clear() {
        super.clear();
        if (valuesBuilder_ == null) {
          values_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000001);
        } else {
          valuesBuilder_.clear();
        }
        syncCode_ = 0;

        maxSeq_ = 0L;

        proof_ = com.google.protobuf.ByteString.EMPTY;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_Ledgers_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers build() {
        io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers result = new io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (valuesBuilder_ == null) {
          if (((bitField0_ & 0x00000001) == 0x00000001)) {
            values_ = java.util.Collections.unmodifiableList(values_);
            bitField0_ = (bitField0_ & ~0x00000001);
          }
          result.values_ = values_;
        } else {
          result.values_ = valuesBuilder_.build();
        }
        result.syncCode_ = syncCode_;
        result.maxSeq_ = maxSeq_;
        result.proof_ = proof_;
        result.bitField0_ = to_bitField0_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.getDefaultInstance()) return this;
        if (valuesBuilder_ == null) {
          if (!other.values_.isEmpty()) {
            if (values_.isEmpty()) {
              values_ = other.values_;
              bitField0_ = (bitField0_ & ~0x00000001);
            } else {
              ensureValuesIsMutable();
              values_.addAll(other.values_);
            }
            onChanged();
          }
        } else {
          if (!other.values_.isEmpty()) {
            if (valuesBuilder_.isEmpty()) {
              valuesBuilder_.dispose();
              valuesBuilder_ = null;
              values_ = other.values_;
              bitField0_ = (bitField0_ & ~0x00000001);
              valuesBuilder_ = 
                com.google.protobuf.GeneratedMessageV3.alwaysUseFieldBuilders ?
                   getValuesFieldBuilder() : null;
            } else {
              valuesBuilder_.addAllMessages(other.values_);
            }
          }
        }
        if (other.syncCode_ != 0) {
          setSyncCodeValue(other.getSyncCodeValue());
        }
        if (other.getMaxSeq() != 0L) {
          setMaxSeq(other.getMaxSeq());
        }
        if (other.getProof() != com.google.protobuf.ByteString.EMPTY) {
          setProof(other.getProof());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private java.util.List<io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue> values_ =
        java.util.Collections.emptyList();
      private void ensureValuesIsMutable() {
        if (!((bitField0_ & 0x00000001) == 0x00000001)) {
          values_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue>(values_);
          bitField0_ |= 0x00000001;
         }
      }

      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue, io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue.Builder, io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValueOrBuilder> valuesBuilder_;

      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue> getValuesList() {
        if (valuesBuilder_ == null) {
          return java.util.Collections.unmodifiableList(values_);
        } else {
          return valuesBuilder_.getMessageList();
        }
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public int getValuesCount() {
        if (valuesBuilder_ == null) {
          return values_.size();
        } else {
          return valuesBuilder_.getCount();
        }
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue getValues(int index) {
        if (valuesBuilder_ == null) {
          return values_.get(index);
        } else {
          return valuesBuilder_.getMessage(index);
        }
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public Builder setValues(
          int index, io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue value) {
        if (valuesBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensureValuesIsMutable();
          values_.set(index, value);
          onChanged();
        } else {
          valuesBuilder_.setMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public Builder setValues(
          int index, io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue.Builder builderForValue) {
        if (valuesBuilder_ == null) {
          ensureValuesIsMutable();
          values_.set(index, builderForValue.build());
          onChanged();
        } else {
          valuesBuilder_.setMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public Builder addValues(io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue value) {
        if (valuesBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensureValuesIsMutable();
          values_.add(value);
          onChanged();
        } else {
          valuesBuilder_.addMessage(value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public Builder addValues(
          int index, io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue value) {
        if (valuesBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensureValuesIsMutable();
          values_.add(index, value);
          onChanged();
        } else {
          valuesBuilder_.addMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public Builder addValues(
          io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue.Builder builderForValue) {
        if (valuesBuilder_ == null) {
          ensureValuesIsMutable();
          values_.add(builderForValue.build());
          onChanged();
        } else {
          valuesBuilder_.addMessage(builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public Builder addValues(
          int index, io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue.Builder builderForValue) {
        if (valuesBuilder_ == null) {
          ensureValuesIsMutable();
          values_.add(index, builderForValue.build());
          onChanged();
        } else {
          valuesBuilder_.addMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public Builder addAllValues(
          java.lang.Iterable<? extends io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue> values) {
        if (valuesBuilder_ == null) {
          ensureValuesIsMutable();
          com.google.protobuf.AbstractMessageLite.Builder.addAll(
              values, values_);
          onChanged();
        } else {
          valuesBuilder_.addAllMessages(values);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public Builder clearValues() {
        if (valuesBuilder_ == null) {
          values_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000001);
          onChanged();
        } else {
          valuesBuilder_.clear();
        }
        return this;
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public Builder removeValues(int index) {
        if (valuesBuilder_ == null) {
          ensureValuesIsMutable();
          values_.remove(index);
          onChanged();
        } else {
          valuesBuilder_.remove(index);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue.Builder getValuesBuilder(
          int index) {
        return getValuesFieldBuilder().getBuilder(index);
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValueOrBuilder getValuesOrBuilder(
          int index) {
        if (valuesBuilder_ == null) {
          return values_.get(index);  } else {
          return valuesBuilder_.getMessageOrBuilder(index);
        }
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValueOrBuilder>
           getValuesOrBuilderList() {
        if (valuesBuilder_ != null) {
          return valuesBuilder_.getMessageOrBuilderList();
        } else {
          return java.util.Collections.unmodifiableList(values_);
        }
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue.Builder addValuesBuilder() {
        return getValuesFieldBuilder().addBuilder(
            io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue.getDefaultInstance());
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue.Builder addValuesBuilder(
          int index) {
        return getValuesFieldBuilder().addBuilder(
            index, io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue.getDefaultInstance());
      }
      /**
       * <code>repeated .protocol.ConsensusValue values = 1;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue.Builder>
           getValuesBuilderList() {
        return getValuesFieldBuilder().getBuilderList();
      }
      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue, io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue.Builder, io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValueOrBuilder>
          getValuesFieldBuilder() {
        if (valuesBuilder_ == null) {
          valuesBuilder_ = new com.google.protobuf.RepeatedFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue, io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValue.Builder, io.rexx.sdk.core.extend.protobuf.Chain.ConsensusValueOrBuilder>(
                  values_,
                  ((bitField0_ & 0x00000001) == 0x00000001),
                  getParentForChildren(),
                  isClean());
          values_ = null;
        }
        return valuesBuilder_;
      }

      private int syncCode_ = 0;
      /**
       * <code>.protocol.Ledgers.SyncCode sync_code = 2;</code>
       */
      public int getSyncCodeValue() {
        return syncCode_;
      }
      /**
       * <code>.protocol.Ledgers.SyncCode sync_code = 2;</code>
       */
      public Builder setSyncCodeValue(int value) {
        syncCode_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>.protocol.Ledgers.SyncCode sync_code = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.SyncCode getSyncCode() {
        io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.SyncCode result = io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.SyncCode.valueOf(syncCode_);
        return result == null ? io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.SyncCode.UNRECOGNIZED : result;
      }
      /**
       * <code>.protocol.Ledgers.SyncCode sync_code = 2;</code>
       */
      public Builder setSyncCode(io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers.SyncCode value) {
        if (value == null) {
          throw new NullPointerException();
        }
        
        syncCode_ = value.getNumber();
        onChanged();
        return this;
      }
      /**
       * <code>.protocol.Ledgers.SyncCode sync_code = 2;</code>
       */
      public Builder clearSyncCode() {
        
        syncCode_ = 0;
        onChanged();
        return this;
      }

      private long maxSeq_ ;
      /**
       * <code>int64 max_seq = 3;</code>
       */
      public long getMaxSeq() {
        return maxSeq_;
      }
      /**
       * <code>int64 max_seq = 3;</code>
       */
      public Builder setMaxSeq(long value) {
        
        maxSeq_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 max_seq = 3;</code>
       */
      public Builder clearMaxSeq() {
        
        maxSeq_ = 0L;
        onChanged();
        return this;
      }

      private com.google.protobuf.ByteString proof_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>bytes proof = 4;</code>
       */
      public com.google.protobuf.ByteString getProof() {
        return proof_;
      }
      /**
       * <code>bytes proof = 4;</code>
       */
      public Builder setProof(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        proof_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>bytes proof = 4;</code>
       */
      public Builder clearProof() {
        
        proof_ = getDefaultInstance().getProof();
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.Ledgers)
    }

    // @@protoc_insertion_point(class_scope:protocol.Ledgers)
    private static final io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers();
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Ledgers>
        PARSER = new com.google.protobuf.AbstractParser<Ledgers>() {
      public Ledgers parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Ledgers(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Ledgers> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Ledgers> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Overlay.Ledgers getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface DontHaveOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.DontHave)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int64 type = 1;</code>
     */
    long getType();

    /**
     * <code>bytes hash = 2;</code>
     */
    com.google.protobuf.ByteString getHash();
  }
  /**
   * <pre>
   *for dont have
   * </pre>
   *
   * Protobuf type {@code protocol.DontHave}
   */
  public  static final class DontHave extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.DontHave)
      DontHaveOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use DontHave.newBuilder() to construct.
    private DontHave(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private DontHave() {
      type_ = 0L;
      hash_ = com.google.protobuf.ByteString.EMPTY;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private DontHave(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {

              type_ = input.readInt64();
              break;
            }
            case 18: {

              hash_ = input.readBytes();
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_DontHave_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_DontHave_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Overlay.DontHave.class, io.rexx.sdk.core.extend.protobuf.Overlay.DontHave.Builder.class);
    }

    public static final int TYPE_FIELD_NUMBER = 1;
    private long type_;
    /**
     * <code>int64 type = 1;</code>
     */
    public long getType() {
      return type_;
    }

    public static final int HASH_FIELD_NUMBER = 2;
    private com.google.protobuf.ByteString hash_;
    /**
     * <code>bytes hash = 2;</code>
     */
    public com.google.protobuf.ByteString getHash() {
      return hash_;
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (type_ != 0L) {
        output.writeInt64(1, type_);
      }
      if (!hash_.isEmpty()) {
        output.writeBytes(2, hash_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (type_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, type_);
      }
      if (!hash_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(2, hash_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Overlay.DontHave)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Overlay.DontHave other = (io.rexx.sdk.core.extend.protobuf.Overlay.DontHave) obj;

      boolean result = true;
      result = result && (getType()
          == other.getType());
      result = result && getHash()
          .equals(other.getHash());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + TYPE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getType());
      hash = (37 * hash) + HASH_FIELD_NUMBER;
      hash = (53 * hash) + getHash().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.DontHave parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.DontHave parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.DontHave parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.DontHave parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.DontHave parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.DontHave parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.DontHave parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.DontHave parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.DontHave parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.DontHave parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.DontHave parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.DontHave parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Overlay.DontHave prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * <pre>
     *for dont have
     * </pre>
     *
     * Protobuf type {@code protocol.DontHave}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.DontHave)
        io.rexx.sdk.core.extend.protobuf.Overlay.DontHaveOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_DontHave_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_DontHave_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Overlay.DontHave.class, io.rexx.sdk.core.extend.protobuf.Overlay.DontHave.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Overlay.DontHave.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        type_ = 0L;

        hash_ = com.google.protobuf.ByteString.EMPTY;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_DontHave_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.DontHave getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.DontHave.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.DontHave build() {
        io.rexx.sdk.core.extend.protobuf.Overlay.DontHave result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.DontHave buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Overlay.DontHave result = new io.rexx.sdk.core.extend.protobuf.Overlay.DontHave(this);
        result.type_ = type_;
        result.hash_ = hash_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Overlay.DontHave) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Overlay.DontHave)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Overlay.DontHave other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Overlay.DontHave.getDefaultInstance()) return this;
        if (other.getType() != 0L) {
          setType(other.getType());
        }
        if (other.getHash() != com.google.protobuf.ByteString.EMPTY) {
          setHash(other.getHash());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Overlay.DontHave parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Overlay.DontHave) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private long type_ ;
      /**
       * <code>int64 type = 1;</code>
       */
      public long getType() {
        return type_;
      }
      /**
       * <code>int64 type = 1;</code>
       */
      public Builder setType(long value) {
        
        type_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 type = 1;</code>
       */
      public Builder clearType() {
        
        type_ = 0L;
        onChanged();
        return this;
      }

      private com.google.protobuf.ByteString hash_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>bytes hash = 2;</code>
       */
      public com.google.protobuf.ByteString getHash() {
        return hash_;
      }
      /**
       * <code>bytes hash = 2;</code>
       */
      public Builder setHash(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        hash_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>bytes hash = 2;</code>
       */
      public Builder clearHash() {
        
        hash_ = getDefaultInstance().getHash();
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.DontHave)
    }

    // @@protoc_insertion_point(class_scope:protocol.DontHave)
    private static final io.rexx.sdk.core.extend.protobuf.Overlay.DontHave DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Overlay.DontHave();
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.DontHave getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<DontHave>
        PARSER = new com.google.protobuf.AbstractParser<DontHave>() {
      public DontHave parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new DontHave(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<DontHave> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<DontHave> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Overlay.DontHave getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface LedgerUpgradeNotifyOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.LedgerUpgradeNotify)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <pre>
     *for broadcast
     * </pre>
     *
     * <code>int64 nonce = 1;</code>
     */
    long getNonce();

    /**
     * <code>.protocol.LedgerUpgrade upgrade = 2;</code>
     */
    boolean hasUpgrade();
    /**
     * <code>.protocol.LedgerUpgrade upgrade = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade getUpgrade();
    /**
     * <code>.protocol.LedgerUpgrade upgrade = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgradeOrBuilder getUpgradeOrBuilder();

    /**
     * <pre>
     *consensus sig
     * </pre>
     *
     * <code>.protocol.Signature signature = 3;</code>
     */
    boolean hasSignature();
    /**
     * <pre>
     *consensus sig
     * </pre>
     *
     * <code>.protocol.Signature signature = 3;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Common.Signature getSignature();
    /**
     * <pre>
     *consensus sig
     * </pre>
     *
     * <code>.protocol.Signature signature = 3;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Common.SignatureOrBuilder getSignatureOrBuilder();
  }
  /**
   * <pre>
   *for ledger upgrade
   * </pre>
   *
   * Protobuf type {@code protocol.LedgerUpgradeNotify}
   */
  public  static final class LedgerUpgradeNotify extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.LedgerUpgradeNotify)
      LedgerUpgradeNotifyOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use LedgerUpgradeNotify.newBuilder() to construct.
    private LedgerUpgradeNotify(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private LedgerUpgradeNotify() {
      nonce_ = 0L;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private LedgerUpgradeNotify(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {

              nonce_ = input.readInt64();
              break;
            }
            case 18: {
              io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.Builder subBuilder = null;
              if (upgrade_ != null) {
                subBuilder = upgrade_.toBuilder();
              }
              upgrade_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(upgrade_);
                upgrade_ = subBuilder.buildPartial();
              }

              break;
            }
            case 26: {
              io.rexx.sdk.core.extend.protobuf.Common.Signature.Builder subBuilder = null;
              if (signature_ != null) {
                subBuilder = signature_.toBuilder();
              }
              signature_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Common.Signature.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(signature_);
                signature_ = subBuilder.buildPartial();
              }

              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_LedgerUpgradeNotify_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_LedgerUpgradeNotify_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify.class, io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify.Builder.class);
    }

    public static final int NONCE_FIELD_NUMBER = 1;
    private long nonce_;
    /**
     * <pre>
     *for broadcast
     * </pre>
     *
     * <code>int64 nonce = 1;</code>
     */
    public long getNonce() {
      return nonce_;
    }

    public static final int UPGRADE_FIELD_NUMBER = 2;
    private io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade upgrade_;
    /**
     * <code>.protocol.LedgerUpgrade upgrade = 2;</code>
     */
    public boolean hasUpgrade() {
      return upgrade_ != null;
    }
    /**
     * <code>.protocol.LedgerUpgrade upgrade = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade getUpgrade() {
      return upgrade_ == null ? io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.getDefaultInstance() : upgrade_;
    }
    /**
     * <code>.protocol.LedgerUpgrade upgrade = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgradeOrBuilder getUpgradeOrBuilder() {
      return getUpgrade();
    }

    public static final int SIGNATURE_FIELD_NUMBER = 3;
    private io.rexx.sdk.core.extend.protobuf.Common.Signature signature_;
    /**
     * <pre>
     *consensus sig
     * </pre>
     *
     * <code>.protocol.Signature signature = 3;</code>
     */
    public boolean hasSignature() {
      return signature_ != null;
    }
    /**
     * <pre>
     *consensus sig
     * </pre>
     *
     * <code>.protocol.Signature signature = 3;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Common.Signature getSignature() {
      return signature_ == null ? io.rexx.sdk.core.extend.protobuf.Common.Signature.getDefaultInstance() : signature_;
    }
    /**
     * <pre>
     *consensus sig
     * </pre>
     *
     * <code>.protocol.Signature signature = 3;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Common.SignatureOrBuilder getSignatureOrBuilder() {
      return getSignature();
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (nonce_ != 0L) {
        output.writeInt64(1, nonce_);
      }
      if (upgrade_ != null) {
        output.writeMessage(2, getUpgrade());
      }
      if (signature_ != null) {
        output.writeMessage(3, getSignature());
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (nonce_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, nonce_);
      }
      if (upgrade_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(2, getUpgrade());
      }
      if (signature_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(3, getSignature());
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify other = (io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify) obj;

      boolean result = true;
      result = result && (getNonce()
          == other.getNonce());
      result = result && (hasUpgrade() == other.hasUpgrade());
      if (hasUpgrade()) {
        result = result && getUpgrade()
            .equals(other.getUpgrade());
      }
      result = result && (hasSignature() == other.hasSignature());
      if (hasSignature()) {
        result = result && getSignature()
            .equals(other.getSignature());
      }
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + NONCE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getNonce());
      if (hasUpgrade()) {
        hash = (37 * hash) + UPGRADE_FIELD_NUMBER;
        hash = (53 * hash) + getUpgrade().hashCode();
      }
      if (hasSignature()) {
        hash = (37 * hash) + SIGNATURE_FIELD_NUMBER;
        hash = (53 * hash) + getSignature().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * <pre>
     *for ledger upgrade
     * </pre>
     *
     * Protobuf type {@code protocol.LedgerUpgradeNotify}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.LedgerUpgradeNotify)
        io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotifyOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_LedgerUpgradeNotify_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_LedgerUpgradeNotify_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify.class, io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        nonce_ = 0L;

        if (upgradeBuilder_ == null) {
          upgrade_ = null;
        } else {
          upgrade_ = null;
          upgradeBuilder_ = null;
        }
        if (signatureBuilder_ == null) {
          signature_ = null;
        } else {
          signature_ = null;
          signatureBuilder_ = null;
        }
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_LedgerUpgradeNotify_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify build() {
        io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify result = new io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify(this);
        result.nonce_ = nonce_;
        if (upgradeBuilder_ == null) {
          result.upgrade_ = upgrade_;
        } else {
          result.upgrade_ = upgradeBuilder_.build();
        }
        if (signatureBuilder_ == null) {
          result.signature_ = signature_;
        } else {
          result.signature_ = signatureBuilder_.build();
        }
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify.getDefaultInstance()) return this;
        if (other.getNonce() != 0L) {
          setNonce(other.getNonce());
        }
        if (other.hasUpgrade()) {
          mergeUpgrade(other.getUpgrade());
        }
        if (other.hasSignature()) {
          mergeSignature(other.getSignature());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private long nonce_ ;
      /**
       * <pre>
       *for broadcast
       * </pre>
       *
       * <code>int64 nonce = 1;</code>
       */
      public long getNonce() {
        return nonce_;
      }
      /**
       * <pre>
       *for broadcast
       * </pre>
       *
       * <code>int64 nonce = 1;</code>
       */
      public Builder setNonce(long value) {
        
        nonce_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *for broadcast
       * </pre>
       *
       * <code>int64 nonce = 1;</code>
       */
      public Builder clearNonce() {
        
        nonce_ = 0L;
        onChanged();
        return this;
      }

      private io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade upgrade_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade, io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.Builder, io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgradeOrBuilder> upgradeBuilder_;
      /**
       * <code>.protocol.LedgerUpgrade upgrade = 2;</code>
       */
      public boolean hasUpgrade() {
        return upgradeBuilder_ != null || upgrade_ != null;
      }
      /**
       * <code>.protocol.LedgerUpgrade upgrade = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade getUpgrade() {
        if (upgradeBuilder_ == null) {
          return upgrade_ == null ? io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.getDefaultInstance() : upgrade_;
        } else {
          return upgradeBuilder_.getMessage();
        }
      }
      /**
       * <code>.protocol.LedgerUpgrade upgrade = 2;</code>
       */
      public Builder setUpgrade(io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade value) {
        if (upgradeBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          upgrade_ = value;
          onChanged();
        } else {
          upgradeBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.protocol.LedgerUpgrade upgrade = 2;</code>
       */
      public Builder setUpgrade(
          io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.Builder builderForValue) {
        if (upgradeBuilder_ == null) {
          upgrade_ = builderForValue.build();
          onChanged();
        } else {
          upgradeBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.protocol.LedgerUpgrade upgrade = 2;</code>
       */
      public Builder mergeUpgrade(io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade value) {
        if (upgradeBuilder_ == null) {
          if (upgrade_ != null) {
            upgrade_ =
              io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.newBuilder(upgrade_).mergeFrom(value).buildPartial();
          } else {
            upgrade_ = value;
          }
          onChanged();
        } else {
          upgradeBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.protocol.LedgerUpgrade upgrade = 2;</code>
       */
      public Builder clearUpgrade() {
        if (upgradeBuilder_ == null) {
          upgrade_ = null;
          onChanged();
        } else {
          upgrade_ = null;
          upgradeBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.protocol.LedgerUpgrade upgrade = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.Builder getUpgradeBuilder() {
        
        onChanged();
        return getUpgradeFieldBuilder().getBuilder();
      }
      /**
       * <code>.protocol.LedgerUpgrade upgrade = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgradeOrBuilder getUpgradeOrBuilder() {
        if (upgradeBuilder_ != null) {
          return upgradeBuilder_.getMessageOrBuilder();
        } else {
          return upgrade_ == null ?
              io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.getDefaultInstance() : upgrade_;
        }
      }
      /**
       * <code>.protocol.LedgerUpgrade upgrade = 2;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade, io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.Builder, io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgradeOrBuilder>
          getUpgradeFieldBuilder() {
        if (upgradeBuilder_ == null) {
          upgradeBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade, io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.Builder, io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgradeOrBuilder>(
                  getUpgrade(),
                  getParentForChildren(),
                  isClean());
          upgrade_ = null;
        }
        return upgradeBuilder_;
      }

      private io.rexx.sdk.core.extend.protobuf.Common.Signature signature_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Common.Signature, io.rexx.sdk.core.extend.protobuf.Common.Signature.Builder, io.rexx.sdk.core.extend.protobuf.Common.SignatureOrBuilder> signatureBuilder_;
      /**
       * <pre>
       *consensus sig
       * </pre>
       *
       * <code>.protocol.Signature signature = 3;</code>
       */
      public boolean hasSignature() {
        return signatureBuilder_ != null || signature_ != null;
      }
      /**
       * <pre>
       *consensus sig
       * </pre>
       *
       * <code>.protocol.Signature signature = 3;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Common.Signature getSignature() {
        if (signatureBuilder_ == null) {
          return signature_ == null ? io.rexx.sdk.core.extend.protobuf.Common.Signature.getDefaultInstance() : signature_;
        } else {
          return signatureBuilder_.getMessage();
        }
      }
      /**
       * <pre>
       *consensus sig
       * </pre>
       *
       * <code>.protocol.Signature signature = 3;</code>
       */
      public Builder setSignature(io.rexx.sdk.core.extend.protobuf.Common.Signature value) {
        if (signatureBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          signature_ = value;
          onChanged();
        } else {
          signatureBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <pre>
       *consensus sig
       * </pre>
       *
       * <code>.protocol.Signature signature = 3;</code>
       */
      public Builder setSignature(
          io.rexx.sdk.core.extend.protobuf.Common.Signature.Builder builderForValue) {
        if (signatureBuilder_ == null) {
          signature_ = builderForValue.build();
          onChanged();
        } else {
          signatureBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <pre>
       *consensus sig
       * </pre>
       *
       * <code>.protocol.Signature signature = 3;</code>
       */
      public Builder mergeSignature(io.rexx.sdk.core.extend.protobuf.Common.Signature value) {
        if (signatureBuilder_ == null) {
          if (signature_ != null) {
            signature_ =
              io.rexx.sdk.core.extend.protobuf.Common.Signature.newBuilder(signature_).mergeFrom(value).buildPartial();
          } else {
            signature_ = value;
          }
          onChanged();
        } else {
          signatureBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <pre>
       *consensus sig
       * </pre>
       *
       * <code>.protocol.Signature signature = 3;</code>
       */
      public Builder clearSignature() {
        if (signatureBuilder_ == null) {
          signature_ = null;
          onChanged();
        } else {
          signature_ = null;
          signatureBuilder_ = null;
        }

        return this;
      }
      /**
       * <pre>
       *consensus sig
       * </pre>
       *
       * <code>.protocol.Signature signature = 3;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Common.Signature.Builder getSignatureBuilder() {
        
        onChanged();
        return getSignatureFieldBuilder().getBuilder();
      }
      /**
       * <pre>
       *consensus sig
       * </pre>
       *
       * <code>.protocol.Signature signature = 3;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Common.SignatureOrBuilder getSignatureOrBuilder() {
        if (signatureBuilder_ != null) {
          return signatureBuilder_.getMessageOrBuilder();
        } else {
          return signature_ == null ?
              io.rexx.sdk.core.extend.protobuf.Common.Signature.getDefaultInstance() : signature_;
        }
      }
      /**
       * <pre>
       *consensus sig
       * </pre>
       *
       * <code>.protocol.Signature signature = 3;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Common.Signature, io.rexx.sdk.core.extend.protobuf.Common.Signature.Builder, io.rexx.sdk.core.extend.protobuf.Common.SignatureOrBuilder>
          getSignatureFieldBuilder() {
        if (signatureBuilder_ == null) {
          signatureBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Common.Signature, io.rexx.sdk.core.extend.protobuf.Common.Signature.Builder, io.rexx.sdk.core.extend.protobuf.Common.SignatureOrBuilder>(
                  getSignature(),
                  getParentForChildren(),
                  isClean());
          signature_ = null;
        }
        return signatureBuilder_;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.LedgerUpgradeNotify)
    }

    // @@protoc_insertion_point(class_scope:protocol.LedgerUpgradeNotify)
    private static final io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify();
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<LedgerUpgradeNotify>
        PARSER = new com.google.protobuf.AbstractParser<LedgerUpgradeNotify>() {
      public LedgerUpgradeNotify parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new LedgerUpgradeNotify(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<LedgerUpgradeNotify> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<LedgerUpgradeNotify> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Overlay.LedgerUpgradeNotify getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface EntryListOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.EntryList)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>repeated bytes entry = 1;</code>
     */
    java.util.List<com.google.protobuf.ByteString> getEntryList();
    /**
     * <code>repeated bytes entry = 1;</code>
     */
    int getEntryCount();
    /**
     * <code>repeated bytes entry = 1;</code>
     */
    com.google.protobuf.ByteString getEntry(int index);
  }
  /**
   * <pre>
   *for key value db storage
   * </pre>
   *
   * Protobuf type {@code protocol.EntryList}
   */
  public  static final class EntryList extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.EntryList)
      EntryListOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use EntryList.newBuilder() to construct.
    private EntryList(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private EntryList() {
      entry_ = java.util.Collections.emptyList();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private EntryList(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              if (!((mutable_bitField0_ & 0x00000001) == 0x00000001)) {
                entry_ = new java.util.ArrayList<com.google.protobuf.ByteString>();
                mutable_bitField0_ |= 0x00000001;
              }
              entry_.add(input.readBytes());
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        if (((mutable_bitField0_ & 0x00000001) == 0x00000001)) {
          entry_ = java.util.Collections.unmodifiableList(entry_);
        }
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_EntryList_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_EntryList_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Overlay.EntryList.class, io.rexx.sdk.core.extend.protobuf.Overlay.EntryList.Builder.class);
    }

    public static final int ENTRY_FIELD_NUMBER = 1;
    private java.util.List<com.google.protobuf.ByteString> entry_;
    /**
     * <code>repeated bytes entry = 1;</code>
     */
    public java.util.List<com.google.protobuf.ByteString>
        getEntryList() {
      return entry_;
    }
    /**
     * <code>repeated bytes entry = 1;</code>
     */
    public int getEntryCount() {
      return entry_.size();
    }
    /**
     * <code>repeated bytes entry = 1;</code>
     */
    public com.google.protobuf.ByteString getEntry(int index) {
      return entry_.get(index);
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      for (int i = 0; i < entry_.size(); i++) {
        output.writeBytes(1, entry_.get(i));
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      {
        int dataSize = 0;
        for (int i = 0; i < entry_.size(); i++) {
          dataSize += com.google.protobuf.CodedOutputStream
            .computeBytesSizeNoTag(entry_.get(i));
        }
        size += dataSize;
        size += 1 * getEntryList().size();
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Overlay.EntryList)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Overlay.EntryList other = (io.rexx.sdk.core.extend.protobuf.Overlay.EntryList) obj;

      boolean result = true;
      result = result && getEntryList()
          .equals(other.getEntryList());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      if (getEntryCount() > 0) {
        hash = (37 * hash) + ENTRY_FIELD_NUMBER;
        hash = (53 * hash) + getEntryList().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.EntryList parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.EntryList parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.EntryList parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.EntryList parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.EntryList parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.EntryList parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.EntryList parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.EntryList parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.EntryList parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.EntryList parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.EntryList parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.EntryList parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Overlay.EntryList prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * <pre>
     *for key value db storage
     * </pre>
     *
     * Protobuf type {@code protocol.EntryList}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.EntryList)
        io.rexx.sdk.core.extend.protobuf.Overlay.EntryListOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_EntryList_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_EntryList_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Overlay.EntryList.class, io.rexx.sdk.core.extend.protobuf.Overlay.EntryList.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Overlay.EntryList.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        entry_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000001);
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_EntryList_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.EntryList getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.EntryList.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.EntryList build() {
        io.rexx.sdk.core.extend.protobuf.Overlay.EntryList result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.EntryList buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Overlay.EntryList result = new io.rexx.sdk.core.extend.protobuf.Overlay.EntryList(this);
        int from_bitField0_ = bitField0_;
        if (((bitField0_ & 0x00000001) == 0x00000001)) {
          entry_ = java.util.Collections.unmodifiableList(entry_);
          bitField0_ = (bitField0_ & ~0x00000001);
        }
        result.entry_ = entry_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Overlay.EntryList) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Overlay.EntryList)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Overlay.EntryList other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Overlay.EntryList.getDefaultInstance()) return this;
        if (!other.entry_.isEmpty()) {
          if (entry_.isEmpty()) {
            entry_ = other.entry_;
            bitField0_ = (bitField0_ & ~0x00000001);
          } else {
            ensureEntryIsMutable();
            entry_.addAll(other.entry_);
          }
          onChanged();
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Overlay.EntryList parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Overlay.EntryList) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private java.util.List<com.google.protobuf.ByteString> entry_ = java.util.Collections.emptyList();
      private void ensureEntryIsMutable() {
        if (!((bitField0_ & 0x00000001) == 0x00000001)) {
          entry_ = new java.util.ArrayList<com.google.protobuf.ByteString>(entry_);
          bitField0_ |= 0x00000001;
         }
      }
      /**
       * <code>repeated bytes entry = 1;</code>
       */
      public java.util.List<com.google.protobuf.ByteString>
          getEntryList() {
        return java.util.Collections.unmodifiableList(entry_);
      }
      /**
       * <code>repeated bytes entry = 1;</code>
       */
      public int getEntryCount() {
        return entry_.size();
      }
      /**
       * <code>repeated bytes entry = 1;</code>
       */
      public com.google.protobuf.ByteString getEntry(int index) {
        return entry_.get(index);
      }
      /**
       * <code>repeated bytes entry = 1;</code>
       */
      public Builder setEntry(
          int index, com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  ensureEntryIsMutable();
        entry_.set(index, value);
        onChanged();
        return this;
      }
      /**
       * <code>repeated bytes entry = 1;</code>
       */
      public Builder addEntry(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  ensureEntryIsMutable();
        entry_.add(value);
        onChanged();
        return this;
      }
      /**
       * <code>repeated bytes entry = 1;</code>
       */
      public Builder addAllEntry(
          java.lang.Iterable<? extends com.google.protobuf.ByteString> values) {
        ensureEntryIsMutable();
        com.google.protobuf.AbstractMessageLite.Builder.addAll(
            values, entry_);
        onChanged();
        return this;
      }
      /**
       * <code>repeated bytes entry = 1;</code>
       */
      public Builder clearEntry() {
        entry_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000001);
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.EntryList)
    }

    // @@protoc_insertion_point(class_scope:protocol.EntryList)
    private static final io.rexx.sdk.core.extend.protobuf.Overlay.EntryList DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Overlay.EntryList();
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.EntryList getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<EntryList>
        PARSER = new com.google.protobuf.AbstractParser<EntryList>() {
      public EntryList parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new EntryList(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<EntryList> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<EntryList> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Overlay.EntryList getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface ChainHelloOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.ChainHello)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <pre>
     *default enable all apis
     * </pre>
     *
     * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
     */
    java.util.List<io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType> getApiListList();
    /**
     * <pre>
     *default enable all apis
     * </pre>
     *
     * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
     */
    int getApiListCount();
    /**
     * <pre>
     *default enable all apis
     * </pre>
     *
     * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType getApiList(int index);
    /**
     * <pre>
     *default enable all apis
     * </pre>
     *
     * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
     */
    java.util.List<java.lang.Integer>
    getApiListValueList();
    /**
     * <pre>
     *default enable all apis
     * </pre>
     *
     * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
     */
    int getApiListValue(int index);

    /**
     * <code>int64 timestamp = 2;</code>
     */
    long getTimestamp();
  }
  /**
   * <pre>
   *register notification events
   * </pre>
   *
   * Protobuf type {@code protocol.ChainHello}
   */
  public  static final class ChainHello extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.ChainHello)
      ChainHelloOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use ChainHello.newBuilder() to construct.
    private ChainHello(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private ChainHello() {
      apiList_ = java.util.Collections.emptyList();
      timestamp_ = 0L;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private ChainHello(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {
              int rawValue = input.readEnum();
              if (!((mutable_bitField0_ & 0x00000001) == 0x00000001)) {
                apiList_ = new java.util.ArrayList<java.lang.Integer>();
                mutable_bitField0_ |= 0x00000001;
              }
              apiList_.add(rawValue);
              break;
            }
            case 10: {
              int length = input.readRawVarint32();
              int oldLimit = input.pushLimit(length);
              while(input.getBytesUntilLimit() > 0) {
                int rawValue = input.readEnum();
                if (!((mutable_bitField0_ & 0x00000001) == 0x00000001)) {
                  apiList_ = new java.util.ArrayList<java.lang.Integer>();
                  mutable_bitField0_ |= 0x00000001;
                }
                apiList_.add(rawValue);
              }
              input.popLimit(oldLimit);
              break;
            }
            case 16: {

              timestamp_ = input.readInt64();
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        if (((mutable_bitField0_ & 0x00000001) == 0x00000001)) {
          apiList_ = java.util.Collections.unmodifiableList(apiList_);
        }
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainHello_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainHello_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello.class, io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello.Builder.class);
    }

    private int bitField0_;
    public static final int API_LIST_FIELD_NUMBER = 1;
    private java.util.List<java.lang.Integer> apiList_;
    private static final com.google.protobuf.Internal.ListAdapter.Converter<
        java.lang.Integer, io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType> apiList_converter_ =
            new com.google.protobuf.Internal.ListAdapter.Converter<
                java.lang.Integer, io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType>() {
              public io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType convert(java.lang.Integer from) {
                io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType result = io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType.valueOf(from);
                return result == null ? io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType.UNRECOGNIZED : result;
              }
            };
    /**
     * <pre>
     *default enable all apis
     * </pre>
     *
     * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
     */
    public java.util.List<io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType> getApiListList() {
      return new com.google.protobuf.Internal.ListAdapter<
          java.lang.Integer, io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType>(apiList_, apiList_converter_);
    }
    /**
     * <pre>
     *default enable all apis
     * </pre>
     *
     * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
     */
    public int getApiListCount() {
      return apiList_.size();
    }
    /**
     * <pre>
     *default enable all apis
     * </pre>
     *
     * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType getApiList(int index) {
      return apiList_converter_.convert(apiList_.get(index));
    }
    /**
     * <pre>
     *default enable all apis
     * </pre>
     *
     * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
     */
    public java.util.List<java.lang.Integer>
    getApiListValueList() {
      return apiList_;
    }
    /**
     * <pre>
     *default enable all apis
     * </pre>
     *
     * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
     */
    public int getApiListValue(int index) {
      return apiList_.get(index);
    }
    private int apiListMemoizedSerializedSize;

    public static final int TIMESTAMP_FIELD_NUMBER = 2;
    private long timestamp_;
    /**
     * <code>int64 timestamp = 2;</code>
     */
    public long getTimestamp() {
      return timestamp_;
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      getSerializedSize();
      if (getApiListList().size() > 0) {
        output.writeUInt32NoTag(10);
        output.writeUInt32NoTag(apiListMemoizedSerializedSize);
      }
      for (int i = 0; i < apiList_.size(); i++) {
        output.writeEnumNoTag(apiList_.get(i));
      }
      if (timestamp_ != 0L) {
        output.writeInt64(2, timestamp_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      {
        int dataSize = 0;
        for (int i = 0; i < apiList_.size(); i++) {
          dataSize += com.google.protobuf.CodedOutputStream
            .computeEnumSizeNoTag(apiList_.get(i));
        }
        size += dataSize;
        if (!getApiListList().isEmpty()) {  size += 1;
          size += com.google.protobuf.CodedOutputStream
            .computeUInt32SizeNoTag(dataSize);
        }apiListMemoizedSerializedSize = dataSize;
      }
      if (timestamp_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, timestamp_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello other = (io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello) obj;

      boolean result = true;
      result = result && apiList_.equals(other.apiList_);
      result = result && (getTimestamp()
          == other.getTimestamp());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      if (getApiListCount() > 0) {
        hash = (37 * hash) + API_LIST_FIELD_NUMBER;
        hash = (53 * hash) + apiList_.hashCode();
      }
      hash = (37 * hash) + TIMESTAMP_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getTimestamp());
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * <pre>
     *register notification events
     * </pre>
     *
     * Protobuf type {@code protocol.ChainHello}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.ChainHello)
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainHelloOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainHello_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainHello_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello.class, io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        apiList_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000001);
        timestamp_ = 0L;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainHello_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello build() {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello result = new io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((bitField0_ & 0x00000001) == 0x00000001)) {
          apiList_ = java.util.Collections.unmodifiableList(apiList_);
          bitField0_ = (bitField0_ & ~0x00000001);
        }
        result.apiList_ = apiList_;
        result.timestamp_ = timestamp_;
        result.bitField0_ = to_bitField0_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello.getDefaultInstance()) return this;
        if (!other.apiList_.isEmpty()) {
          if (apiList_.isEmpty()) {
            apiList_ = other.apiList_;
            bitField0_ = (bitField0_ & ~0x00000001);
          } else {
            ensureApiListIsMutable();
            apiList_.addAll(other.apiList_);
          }
          onChanged();
        }
        if (other.getTimestamp() != 0L) {
          setTimestamp(other.getTimestamp());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private java.util.List<java.lang.Integer> apiList_ =
        java.util.Collections.emptyList();
      private void ensureApiListIsMutable() {
        if (!((bitField0_ & 0x00000001) == 0x00000001)) {
          apiList_ = new java.util.ArrayList<java.lang.Integer>(apiList_);
          bitField0_ |= 0x00000001;
        }
      }
      /**
       * <pre>
       *default enable all apis
       * </pre>
       *
       * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType> getApiListList() {
        return new com.google.protobuf.Internal.ListAdapter<
            java.lang.Integer, io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType>(apiList_, apiList_converter_);
      }
      /**
       * <pre>
       *default enable all apis
       * </pre>
       *
       * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
       */
      public int getApiListCount() {
        return apiList_.size();
      }
      /**
       * <pre>
       *default enable all apis
       * </pre>
       *
       * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType getApiList(int index) {
        return apiList_converter_.convert(apiList_.get(index));
      }
      /**
       * <pre>
       *default enable all apis
       * </pre>
       *
       * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
       */
      public Builder setApiList(
          int index, io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType value) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureApiListIsMutable();
        apiList_.set(index, value.getNumber());
        onChanged();
        return this;
      }
      /**
       * <pre>
       *default enable all apis
       * </pre>
       *
       * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
       */
      public Builder addApiList(io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType value) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureApiListIsMutable();
        apiList_.add(value.getNumber());
        onChanged();
        return this;
      }
      /**
       * <pre>
       *default enable all apis
       * </pre>
       *
       * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
       */
      public Builder addAllApiList(
          java.lang.Iterable<? extends io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType> values) {
        ensureApiListIsMutable();
        for (io.rexx.sdk.core.extend.protobuf.Overlay.ChainMessageType value : values) {
          apiList_.add(value.getNumber());
        }
        onChanged();
        return this;
      }
      /**
       * <pre>
       *default enable all apis
       * </pre>
       *
       * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
       */
      public Builder clearApiList() {
        apiList_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000001);
        onChanged();
        return this;
      }
      /**
       * <pre>
       *default enable all apis
       * </pre>
       *
       * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
       */
      public java.util.List<java.lang.Integer>
      getApiListValueList() {
        return java.util.Collections.unmodifiableList(apiList_);
      }
      /**
       * <pre>
       *default enable all apis
       * </pre>
       *
       * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
       */
      public int getApiListValue(int index) {
        return apiList_.get(index);
      }
      /**
       * <pre>
       *default enable all apis
       * </pre>
       *
       * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
       */
      public Builder setApiListValue(
          int index, int value) {
        ensureApiListIsMutable();
        apiList_.set(index, value);
        onChanged();
        return this;
      }
      /**
       * <pre>
       *default enable all apis
       * </pre>
       *
       * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
       */
      public Builder addApiListValue(int value) {
        ensureApiListIsMutable();
        apiList_.add(value);
        onChanged();
        return this;
      }
      /**
       * <pre>
       *default enable all apis
       * </pre>
       *
       * <code>repeated .protocol.ChainMessageType api_list = 1;</code>
       */
      public Builder addAllApiListValue(
          java.lang.Iterable<java.lang.Integer> values) {
        ensureApiListIsMutable();
        for (int value : values) {
          apiList_.add(value);
        }
        onChanged();
        return this;
      }

      private long timestamp_ ;
      /**
       * <code>int64 timestamp = 2;</code>
       */
      public long getTimestamp() {
        return timestamp_;
      }
      /**
       * <code>int64 timestamp = 2;</code>
       */
      public Builder setTimestamp(long value) {
        
        timestamp_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 timestamp = 2;</code>
       */
      public Builder clearTimestamp() {
        
        timestamp_ = 0L;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.ChainHello)
    }

    // @@protoc_insertion_point(class_scope:protocol.ChainHello)
    private static final io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello();
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<ChainHello>
        PARSER = new com.google.protobuf.AbstractParser<ChainHello>() {
      public ChainHello parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new ChainHello(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<ChainHello> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<ChainHello> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Overlay.ChainHello getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface ChainStatusOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.ChainStatus)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string self_addr = 1;</code>
     */
    java.lang.String getSelfAddr();
    /**
     * <code>string self_addr = 1;</code>
     */
    com.google.protobuf.ByteString
        getSelfAddrBytes();

    /**
     * <code>int64 ledger_version = 2;</code>
     */
    long getLedgerVersion();

    /**
     * <code>int64 monitor_version = 3;</code>
     */
    long getMonitorVersion();

    /**
     * <code>string rexx_version = 4;</code>
     */
    java.lang.String getRexxVersion();
    /**
     * <code>string rexx_version = 4;</code>
     */
    com.google.protobuf.ByteString
        getRexxVersionBytes();

    /**
     * <code>int64 timestamp = 5;</code>
     */
    long getTimestamp();
  }
  /**
   * <pre>
   *1.ChainHello response
   *2.async notification from local
   * </pre>
   *
   * Protobuf type {@code protocol.ChainStatus}
   */
  public  static final class ChainStatus extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.ChainStatus)
      ChainStatusOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use ChainStatus.newBuilder() to construct.
    private ChainStatus(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private ChainStatus() {
      selfAddr_ = "";
      ledgerVersion_ = 0L;
      monitorVersion_ = 0L;
      rexxVersion_ = "";
      timestamp_ = 0L;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private ChainStatus(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              java.lang.String s = input.readStringRequireUtf8();

              selfAddr_ = s;
              break;
            }
            case 16: {

              ledgerVersion_ = input.readInt64();
              break;
            }
            case 24: {

              monitorVersion_ = input.readInt64();
              break;
            }
            case 34: {
              java.lang.String s = input.readStringRequireUtf8();

              rexxVersion_ = s;
              break;
            }
            case 40: {

              timestamp_ = input.readInt64();
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainStatus_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainStatus_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus.class, io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus.Builder.class);
    }

    public static final int SELF_ADDR_FIELD_NUMBER = 1;
    private volatile java.lang.Object selfAddr_;
    /**
     * <code>string self_addr = 1;</code>
     */
    public java.lang.String getSelfAddr() {
      java.lang.Object ref = selfAddr_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        selfAddr_ = s;
        return s;
      }
    }
    /**
     * <code>string self_addr = 1;</code>
     */
    public com.google.protobuf.ByteString
        getSelfAddrBytes() {
      java.lang.Object ref = selfAddr_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        selfAddr_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int LEDGER_VERSION_FIELD_NUMBER = 2;
    private long ledgerVersion_;
    /**
     * <code>int64 ledger_version = 2;</code>
     */
    public long getLedgerVersion() {
      return ledgerVersion_;
    }

    public static final int MONITOR_VERSION_FIELD_NUMBER = 3;
    private long monitorVersion_;
    /**
     * <code>int64 monitor_version = 3;</code>
     */
    public long getMonitorVersion() {
      return monitorVersion_;
    }

    public static final int REXX_VERSION_FIELD_NUMBER = 4;
    private volatile java.lang.Object rexxVersion_;
    /**
     * <code>string rexx_version = 4;</code>
     */
    public java.lang.String getRexxVersion() {
      java.lang.Object ref = rexxVersion_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        rexxVersion_ = s;
        return s;
      }
    }
    /**
     * <code>string rexx_version = 4;</code>
     */
    public com.google.protobuf.ByteString
        getRexxVersionBytes() {
      java.lang.Object ref = rexxVersion_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        rexxVersion_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int TIMESTAMP_FIELD_NUMBER = 5;
    private long timestamp_;
    /**
     * <code>int64 timestamp = 5;</code>
     */
    public long getTimestamp() {
      return timestamp_;
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (!getSelfAddrBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, selfAddr_);
      }
      if (ledgerVersion_ != 0L) {
        output.writeInt64(2, ledgerVersion_);
      }
      if (monitorVersion_ != 0L) {
        output.writeInt64(3, monitorVersion_);
      }
      if (!getRexxVersionBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 4, rexxVersion_);
      }
      if (timestamp_ != 0L) {
        output.writeInt64(5, timestamp_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!getSelfAddrBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, selfAddr_);
      }
      if (ledgerVersion_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, ledgerVersion_);
      }
      if (monitorVersion_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(3, monitorVersion_);
      }
      if (!getRexxVersionBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(4, rexxVersion_);
      }
      if (timestamp_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(5, timestamp_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus other = (io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus) obj;

      boolean result = true;
      result = result && getSelfAddr()
          .equals(other.getSelfAddr());
      result = result && (getLedgerVersion()
          == other.getLedgerVersion());
      result = result && (getMonitorVersion()
          == other.getMonitorVersion());
      result = result && getRexxVersion()
          .equals(other.getRexxVersion());
      result = result && (getTimestamp()
          == other.getTimestamp());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + SELF_ADDR_FIELD_NUMBER;
      hash = (53 * hash) + getSelfAddr().hashCode();
      hash = (37 * hash) + LEDGER_VERSION_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getLedgerVersion());
      hash = (37 * hash) + MONITOR_VERSION_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getMonitorVersion());
      hash = (37 * hash) + REXX_VERSION_FIELD_NUMBER;
      hash = (53 * hash) + getRexxVersion().hashCode();
      hash = (37 * hash) + TIMESTAMP_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getTimestamp());
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * <pre>
     *1.ChainHello response
     *2.async notification from local
     * </pre>
     *
     * Protobuf type {@code protocol.ChainStatus}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.ChainStatus)
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatusOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainStatus_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainStatus_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus.class, io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        selfAddr_ = "";

        ledgerVersion_ = 0L;

        monitorVersion_ = 0L;

        rexxVersion_ = "";

        timestamp_ = 0L;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainStatus_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus build() {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus result = new io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus(this);
        result.selfAddr_ = selfAddr_;
        result.ledgerVersion_ = ledgerVersion_;
        result.monitorVersion_ = monitorVersion_;
        result.rexxVersion_ = rexxVersion_;
        result.timestamp_ = timestamp_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus.getDefaultInstance()) return this;
        if (!other.getSelfAddr().isEmpty()) {
          selfAddr_ = other.selfAddr_;
          onChanged();
        }
        if (other.getLedgerVersion() != 0L) {
          setLedgerVersion(other.getLedgerVersion());
        }
        if (other.getMonitorVersion() != 0L) {
          setMonitorVersion(other.getMonitorVersion());
        }
        if (!other.getRexxVersion().isEmpty()) {
          rexxVersion_ = other.rexxVersion_;
          onChanged();
        }
        if (other.getTimestamp() != 0L) {
          setTimestamp(other.getTimestamp());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private java.lang.Object selfAddr_ = "";
      /**
       * <code>string self_addr = 1;</code>
       */
      public java.lang.String getSelfAddr() {
        java.lang.Object ref = selfAddr_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          selfAddr_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string self_addr = 1;</code>
       */
      public com.google.protobuf.ByteString
          getSelfAddrBytes() {
        java.lang.Object ref = selfAddr_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          selfAddr_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string self_addr = 1;</code>
       */
      public Builder setSelfAddr(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        selfAddr_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string self_addr = 1;</code>
       */
      public Builder clearSelfAddr() {
        
        selfAddr_ = getDefaultInstance().getSelfAddr();
        onChanged();
        return this;
      }
      /**
       * <code>string self_addr = 1;</code>
       */
      public Builder setSelfAddrBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        selfAddr_ = value;
        onChanged();
        return this;
      }

      private long ledgerVersion_ ;
      /**
       * <code>int64 ledger_version = 2;</code>
       */
      public long getLedgerVersion() {
        return ledgerVersion_;
      }
      /**
       * <code>int64 ledger_version = 2;</code>
       */
      public Builder setLedgerVersion(long value) {
        
        ledgerVersion_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 ledger_version = 2;</code>
       */
      public Builder clearLedgerVersion() {
        
        ledgerVersion_ = 0L;
        onChanged();
        return this;
      }

      private long monitorVersion_ ;
      /**
       * <code>int64 monitor_version = 3;</code>
       */
      public long getMonitorVersion() {
        return monitorVersion_;
      }
      /**
       * <code>int64 monitor_version = 3;</code>
       */
      public Builder setMonitorVersion(long value) {
        
        monitorVersion_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 monitor_version = 3;</code>
       */
      public Builder clearMonitorVersion() {
        
        monitorVersion_ = 0L;
        onChanged();
        return this;
      }

      private java.lang.Object rexxVersion_ = "";
      /**
       * <code>string rexx_version = 4;</code>
       */
      public java.lang.String getRexxVersion() {
        java.lang.Object ref = rexxVersion_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          rexxVersion_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string rexx_version = 4;</code>
       */
      public com.google.protobuf.ByteString
          getRexxVersionBytes() {
        java.lang.Object ref = rexxVersion_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          rexxVersion_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string rexx_version = 4;</code>
       */
      public Builder setRexxVersion(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        rexxVersion_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string rexx_version = 4;</code>
       */
      public Builder clearRexxVersion() {
        
        rexxVersion_ = getDefaultInstance().getRexxVersion();
        onChanged();
        return this;
      }
      /**
       * <code>string rexx_version = 4;</code>
       */
      public Builder setRexxVersionBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        rexxVersion_ = value;
        onChanged();
        return this;
      }

      private long timestamp_ ;
      /**
       * <code>int64 timestamp = 5;</code>
       */
      public long getTimestamp() {
        return timestamp_;
      }
      /**
       * <code>int64 timestamp = 5;</code>
       */
      public Builder setTimestamp(long value) {
        
        timestamp_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 timestamp = 5;</code>
       */
      public Builder clearTimestamp() {
        
        timestamp_ = 0L;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.ChainStatus)
    }

    // @@protoc_insertion_point(class_scope:protocol.ChainStatus)
    private static final io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus();
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<ChainStatus>
        PARSER = new com.google.protobuf.AbstractParser<ChainStatus>() {
      public ChainStatus parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new ChainStatus(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<ChainStatus> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<ChainStatus> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Overlay.ChainStatus getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface ChainPeerMessageOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.ChainPeerMessage)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string src_peer_addr = 1;</code>
     */
    java.lang.String getSrcPeerAddr();
    /**
     * <code>string src_peer_addr = 1;</code>
     */
    com.google.protobuf.ByteString
        getSrcPeerAddrBytes();

    /**
     * <code>repeated string des_peer_addrs = 2;</code>
     */
    java.util.List<java.lang.String>
        getDesPeerAddrsList();
    /**
     * <code>repeated string des_peer_addrs = 2;</code>
     */
    int getDesPeerAddrsCount();
    /**
     * <code>repeated string des_peer_addrs = 2;</code>
     */
    java.lang.String getDesPeerAddrs(int index);
    /**
     * <code>repeated string des_peer_addrs = 2;</code>
     */
    com.google.protobuf.ByteString
        getDesPeerAddrsBytes(int index);

    /**
     * <code>bytes data = 3;</code>
     */
    com.google.protobuf.ByteString getData();
  }
  /**
   * Protobuf type {@code protocol.ChainPeerMessage}
   */
  public  static final class ChainPeerMessage extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.ChainPeerMessage)
      ChainPeerMessageOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use ChainPeerMessage.newBuilder() to construct.
    private ChainPeerMessage(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private ChainPeerMessage() {
      srcPeerAddr_ = "";
      desPeerAddrs_ = com.google.protobuf.LazyStringArrayList.EMPTY;
      data_ = com.google.protobuf.ByteString.EMPTY;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private ChainPeerMessage(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              java.lang.String s = input.readStringRequireUtf8();

              srcPeerAddr_ = s;
              break;
            }
            case 18: {
              java.lang.String s = input.readStringRequireUtf8();
              if (!((mutable_bitField0_ & 0x00000002) == 0x00000002)) {
                desPeerAddrs_ = new com.google.protobuf.LazyStringArrayList();
                mutable_bitField0_ |= 0x00000002;
              }
              desPeerAddrs_.add(s);
              break;
            }
            case 26: {

              data_ = input.readBytes();
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        if (((mutable_bitField0_ & 0x00000002) == 0x00000002)) {
          desPeerAddrs_ = desPeerAddrs_.getUnmodifiableView();
        }
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainPeerMessage_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainPeerMessage_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage.class, io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage.Builder.class);
    }

    private int bitField0_;
    public static final int SRC_PEER_ADDR_FIELD_NUMBER = 1;
    private volatile java.lang.Object srcPeerAddr_;
    /**
     * <code>string src_peer_addr = 1;</code>
     */
    public java.lang.String getSrcPeerAddr() {
      java.lang.Object ref = srcPeerAddr_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        srcPeerAddr_ = s;
        return s;
      }
    }
    /**
     * <code>string src_peer_addr = 1;</code>
     */
    public com.google.protobuf.ByteString
        getSrcPeerAddrBytes() {
      java.lang.Object ref = srcPeerAddr_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        srcPeerAddr_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int DES_PEER_ADDRS_FIELD_NUMBER = 2;
    private com.google.protobuf.LazyStringList desPeerAddrs_;
    /**
     * <code>repeated string des_peer_addrs = 2;</code>
     */
    public com.google.protobuf.ProtocolStringList
        getDesPeerAddrsList() {
      return desPeerAddrs_;
    }
    /**
     * <code>repeated string des_peer_addrs = 2;</code>
     */
    public int getDesPeerAddrsCount() {
      return desPeerAddrs_.size();
    }
    /**
     * <code>repeated string des_peer_addrs = 2;</code>
     */
    public java.lang.String getDesPeerAddrs(int index) {
      return desPeerAddrs_.get(index);
    }
    /**
     * <code>repeated string des_peer_addrs = 2;</code>
     */
    public com.google.protobuf.ByteString
        getDesPeerAddrsBytes(int index) {
      return desPeerAddrs_.getByteString(index);
    }

    public static final int DATA_FIELD_NUMBER = 3;
    private com.google.protobuf.ByteString data_;
    /**
     * <code>bytes data = 3;</code>
     */
    public com.google.protobuf.ByteString getData() {
      return data_;
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (!getSrcPeerAddrBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, srcPeerAddr_);
      }
      for (int i = 0; i < desPeerAddrs_.size(); i++) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 2, desPeerAddrs_.getRaw(i));
      }
      if (!data_.isEmpty()) {
        output.writeBytes(3, data_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!getSrcPeerAddrBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, srcPeerAddr_);
      }
      {
        int dataSize = 0;
        for (int i = 0; i < desPeerAddrs_.size(); i++) {
          dataSize += computeStringSizeNoTag(desPeerAddrs_.getRaw(i));
        }
        size += dataSize;
        size += 1 * getDesPeerAddrsList().size();
      }
      if (!data_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(3, data_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage other = (io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage) obj;

      boolean result = true;
      result = result && getSrcPeerAddr()
          .equals(other.getSrcPeerAddr());
      result = result && getDesPeerAddrsList()
          .equals(other.getDesPeerAddrsList());
      result = result && getData()
          .equals(other.getData());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + SRC_PEER_ADDR_FIELD_NUMBER;
      hash = (53 * hash) + getSrcPeerAddr().hashCode();
      if (getDesPeerAddrsCount() > 0) {
        hash = (37 * hash) + DES_PEER_ADDRS_FIELD_NUMBER;
        hash = (53 * hash) + getDesPeerAddrsList().hashCode();
      }
      hash = (37 * hash) + DATA_FIELD_NUMBER;
      hash = (53 * hash) + getData().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code protocol.ChainPeerMessage}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.ChainPeerMessage)
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessageOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainPeerMessage_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainPeerMessage_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage.class, io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        srcPeerAddr_ = "";

        desPeerAddrs_ = com.google.protobuf.LazyStringArrayList.EMPTY;
        bitField0_ = (bitField0_ & ~0x00000002);
        data_ = com.google.protobuf.ByteString.EMPTY;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainPeerMessage_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage build() {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage result = new io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        result.srcPeerAddr_ = srcPeerAddr_;
        if (((bitField0_ & 0x00000002) == 0x00000002)) {
          desPeerAddrs_ = desPeerAddrs_.getUnmodifiableView();
          bitField0_ = (bitField0_ & ~0x00000002);
        }
        result.desPeerAddrs_ = desPeerAddrs_;
        result.data_ = data_;
        result.bitField0_ = to_bitField0_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage.getDefaultInstance()) return this;
        if (!other.getSrcPeerAddr().isEmpty()) {
          srcPeerAddr_ = other.srcPeerAddr_;
          onChanged();
        }
        if (!other.desPeerAddrs_.isEmpty()) {
          if (desPeerAddrs_.isEmpty()) {
            desPeerAddrs_ = other.desPeerAddrs_;
            bitField0_ = (bitField0_ & ~0x00000002);
          } else {
            ensureDesPeerAddrsIsMutable();
            desPeerAddrs_.addAll(other.desPeerAddrs_);
          }
          onChanged();
        }
        if (other.getData() != com.google.protobuf.ByteString.EMPTY) {
          setData(other.getData());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private java.lang.Object srcPeerAddr_ = "";
      /**
       * <code>string src_peer_addr = 1;</code>
       */
      public java.lang.String getSrcPeerAddr() {
        java.lang.Object ref = srcPeerAddr_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          srcPeerAddr_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string src_peer_addr = 1;</code>
       */
      public com.google.protobuf.ByteString
          getSrcPeerAddrBytes() {
        java.lang.Object ref = srcPeerAddr_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          srcPeerAddr_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string src_peer_addr = 1;</code>
       */
      public Builder setSrcPeerAddr(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        srcPeerAddr_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string src_peer_addr = 1;</code>
       */
      public Builder clearSrcPeerAddr() {
        
        srcPeerAddr_ = getDefaultInstance().getSrcPeerAddr();
        onChanged();
        return this;
      }
      /**
       * <code>string src_peer_addr = 1;</code>
       */
      public Builder setSrcPeerAddrBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        srcPeerAddr_ = value;
        onChanged();
        return this;
      }

      private com.google.protobuf.LazyStringList desPeerAddrs_ = com.google.protobuf.LazyStringArrayList.EMPTY;
      private void ensureDesPeerAddrsIsMutable() {
        if (!((bitField0_ & 0x00000002) == 0x00000002)) {
          desPeerAddrs_ = new com.google.protobuf.LazyStringArrayList(desPeerAddrs_);
          bitField0_ |= 0x00000002;
         }
      }
      /**
       * <code>repeated string des_peer_addrs = 2;</code>
       */
      public com.google.protobuf.ProtocolStringList
          getDesPeerAddrsList() {
        return desPeerAddrs_.getUnmodifiableView();
      }
      /**
       * <code>repeated string des_peer_addrs = 2;</code>
       */
      public int getDesPeerAddrsCount() {
        return desPeerAddrs_.size();
      }
      /**
       * <code>repeated string des_peer_addrs = 2;</code>
       */
      public java.lang.String getDesPeerAddrs(int index) {
        return desPeerAddrs_.get(index);
      }
      /**
       * <code>repeated string des_peer_addrs = 2;</code>
       */
      public com.google.protobuf.ByteString
          getDesPeerAddrsBytes(int index) {
        return desPeerAddrs_.getByteString(index);
      }
      /**
       * <code>repeated string des_peer_addrs = 2;</code>
       */
      public Builder setDesPeerAddrs(
          int index, java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  ensureDesPeerAddrsIsMutable();
        desPeerAddrs_.set(index, value);
        onChanged();
        return this;
      }
      /**
       * <code>repeated string des_peer_addrs = 2;</code>
       */
      public Builder addDesPeerAddrs(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  ensureDesPeerAddrsIsMutable();
        desPeerAddrs_.add(value);
        onChanged();
        return this;
      }
      /**
       * <code>repeated string des_peer_addrs = 2;</code>
       */
      public Builder addAllDesPeerAddrs(
          java.lang.Iterable<java.lang.String> values) {
        ensureDesPeerAddrsIsMutable();
        com.google.protobuf.AbstractMessageLite.Builder.addAll(
            values, desPeerAddrs_);
        onChanged();
        return this;
      }
      /**
       * <code>repeated string des_peer_addrs = 2;</code>
       */
      public Builder clearDesPeerAddrs() {
        desPeerAddrs_ = com.google.protobuf.LazyStringArrayList.EMPTY;
        bitField0_ = (bitField0_ & ~0x00000002);
        onChanged();
        return this;
      }
      /**
       * <code>repeated string des_peer_addrs = 2;</code>
       */
      public Builder addDesPeerAddrsBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        ensureDesPeerAddrsIsMutable();
        desPeerAddrs_.add(value);
        onChanged();
        return this;
      }

      private com.google.protobuf.ByteString data_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>bytes data = 3;</code>
       */
      public com.google.protobuf.ByteString getData() {
        return data_;
      }
      /**
       * <code>bytes data = 3;</code>
       */
      public Builder setData(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        data_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>bytes data = 3;</code>
       */
      public Builder clearData() {
        
        data_ = getDefaultInstance().getData();
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.ChainPeerMessage)
    }

    // @@protoc_insertion_point(class_scope:protocol.ChainPeerMessage)
    private static final io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage();
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<ChainPeerMessage>
        PARSER = new com.google.protobuf.AbstractParser<ChainPeerMessage>() {
      public ChainPeerMessage parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new ChainPeerMessage(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<ChainPeerMessage> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<ChainPeerMessage> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Overlay.ChainPeerMessage getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface ChainSubscribeTxOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.ChainSubscribeTx)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>repeated string address = 1;</code>
     */
    java.util.List<java.lang.String>
        getAddressList();
    /**
     * <code>repeated string address = 1;</code>
     */
    int getAddressCount();
    /**
     * <code>repeated string address = 1;</code>
     */
    java.lang.String getAddress(int index);
    /**
     * <code>repeated string address = 1;</code>
     */
    com.google.protobuf.ByteString
        getAddressBytes(int index);
  }
  /**
   * Protobuf type {@code protocol.ChainSubscribeTx}
   */
  public  static final class ChainSubscribeTx extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.ChainSubscribeTx)
      ChainSubscribeTxOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use ChainSubscribeTx.newBuilder() to construct.
    private ChainSubscribeTx(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private ChainSubscribeTx() {
      address_ = com.google.protobuf.LazyStringArrayList.EMPTY;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private ChainSubscribeTx(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 10: {
              java.lang.String s = input.readStringRequireUtf8();
              if (!((mutable_bitField0_ & 0x00000001) == 0x00000001)) {
                address_ = new com.google.protobuf.LazyStringArrayList();
                mutable_bitField0_ |= 0x00000001;
              }
              address_.add(s);
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        if (((mutable_bitField0_ & 0x00000001) == 0x00000001)) {
          address_ = address_.getUnmodifiableView();
        }
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainSubscribeTx_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainSubscribeTx_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx.class, io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx.Builder.class);
    }

    public static final int ADDRESS_FIELD_NUMBER = 1;
    private com.google.protobuf.LazyStringList address_;
    /**
     * <code>repeated string address = 1;</code>
     */
    public com.google.protobuf.ProtocolStringList
        getAddressList() {
      return address_;
    }
    /**
     * <code>repeated string address = 1;</code>
     */
    public int getAddressCount() {
      return address_.size();
    }
    /**
     * <code>repeated string address = 1;</code>
     */
    public java.lang.String getAddress(int index) {
      return address_.get(index);
    }
    /**
     * <code>repeated string address = 1;</code>
     */
    public com.google.protobuf.ByteString
        getAddressBytes(int index) {
      return address_.getByteString(index);
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      for (int i = 0; i < address_.size(); i++) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, address_.getRaw(i));
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      {
        int dataSize = 0;
        for (int i = 0; i < address_.size(); i++) {
          dataSize += computeStringSizeNoTag(address_.getRaw(i));
        }
        size += dataSize;
        size += 1 * getAddressList().size();
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx other = (io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx) obj;

      boolean result = true;
      result = result && getAddressList()
          .equals(other.getAddressList());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      if (getAddressCount() > 0) {
        hash = (37 * hash) + ADDRESS_FIELD_NUMBER;
        hash = (53 * hash) + getAddressList().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code protocol.ChainSubscribeTx}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.ChainSubscribeTx)
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTxOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainSubscribeTx_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainSubscribeTx_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx.class, io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        address_ = com.google.protobuf.LazyStringArrayList.EMPTY;
        bitField0_ = (bitField0_ & ~0x00000001);
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainSubscribeTx_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx build() {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx result = new io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx(this);
        int from_bitField0_ = bitField0_;
        if (((bitField0_ & 0x00000001) == 0x00000001)) {
          address_ = address_.getUnmodifiableView();
          bitField0_ = (bitField0_ & ~0x00000001);
        }
        result.address_ = address_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx.getDefaultInstance()) return this;
        if (!other.address_.isEmpty()) {
          if (address_.isEmpty()) {
            address_ = other.address_;
            bitField0_ = (bitField0_ & ~0x00000001);
          } else {
            ensureAddressIsMutable();
            address_.addAll(other.address_);
          }
          onChanged();
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private com.google.protobuf.LazyStringList address_ = com.google.protobuf.LazyStringArrayList.EMPTY;
      private void ensureAddressIsMutable() {
        if (!((bitField0_ & 0x00000001) == 0x00000001)) {
          address_ = new com.google.protobuf.LazyStringArrayList(address_);
          bitField0_ |= 0x00000001;
         }
      }
      /**
       * <code>repeated string address = 1;</code>
       */
      public com.google.protobuf.ProtocolStringList
          getAddressList() {
        return address_.getUnmodifiableView();
      }
      /**
       * <code>repeated string address = 1;</code>
       */
      public int getAddressCount() {
        return address_.size();
      }
      /**
       * <code>repeated string address = 1;</code>
       */
      public java.lang.String getAddress(int index) {
        return address_.get(index);
      }
      /**
       * <code>repeated string address = 1;</code>
       */
      public com.google.protobuf.ByteString
          getAddressBytes(int index) {
        return address_.getByteString(index);
      }
      /**
       * <code>repeated string address = 1;</code>
       */
      public Builder setAddress(
          int index, java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  ensureAddressIsMutable();
        address_.set(index, value);
        onChanged();
        return this;
      }
      /**
       * <code>repeated string address = 1;</code>
       */
      public Builder addAddress(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  ensureAddressIsMutable();
        address_.add(value);
        onChanged();
        return this;
      }
      /**
       * <code>repeated string address = 1;</code>
       */
      public Builder addAllAddress(
          java.lang.Iterable<java.lang.String> values) {
        ensureAddressIsMutable();
        com.google.protobuf.AbstractMessageLite.Builder.addAll(
            values, address_);
        onChanged();
        return this;
      }
      /**
       * <code>repeated string address = 1;</code>
       */
      public Builder clearAddress() {
        address_ = com.google.protobuf.LazyStringArrayList.EMPTY;
        bitField0_ = (bitField0_ & ~0x00000001);
        onChanged();
        return this;
      }
      /**
       * <code>repeated string address = 1;</code>
       */
      public Builder addAddressBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        ensureAddressIsMutable();
        address_.add(value);
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.ChainSubscribeTx)
    }

    // @@protoc_insertion_point(class_scope:protocol.ChainSubscribeTx)
    private static final io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx();
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<ChainSubscribeTx>
        PARSER = new com.google.protobuf.AbstractParser<ChainSubscribeTx>() {
      public ChainSubscribeTx parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new ChainSubscribeTx(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<ChainSubscribeTx> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<ChainSubscribeTx> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Overlay.ChainSubscribeTx getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface ChainResponseOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.ChainResponse)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int32 error_code = 1;</code>
     */
    int getErrorCode();

    /**
     * <code>string error_desc = 2;</code>
     */
    java.lang.String getErrorDesc();
    /**
     * <code>string error_desc = 2;</code>
     */
    com.google.protobuf.ByteString
        getErrorDescBytes();
  }
  /**
   * Protobuf type {@code protocol.ChainResponse}
   */
  public  static final class ChainResponse extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.ChainResponse)
      ChainResponseOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use ChainResponse.newBuilder() to construct.
    private ChainResponse(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private ChainResponse() {
      errorCode_ = 0;
      errorDesc_ = "";
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private ChainResponse(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {

              errorCode_ = input.readInt32();
              break;
            }
            case 18: {
              java.lang.String s = input.readStringRequireUtf8();

              errorDesc_ = s;
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainResponse_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainResponse_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse.class, io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse.Builder.class);
    }

    public static final int ERROR_CODE_FIELD_NUMBER = 1;
    private int errorCode_;
    /**
     * <code>int32 error_code = 1;</code>
     */
    public int getErrorCode() {
      return errorCode_;
    }

    public static final int ERROR_DESC_FIELD_NUMBER = 2;
    private volatile java.lang.Object errorDesc_;
    /**
     * <code>string error_desc = 2;</code>
     */
    public java.lang.String getErrorDesc() {
      java.lang.Object ref = errorDesc_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        errorDesc_ = s;
        return s;
      }
    }
    /**
     * <code>string error_desc = 2;</code>
     */
    public com.google.protobuf.ByteString
        getErrorDescBytes() {
      java.lang.Object ref = errorDesc_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        errorDesc_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (errorCode_ != 0) {
        output.writeInt32(1, errorCode_);
      }
      if (!getErrorDescBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 2, errorDesc_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (errorCode_ != 0) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt32Size(1, errorCode_);
      }
      if (!getErrorDescBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, errorDesc_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse other = (io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse) obj;

      boolean result = true;
      result = result && (getErrorCode()
          == other.getErrorCode());
      result = result && getErrorDesc()
          .equals(other.getErrorDesc());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + ERROR_CODE_FIELD_NUMBER;
      hash = (53 * hash) + getErrorCode();
      hash = (37 * hash) + ERROR_DESC_FIELD_NUMBER;
      hash = (53 * hash) + getErrorDesc().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code protocol.ChainResponse}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.ChainResponse)
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponseOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainResponse_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainResponse_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse.class, io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        errorCode_ = 0;

        errorDesc_ = "";

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainResponse_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse build() {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse result = new io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse(this);
        result.errorCode_ = errorCode_;
        result.errorDesc_ = errorDesc_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse.getDefaultInstance()) return this;
        if (other.getErrorCode() != 0) {
          setErrorCode(other.getErrorCode());
        }
        if (!other.getErrorDesc().isEmpty()) {
          errorDesc_ = other.errorDesc_;
          onChanged();
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private int errorCode_ ;
      /**
       * <code>int32 error_code = 1;</code>
       */
      public int getErrorCode() {
        return errorCode_;
      }
      /**
       * <code>int32 error_code = 1;</code>
       */
      public Builder setErrorCode(int value) {
        
        errorCode_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int32 error_code = 1;</code>
       */
      public Builder clearErrorCode() {
        
        errorCode_ = 0;
        onChanged();
        return this;
      }

      private java.lang.Object errorDesc_ = "";
      /**
       * <code>string error_desc = 2;</code>
       */
      public java.lang.String getErrorDesc() {
        java.lang.Object ref = errorDesc_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          errorDesc_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string error_desc = 2;</code>
       */
      public com.google.protobuf.ByteString
          getErrorDescBytes() {
        java.lang.Object ref = errorDesc_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          errorDesc_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string error_desc = 2;</code>
       */
      public Builder setErrorDesc(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        errorDesc_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string error_desc = 2;</code>
       */
      public Builder clearErrorDesc() {
        
        errorDesc_ = getDefaultInstance().getErrorDesc();
        onChanged();
        return this;
      }
      /**
       * <code>string error_desc = 2;</code>
       */
      public Builder setErrorDescBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        errorDesc_ = value;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.ChainResponse)
    }

    // @@protoc_insertion_point(class_scope:protocol.ChainResponse)
    private static final io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse();
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<ChainResponse>
        PARSER = new com.google.protobuf.AbstractParser<ChainResponse>() {
      public ChainResponse parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new ChainResponse(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<ChainResponse> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<ChainResponse> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Overlay.ChainResponse getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface ChainTxStatusOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.ChainTxStatus)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>.protocol.ChainTxStatus.TxStatus status = 1;</code>
     */
    int getStatusValue();
    /**
     * <code>.protocol.ChainTxStatus.TxStatus status = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.TxStatus getStatus();

    /**
     * <code>string tx_hash = 2;</code>
     */
    java.lang.String getTxHash();
    /**
     * <code>string tx_hash = 2;</code>
     */
    com.google.protobuf.ByteString
        getTxHashBytes();

    /**
     * <code>string source_address = 3;</code>
     */
    java.lang.String getSourceAddress();
    /**
     * <code>string source_address = 3;</code>
     */
    com.google.protobuf.ByteString
        getSourceAddressBytes();

    /**
     * <code>int64 source_account_seq = 4;</code>
     */
    long getSourceAccountSeq();

    /**
     * <pre>
     *on which block this tx records
     * </pre>
     *
     * <code>int64 ledger_seq = 5;</code>
     */
    long getLedgerSeq();

    /**
     * <pre>
     *new account sequence if COMPLETE
     * </pre>
     *
     * <code>int64 new_account_seq = 6;</code>
     */
    long getNewAccountSeq();

    /**
     * <pre>
     *use it if FAIL
     * </pre>
     *
     * <code>.protocol.ERRORCODE error_code = 7;</code>
     */
    int getErrorCodeValue();
    /**
     * <pre>
     *use it if FAIL
     * </pre>
     *
     * <code>.protocol.ERRORCODE error_code = 7;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE getErrorCode();

    /**
     * <pre>
     *error desc
     * </pre>
     *
     * <code>string error_desc = 8;</code>
     */
    java.lang.String getErrorDesc();
    /**
     * <pre>
     *error desc
     * </pre>
     *
     * <code>string error_desc = 8;</code>
     */
    com.google.protobuf.ByteString
        getErrorDescBytes();

    /**
     * <code>int64 timestamp = 9;</code>
     */
    long getTimestamp();
  }
  /**
   * Protobuf type {@code protocol.ChainTxStatus}
   */
  public  static final class ChainTxStatus extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.ChainTxStatus)
      ChainTxStatusOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use ChainTxStatus.newBuilder() to construct.
    private ChainTxStatus(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private ChainTxStatus() {
      status_ = 0;
      txHash_ = "";
      sourceAddress_ = "";
      sourceAccountSeq_ = 0L;
      ledgerSeq_ = 0L;
      newAccountSeq_ = 0L;
      errorCode_ = 0;
      errorDesc_ = "";
      timestamp_ = 0L;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private ChainTxStatus(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {
              int rawValue = input.readEnum();

              status_ = rawValue;
              break;
            }
            case 18: {
              java.lang.String s = input.readStringRequireUtf8();

              txHash_ = s;
              break;
            }
            case 26: {
              java.lang.String s = input.readStringRequireUtf8();

              sourceAddress_ = s;
              break;
            }
            case 32: {

              sourceAccountSeq_ = input.readInt64();
              break;
            }
            case 40: {

              ledgerSeq_ = input.readInt64();
              break;
            }
            case 48: {

              newAccountSeq_ = input.readInt64();
              break;
            }
            case 56: {
              int rawValue = input.readEnum();

              errorCode_ = rawValue;
              break;
            }
            case 66: {
              java.lang.String s = input.readStringRequireUtf8();

              errorDesc_ = s;
              break;
            }
            case 72: {

              timestamp_ = input.readInt64();
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainTxStatus_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainTxStatus_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.class, io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.Builder.class);
    }

    /**
     * Protobuf enum {@code protocol.ChainTxStatus.TxStatus}
     */
    public enum TxStatus
        implements com.google.protobuf.ProtocolMessageEnum {
      /**
       * <code>UNDEFINED = 0;</code>
       */
      UNDEFINED(0),
      /**
       * <pre>
       * web server will check tx paramters, signatures etc fist, noitfy CONFIRMED if pass
       * </pre>
       *
       * <code>CONFIRMED = 1;</code>
       */
      CONFIRMED(1),
      /**
       * <pre>
       * master will check futher before put it into pending queue
       * </pre>
       *
       * <code>PENDING = 2;</code>
       */
      PENDING(2),
      /**
       * <pre>
       * notify if Tx write ledger successfully
       * </pre>
       *
       * <code>COMPLETE = 3;</code>
       */
      COMPLETE(3),
      /**
       * <pre>
       * notify once failure and set error_code
       * </pre>
       *
       * <code>FAILURE = 4;</code>
       */
      FAILURE(4),
      UNRECOGNIZED(-1),
      ;

      /**
       * <code>UNDEFINED = 0;</code>
       */
      public static final int UNDEFINED_VALUE = 0;
      /**
       * <pre>
       * web server will check tx paramters, signatures etc fist, noitfy CONFIRMED if pass
       * </pre>
       *
       * <code>CONFIRMED = 1;</code>
       */
      public static final int CONFIRMED_VALUE = 1;
      /**
       * <pre>
       * master will check futher before put it into pending queue
       * </pre>
       *
       * <code>PENDING = 2;</code>
       */
      public static final int PENDING_VALUE = 2;
      /**
       * <pre>
       * notify if Tx write ledger successfully
       * </pre>
       *
       * <code>COMPLETE = 3;</code>
       */
      public static final int COMPLETE_VALUE = 3;
      /**
       * <pre>
       * notify once failure and set error_code
       * </pre>
       *
       * <code>FAILURE = 4;</code>
       */
      public static final int FAILURE_VALUE = 4;


      public final int getNumber() {
        if (this == UNRECOGNIZED) {
          throw new java.lang.IllegalArgumentException(
              "Can't get the number of an unknown enum value.");
        }
        return value;
      }

      /**
       * @deprecated Use {@link #forNumber(int)} instead.
       */
      @java.lang.Deprecated
      public static TxStatus valueOf(int value) {
        return forNumber(value);
      }

      public static TxStatus forNumber(int value) {
        switch (value) {
          case 0: return UNDEFINED;
          case 1: return CONFIRMED;
          case 2: return PENDING;
          case 3: return COMPLETE;
          case 4: return FAILURE;
          default: return null;
        }
      }

      public static com.google.protobuf.Internal.EnumLiteMap<TxStatus>
          internalGetValueMap() {
        return internalValueMap;
      }
      private static final com.google.protobuf.Internal.EnumLiteMap<
          TxStatus> internalValueMap =
            new com.google.protobuf.Internal.EnumLiteMap<TxStatus>() {
              public TxStatus findValueByNumber(int number) {
                return TxStatus.forNumber(number);
              }
            };

      public final com.google.protobuf.Descriptors.EnumValueDescriptor
          getValueDescriptor() {
        return getDescriptor().getValues().get(ordinal());
      }
      public final com.google.protobuf.Descriptors.EnumDescriptor
          getDescriptorForType() {
        return getDescriptor();
      }
      public static final com.google.protobuf.Descriptors.EnumDescriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.getDescriptor().getEnumTypes().get(0);
      }

      private static final TxStatus[] VALUES = values();

      public static TxStatus valueOf(
          com.google.protobuf.Descriptors.EnumValueDescriptor desc) {
        if (desc.getType() != getDescriptor()) {
          throw new java.lang.IllegalArgumentException(
            "EnumValueDescriptor is not for this type.");
        }
        if (desc.getIndex() == -1) {
          return UNRECOGNIZED;
        }
        return VALUES[desc.getIndex()];
      }

      private final int value;

      private TxStatus(int value) {
        this.value = value;
      }

      // @@protoc_insertion_point(enum_scope:protocol.ChainTxStatus.TxStatus)
    }

    public static final int STATUS_FIELD_NUMBER = 1;
    private int status_;
    /**
     * <code>.protocol.ChainTxStatus.TxStatus status = 1;</code>
     */
    public int getStatusValue() {
      return status_;
    }
    /**
     * <code>.protocol.ChainTxStatus.TxStatus status = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.TxStatus getStatus() {
      io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.TxStatus result = io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.TxStatus.valueOf(status_);
      return result == null ? io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.TxStatus.UNRECOGNIZED : result;
    }

    public static final int TX_HASH_FIELD_NUMBER = 2;
    private volatile java.lang.Object txHash_;
    /**
     * <code>string tx_hash = 2;</code>
     */
    public java.lang.String getTxHash() {
      java.lang.Object ref = txHash_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        txHash_ = s;
        return s;
      }
    }
    /**
     * <code>string tx_hash = 2;</code>
     */
    public com.google.protobuf.ByteString
        getTxHashBytes() {
      java.lang.Object ref = txHash_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        txHash_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int SOURCE_ADDRESS_FIELD_NUMBER = 3;
    private volatile java.lang.Object sourceAddress_;
    /**
     * <code>string source_address = 3;</code>
     */
    public java.lang.String getSourceAddress() {
      java.lang.Object ref = sourceAddress_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        sourceAddress_ = s;
        return s;
      }
    }
    /**
     * <code>string source_address = 3;</code>
     */
    public com.google.protobuf.ByteString
        getSourceAddressBytes() {
      java.lang.Object ref = sourceAddress_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        sourceAddress_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int SOURCE_ACCOUNT_SEQ_FIELD_NUMBER = 4;
    private long sourceAccountSeq_;
    /**
     * <code>int64 source_account_seq = 4;</code>
     */
    public long getSourceAccountSeq() {
      return sourceAccountSeq_;
    }

    public static final int LEDGER_SEQ_FIELD_NUMBER = 5;
    private long ledgerSeq_;
    /**
     * <pre>
     *on which block this tx records
     * </pre>
     *
     * <code>int64 ledger_seq = 5;</code>
     */
    public long getLedgerSeq() {
      return ledgerSeq_;
    }

    public static final int NEW_ACCOUNT_SEQ_FIELD_NUMBER = 6;
    private long newAccountSeq_;
    /**
     * <pre>
     *new account sequence if COMPLETE
     * </pre>
     *
     * <code>int64 new_account_seq = 6;</code>
     */
    public long getNewAccountSeq() {
      return newAccountSeq_;
    }

    public static final int ERROR_CODE_FIELD_NUMBER = 7;
    private int errorCode_;
    /**
     * <pre>
     *use it if FAIL
     * </pre>
     *
     * <code>.protocol.ERRORCODE error_code = 7;</code>
     */
    public int getErrorCodeValue() {
      return errorCode_;
    }
    /**
     * <pre>
     *use it if FAIL
     * </pre>
     *
     * <code>.protocol.ERRORCODE error_code = 7;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE getErrorCode() {
      io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE result = io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE.valueOf(errorCode_);
      return result == null ? io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE.UNRECOGNIZED : result;
    }

    public static final int ERROR_DESC_FIELD_NUMBER = 8;
    private volatile java.lang.Object errorDesc_;
    /**
     * <pre>
     *error desc
     * </pre>
     *
     * <code>string error_desc = 8;</code>
     */
    public java.lang.String getErrorDesc() {
      java.lang.Object ref = errorDesc_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        errorDesc_ = s;
        return s;
      }
    }
    /**
     * <pre>
     *error desc
     * </pre>
     *
     * <code>string error_desc = 8;</code>
     */
    public com.google.protobuf.ByteString
        getErrorDescBytes() {
      java.lang.Object ref = errorDesc_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        errorDesc_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int TIMESTAMP_FIELD_NUMBER = 9;
    private long timestamp_;
    /**
     * <code>int64 timestamp = 9;</code>
     */
    public long getTimestamp() {
      return timestamp_;
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (status_ != io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.TxStatus.UNDEFINED.getNumber()) {
        output.writeEnum(1, status_);
      }
      if (!getTxHashBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 2, txHash_);
      }
      if (!getSourceAddressBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 3, sourceAddress_);
      }
      if (sourceAccountSeq_ != 0L) {
        output.writeInt64(4, sourceAccountSeq_);
      }
      if (ledgerSeq_ != 0L) {
        output.writeInt64(5, ledgerSeq_);
      }
      if (newAccountSeq_ != 0L) {
        output.writeInt64(6, newAccountSeq_);
      }
      if (errorCode_ != io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE.ERRCODE_SUCCESS.getNumber()) {
        output.writeEnum(7, errorCode_);
      }
      if (!getErrorDescBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 8, errorDesc_);
      }
      if (timestamp_ != 0L) {
        output.writeInt64(9, timestamp_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (status_ != io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.TxStatus.UNDEFINED.getNumber()) {
        size += com.google.protobuf.CodedOutputStream
          .computeEnumSize(1, status_);
      }
      if (!getTxHashBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, txHash_);
      }
      if (!getSourceAddressBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(3, sourceAddress_);
      }
      if (sourceAccountSeq_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(4, sourceAccountSeq_);
      }
      if (ledgerSeq_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(5, ledgerSeq_);
      }
      if (newAccountSeq_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(6, newAccountSeq_);
      }
      if (errorCode_ != io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE.ERRCODE_SUCCESS.getNumber()) {
        size += com.google.protobuf.CodedOutputStream
          .computeEnumSize(7, errorCode_);
      }
      if (!getErrorDescBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(8, errorDesc_);
      }
      if (timestamp_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(9, timestamp_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus other = (io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus) obj;

      boolean result = true;
      result = result && status_ == other.status_;
      result = result && getTxHash()
          .equals(other.getTxHash());
      result = result && getSourceAddress()
          .equals(other.getSourceAddress());
      result = result && (getSourceAccountSeq()
          == other.getSourceAccountSeq());
      result = result && (getLedgerSeq()
          == other.getLedgerSeq());
      result = result && (getNewAccountSeq()
          == other.getNewAccountSeq());
      result = result && errorCode_ == other.errorCode_;
      result = result && getErrorDesc()
          .equals(other.getErrorDesc());
      result = result && (getTimestamp()
          == other.getTimestamp());
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + STATUS_FIELD_NUMBER;
      hash = (53 * hash) + status_;
      hash = (37 * hash) + TX_HASH_FIELD_NUMBER;
      hash = (53 * hash) + getTxHash().hashCode();
      hash = (37 * hash) + SOURCE_ADDRESS_FIELD_NUMBER;
      hash = (53 * hash) + getSourceAddress().hashCode();
      hash = (37 * hash) + SOURCE_ACCOUNT_SEQ_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getSourceAccountSeq());
      hash = (37 * hash) + LEDGER_SEQ_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getLedgerSeq());
      hash = (37 * hash) + NEW_ACCOUNT_SEQ_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getNewAccountSeq());
      hash = (37 * hash) + ERROR_CODE_FIELD_NUMBER;
      hash = (53 * hash) + errorCode_;
      hash = (37 * hash) + ERROR_DESC_FIELD_NUMBER;
      hash = (53 * hash) + getErrorDesc().hashCode();
      hash = (37 * hash) + TIMESTAMP_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getTimestamp());
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code protocol.ChainTxStatus}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.ChainTxStatus)
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatusOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainTxStatus_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainTxStatus_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.class, io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        status_ = 0;

        txHash_ = "";

        sourceAddress_ = "";

        sourceAccountSeq_ = 0L;

        ledgerSeq_ = 0L;

        newAccountSeq_ = 0L;

        errorCode_ = 0;

        errorDesc_ = "";

        timestamp_ = 0L;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.internal_static_protocol_ChainTxStatus_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus build() {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus result = new io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus(this);
        result.status_ = status_;
        result.txHash_ = txHash_;
        result.sourceAddress_ = sourceAddress_;
        result.sourceAccountSeq_ = sourceAccountSeq_;
        result.ledgerSeq_ = ledgerSeq_;
        result.newAccountSeq_ = newAccountSeq_;
        result.errorCode_ = errorCode_;
        result.errorDesc_ = errorDesc_;
        result.timestamp_ = timestamp_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.getDefaultInstance()) return this;
        if (other.status_ != 0) {
          setStatusValue(other.getStatusValue());
        }
        if (!other.getTxHash().isEmpty()) {
          txHash_ = other.txHash_;
          onChanged();
        }
        if (!other.getSourceAddress().isEmpty()) {
          sourceAddress_ = other.sourceAddress_;
          onChanged();
        }
        if (other.getSourceAccountSeq() != 0L) {
          setSourceAccountSeq(other.getSourceAccountSeq());
        }
        if (other.getLedgerSeq() != 0L) {
          setLedgerSeq(other.getLedgerSeq());
        }
        if (other.getNewAccountSeq() != 0L) {
          setNewAccountSeq(other.getNewAccountSeq());
        }
        if (other.errorCode_ != 0) {
          setErrorCodeValue(other.getErrorCodeValue());
        }
        if (!other.getErrorDesc().isEmpty()) {
          errorDesc_ = other.errorDesc_;
          onChanged();
        }
        if (other.getTimestamp() != 0L) {
          setTimestamp(other.getTimestamp());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private int status_ = 0;
      /**
       * <code>.protocol.ChainTxStatus.TxStatus status = 1;</code>
       */
      public int getStatusValue() {
        return status_;
      }
      /**
       * <code>.protocol.ChainTxStatus.TxStatus status = 1;</code>
       */
      public Builder setStatusValue(int value) {
        status_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>.protocol.ChainTxStatus.TxStatus status = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.TxStatus getStatus() {
        io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.TxStatus result = io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.TxStatus.valueOf(status_);
        return result == null ? io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.TxStatus.UNRECOGNIZED : result;
      }
      /**
       * <code>.protocol.ChainTxStatus.TxStatus status = 1;</code>
       */
      public Builder setStatus(io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus.TxStatus value) {
        if (value == null) {
          throw new NullPointerException();
        }
        
        status_ = value.getNumber();
        onChanged();
        return this;
      }
      /**
       * <code>.protocol.ChainTxStatus.TxStatus status = 1;</code>
       */
      public Builder clearStatus() {
        
        status_ = 0;
        onChanged();
        return this;
      }

      private java.lang.Object txHash_ = "";
      /**
       * <code>string tx_hash = 2;</code>
       */
      public java.lang.String getTxHash() {
        java.lang.Object ref = txHash_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          txHash_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string tx_hash = 2;</code>
       */
      public com.google.protobuf.ByteString
          getTxHashBytes() {
        java.lang.Object ref = txHash_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          txHash_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string tx_hash = 2;</code>
       */
      public Builder setTxHash(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        txHash_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string tx_hash = 2;</code>
       */
      public Builder clearTxHash() {
        
        txHash_ = getDefaultInstance().getTxHash();
        onChanged();
        return this;
      }
      /**
       * <code>string tx_hash = 2;</code>
       */
      public Builder setTxHashBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        txHash_ = value;
        onChanged();
        return this;
      }

      private java.lang.Object sourceAddress_ = "";
      /**
       * <code>string source_address = 3;</code>
       */
      public java.lang.String getSourceAddress() {
        java.lang.Object ref = sourceAddress_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          sourceAddress_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string source_address = 3;</code>
       */
      public com.google.protobuf.ByteString
          getSourceAddressBytes() {
        java.lang.Object ref = sourceAddress_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          sourceAddress_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string source_address = 3;</code>
       */
      public Builder setSourceAddress(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        sourceAddress_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string source_address = 3;</code>
       */
      public Builder clearSourceAddress() {
        
        sourceAddress_ = getDefaultInstance().getSourceAddress();
        onChanged();
        return this;
      }
      /**
       * <code>string source_address = 3;</code>
       */
      public Builder setSourceAddressBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        sourceAddress_ = value;
        onChanged();
        return this;
      }

      private long sourceAccountSeq_ ;
      /**
       * <code>int64 source_account_seq = 4;</code>
       */
      public long getSourceAccountSeq() {
        return sourceAccountSeq_;
      }
      /**
       * <code>int64 source_account_seq = 4;</code>
       */
      public Builder setSourceAccountSeq(long value) {
        
        sourceAccountSeq_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 source_account_seq = 4;</code>
       */
      public Builder clearSourceAccountSeq() {
        
        sourceAccountSeq_ = 0L;
        onChanged();
        return this;
      }

      private long ledgerSeq_ ;
      /**
       * <pre>
       *on which block this tx records
       * </pre>
       *
       * <code>int64 ledger_seq = 5;</code>
       */
      public long getLedgerSeq() {
        return ledgerSeq_;
      }
      /**
       * <pre>
       *on which block this tx records
       * </pre>
       *
       * <code>int64 ledger_seq = 5;</code>
       */
      public Builder setLedgerSeq(long value) {
        
        ledgerSeq_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *on which block this tx records
       * </pre>
       *
       * <code>int64 ledger_seq = 5;</code>
       */
      public Builder clearLedgerSeq() {
        
        ledgerSeq_ = 0L;
        onChanged();
        return this;
      }

      private long newAccountSeq_ ;
      /**
       * <pre>
       *new account sequence if COMPLETE
       * </pre>
       *
       * <code>int64 new_account_seq = 6;</code>
       */
      public long getNewAccountSeq() {
        return newAccountSeq_;
      }
      /**
       * <pre>
       *new account sequence if COMPLETE
       * </pre>
       *
       * <code>int64 new_account_seq = 6;</code>
       */
      public Builder setNewAccountSeq(long value) {
        
        newAccountSeq_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *new account sequence if COMPLETE
       * </pre>
       *
       * <code>int64 new_account_seq = 6;</code>
       */
      public Builder clearNewAccountSeq() {
        
        newAccountSeq_ = 0L;
        onChanged();
        return this;
      }

      private int errorCode_ = 0;
      /**
       * <pre>
       *use it if FAIL
       * </pre>
       *
       * <code>.protocol.ERRORCODE error_code = 7;</code>
       */
      public int getErrorCodeValue() {
        return errorCode_;
      }
      /**
       * <pre>
       *use it if FAIL
       * </pre>
       *
       * <code>.protocol.ERRORCODE error_code = 7;</code>
       */
      public Builder setErrorCodeValue(int value) {
        errorCode_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *use it if FAIL
       * </pre>
       *
       * <code>.protocol.ERRORCODE error_code = 7;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE getErrorCode() {
        io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE result = io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE.valueOf(errorCode_);
        return result == null ? io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE.UNRECOGNIZED : result;
      }
      /**
       * <pre>
       *use it if FAIL
       * </pre>
       *
       * <code>.protocol.ERRORCODE error_code = 7;</code>
       */
      public Builder setErrorCode(io.rexx.sdk.core.extend.protobuf.Common.ERRORCODE value) {
        if (value == null) {
          throw new NullPointerException();
        }
        
        errorCode_ = value.getNumber();
        onChanged();
        return this;
      }
      /**
       * <pre>
       *use it if FAIL
       * </pre>
       *
       * <code>.protocol.ERRORCODE error_code = 7;</code>
       */
      public Builder clearErrorCode() {
        
        errorCode_ = 0;
        onChanged();
        return this;
      }

      private java.lang.Object errorDesc_ = "";
      /**
       * <pre>
       *error desc
       * </pre>
       *
       * <code>string error_desc = 8;</code>
       */
      public java.lang.String getErrorDesc() {
        java.lang.Object ref = errorDesc_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          errorDesc_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <pre>
       *error desc
       * </pre>
       *
       * <code>string error_desc = 8;</code>
       */
      public com.google.protobuf.ByteString
          getErrorDescBytes() {
        java.lang.Object ref = errorDesc_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          errorDesc_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <pre>
       *error desc
       * </pre>
       *
       * <code>string error_desc = 8;</code>
       */
      public Builder setErrorDesc(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        errorDesc_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *error desc
       * </pre>
       *
       * <code>string error_desc = 8;</code>
       */
      public Builder clearErrorDesc() {
        
        errorDesc_ = getDefaultInstance().getErrorDesc();
        onChanged();
        return this;
      }
      /**
       * <pre>
       *error desc
       * </pre>
       *
       * <code>string error_desc = 8;</code>
       */
      public Builder setErrorDescBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        errorDesc_ = value;
        onChanged();
        return this;
      }

      private long timestamp_ ;
      /**
       * <code>int64 timestamp = 9;</code>
       */
      public long getTimestamp() {
        return timestamp_;
      }
      /**
       * <code>int64 timestamp = 9;</code>
       */
      public Builder setTimestamp(long value) {
        
        timestamp_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 timestamp = 9;</code>
       */
      public Builder clearTimestamp() {
        
        timestamp_ = 0L;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.ChainTxStatus)
    }

    // @@protoc_insertion_point(class_scope:protocol.ChainTxStatus)
    private static final io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus();
    }

    public static io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<ChainTxStatus>
        PARSER = new com.google.protobuf.AbstractParser<ChainTxStatus>() {
      public ChainTxStatus parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new ChainTxStatus(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<ChainTxStatus> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<ChainTxStatus> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Overlay.ChainTxStatus getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_Hello_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_Hello_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_HelloResponse_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_HelloResponse_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_Peer_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_Peer_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_Peers_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_Peers_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_GetLedgers_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_GetLedgers_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_Ledgers_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_Ledgers_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_DontHave_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_DontHave_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_LedgerUpgradeNotify_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_LedgerUpgradeNotify_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_EntryList_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_EntryList_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_ChainHello_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_ChainHello_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_ChainStatus_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_ChainStatus_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_ChainPeerMessage_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_ChainPeerMessage_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_ChainSubscribeTx_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_ChainSubscribeTx_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_ChainResponse_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_ChainResponse_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_ChainTxStatus_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_ChainTxStatus_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\roverlay.proto\022\010protocol\032\014common.proto\032" +
      "\013chain.proto\"\243\001\n\005Hello\022\022\n\nnetwork_id\030\001 \001" +
      "(\003\022\026\n\016ledger_version\030\002 \001(\003\022\027\n\017overlay_ve" +
      "rsion\030\003 \001(\003\022\024\n\014rexx_version\030\004 \001(\t\022\026\n\016lis" +
      "tening_port\030\005 \001(\003\022\024\n\014node_address\030\006 \001(\t\022" +
      "\021\n\tnode_rand\030\007 \001(\t\"L\n\rHelloResponse\022\'\n\ne" +
      "rror_code\030\001 \001(\0162\023.protocol.ERRORCODE\022\022\n\n" +
      "error_desc\030\002 \001(\t\"}\n\004Peer\022\n\n\002ip\030\001 \001(\t\022\014\n\004" +
      "port\030\002 \001(\003\022\024\n\014num_failures\030\003 \001(\003\022\031\n\021next" +
      "_attempt_time\030\004 \001(\003\022\023\n\013active_time\030\005 \001(\003" +
      "\022\025\n\rconnection_id\030\006 \001(\003\"&\n\005Peers\022\035\n\005peer" +
      "s\030\001 \003(\0132\016.protocol.Peer\";\n\nGetLedgers\022\r\n" +
      "\005begin\030\001 \001(\003\022\013\n\003end\030\002 \001(\003\022\021\n\ttimestamp\030\003" +
      " \001(\003\"\337\001\n\007Ledgers\022(\n\006values\030\001 \003(\0132\030.proto" +
      "col.ConsensusValue\022-\n\tsync_code\030\002 \001(\0162\032." +
      "protocol.Ledgers.SyncCode\022\017\n\007max_seq\030\003 \001" +
      "(\003\022\r\n\005proof\030\004 \001(\014\"[\n\010SyncCode\022\006\n\002OK\020\000\022\017\n" +
      "\013OUT_OF_SYNC\020\001\022\022\n\016OUT_OF_LEDGERS\020\002\022\010\n\004BU" +
      "SY\020\003\022\n\n\006REFUSE\020\004\022\014\n\010INTERNAL\020\005\"&\n\010DontHa" +
      "ve\022\014\n\004type\030\001 \001(\003\022\014\n\004hash\030\002 \001(\014\"v\n\023Ledger" +
      "UpgradeNotify\022\r\n\005nonce\030\001 \001(\003\022(\n\007upgrade\030" +
      "\002 \001(\0132\027.protocol.LedgerUpgrade\022&\n\tsignat" +
      "ure\030\003 \001(\0132\023.protocol.Signature\"\032\n\tEntryL" +
      "ist\022\r\n\005entry\030\001 \003(\014\"M\n\nChainHello\022,\n\010api_" +
      "list\030\001 \003(\0162\032.protocol.ChainMessageType\022\021" +
      "\n\ttimestamp\030\002 \001(\003\"z\n\013ChainStatus\022\021\n\tself" +
      "_addr\030\001 \001(\t\022\026\n\016ledger_version\030\002 \001(\003\022\027\n\017m" +
      "onitor_version\030\003 \001(\003\022\024\n\014rexx_version\030\004 \001" +
      "(\t\022\021\n\ttimestamp\030\005 \001(\003\"O\n\020ChainPeerMessag" +
      "e\022\025\n\rsrc_peer_addr\030\001 \001(\t\022\026\n\016des_peer_add" +
      "rs\030\002 \003(\t\022\014\n\004data\030\003 \001(\014\"#\n\020ChainSubscribe" +
      "Tx\022\017\n\007address\030\001 \003(\t\"7\n\rChainResponse\022\022\n\n" +
      "error_code\030\001 \001(\005\022\022\n\nerror_desc\030\002 \001(\t\"\325\002\n" +
      "\rChainTxStatus\0220\n\006status\030\001 \001(\0162 .protoco" +
      "l.ChainTxStatus.TxStatus\022\017\n\007tx_hash\030\002 \001(" +
      "\t\022\026\n\016source_address\030\003 \001(\t\022\032\n\022source_acco" +
      "unt_seq\030\004 \001(\003\022\022\n\nledger_seq\030\005 \001(\003\022\027\n\017new" +
      "_account_seq\030\006 \001(\003\022\'\n\nerror_code\030\007 \001(\0162\023" +
      ".protocol.ERRORCODE\022\022\n\nerror_desc\030\010 \001(\t\022" +
      "\021\n\ttimestamp\030\t \001(\003\"P\n\010TxStatus\022\r\n\tUNDEFI" +
      "NED\020\000\022\r\n\tCONFIRMED\020\001\022\013\n\007PENDING\020\002\022\014\n\010COM" +
      "PLETE\020\003\022\013\n\007FAILURE\020\004*\203\002\n\024OVERLAY_MESSAGE" +
      "_TYPE\022\030\n\024OVERLAY_MSGTYPE_NONE\020\000\022\030\n\024OVERL" +
      "AY_MSGTYPE_PING\020\001\022\031\n\025OVERLAY_MSGTYPE_HEL" +
      "LO\020\002\022\031\n\025OVERLAY_MSGTYPE_PEERS\020\003\022\037\n\033OVERL" +
      "AY_MSGTYPE_TRANSACTION\020\004\022\033\n\027OVERLAY_MSGT" +
      "YPE_LEDGERS\020\005\022\030\n\024OVERLAY_MSGTYPE_PBFT\020\006\022" +
      ")\n%OVERLAY_MSGTYPE_LEDGER_UPGRADE_NOTIFY" +
      "\020\007*\372\001\n\020ChainMessageType\022\023\n\017CHAIN_TYPE_NO" +
      "NE\020\000\022\017\n\013CHAIN_HELLO\020\n\022\023\n\017CHAIN_TX_STATUS" +
      "\020\013\022\025\n\021CHAIN_PEER_ONLINE\020\014\022\026\n\022CHAIN_PEER_" +
      "OFFLINE\020\r\022\026\n\022CHAIN_PEER_MESSAGE\020\016\022\033\n\027CHA" +
      "IN_SUBMITTRANSACTION\020\017\022\027\n\023CHAIN_LEDGER_H" +
      "EADER\020\020\022\026\n\022CHAIN_SUBSCRIBE_TX\020\021\022\026\n\022CHAIN" +
      "_TX_ENV_STORE\020\022B\"\n io.rexx.sdk.core.exte" +
      "nd.protobufb\006proto3"
    };
    com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner assigner =
        new com.google.protobuf.Descriptors.FileDescriptor.    InternalDescriptorAssigner() {
          public com.google.protobuf.ExtensionRegistry assignDescriptors(
              com.google.protobuf.Descriptors.FileDescriptor root) {
            descriptor = root;
            return null;
          }
        };
    com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
          io.rexx.sdk.core.extend.protobuf.Common.getDescriptor(),
          io.rexx.sdk.core.extend.protobuf.Chain.getDescriptor(),
        }, assigner);
    internal_static_protocol_Hello_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_protocol_Hello_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_Hello_descriptor,
        new java.lang.String[] { "NetworkId", "LedgerVersion", "OverlayVersion", "RexxVersion", "ListeningPort", "NodeAddress", "NodeRand", });
    internal_static_protocol_HelloResponse_descriptor =
      getDescriptor().getMessageTypes().get(1);
    internal_static_protocol_HelloResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_HelloResponse_descriptor,
        new java.lang.String[] { "ErrorCode", "ErrorDesc", });
    internal_static_protocol_Peer_descriptor =
      getDescriptor().getMessageTypes().get(2);
    internal_static_protocol_Peer_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_Peer_descriptor,
        new java.lang.String[] { "Ip", "Port", "NumFailures", "NextAttemptTime", "ActiveTime", "ConnectionId", });
    internal_static_protocol_Peers_descriptor =
      getDescriptor().getMessageTypes().get(3);
    internal_static_protocol_Peers_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_Peers_descriptor,
        new java.lang.String[] { "Peers", });
    internal_static_protocol_GetLedgers_descriptor =
      getDescriptor().getMessageTypes().get(4);
    internal_static_protocol_GetLedgers_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_GetLedgers_descriptor,
        new java.lang.String[] { "Begin", "End", "Timestamp", });
    internal_static_protocol_Ledgers_descriptor =
      getDescriptor().getMessageTypes().get(5);
    internal_static_protocol_Ledgers_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_Ledgers_descriptor,
        new java.lang.String[] { "Values", "SyncCode", "MaxSeq", "Proof", });
    internal_static_protocol_DontHave_descriptor =
      getDescriptor().getMessageTypes().get(6);
    internal_static_protocol_DontHave_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_DontHave_descriptor,
        new java.lang.String[] { "Type", "Hash", });
    internal_static_protocol_LedgerUpgradeNotify_descriptor =
      getDescriptor().getMessageTypes().get(7);
    internal_static_protocol_LedgerUpgradeNotify_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_LedgerUpgradeNotify_descriptor,
        new java.lang.String[] { "Nonce", "Upgrade", "Signature", });
    internal_static_protocol_EntryList_descriptor =
      getDescriptor().getMessageTypes().get(8);
    internal_static_protocol_EntryList_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_EntryList_descriptor,
        new java.lang.String[] { "Entry", });
    internal_static_protocol_ChainHello_descriptor =
      getDescriptor().getMessageTypes().get(9);
    internal_static_protocol_ChainHello_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_ChainHello_descriptor,
        new java.lang.String[] { "ApiList", "Timestamp", });
    internal_static_protocol_ChainStatus_descriptor =
      getDescriptor().getMessageTypes().get(10);
    internal_static_protocol_ChainStatus_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_ChainStatus_descriptor,
        new java.lang.String[] { "SelfAddr", "LedgerVersion", "MonitorVersion", "RexxVersion", "Timestamp", });
    internal_static_protocol_ChainPeerMessage_descriptor =
      getDescriptor().getMessageTypes().get(11);
    internal_static_protocol_ChainPeerMessage_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_ChainPeerMessage_descriptor,
        new java.lang.String[] { "SrcPeerAddr", "DesPeerAddrs", "Data", });
    internal_static_protocol_ChainSubscribeTx_descriptor =
      getDescriptor().getMessageTypes().get(12);
    internal_static_protocol_ChainSubscribeTx_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_ChainSubscribeTx_descriptor,
        new java.lang.String[] { "Address", });
    internal_static_protocol_ChainResponse_descriptor =
      getDescriptor().getMessageTypes().get(13);
    internal_static_protocol_ChainResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_ChainResponse_descriptor,
        new java.lang.String[] { "ErrorCode", "ErrorDesc", });
    internal_static_protocol_ChainTxStatus_descriptor =
      getDescriptor().getMessageTypes().get(14);
    internal_static_protocol_ChainTxStatus_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_ChainTxStatus_descriptor,
        new java.lang.String[] { "Status", "TxHash", "SourceAddress", "SourceAccountSeq", "LedgerSeq", "NewAccountSeq", "ErrorCode", "ErrorDesc", "Timestamp", });
    io.rexx.sdk.core.extend.protobuf.Common.getDescriptor();
    io.rexx.sdk.core.extend.protobuf.Chain.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}
