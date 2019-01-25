

package io.rexx.sdk.core.extend.protobuf;

public final class Common {
  private Common() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  /**
   * Protobuf enum {@code protocol.ERRORCODE}
   */
  public enum ERRORCODE
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>ERRCODE_SUCCESS = 0;</code>
     */
    ERRCODE_SUCCESS(0),
    /**
     * <code>ERRCODE_INTERNAL_ERROR = 1;</code>
     */
    ERRCODE_INTERNAL_ERROR(1),
    /**
     * <code>ERRCODE_INVALID_PARAMETER = 2;</code>
     */
    ERRCODE_INVALID_PARAMETER(2),
    /**
     * <code>ERRCODE_ALREADY_EXIST = 3;</code>
     */
    ERRCODE_ALREADY_EXIST(3),
    /**
     * <code>ERRCODE_NOT_EXIST = 4;</code>
     */
    ERRCODE_NOT_EXIST(4),
    /**
     * <code>ERRCODE_TX_TIMEOUT = 5;</code>
     */
    ERRCODE_TX_TIMEOUT(5),
    /**
     * <code>ERRCODE_ACCESS_DENIED = 6;</code>
     */
    ERRCODE_ACCESS_DENIED(6),
    /**
     * <code>ERRCODE_MATH_OVERFLOW = 7;</code>
     */
    ERRCODE_MATH_OVERFLOW(7),
    /**
     * <code>ERRCODE_EXPR_CONDITION_RESULT_FALSE = 20;</code>
     */
    ERRCODE_EXPR_CONDITION_RESULT_FALSE(20),
    /**
     * <code>ERRCODE_EXPR_CONDITION_SYNTAX_ERROR = 21;</code>
     */
    ERRCODE_EXPR_CONDITION_SYNTAX_ERROR(21),
    /**
     * <pre>
     * UNUSED
     * </pre>
     *
     * <code>ERRCODE_INVALID_PUBKEY = 90;</code>
     */
    ERRCODE_INVALID_PUBKEY(90),
    /**
     * <code>ERRCODE_INVALID_PRIKEY = 91;</code>
     */
    ERRCODE_INVALID_PRIKEY(91),
    /**
     * <code>ERRCODE_ASSET_INVALID = 92;</code>
     */
    ERRCODE_ASSET_INVALID(92),
    /**
     * <code>ERRCODE_INVALID_SIGNATURE = 93;</code>
     */
    ERRCODE_INVALID_SIGNATURE(93),
    /**
     * <code>ERRCODE_INVALID_ADDRESS = 94;</code>
     */
    ERRCODE_INVALID_ADDRESS(94),
    /**
     * <code>ERRCODE_MISSING_OPERATIONS = 97;</code>
     */
    ERRCODE_MISSING_OPERATIONS(97),
    /**
     * <code>ERRCODE_TOO_MANY_OPERATIONS = 98;</code>
     */
    ERRCODE_TOO_MANY_OPERATIONS(98),
    /**
     * <code>ERRCODE_BAD_SEQUENCE = 99;</code>
     */
    ERRCODE_BAD_SEQUENCE(99),
    /**
     * <pre>
     *REXX LOW RESERVE
     * </pre>
     *
     * <code>ERRCODE_ACCOUNT_LOW_RESERVE = 100;</code>
     */
    ERRCODE_ACCOUNT_LOW_RESERVE(100),
    /**
     * <code>ERRCODE_ACCOUNT_SOURCEDEST_EQUAL = 101;</code>
     */
    ERRCODE_ACCOUNT_SOURCEDEST_EQUAL(101),
    /**
     * <code>ERRCODE_ACCOUNT_DEST_EXIST = 102;</code>
     */
    ERRCODE_ACCOUNT_DEST_EXIST(102),
    /**
     * <code>ERRCODE_ACCOUNT_NOT_EXIST = 103;</code>
     */
    ERRCODE_ACCOUNT_NOT_EXIST(103),
    /**
     * <pre>
     *IOU LOW RESERVE
     * </pre>
     *
     * <code>ERRCODE_ACCOUNT_ASSET_LOW_RESERVE = 104;</code>
     */
    ERRCODE_ACCOUNT_ASSET_LOW_RESERVE(104),
    /**
     * <code>ERRCODE_ACCOUNT_ASSET_AMOUNT_TOO_LARGE = 105;</code>
     */
    ERRCODE_ACCOUNT_ASSET_AMOUNT_TOO_LARGE(105),
    /**
     * <code>ERRCODE_ACCOUNT_INIT_LOW_RESERVE = 106;</code>
     */
    ERRCODE_ACCOUNT_INIT_LOW_RESERVE(106),
    /**
     * <code>ERRCODE_FEE_NOT_ENOUGH = 111;</code>
     */
    ERRCODE_FEE_NOT_ENOUGH(111),
    /**
     * <code>ERRCODE_FEE_INVALID = 112;</code>
     */
    ERRCODE_FEE_INVALID(112),
    /**
     * <code>ERRCODE_OUT_OF_TXCACHE = 114;</code>
     */
    ERRCODE_OUT_OF_TXCACHE(114),
    /**
     * <code>ERRCODE_WEIGHT_NOT_VALID = 120;</code>
     */
    ERRCODE_WEIGHT_NOT_VALID(120),
    /**
     * <code>ERRCODE_THRESHOLD_NOT_VALID = 121;</code>
     */
    ERRCODE_THRESHOLD_NOT_VALID(121),
    /**
     * <pre>
     *metadata version error
     * </pre>
     *
     * <code>ERRCODE_INVALID_DATAVERSION = 144;</code>
     */
    ERRCODE_INVALID_DATAVERSION(144),
    /**
     * <code>ERRCODE_TX_SIZE_TOO_BIG = 146;</code>
     */
    ERRCODE_TX_SIZE_TOO_BIG(146),
    /**
     * <code>ERRCODE_CONTRACT_EXECUTE_FAIL = 151;</code>
     */
    ERRCODE_CONTRACT_EXECUTE_FAIL(151),
    /**
     * <code>ERRCODE_CONTRACT_SYNTAX_ERROR = 152;</code>
     */
    ERRCODE_CONTRACT_SYNTAX_ERROR(152),
    /**
     * <code>ERRCODE_CONTRACT_TOO_MANY_RECURSION = 153;</code>
     */
    ERRCODE_CONTRACT_TOO_MANY_RECURSION(153),
    /**
     * <code>ERRCODE_CONTRACT_TOO_MANY_TRANSACTIONS = 154;</code>
     */
    ERRCODE_CONTRACT_TOO_MANY_TRANSACTIONS(154),
    /**
     * <code>ERRCODE_CONTRACT_EXECUTE_EXPIRED = 155;</code>
     */
    ERRCODE_CONTRACT_EXECUTE_EXPIRED(155),
    /**
     * <code>ERRCODE_TX_INSERT_QUEUE_FAIL = 160;</code>
     */
    ERRCODE_TX_INSERT_QUEUE_FAIL(160),
    UNRECOGNIZED(-1),
    ;

    /**
     * <code>ERRCODE_SUCCESS = 0;</code>
     */
    public static final int ERRCODE_SUCCESS_VALUE = 0;
    /**
     * <code>ERRCODE_INTERNAL_ERROR = 1;</code>
     */
    public static final int ERRCODE_INTERNAL_ERROR_VALUE = 1;
    /**
     * <code>ERRCODE_INVALID_PARAMETER = 2;</code>
     */
    public static final int ERRCODE_INVALID_PARAMETER_VALUE = 2;
    /**
     * <code>ERRCODE_ALREADY_EXIST = 3;</code>
     */
    public static final int ERRCODE_ALREADY_EXIST_VALUE = 3;
    /**
     * <code>ERRCODE_NOT_EXIST = 4;</code>
     */
    public static final int ERRCODE_NOT_EXIST_VALUE = 4;
    /**
     * <code>ERRCODE_TX_TIMEOUT = 5;</code>
     */
    public static final int ERRCODE_TX_TIMEOUT_VALUE = 5;
    /**
     * <code>ERRCODE_ACCESS_DENIED = 6;</code>
     */
    public static final int ERRCODE_ACCESS_DENIED_VALUE = 6;
    /**
     * <code>ERRCODE_MATH_OVERFLOW = 7;</code>
     */
    public static final int ERRCODE_MATH_OVERFLOW_VALUE = 7;
    /**
     * <code>ERRCODE_EXPR_CONDITION_RESULT_FALSE = 20;</code>
     */
    public static final int ERRCODE_EXPR_CONDITION_RESULT_FALSE_VALUE = 20;
    /**
     * <code>ERRCODE_EXPR_CONDITION_SYNTAX_ERROR = 21;</code>
     */
    public static final int ERRCODE_EXPR_CONDITION_SYNTAX_ERROR_VALUE = 21;
    /**
     * <pre>
     * UNUSED
     * </pre>
     *
     * <code>ERRCODE_INVALID_PUBKEY = 90;</code>
     */
    public static final int ERRCODE_INVALID_PUBKEY_VALUE = 90;
    /**
     * <code>ERRCODE_INVALID_PRIKEY = 91;</code>
     */
    public static final int ERRCODE_INVALID_PRIKEY_VALUE = 91;
    /**
     * <code>ERRCODE_ASSET_INVALID = 92;</code>
     */
    public static final int ERRCODE_ASSET_INVALID_VALUE = 92;
    /**
     * <code>ERRCODE_INVALID_SIGNATURE = 93;</code>
     */
    public static final int ERRCODE_INVALID_SIGNATURE_VALUE = 93;
    /**
     * <code>ERRCODE_INVALID_ADDRESS = 94;</code>
     */
    public static final int ERRCODE_INVALID_ADDRESS_VALUE = 94;
    /**
     * <code>ERRCODE_MISSING_OPERATIONS = 97;</code>
     */
    public static final int ERRCODE_MISSING_OPERATIONS_VALUE = 97;
    /**
     * <code>ERRCODE_TOO_MANY_OPERATIONS = 98;</code>
     */
    public static final int ERRCODE_TOO_MANY_OPERATIONS_VALUE = 98;
    /**
     * <code>ERRCODE_BAD_SEQUENCE = 99;</code>
     */
    public static final int ERRCODE_BAD_SEQUENCE_VALUE = 99;
    /**
     * <pre>
     *REXX LOW RESERVE
     * </pre>
     *
     * <code>ERRCODE_ACCOUNT_LOW_RESERVE = 100;</code>
     */
    public static final int ERRCODE_ACCOUNT_LOW_RESERVE_VALUE = 100;
    /**
     * <code>ERRCODE_ACCOUNT_SOURCEDEST_EQUAL = 101;</code>
     */
    public static final int ERRCODE_ACCOUNT_SOURCEDEST_EQUAL_VALUE = 101;
    /**
     * <code>ERRCODE_ACCOUNT_DEST_EXIST = 102;</code>
     */
    public static final int ERRCODE_ACCOUNT_DEST_EXIST_VALUE = 102;
    /**
     * <code>ERRCODE_ACCOUNT_NOT_EXIST = 103;</code>
     */
    public static final int ERRCODE_ACCOUNT_NOT_EXIST_VALUE = 103;
    /**
     * <pre>
     *IOU LOW RESERVE
     * </pre>
     *
     * <code>ERRCODE_ACCOUNT_ASSET_LOW_RESERVE = 104;</code>
     */
    public static final int ERRCODE_ACCOUNT_ASSET_LOW_RESERVE_VALUE = 104;
    /**
     * <code>ERRCODE_ACCOUNT_ASSET_AMOUNT_TOO_LARGE = 105;</code>
     */
    public static final int ERRCODE_ACCOUNT_ASSET_AMOUNT_TOO_LARGE_VALUE = 105;
    /**
     * <code>ERRCODE_ACCOUNT_INIT_LOW_RESERVE = 106;</code>
     */
    public static final int ERRCODE_ACCOUNT_INIT_LOW_RESERVE_VALUE = 106;
    /**
     * <code>ERRCODE_FEE_NOT_ENOUGH = 111;</code>
     */
    public static final int ERRCODE_FEE_NOT_ENOUGH_VALUE = 111;
    /**
     * <code>ERRCODE_FEE_INVALID = 112;</code>
     */
    public static final int ERRCODE_FEE_INVALID_VALUE = 112;
    /**
     * <code>ERRCODE_OUT_OF_TXCACHE = 114;</code>
     */
    public static final int ERRCODE_OUT_OF_TXCACHE_VALUE = 114;
    /**
     * <code>ERRCODE_WEIGHT_NOT_VALID = 120;</code>
     */
    public static final int ERRCODE_WEIGHT_NOT_VALID_VALUE = 120;
    /**
     * <code>ERRCODE_THRESHOLD_NOT_VALID = 121;</code>
     */
    public static final int ERRCODE_THRESHOLD_NOT_VALID_VALUE = 121;
    /**
     * <pre>
     *metadata version error
     * </pre>
     *
     * <code>ERRCODE_INVALID_DATAVERSION = 144;</code>
     */
    public static final int ERRCODE_INVALID_DATAVERSION_VALUE = 144;
    /**
     * <code>ERRCODE_TX_SIZE_TOO_BIG = 146;</code>
     */
    public static final int ERRCODE_TX_SIZE_TOO_BIG_VALUE = 146;
    /**
     * <code>ERRCODE_CONTRACT_EXECUTE_FAIL = 151;</code>
     */
    public static final int ERRCODE_CONTRACT_EXECUTE_FAIL_VALUE = 151;
    /**
     * <code>ERRCODE_CONTRACT_SYNTAX_ERROR = 152;</code>
     */
    public static final int ERRCODE_CONTRACT_SYNTAX_ERROR_VALUE = 152;
    /**
     * <code>ERRCODE_CONTRACT_TOO_MANY_RECURSION = 153;</code>
     */
    public static final int ERRCODE_CONTRACT_TOO_MANY_RECURSION_VALUE = 153;
    /**
     * <code>ERRCODE_CONTRACT_TOO_MANY_TRANSACTIONS = 154;</code>
     */
    public static final int ERRCODE_CONTRACT_TOO_MANY_TRANSACTIONS_VALUE = 154;
    /**
     * <code>ERRCODE_CONTRACT_EXECUTE_EXPIRED = 155;</code>
     */
    public static final int ERRCODE_CONTRACT_EXECUTE_EXPIRED_VALUE = 155;
    /**
     * <code>ERRCODE_TX_INSERT_QUEUE_FAIL = 160;</code>
     */
    public static final int ERRCODE_TX_INSERT_QUEUE_FAIL_VALUE = 160;


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
    public static ERRORCODE valueOf(int value) {
      return forNumber(value);
    }

    public static ERRORCODE forNumber(int value) {
      switch (value) {
        case 0: return ERRCODE_SUCCESS;
        case 1: return ERRCODE_INTERNAL_ERROR;
        case 2: return ERRCODE_INVALID_PARAMETER;
        case 3: return ERRCODE_ALREADY_EXIST;
        case 4: return ERRCODE_NOT_EXIST;
        case 5: return ERRCODE_TX_TIMEOUT;
        case 6: return ERRCODE_ACCESS_DENIED;
        case 7: return ERRCODE_MATH_OVERFLOW;
        case 20: return ERRCODE_EXPR_CONDITION_RESULT_FALSE;
        case 21: return ERRCODE_EXPR_CONDITION_SYNTAX_ERROR;
        case 90: return ERRCODE_INVALID_PUBKEY;
        case 91: return ERRCODE_INVALID_PRIKEY;
        case 92: return ERRCODE_ASSET_INVALID;
        case 93: return ERRCODE_INVALID_SIGNATURE;
        case 94: return ERRCODE_INVALID_ADDRESS;
        case 97: return ERRCODE_MISSING_OPERATIONS;
        case 98: return ERRCODE_TOO_MANY_OPERATIONS;
        case 99: return ERRCODE_BAD_SEQUENCE;
        case 100: return ERRCODE_ACCOUNT_LOW_RESERVE;
        case 101: return ERRCODE_ACCOUNT_SOURCEDEST_EQUAL;
        case 102: return ERRCODE_ACCOUNT_DEST_EXIST;
        case 103: return ERRCODE_ACCOUNT_NOT_EXIST;
        case 104: return ERRCODE_ACCOUNT_ASSET_LOW_RESERVE;
        case 105: return ERRCODE_ACCOUNT_ASSET_AMOUNT_TOO_LARGE;
        case 106: return ERRCODE_ACCOUNT_INIT_LOW_RESERVE;
        case 111: return ERRCODE_FEE_NOT_ENOUGH;
        case 112: return ERRCODE_FEE_INVALID;
        case 114: return ERRCODE_OUT_OF_TXCACHE;
        case 120: return ERRCODE_WEIGHT_NOT_VALID;
        case 121: return ERRCODE_THRESHOLD_NOT_VALID;
        case 144: return ERRCODE_INVALID_DATAVERSION;
        case 146: return ERRCODE_TX_SIZE_TOO_BIG;
        case 151: return ERRCODE_CONTRACT_EXECUTE_FAIL;
        case 152: return ERRCODE_CONTRACT_SYNTAX_ERROR;
        case 153: return ERRCODE_CONTRACT_TOO_MANY_RECURSION;
        case 154: return ERRCODE_CONTRACT_TOO_MANY_TRANSACTIONS;
        case 155: return ERRCODE_CONTRACT_EXECUTE_EXPIRED;
        case 160: return ERRCODE_TX_INSERT_QUEUE_FAIL;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<ERRORCODE>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static final com.google.protobuf.Internal.EnumLiteMap<
        ERRORCODE> internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<ERRORCODE>() {
            public ERRORCODE findValueByNumber(int number) {
              return ERRORCODE.forNumber(number);
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
      return io.rexx.sdk.core.extend.protobuf.Common.getDescriptor().getEnumTypes().get(0);
    }

    private static final ERRORCODE[] VALUES = values();

    public static ERRORCODE valueOf(
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

    private ERRORCODE(int value) {
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:protocol.ERRORCODE)
  }

  public interface KeyPairOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.KeyPair)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string key = 1;</code>
     */
    java.lang.String getKey();
    /**
     * <code>string key = 1;</code>
     */
    com.google.protobuf.ByteString
        getKeyBytes();

    /**
     * <code>string value = 2;</code>
     */
    java.lang.String getValue();
    /**
     * <code>string value = 2;</code>
     */
    com.google.protobuf.ByteString
        getValueBytes();

    /**
     * <code>int64 version = 3;</code>
     */
    long getVersion();
  }
  /**
   * Protobuf type {@code protocol.KeyPair}
   */
  public  static final class KeyPair extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.KeyPair)
      KeyPairOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use KeyPair.newBuilder() to construct.
    private KeyPair(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private KeyPair() {
      key_ = "";
      value_ = "";
      version_ = 0L;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private KeyPair(
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

              key_ = s;
              break;
            }
            case 18: {
              java.lang.String s = input.readStringRequireUtf8();

              value_ = s;
              break;
            }
            case 24: {

              version_ = input.readInt64();
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
      return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_KeyPair_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_KeyPair_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Common.KeyPair.class, io.rexx.sdk.core.extend.protobuf.Common.KeyPair.Builder.class);
    }

    public static final int KEY_FIELD_NUMBER = 1;
    private volatile java.lang.Object key_;
    /**
     * <code>string key = 1;</code>
     */
    public java.lang.String getKey() {
      java.lang.Object ref = key_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        key_ = s;
        return s;
      }
    }
    /**
     * <code>string key = 1;</code>
     */
    public com.google.protobuf.ByteString
        getKeyBytes() {
      java.lang.Object ref = key_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        key_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int VALUE_FIELD_NUMBER = 2;
    private volatile java.lang.Object value_;
    /**
     * <code>string value = 2;</code>
     */
    public java.lang.String getValue() {
      java.lang.Object ref = value_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        value_ = s;
        return s;
      }
    }
    /**
     * <code>string value = 2;</code>
     */
    public com.google.protobuf.ByteString
        getValueBytes() {
      java.lang.Object ref = value_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        value_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int VERSION_FIELD_NUMBER = 3;
    private long version_;
    /**
     * <code>int64 version = 3;</code>
     */
    public long getVersion() {
      return version_;
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
      if (!getKeyBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, key_);
      }
      if (!getValueBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 2, value_);
      }
      if (version_ != 0L) {
        output.writeInt64(3, version_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!getKeyBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, key_);
      }
      if (!getValueBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, value_);
      }
      if (version_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(3, version_);
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Common.KeyPair)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Common.KeyPair other = (io.rexx.sdk.core.extend.protobuf.Common.KeyPair) obj;

      boolean result = true;
      result = result && getKey()
          .equals(other.getKey());
      result = result && getValue()
          .equals(other.getValue());
      result = result && (getVersion()
          == other.getVersion());
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
      hash = (37 * hash) + KEY_FIELD_NUMBER;
      hash = (53 * hash) + getKey().hashCode();
      hash = (37 * hash) + VALUE_FIELD_NUMBER;
      hash = (53 * hash) + getValue().hashCode();
      hash = (37 * hash) + VERSION_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getVersion());
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Common.KeyPair parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.KeyPair parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.KeyPair parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.KeyPair parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.KeyPair parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.KeyPair parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.KeyPair parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.KeyPair parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.KeyPair parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.KeyPair parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.KeyPair parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.KeyPair parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Common.KeyPair prototype) {
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
     * Protobuf type {@code protocol.KeyPair}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.KeyPair)
        io.rexx.sdk.core.extend.protobuf.Common.KeyPairOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_KeyPair_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_KeyPair_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Common.KeyPair.class, io.rexx.sdk.core.extend.protobuf.Common.KeyPair.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Common.KeyPair.newBuilder()
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
        key_ = "";

        value_ = "";

        version_ = 0L;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_KeyPair_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Common.KeyPair getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Common.KeyPair.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Common.KeyPair build() {
        io.rexx.sdk.core.extend.protobuf.Common.KeyPair result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Common.KeyPair buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Common.KeyPair result = new io.rexx.sdk.core.extend.protobuf.Common.KeyPair(this);
        result.key_ = key_;
        result.value_ = value_;
        result.version_ = version_;
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Common.KeyPair) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Common.KeyPair)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Common.KeyPair other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Common.KeyPair.getDefaultInstance()) return this;
        if (!other.getKey().isEmpty()) {
          key_ = other.key_;
          onChanged();
        }
        if (!other.getValue().isEmpty()) {
          value_ = other.value_;
          onChanged();
        }
        if (other.getVersion() != 0L) {
          setVersion(other.getVersion());
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
        io.rexx.sdk.core.extend.protobuf.Common.KeyPair parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Common.KeyPair) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private java.lang.Object key_ = "";
      /**
       * <code>string key = 1;</code>
       */
      public java.lang.String getKey() {
        java.lang.Object ref = key_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          key_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string key = 1;</code>
       */
      public com.google.protobuf.ByteString
          getKeyBytes() {
        java.lang.Object ref = key_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          key_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string key = 1;</code>
       */
      public Builder setKey(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        key_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string key = 1;</code>
       */
      public Builder clearKey() {
        
        key_ = getDefaultInstance().getKey();
        onChanged();
        return this;
      }
      /**
       * <code>string key = 1;</code>
       */
      public Builder setKeyBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        key_ = value;
        onChanged();
        return this;
      }

      private java.lang.Object value_ = "";
      /**
       * <code>string value = 2;</code>
       */
      public java.lang.String getValue() {
        java.lang.Object ref = value_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          value_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string value = 2;</code>
       */
      public com.google.protobuf.ByteString
          getValueBytes() {
        java.lang.Object ref = value_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          value_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string value = 2;</code>
       */
      public Builder setValue(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        value_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string value = 2;</code>
       */
      public Builder clearValue() {
        
        value_ = getDefaultInstance().getValue();
        onChanged();
        return this;
      }
      /**
       * <code>string value = 2;</code>
       */
      public Builder setValueBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        value_ = value;
        onChanged();
        return this;
      }

      private long version_ ;
      /**
       * <code>int64 version = 3;</code>
       */
      public long getVersion() {
        return version_;
      }
      /**
       * <code>int64 version = 3;</code>
       */
      public Builder setVersion(long value) {
        
        version_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 version = 3;</code>
       */
      public Builder clearVersion() {
        
        version_ = 0L;
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


      // @@protoc_insertion_point(builder_scope:protocol.KeyPair)
    }

    // @@protoc_insertion_point(class_scope:protocol.KeyPair)
    private static final io.rexx.sdk.core.extend.protobuf.Common.KeyPair DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Common.KeyPair();
    }

    public static io.rexx.sdk.core.extend.protobuf.Common.KeyPair getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<KeyPair>
        PARSER = new com.google.protobuf.AbstractParser<KeyPair>() {
      public KeyPair parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new KeyPair(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<KeyPair> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<KeyPair> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Common.KeyPair getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface SignatureOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.Signature)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string public_key = 1;</code>
     */
    java.lang.String getPublicKey();
    /**
     * <code>string public_key = 1;</code>
     */
    com.google.protobuf.ByteString
        getPublicKeyBytes();

    /**
     * <code>bytes sign_data = 2;</code>
     */
    com.google.protobuf.ByteString getSignData();
  }
  /**
   * Protobuf type {@code protocol.Signature}
   */
  public  static final class Signature extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.Signature)
      SignatureOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Signature.newBuilder() to construct.
    private Signature(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Signature() {
      publicKey_ = "";
      signData_ = com.google.protobuf.ByteString.EMPTY;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Signature(
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

              publicKey_ = s;
              break;
            }
            case 18: {

              signData_ = input.readBytes();
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
      return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_Signature_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_Signature_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Common.Signature.class, io.rexx.sdk.core.extend.protobuf.Common.Signature.Builder.class);
    }

    public static final int PUBLIC_KEY_FIELD_NUMBER = 1;
    private volatile java.lang.Object publicKey_;
    /**
     * <code>string public_key = 1;</code>
     */
    public java.lang.String getPublicKey() {
      java.lang.Object ref = publicKey_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        publicKey_ = s;
        return s;
      }
    }
    /**
     * <code>string public_key = 1;</code>
     */
    public com.google.protobuf.ByteString
        getPublicKeyBytes() {
      java.lang.Object ref = publicKey_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        publicKey_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int SIGN_DATA_FIELD_NUMBER = 2;
    private com.google.protobuf.ByteString signData_;
    /**
     * <code>bytes sign_data = 2;</code>
     */
    public com.google.protobuf.ByteString getSignData() {
      return signData_;
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
      if (!getPublicKeyBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, publicKey_);
      }
      if (!signData_.isEmpty()) {
        output.writeBytes(2, signData_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!getPublicKeyBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, publicKey_);
      }
      if (!signData_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(2, signData_);
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Common.Signature)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Common.Signature other = (io.rexx.sdk.core.extend.protobuf.Common.Signature) obj;

      boolean result = true;
      result = result && getPublicKey()
          .equals(other.getPublicKey());
      result = result && getSignData()
          .equals(other.getSignData());
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
      hash = (37 * hash) + PUBLIC_KEY_FIELD_NUMBER;
      hash = (53 * hash) + getPublicKey().hashCode();
      hash = (37 * hash) + SIGN_DATA_FIELD_NUMBER;
      hash = (53 * hash) + getSignData().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Common.Signature parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Signature parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Signature parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Signature parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Signature parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Signature parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Signature parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Signature parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Signature parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Signature parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Signature parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Signature parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Common.Signature prototype) {
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
     * Protobuf type {@code protocol.Signature}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.Signature)
        io.rexx.sdk.core.extend.protobuf.Common.SignatureOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_Signature_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_Signature_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Common.Signature.class, io.rexx.sdk.core.extend.protobuf.Common.Signature.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Common.Signature.newBuilder()
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
        publicKey_ = "";

        signData_ = com.google.protobuf.ByteString.EMPTY;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_Signature_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Common.Signature getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Common.Signature.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Common.Signature build() {
        io.rexx.sdk.core.extend.protobuf.Common.Signature result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Common.Signature buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Common.Signature result = new io.rexx.sdk.core.extend.protobuf.Common.Signature(this);
        result.publicKey_ = publicKey_;
        result.signData_ = signData_;
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Common.Signature) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Common.Signature)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Common.Signature other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Common.Signature.getDefaultInstance()) return this;
        if (!other.getPublicKey().isEmpty()) {
          publicKey_ = other.publicKey_;
          onChanged();
        }
        if (other.getSignData() != com.google.protobuf.ByteString.EMPTY) {
          setSignData(other.getSignData());
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
        io.rexx.sdk.core.extend.protobuf.Common.Signature parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Common.Signature) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private java.lang.Object publicKey_ = "";
      /**
       * <code>string public_key = 1;</code>
       */
      public java.lang.String getPublicKey() {
        java.lang.Object ref = publicKey_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          publicKey_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string public_key = 1;</code>
       */
      public com.google.protobuf.ByteString
          getPublicKeyBytes() {
        java.lang.Object ref = publicKey_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          publicKey_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string public_key = 1;</code>
       */
      public Builder setPublicKey(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        publicKey_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string public_key = 1;</code>
       */
      public Builder clearPublicKey() {
        
        publicKey_ = getDefaultInstance().getPublicKey();
        onChanged();
        return this;
      }
      /**
       * <code>string public_key = 1;</code>
       */
      public Builder setPublicKeyBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        publicKey_ = value;
        onChanged();
        return this;
      }

      private com.google.protobuf.ByteString signData_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>bytes sign_data = 2;</code>
       */
      public com.google.protobuf.ByteString getSignData() {
        return signData_;
      }
      /**
       * <code>bytes sign_data = 2;</code>
       */
      public Builder setSignData(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        signData_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>bytes sign_data = 2;</code>
       */
      public Builder clearSignData() {
        
        signData_ = getDefaultInstance().getSignData();
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


      // @@protoc_insertion_point(builder_scope:protocol.Signature)
    }

    // @@protoc_insertion_point(class_scope:protocol.Signature)
    private static final io.rexx.sdk.core.extend.protobuf.Common.Signature DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Common.Signature();
    }

    public static io.rexx.sdk.core.extend.protobuf.Common.Signature getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Signature>
        PARSER = new com.google.protobuf.AbstractParser<Signature>() {
      public Signature parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Signature(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Signature> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Signature> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Common.Signature getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface LedgerUpgradeOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.LedgerUpgrade)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <pre>
     *will be process as required at verion 2.1.0.0
     * </pre>
     *
     * <code>int64 new_ledger_version = 1;</code>
     */
    long getNewLedgerVersion();

    /**
     * <pre>
     *for hardfork
     * </pre>
     *
     * <code>string new_validator = 2;</code>
     */
    java.lang.String getNewValidator();
    /**
     * <pre>
     *for hardfork
     * </pre>
     *
     * <code>string new_validator = 2;</code>
     */
    com.google.protobuf.ByteString
        getNewValidatorBytes();
  }
  /**
   * Protobuf type {@code protocol.LedgerUpgrade}
   */
  public  static final class LedgerUpgrade extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.LedgerUpgrade)
      LedgerUpgradeOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use LedgerUpgrade.newBuilder() to construct.
    private LedgerUpgrade(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private LedgerUpgrade() {
      newLedgerVersion_ = 0L;
      newValidator_ = "";
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private LedgerUpgrade(
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

              newLedgerVersion_ = input.readInt64();
              break;
            }
            case 18: {
              java.lang.String s = input.readStringRequireUtf8();

              newValidator_ = s;
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
      return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_LedgerUpgrade_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_LedgerUpgrade_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.class, io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.Builder.class);
    }

    public static final int NEW_LEDGER_VERSION_FIELD_NUMBER = 1;
    private long newLedgerVersion_;
    /**
     * <pre>
     *will be process as required at verion 2.1.0.0
     * </pre>
     *
     * <code>int64 new_ledger_version = 1;</code>
     */
    public long getNewLedgerVersion() {
      return newLedgerVersion_;
    }

    public static final int NEW_VALIDATOR_FIELD_NUMBER = 2;
    private volatile java.lang.Object newValidator_;
    /**
     * <pre>
     *for hardfork
     * </pre>
     *
     * <code>string new_validator = 2;</code>
     */
    public java.lang.String getNewValidator() {
      java.lang.Object ref = newValidator_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        newValidator_ = s;
        return s;
      }
    }
    /**
     * <pre>
     *for hardfork
     * </pre>
     *
     * <code>string new_validator = 2;</code>
     */
    public com.google.protobuf.ByteString
        getNewValidatorBytes() {
      java.lang.Object ref = newValidator_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        newValidator_ = b;
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
      if (newLedgerVersion_ != 0L) {
        output.writeInt64(1, newLedgerVersion_);
      }
      if (!getNewValidatorBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 2, newValidator_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (newLedgerVersion_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, newLedgerVersion_);
      }
      if (!getNewValidatorBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, newValidator_);
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade other = (io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade) obj;

      boolean result = true;
      result = result && (getNewLedgerVersion()
          == other.getNewLedgerVersion());
      result = result && getNewValidator()
          .equals(other.getNewValidator());
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
      hash = (37 * hash) + NEW_LEDGER_VERSION_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getNewLedgerVersion());
      hash = (37 * hash) + NEW_VALIDATOR_FIELD_NUMBER;
      hash = (53 * hash) + getNewValidator().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade prototype) {
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
     * Protobuf type {@code protocol.LedgerUpgrade}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.LedgerUpgrade)
        io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgradeOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_LedgerUpgrade_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_LedgerUpgrade_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.class, io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.newBuilder()
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
        newLedgerVersion_ = 0L;

        newValidator_ = "";

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_LedgerUpgrade_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade build() {
        io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade result = new io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade(this);
        result.newLedgerVersion_ = newLedgerVersion_;
        result.newValidator_ = newValidator_;
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade.getDefaultInstance()) return this;
        if (other.getNewLedgerVersion() != 0L) {
          setNewLedgerVersion(other.getNewLedgerVersion());
        }
        if (!other.getNewValidator().isEmpty()) {
          newValidator_ = other.newValidator_;
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
        io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private long newLedgerVersion_ ;
      /**
       * <pre>
       *will be process as required at verion 2.1.0.0
       * </pre>
       *
       * <code>int64 new_ledger_version = 1;</code>
       */
      public long getNewLedgerVersion() {
        return newLedgerVersion_;
      }
      /**
       * <pre>
       *will be process as required at verion 2.1.0.0
       * </pre>
       *
       * <code>int64 new_ledger_version = 1;</code>
       */
      public Builder setNewLedgerVersion(long value) {
        
        newLedgerVersion_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *will be process as required at verion 2.1.0.0
       * </pre>
       *
       * <code>int64 new_ledger_version = 1;</code>
       */
      public Builder clearNewLedgerVersion() {
        
        newLedgerVersion_ = 0L;
        onChanged();
        return this;
      }

      private java.lang.Object newValidator_ = "";
      /**
       * <pre>
       *for hardfork
       * </pre>
       *
       * <code>string new_validator = 2;</code>
       */
      public java.lang.String getNewValidator() {
        java.lang.Object ref = newValidator_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          newValidator_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <pre>
       *for hardfork
       * </pre>
       *
       * <code>string new_validator = 2;</code>
       */
      public com.google.protobuf.ByteString
          getNewValidatorBytes() {
        java.lang.Object ref = newValidator_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          newValidator_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <pre>
       *for hardfork
       * </pre>
       *
       * <code>string new_validator = 2;</code>
       */
      public Builder setNewValidator(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        newValidator_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *for hardfork
       * </pre>
       *
       * <code>string new_validator = 2;</code>
       */
      public Builder clearNewValidator() {
        
        newValidator_ = getDefaultInstance().getNewValidator();
        onChanged();
        return this;
      }
      /**
       * <pre>
       *for hardfork
       * </pre>
       *
       * <code>string new_validator = 2;</code>
       */
      public Builder setNewValidatorBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        newValidator_ = value;
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


      // @@protoc_insertion_point(builder_scope:protocol.LedgerUpgrade)
    }

    // @@protoc_insertion_point(class_scope:protocol.LedgerUpgrade)
    private static final io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade();
    }

    public static io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<LedgerUpgrade>
        PARSER = new com.google.protobuf.AbstractParser<LedgerUpgrade>() {
      public LedgerUpgrade parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new LedgerUpgrade(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<LedgerUpgrade> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<LedgerUpgrade> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Common.LedgerUpgrade getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface WsMessageOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.WsMessage)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <pre>
     *1: ping
     * </pre>
     *
     * <code>int64 type = 1;</code>
     */
    long getType();

    /**
     * <pre>
     *true :request , false:reponse
     * </pre>
     *
     * <code>bool request = 2;</code>
     */
    boolean getRequest();

    /**
     * <code>int64 sequence = 3;</code>
     */
    long getSequence();

    /**
     * <code>bytes data = 4;</code>
     */
    com.google.protobuf.ByteString getData();
  }
  /**
   * Protobuf type {@code protocol.WsMessage}
   */
  public  static final class WsMessage extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.WsMessage)
      WsMessageOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use WsMessage.newBuilder() to construct.
    private WsMessage(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private WsMessage() {
      type_ = 0L;
      request_ = false;
      sequence_ = 0L;
      data_ = com.google.protobuf.ByteString.EMPTY;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private WsMessage(
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
            case 16: {

              request_ = input.readBool();
              break;
            }
            case 24: {

              sequence_ = input.readInt64();
              break;
            }
            case 34: {

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
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_WsMessage_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_WsMessage_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Common.WsMessage.class, io.rexx.sdk.core.extend.protobuf.Common.WsMessage.Builder.class);
    }

    public static final int TYPE_FIELD_NUMBER = 1;
    private long type_;
    /**
     * <pre>
     *1: ping
     * </pre>
     *
     * <code>int64 type = 1;</code>
     */
    public long getType() {
      return type_;
    }

    public static final int REQUEST_FIELD_NUMBER = 2;
    private boolean request_;
    /**
     * <pre>
     *true :request , false:reponse
     * </pre>
     *
     * <code>bool request = 2;</code>
     */
    public boolean getRequest() {
      return request_;
    }

    public static final int SEQUENCE_FIELD_NUMBER = 3;
    private long sequence_;
    /**
     * <code>int64 sequence = 3;</code>
     */
    public long getSequence() {
      return sequence_;
    }

    public static final int DATA_FIELD_NUMBER = 4;
    private com.google.protobuf.ByteString data_;
    /**
     * <code>bytes data = 4;</code>
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
      if (type_ != 0L) {
        output.writeInt64(1, type_);
      }
      if (request_ != false) {
        output.writeBool(2, request_);
      }
      if (sequence_ != 0L) {
        output.writeInt64(3, sequence_);
      }
      if (!data_.isEmpty()) {
        output.writeBytes(4, data_);
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
      if (request_ != false) {
        size += com.google.protobuf.CodedOutputStream
          .computeBoolSize(2, request_);
      }
      if (sequence_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(3, sequence_);
      }
      if (!data_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(4, data_);
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Common.WsMessage)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Common.WsMessage other = (io.rexx.sdk.core.extend.protobuf.Common.WsMessage) obj;

      boolean result = true;
      result = result && (getType()
          == other.getType());
      result = result && (getRequest()
          == other.getRequest());
      result = result && (getSequence()
          == other.getSequence());
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
      hash = (37 * hash) + TYPE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getType());
      hash = (37 * hash) + REQUEST_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashBoolean(
          getRequest());
      hash = (37 * hash) + SEQUENCE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getSequence());
      hash = (37 * hash) + DATA_FIELD_NUMBER;
      hash = (53 * hash) + getData().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Common.WsMessage parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.WsMessage parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.WsMessage parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.WsMessage parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.WsMessage parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.WsMessage parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.WsMessage parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.WsMessage parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.WsMessage parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.WsMessage parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.WsMessage parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.WsMessage parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Common.WsMessage prototype) {
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
     * Protobuf type {@code protocol.WsMessage}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.WsMessage)
        io.rexx.sdk.core.extend.protobuf.Common.WsMessageOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_WsMessage_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_WsMessage_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Common.WsMessage.class, io.rexx.sdk.core.extend.protobuf.Common.WsMessage.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Common.WsMessage.newBuilder()
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

        request_ = false;

        sequence_ = 0L;

        data_ = com.google.protobuf.ByteString.EMPTY;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_WsMessage_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Common.WsMessage getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Common.WsMessage.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Common.WsMessage build() {
        io.rexx.sdk.core.extend.protobuf.Common.WsMessage result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Common.WsMessage buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Common.WsMessage result = new io.rexx.sdk.core.extend.protobuf.Common.WsMessage(this);
        result.type_ = type_;
        result.request_ = request_;
        result.sequence_ = sequence_;
        result.data_ = data_;
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Common.WsMessage) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Common.WsMessage)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Common.WsMessage other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Common.WsMessage.getDefaultInstance()) return this;
        if (other.getType() != 0L) {
          setType(other.getType());
        }
        if (other.getRequest() != false) {
          setRequest(other.getRequest());
        }
        if (other.getSequence() != 0L) {
          setSequence(other.getSequence());
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
        io.rexx.sdk.core.extend.protobuf.Common.WsMessage parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Common.WsMessage) e.getUnfinishedMessage();
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
       * <pre>
       *1: ping
       * </pre>
       *
       * <code>int64 type = 1;</code>
       */
      public long getType() {
        return type_;
      }
      /**
       * <pre>
       *1: ping
       * </pre>
       *
       * <code>int64 type = 1;</code>
       */
      public Builder setType(long value) {
        
        type_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *1: ping
       * </pre>
       *
       * <code>int64 type = 1;</code>
       */
      public Builder clearType() {
        
        type_ = 0L;
        onChanged();
        return this;
      }

      private boolean request_ ;
      /**
       * <pre>
       *true :request , false:reponse
       * </pre>
       *
       * <code>bool request = 2;</code>
       */
      public boolean getRequest() {
        return request_;
      }
      /**
       * <pre>
       *true :request , false:reponse
       * </pre>
       *
       * <code>bool request = 2;</code>
       */
      public Builder setRequest(boolean value) {
        
        request_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *true :request , false:reponse
       * </pre>
       *
       * <code>bool request = 2;</code>
       */
      public Builder clearRequest() {
        
        request_ = false;
        onChanged();
        return this;
      }

      private long sequence_ ;
      /**
       * <code>int64 sequence = 3;</code>
       */
      public long getSequence() {
        return sequence_;
      }
      /**
       * <code>int64 sequence = 3;</code>
       */
      public Builder setSequence(long value) {
        
        sequence_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 sequence = 3;</code>
       */
      public Builder clearSequence() {
        
        sequence_ = 0L;
        onChanged();
        return this;
      }

      private com.google.protobuf.ByteString data_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>bytes data = 4;</code>
       */
      public com.google.protobuf.ByteString getData() {
        return data_;
      }
      /**
       * <code>bytes data = 4;</code>
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
       * <code>bytes data = 4;</code>
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


      // @@protoc_insertion_point(builder_scope:protocol.WsMessage)
    }

    // @@protoc_insertion_point(class_scope:protocol.WsMessage)
    private static final io.rexx.sdk.core.extend.protobuf.Common.WsMessage DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Common.WsMessage();
    }

    public static io.rexx.sdk.core.extend.protobuf.Common.WsMessage getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<WsMessage>
        PARSER = new com.google.protobuf.AbstractParser<WsMessage>() {
      public WsMessage parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new WsMessage(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<WsMessage> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<WsMessage> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Common.WsMessage getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PingOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.Ping)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int64 nonce = 1;</code>
     */
    long getNonce();
  }
  /**
   * <pre>
   *for ping messsage
   * </pre>
   *
   * Protobuf type {@code protocol.Ping}
   */
  public  static final class Ping extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.Ping)
      PingOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Ping.newBuilder() to construct.
    private Ping(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Ping() {
      nonce_ = 0L;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Ping(
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
      return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_Ping_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_Ping_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Common.Ping.class, io.rexx.sdk.core.extend.protobuf.Common.Ping.Builder.class);
    }

    public static final int NONCE_FIELD_NUMBER = 1;
    private long nonce_;
    /**
     * <code>int64 nonce = 1;</code>
     */
    public long getNonce() {
      return nonce_;
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
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Common.Ping)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Common.Ping other = (io.rexx.sdk.core.extend.protobuf.Common.Ping) obj;

      boolean result = true;
      result = result && (getNonce()
          == other.getNonce());
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
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Common.Ping parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Ping parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Ping parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Ping parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Ping parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Ping parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Ping parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Ping parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Ping parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Ping parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Ping parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Ping parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Common.Ping prototype) {
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
     *for ping messsage
     * </pre>
     *
     * Protobuf type {@code protocol.Ping}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.Ping)
        io.rexx.sdk.core.extend.protobuf.Common.PingOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_Ping_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_Ping_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Common.Ping.class, io.rexx.sdk.core.extend.protobuf.Common.Ping.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Common.Ping.newBuilder()
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

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_Ping_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Common.Ping getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Common.Ping.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Common.Ping build() {
        io.rexx.sdk.core.extend.protobuf.Common.Ping result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Common.Ping buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Common.Ping result = new io.rexx.sdk.core.extend.protobuf.Common.Ping(this);
        result.nonce_ = nonce_;
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Common.Ping) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Common.Ping)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Common.Ping other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Common.Ping.getDefaultInstance()) return this;
        if (other.getNonce() != 0L) {
          setNonce(other.getNonce());
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
        io.rexx.sdk.core.extend.protobuf.Common.Ping parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Common.Ping) e.getUnfinishedMessage();
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
       * <code>int64 nonce = 1;</code>
       */
      public long getNonce() {
        return nonce_;
      }
      /**
       * <code>int64 nonce = 1;</code>
       */
      public Builder setNonce(long value) {
        
        nonce_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 nonce = 1;</code>
       */
      public Builder clearNonce() {
        
        nonce_ = 0L;
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


      // @@protoc_insertion_point(builder_scope:protocol.Ping)
    }

    // @@protoc_insertion_point(class_scope:protocol.Ping)
    private static final io.rexx.sdk.core.extend.protobuf.Common.Ping DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Common.Ping();
    }

    public static io.rexx.sdk.core.extend.protobuf.Common.Ping getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Ping>
        PARSER = new com.google.protobuf.AbstractParser<Ping>() {
      public Ping parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Ping(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Ping> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Ping> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Common.Ping getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PongOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.Pong)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int64 nonce = 1;</code>
     */
    long getNonce();
  }
  /**
   * <pre>
   *for pong message
   * </pre>
   *
   * Protobuf type {@code protocol.Pong}
   */
  public  static final class Pong extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.Pong)
      PongOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Pong.newBuilder() to construct.
    private Pong(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Pong() {
      nonce_ = 0L;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Pong(
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
      return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_Pong_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_Pong_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Common.Pong.class, io.rexx.sdk.core.extend.protobuf.Common.Pong.Builder.class);
    }

    public static final int NONCE_FIELD_NUMBER = 1;
    private long nonce_;
    /**
     * <code>int64 nonce = 1;</code>
     */
    public long getNonce() {
      return nonce_;
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
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Common.Pong)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Common.Pong other = (io.rexx.sdk.core.extend.protobuf.Common.Pong) obj;

      boolean result = true;
      result = result && (getNonce()
          == other.getNonce());
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
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Common.Pong parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Pong parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Pong parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Pong parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Pong parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Pong parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Pong parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Pong parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Pong parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Pong parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Pong parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Common.Pong parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Common.Pong prototype) {
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
     *for pong message
     * </pre>
     *
     * Protobuf type {@code protocol.Pong}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.Pong)
        io.rexx.sdk.core.extend.protobuf.Common.PongOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_Pong_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_Pong_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Common.Pong.class, io.rexx.sdk.core.extend.protobuf.Common.Pong.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Common.Pong.newBuilder()
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

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Common.internal_static_protocol_Pong_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Common.Pong getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Common.Pong.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Common.Pong build() {
        io.rexx.sdk.core.extend.protobuf.Common.Pong result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Common.Pong buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Common.Pong result = new io.rexx.sdk.core.extend.protobuf.Common.Pong(this);
        result.nonce_ = nonce_;
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Common.Pong) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Common.Pong)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Common.Pong other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Common.Pong.getDefaultInstance()) return this;
        if (other.getNonce() != 0L) {
          setNonce(other.getNonce());
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
        io.rexx.sdk.core.extend.protobuf.Common.Pong parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Common.Pong) e.getUnfinishedMessage();
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
       * <code>int64 nonce = 1;</code>
       */
      public long getNonce() {
        return nonce_;
      }
      /**
       * <code>int64 nonce = 1;</code>
       */
      public Builder setNonce(long value) {
        
        nonce_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 nonce = 1;</code>
       */
      public Builder clearNonce() {
        
        nonce_ = 0L;
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


      // @@protoc_insertion_point(builder_scope:protocol.Pong)
    }

    // @@protoc_insertion_point(class_scope:protocol.Pong)
    private static final io.rexx.sdk.core.extend.protobuf.Common.Pong DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Common.Pong();
    }

    public static io.rexx.sdk.core.extend.protobuf.Common.Pong getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Pong>
        PARSER = new com.google.protobuf.AbstractParser<Pong>() {
      public Pong parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Pong(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Pong> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Pong> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Common.Pong getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_KeyPair_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_KeyPair_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_Signature_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_Signature_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_LedgerUpgrade_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_LedgerUpgrade_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_WsMessage_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_WsMessage_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_Ping_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_Ping_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_Pong_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_Pong_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\014common.proto\022\010protocol\"6\n\007KeyPair\022\013\n\003k" +
      "ey\030\001 \001(\t\022\r\n\005value\030\002 \001(\t\022\017\n\007version\030\003 \001(\003" +
      "\"2\n\tSignature\022\022\n\npublic_key\030\001 \001(\t\022\021\n\tsig" +
      "n_data\030\002 \001(\014\"B\n\rLedgerUpgrade\022\032\n\022new_led" +
      "ger_version\030\001 \001(\003\022\025\n\rnew_validator\030\002 \001(\t" +
      "\"J\n\tWsMessage\022\014\n\004type\030\001 \001(\003\022\017\n\007request\030\002" +
      " \001(\010\022\020\n\010sequence\030\003 \001(\003\022\014\n\004data\030\004 \001(\014\"\025\n\004" +
      "Ping\022\r\n\005nonce\030\001 \001(\003\"\025\n\004Pong\022\r\n\005nonce\030\001 \001" +
      "(\003*\317\t\n\tERRORCODE\022\023\n\017ERRCODE_SUCCESS\020\000\022\032\n" +
      "\026ERRCODE_INTERNAL_ERROR\020\001\022\035\n\031ERRCODE_INV" +
      "ALID_PARAMETER\020\002\022\031\n\025ERRCODE_ALREADY_EXIS" +
      "T\020\003\022\025\n\021ERRCODE_NOT_EXIST\020\004\022\026\n\022ERRCODE_TX" +
      "_TIMEOUT\020\005\022\031\n\025ERRCODE_ACCESS_DENIED\020\006\022\031\n" +
      "\025ERRCODE_MATH_OVERFLOW\020\007\022\'\n#ERRCODE_EXPR" +
      "_CONDITION_RESULT_FALSE\020\024\022\'\n#ERRCODE_EXP" +
      "R_CONDITION_SYNTAX_ERROR\020\025\022\032\n\026ERRCODE_IN" +
      "VALID_PUBKEY\020Z\022\032\n\026ERRCODE_INVALID_PRIKEY" +
      "\020[\022\031\n\025ERRCODE_ASSET_INVALID\020\\\022\035\n\031ERRCODE" +
      "_INVALID_SIGNATURE\020]\022\033\n\027ERRCODE_INVALID_" +
      "ADDRESS\020^\022\036\n\032ERRCODE_MISSING_OPERATIONS\020" +
      "a\022\037\n\033ERRCODE_TOO_MANY_OPERATIONS\020b\022\030\n\024ER" +
      "RCODE_BAD_SEQUENCE\020c\022\037\n\033ERRCODE_ACCOUNT_" +
      "LOW_RESERVE\020d\022$\n ERRCODE_ACCOUNT_SOURCED" +
      "EST_EQUAL\020e\022\036\n\032ERRCODE_ACCOUNT_DEST_EXIS" +
      "T\020f\022\035\n\031ERRCODE_ACCOUNT_NOT_EXIST\020g\022%\n!ER" +
      "RCODE_ACCOUNT_ASSET_LOW_RESERVE\020h\022*\n&ERR" +
      "CODE_ACCOUNT_ASSET_AMOUNT_TOO_LARGE\020i\022$\n" +
      " ERRCODE_ACCOUNT_INIT_LOW_RESERVE\020j\022\032\n\026E" +
      "RRCODE_FEE_NOT_ENOUGH\020o\022\027\n\023ERRCODE_FEE_I" +
      "NVALID\020p\022\032\n\026ERRCODE_OUT_OF_TXCACHE\020r\022\034\n\030" +
      "ERRCODE_WEIGHT_NOT_VALID\020x\022\037\n\033ERRCODE_TH" +
      "RESHOLD_NOT_VALID\020y\022 \n\033ERRCODE_INVALID_D" +
      "ATAVERSION\020\220\001\022\034\n\027ERRCODE_TX_SIZE_TOO_BIG" +
      "\020\222\001\022\"\n\035ERRCODE_CONTRACT_EXECUTE_FAIL\020\227\001\022" +
      "\"\n\035ERRCODE_CONTRACT_SYNTAX_ERROR\020\230\001\022(\n#E" +
      "RRCODE_CONTRACT_TOO_MANY_RECURSION\020\231\001\022+\n" +
      "&ERRCODE_CONTRACT_TOO_MANY_TRANSACTIONS\020" +
      "\232\001\022%\n ERRCODE_CONTRACT_EXECUTE_EXPIRED\020\233" +
      "\001\022!\n\034ERRCODE_TX_INSERT_QUEUE_FAIL\020\240\001B\"\n " +
      "io.rexx.sdk.core.extend.protobufb\006proto3"
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
        }, assigner);
    internal_static_protocol_KeyPair_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_protocol_KeyPair_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_KeyPair_descriptor,
        new java.lang.String[] { "Key", "Value", "Version", });
    internal_static_protocol_Signature_descriptor =
      getDescriptor().getMessageTypes().get(1);
    internal_static_protocol_Signature_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_Signature_descriptor,
        new java.lang.String[] { "PublicKey", "SignData", });
    internal_static_protocol_LedgerUpgrade_descriptor =
      getDescriptor().getMessageTypes().get(2);
    internal_static_protocol_LedgerUpgrade_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_LedgerUpgrade_descriptor,
        new java.lang.String[] { "NewLedgerVersion", "NewValidator", });
    internal_static_protocol_WsMessage_descriptor =
      getDescriptor().getMessageTypes().get(3);
    internal_static_protocol_WsMessage_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_WsMessage_descriptor,
        new java.lang.String[] { "Type", "Request", "Sequence", "Data", });
    internal_static_protocol_Ping_descriptor =
      getDescriptor().getMessageTypes().get(4);
    internal_static_protocol_Ping_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_Ping_descriptor,
        new java.lang.String[] { "Nonce", });
    internal_static_protocol_Pong_descriptor =
      getDescriptor().getMessageTypes().get(5);
    internal_static_protocol_Pong_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_Pong_descriptor,
        new java.lang.String[] { "Nonce", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
