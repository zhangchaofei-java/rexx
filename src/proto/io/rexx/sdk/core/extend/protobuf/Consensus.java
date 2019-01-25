

package io.rexx.sdk.core.extend.protobuf;

public final class Consensus {
  private Consensus() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  /**
   * Protobuf enum {@code protocol.PbftMessageType}
   */
  public enum PbftMessageType
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>PBFT_TYPE_PREPREPARE = 0;</code>
     */
    PBFT_TYPE_PREPREPARE(0),
    /**
     * <code>PBFT_TYPE_PREPARE = 1;</code>
     */
    PBFT_TYPE_PREPARE(1),
    /**
     * <code>PBFT_TYPE_COMMIT = 2;</code>
     */
    PBFT_TYPE_COMMIT(2),
    /**
     * <code>PBFT_TYPE_VIEWCHANGE = 3;</code>
     */
    PBFT_TYPE_VIEWCHANGE(3),
    /**
     * <code>PBFT_TYPE_NEWVIEW = 4;</code>
     */
    PBFT_TYPE_NEWVIEW(4),
    /**
     * <code>PBFT_TYPE_VIEWCHANG_WITH_RAWVALUE = 5;</code>
     */
    PBFT_TYPE_VIEWCHANG_WITH_RAWVALUE(5),
    UNRECOGNIZED(-1),
    ;

    /**
     * <code>PBFT_TYPE_PREPREPARE = 0;</code>
     */
    public static final int PBFT_TYPE_PREPREPARE_VALUE = 0;
    /**
     * <code>PBFT_TYPE_PREPARE = 1;</code>
     */
    public static final int PBFT_TYPE_PREPARE_VALUE = 1;
    /**
     * <code>PBFT_TYPE_COMMIT = 2;</code>
     */
    public static final int PBFT_TYPE_COMMIT_VALUE = 2;
    /**
     * <code>PBFT_TYPE_VIEWCHANGE = 3;</code>
     */
    public static final int PBFT_TYPE_VIEWCHANGE_VALUE = 3;
    /**
     * <code>PBFT_TYPE_NEWVIEW = 4;</code>
     */
    public static final int PBFT_TYPE_NEWVIEW_VALUE = 4;
    /**
     * <code>PBFT_TYPE_VIEWCHANG_WITH_RAWVALUE = 5;</code>
     */
    public static final int PBFT_TYPE_VIEWCHANG_WITH_RAWVALUE_VALUE = 5;


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
    public static PbftMessageType valueOf(int value) {
      return forNumber(value);
    }

    public static PbftMessageType forNumber(int value) {
      switch (value) {
        case 0: return PBFT_TYPE_PREPREPARE;
        case 1: return PBFT_TYPE_PREPARE;
        case 2: return PBFT_TYPE_COMMIT;
        case 3: return PBFT_TYPE_VIEWCHANGE;
        case 4: return PBFT_TYPE_NEWVIEW;
        case 5: return PBFT_TYPE_VIEWCHANG_WITH_RAWVALUE;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<PbftMessageType>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static final com.google.protobuf.Internal.EnumLiteMap<
        PbftMessageType> internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<PbftMessageType>() {
            public PbftMessageType findValueByNumber(int number) {
              return PbftMessageType.forNumber(number);
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
      return io.rexx.sdk.core.extend.protobuf.Consensus.getDescriptor().getEnumTypes().get(0);
    }

    private static final PbftMessageType[] VALUES = values();

    public static PbftMessageType valueOf(
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

    private PbftMessageType(int value) {
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:protocol.PbftMessageType)
  }

  /**
   * Protobuf enum {@code protocol.PbftValueType}
   */
  public enum PbftValueType
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>PBFT_VALUE_TX = 0;</code>
     */
    PBFT_VALUE_TX(0),
    /**
     * <code>PBFT_VALUE_TXSET = 1;</code>
     */
    PBFT_VALUE_TXSET(1),
    UNRECOGNIZED(-1),
    ;

    /**
     * <code>PBFT_VALUE_TX = 0;</code>
     */
    public static final int PBFT_VALUE_TX_VALUE = 0;
    /**
     * <code>PBFT_VALUE_TXSET = 1;</code>
     */
    public static final int PBFT_VALUE_TXSET_VALUE = 1;


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
    public static PbftValueType valueOf(int value) {
      return forNumber(value);
    }

    public static PbftValueType forNumber(int value) {
      switch (value) {
        case 0: return PBFT_VALUE_TX;
        case 1: return PBFT_VALUE_TXSET;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<PbftValueType>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static final com.google.protobuf.Internal.EnumLiteMap<
        PbftValueType> internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<PbftValueType>() {
            public PbftValueType findValueByNumber(int number) {
              return PbftValueType.forNumber(number);
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
      return io.rexx.sdk.core.extend.protobuf.Consensus.getDescriptor().getEnumTypes().get(1);
    }

    private static final PbftValueType[] VALUES = values();

    public static PbftValueType valueOf(
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

    private PbftValueType(int value) {
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:protocol.PbftValueType)
  }

  public interface PbftPrePrepareOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.PbftPrePrepare)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int64 view_number = 1;</code>
     */
    long getViewNumber();

    /**
     * <code>int64 sequence = 2;</code>
     */
    long getSequence();

    /**
     * <code>int64 replica_id = 3;</code>
     */
    long getReplicaId();

    /**
     * <code>bytes value = 4;</code>
     */
    com.google.protobuf.ByteString getValue();

    /**
     * <code>bytes value_digest = 5;</code>
     */
    com.google.protobuf.ByteString getValueDigest();
  }
  /**
   * <pre>
   *PBFT protocol
   * </pre>
   *
   * Protobuf type {@code protocol.PbftPrePrepare}
   */
  public  static final class PbftPrePrepare extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.PbftPrePrepare)
      PbftPrePrepareOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use PbftPrePrepare.newBuilder() to construct.
    private PbftPrePrepare(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private PbftPrePrepare() {
      viewNumber_ = 0L;
      sequence_ = 0L;
      replicaId_ = 0L;
      value_ = com.google.protobuf.ByteString.EMPTY;
      valueDigest_ = com.google.protobuf.ByteString.EMPTY;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private PbftPrePrepare(
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

              viewNumber_ = input.readInt64();
              break;
            }
            case 16: {

              sequence_ = input.readInt64();
              break;
            }
            case 24: {

              replicaId_ = input.readInt64();
              break;
            }
            case 34: {

              value_ = input.readBytes();
              break;
            }
            case 42: {

              valueDigest_ = input.readBytes();
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
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftPrePrepare_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftPrePrepare_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.Builder.class);
    }

    public static final int VIEW_NUMBER_FIELD_NUMBER = 1;
    private long viewNumber_;
    /**
     * <code>int64 view_number = 1;</code>
     */
    public long getViewNumber() {
      return viewNumber_;
    }

    public static final int SEQUENCE_FIELD_NUMBER = 2;
    private long sequence_;
    /**
     * <code>int64 sequence = 2;</code>
     */
    public long getSequence() {
      return sequence_;
    }

    public static final int REPLICA_ID_FIELD_NUMBER = 3;
    private long replicaId_;
    /**
     * <code>int64 replica_id = 3;</code>
     */
    public long getReplicaId() {
      return replicaId_;
    }

    public static final int VALUE_FIELD_NUMBER = 4;
    private com.google.protobuf.ByteString value_;
    /**
     * <code>bytes value = 4;</code>
     */
    public com.google.protobuf.ByteString getValue() {
      return value_;
    }

    public static final int VALUE_DIGEST_FIELD_NUMBER = 5;
    private com.google.protobuf.ByteString valueDigest_;
    /**
     * <code>bytes value_digest = 5;</code>
     */
    public com.google.protobuf.ByteString getValueDigest() {
      return valueDigest_;
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
      if (viewNumber_ != 0L) {
        output.writeInt64(1, viewNumber_);
      }
      if (sequence_ != 0L) {
        output.writeInt64(2, sequence_);
      }
      if (replicaId_ != 0L) {
        output.writeInt64(3, replicaId_);
      }
      if (!value_.isEmpty()) {
        output.writeBytes(4, value_);
      }
      if (!valueDigest_.isEmpty()) {
        output.writeBytes(5, valueDigest_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (viewNumber_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, viewNumber_);
      }
      if (sequence_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, sequence_);
      }
      if (replicaId_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(3, replicaId_);
      }
      if (!value_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(4, value_);
      }
      if (!valueDigest_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(5, valueDigest_);
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare other = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare) obj;

      boolean result = true;
      result = result && (getViewNumber()
          == other.getViewNumber());
      result = result && (getSequence()
          == other.getSequence());
      result = result && (getReplicaId()
          == other.getReplicaId());
      result = result && getValue()
          .equals(other.getValue());
      result = result && getValueDigest()
          .equals(other.getValueDigest());
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
      hash = (37 * hash) + VIEW_NUMBER_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getViewNumber());
      hash = (37 * hash) + SEQUENCE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getSequence());
      hash = (37 * hash) + REPLICA_ID_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getReplicaId());
      hash = (37 * hash) + VALUE_FIELD_NUMBER;
      hash = (53 * hash) + getValue().hashCode();
      hash = (37 * hash) + VALUE_DIGEST_FIELD_NUMBER;
      hash = (53 * hash) + getValueDigest().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare prototype) {
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
     *PBFT protocol
     * </pre>
     *
     * Protobuf type {@code protocol.PbftPrePrepare}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.PbftPrePrepare)
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepareOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftPrePrepare_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftPrePrepare_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.newBuilder()
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
        viewNumber_ = 0L;

        sequence_ = 0L;

        replicaId_ = 0L;

        value_ = com.google.protobuf.ByteString.EMPTY;

        valueDigest_ = com.google.protobuf.ByteString.EMPTY;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftPrePrepare_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare build() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare result = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare(this);
        result.viewNumber_ = viewNumber_;
        result.sequence_ = sequence_;
        result.replicaId_ = replicaId_;
        result.value_ = value_;
        result.valueDigest_ = valueDigest_;
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.getDefaultInstance()) return this;
        if (other.getViewNumber() != 0L) {
          setViewNumber(other.getViewNumber());
        }
        if (other.getSequence() != 0L) {
          setSequence(other.getSequence());
        }
        if (other.getReplicaId() != 0L) {
          setReplicaId(other.getReplicaId());
        }
        if (other.getValue() != com.google.protobuf.ByteString.EMPTY) {
          setValue(other.getValue());
        }
        if (other.getValueDigest() != com.google.protobuf.ByteString.EMPTY) {
          setValueDigest(other.getValueDigest());
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
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private long viewNumber_ ;
      /**
       * <code>int64 view_number = 1;</code>
       */
      public long getViewNumber() {
        return viewNumber_;
      }
      /**
       * <code>int64 view_number = 1;</code>
       */
      public Builder setViewNumber(long value) {
        
        viewNumber_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 view_number = 1;</code>
       */
      public Builder clearViewNumber() {
        
        viewNumber_ = 0L;
        onChanged();
        return this;
      }

      private long sequence_ ;
      /**
       * <code>int64 sequence = 2;</code>
       */
      public long getSequence() {
        return sequence_;
      }
      /**
       * <code>int64 sequence = 2;</code>
       */
      public Builder setSequence(long value) {
        
        sequence_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 sequence = 2;</code>
       */
      public Builder clearSequence() {
        
        sequence_ = 0L;
        onChanged();
        return this;
      }

      private long replicaId_ ;
      /**
       * <code>int64 replica_id = 3;</code>
       */
      public long getReplicaId() {
        return replicaId_;
      }
      /**
       * <code>int64 replica_id = 3;</code>
       */
      public Builder setReplicaId(long value) {
        
        replicaId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 replica_id = 3;</code>
       */
      public Builder clearReplicaId() {
        
        replicaId_ = 0L;
        onChanged();
        return this;
      }

      private com.google.protobuf.ByteString value_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>bytes value = 4;</code>
       */
      public com.google.protobuf.ByteString getValue() {
        return value_;
      }
      /**
       * <code>bytes value = 4;</code>
       */
      public Builder setValue(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        value_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>bytes value = 4;</code>
       */
      public Builder clearValue() {
        
        value_ = getDefaultInstance().getValue();
        onChanged();
        return this;
      }

      private com.google.protobuf.ByteString valueDigest_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>bytes value_digest = 5;</code>
       */
      public com.google.protobuf.ByteString getValueDigest() {
        return valueDigest_;
      }
      /**
       * <code>bytes value_digest = 5;</code>
       */
      public Builder setValueDigest(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        valueDigest_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>bytes value_digest = 5;</code>
       */
      public Builder clearValueDigest() {
        
        valueDigest_ = getDefaultInstance().getValueDigest();
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


      // @@protoc_insertion_point(builder_scope:protocol.PbftPrePrepare)
    }

    // @@protoc_insertion_point(class_scope:protocol.PbftPrePrepare)
    private static final io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare();
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<PbftPrePrepare>
        PARSER = new com.google.protobuf.AbstractParser<PbftPrePrepare>() {
      public PbftPrePrepare parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new PbftPrePrepare(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<PbftPrePrepare> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<PbftPrePrepare> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PbftPrepareOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.PbftPrepare)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int64 view_number = 1;</code>
     */
    long getViewNumber();

    /**
     * <code>int64 sequence = 2;</code>
     */
    long getSequence();

    /**
     * <code>int64 replica_id = 3;</code>
     */
    long getReplicaId();

    /**
     * <code>bytes value_digest = 4;</code>
     */
    com.google.protobuf.ByteString getValueDigest();
  }
  /**
   * Protobuf type {@code protocol.PbftPrepare}
   */
  public  static final class PbftPrepare extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.PbftPrepare)
      PbftPrepareOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use PbftPrepare.newBuilder() to construct.
    private PbftPrepare(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private PbftPrepare() {
      viewNumber_ = 0L;
      sequence_ = 0L;
      replicaId_ = 0L;
      valueDigest_ = com.google.protobuf.ByteString.EMPTY;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private PbftPrepare(
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

              viewNumber_ = input.readInt64();
              break;
            }
            case 16: {

              sequence_ = input.readInt64();
              break;
            }
            case 24: {

              replicaId_ = input.readInt64();
              break;
            }
            case 34: {

              valueDigest_ = input.readBytes();
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
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftPrepare_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftPrepare_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.Builder.class);
    }

    public static final int VIEW_NUMBER_FIELD_NUMBER = 1;
    private long viewNumber_;
    /**
     * <code>int64 view_number = 1;</code>
     */
    public long getViewNumber() {
      return viewNumber_;
    }

    public static final int SEQUENCE_FIELD_NUMBER = 2;
    private long sequence_;
    /**
     * <code>int64 sequence = 2;</code>
     */
    public long getSequence() {
      return sequence_;
    }

    public static final int REPLICA_ID_FIELD_NUMBER = 3;
    private long replicaId_;
    /**
     * <code>int64 replica_id = 3;</code>
     */
    public long getReplicaId() {
      return replicaId_;
    }

    public static final int VALUE_DIGEST_FIELD_NUMBER = 4;
    private com.google.protobuf.ByteString valueDigest_;
    /**
     * <code>bytes value_digest = 4;</code>
     */
    public com.google.protobuf.ByteString getValueDigest() {
      return valueDigest_;
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
      if (viewNumber_ != 0L) {
        output.writeInt64(1, viewNumber_);
      }
      if (sequence_ != 0L) {
        output.writeInt64(2, sequence_);
      }
      if (replicaId_ != 0L) {
        output.writeInt64(3, replicaId_);
      }
      if (!valueDigest_.isEmpty()) {
        output.writeBytes(4, valueDigest_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (viewNumber_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, viewNumber_);
      }
      if (sequence_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, sequence_);
      }
      if (replicaId_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(3, replicaId_);
      }
      if (!valueDigest_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(4, valueDigest_);
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare other = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare) obj;

      boolean result = true;
      result = result && (getViewNumber()
          == other.getViewNumber());
      result = result && (getSequence()
          == other.getSequence());
      result = result && (getReplicaId()
          == other.getReplicaId());
      result = result && getValueDigest()
          .equals(other.getValueDigest());
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
      hash = (37 * hash) + VIEW_NUMBER_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getViewNumber());
      hash = (37 * hash) + SEQUENCE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getSequence());
      hash = (37 * hash) + REPLICA_ID_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getReplicaId());
      hash = (37 * hash) + VALUE_DIGEST_FIELD_NUMBER;
      hash = (53 * hash) + getValueDigest().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare prototype) {
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
     * Protobuf type {@code protocol.PbftPrepare}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.PbftPrepare)
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepareOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftPrepare_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftPrepare_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.newBuilder()
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
        viewNumber_ = 0L;

        sequence_ = 0L;

        replicaId_ = 0L;

        valueDigest_ = com.google.protobuf.ByteString.EMPTY;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftPrepare_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare build() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare result = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare(this);
        result.viewNumber_ = viewNumber_;
        result.sequence_ = sequence_;
        result.replicaId_ = replicaId_;
        result.valueDigest_ = valueDigest_;
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.getDefaultInstance()) return this;
        if (other.getViewNumber() != 0L) {
          setViewNumber(other.getViewNumber());
        }
        if (other.getSequence() != 0L) {
          setSequence(other.getSequence());
        }
        if (other.getReplicaId() != 0L) {
          setReplicaId(other.getReplicaId());
        }
        if (other.getValueDigest() != com.google.protobuf.ByteString.EMPTY) {
          setValueDigest(other.getValueDigest());
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
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private long viewNumber_ ;
      /**
       * <code>int64 view_number = 1;</code>
       */
      public long getViewNumber() {
        return viewNumber_;
      }
      /**
       * <code>int64 view_number = 1;</code>
       */
      public Builder setViewNumber(long value) {
        
        viewNumber_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 view_number = 1;</code>
       */
      public Builder clearViewNumber() {
        
        viewNumber_ = 0L;
        onChanged();
        return this;
      }

      private long sequence_ ;
      /**
       * <code>int64 sequence = 2;</code>
       */
      public long getSequence() {
        return sequence_;
      }
      /**
       * <code>int64 sequence = 2;</code>
       */
      public Builder setSequence(long value) {
        
        sequence_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 sequence = 2;</code>
       */
      public Builder clearSequence() {
        
        sequence_ = 0L;
        onChanged();
        return this;
      }

      private long replicaId_ ;
      /**
       * <code>int64 replica_id = 3;</code>
       */
      public long getReplicaId() {
        return replicaId_;
      }
      /**
       * <code>int64 replica_id = 3;</code>
       */
      public Builder setReplicaId(long value) {
        
        replicaId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 replica_id = 3;</code>
       */
      public Builder clearReplicaId() {
        
        replicaId_ = 0L;
        onChanged();
        return this;
      }

      private com.google.protobuf.ByteString valueDigest_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>bytes value_digest = 4;</code>
       */
      public com.google.protobuf.ByteString getValueDigest() {
        return valueDigest_;
      }
      /**
       * <code>bytes value_digest = 4;</code>
       */
      public Builder setValueDigest(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        valueDigest_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>bytes value_digest = 4;</code>
       */
      public Builder clearValueDigest() {
        
        valueDigest_ = getDefaultInstance().getValueDigest();
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


      // @@protoc_insertion_point(builder_scope:protocol.PbftPrepare)
    }

    // @@protoc_insertion_point(class_scope:protocol.PbftPrepare)
    private static final io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare();
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<PbftPrepare>
        PARSER = new com.google.protobuf.AbstractParser<PbftPrepare>() {
      public PbftPrepare parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new PbftPrepare(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<PbftPrepare> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<PbftPrepare> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PbftCommitOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.PbftCommit)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int64 view_number = 1;</code>
     */
    long getViewNumber();

    /**
     * <code>int64 sequence = 2;</code>
     */
    long getSequence();

    /**
     * <code>int64 replica_id = 3;</code>
     */
    long getReplicaId();

    /**
     * <code>bytes value_digest = 4;</code>
     */
    com.google.protobuf.ByteString getValueDigest();
  }
  /**
   * Protobuf type {@code protocol.PbftCommit}
   */
  public  static final class PbftCommit extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.PbftCommit)
      PbftCommitOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use PbftCommit.newBuilder() to construct.
    private PbftCommit(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private PbftCommit() {
      viewNumber_ = 0L;
      sequence_ = 0L;
      replicaId_ = 0L;
      valueDigest_ = com.google.protobuf.ByteString.EMPTY;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private PbftCommit(
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

              viewNumber_ = input.readInt64();
              break;
            }
            case 16: {

              sequence_ = input.readInt64();
              break;
            }
            case 24: {

              replicaId_ = input.readInt64();
              break;
            }
            case 34: {

              valueDigest_ = input.readBytes();
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
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftCommit_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftCommit_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.Builder.class);
    }

    public static final int VIEW_NUMBER_FIELD_NUMBER = 1;
    private long viewNumber_;
    /**
     * <code>int64 view_number = 1;</code>
     */
    public long getViewNumber() {
      return viewNumber_;
    }

    public static final int SEQUENCE_FIELD_NUMBER = 2;
    private long sequence_;
    /**
     * <code>int64 sequence = 2;</code>
     */
    public long getSequence() {
      return sequence_;
    }

    public static final int REPLICA_ID_FIELD_NUMBER = 3;
    private long replicaId_;
    /**
     * <code>int64 replica_id = 3;</code>
     */
    public long getReplicaId() {
      return replicaId_;
    }

    public static final int VALUE_DIGEST_FIELD_NUMBER = 4;
    private com.google.protobuf.ByteString valueDigest_;
    /**
     * <code>bytes value_digest = 4;</code>
     */
    public com.google.protobuf.ByteString getValueDigest() {
      return valueDigest_;
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
      if (viewNumber_ != 0L) {
        output.writeInt64(1, viewNumber_);
      }
      if (sequence_ != 0L) {
        output.writeInt64(2, sequence_);
      }
      if (replicaId_ != 0L) {
        output.writeInt64(3, replicaId_);
      }
      if (!valueDigest_.isEmpty()) {
        output.writeBytes(4, valueDigest_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (viewNumber_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, viewNumber_);
      }
      if (sequence_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, sequence_);
      }
      if (replicaId_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(3, replicaId_);
      }
      if (!valueDigest_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(4, valueDigest_);
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit other = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit) obj;

      boolean result = true;
      result = result && (getViewNumber()
          == other.getViewNumber());
      result = result && (getSequence()
          == other.getSequence());
      result = result && (getReplicaId()
          == other.getReplicaId());
      result = result && getValueDigest()
          .equals(other.getValueDigest());
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
      hash = (37 * hash) + VIEW_NUMBER_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getViewNumber());
      hash = (37 * hash) + SEQUENCE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getSequence());
      hash = (37 * hash) + REPLICA_ID_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getReplicaId());
      hash = (37 * hash) + VALUE_DIGEST_FIELD_NUMBER;
      hash = (53 * hash) + getValueDigest().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit prototype) {
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
     * Protobuf type {@code protocol.PbftCommit}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.PbftCommit)
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommitOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftCommit_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftCommit_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.newBuilder()
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
        viewNumber_ = 0L;

        sequence_ = 0L;

        replicaId_ = 0L;

        valueDigest_ = com.google.protobuf.ByteString.EMPTY;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftCommit_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit build() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit result = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit(this);
        result.viewNumber_ = viewNumber_;
        result.sequence_ = sequence_;
        result.replicaId_ = replicaId_;
        result.valueDigest_ = valueDigest_;
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.getDefaultInstance()) return this;
        if (other.getViewNumber() != 0L) {
          setViewNumber(other.getViewNumber());
        }
        if (other.getSequence() != 0L) {
          setSequence(other.getSequence());
        }
        if (other.getReplicaId() != 0L) {
          setReplicaId(other.getReplicaId());
        }
        if (other.getValueDigest() != com.google.protobuf.ByteString.EMPTY) {
          setValueDigest(other.getValueDigest());
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
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private long viewNumber_ ;
      /**
       * <code>int64 view_number = 1;</code>
       */
      public long getViewNumber() {
        return viewNumber_;
      }
      /**
       * <code>int64 view_number = 1;</code>
       */
      public Builder setViewNumber(long value) {
        
        viewNumber_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 view_number = 1;</code>
       */
      public Builder clearViewNumber() {
        
        viewNumber_ = 0L;
        onChanged();
        return this;
      }

      private long sequence_ ;
      /**
       * <code>int64 sequence = 2;</code>
       */
      public long getSequence() {
        return sequence_;
      }
      /**
       * <code>int64 sequence = 2;</code>
       */
      public Builder setSequence(long value) {
        
        sequence_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 sequence = 2;</code>
       */
      public Builder clearSequence() {
        
        sequence_ = 0L;
        onChanged();
        return this;
      }

      private long replicaId_ ;
      /**
       * <code>int64 replica_id = 3;</code>
       */
      public long getReplicaId() {
        return replicaId_;
      }
      /**
       * <code>int64 replica_id = 3;</code>
       */
      public Builder setReplicaId(long value) {
        
        replicaId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 replica_id = 3;</code>
       */
      public Builder clearReplicaId() {
        
        replicaId_ = 0L;
        onChanged();
        return this;
      }

      private com.google.protobuf.ByteString valueDigest_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>bytes value_digest = 4;</code>
       */
      public com.google.protobuf.ByteString getValueDigest() {
        return valueDigest_;
      }
      /**
       * <code>bytes value_digest = 4;</code>
       */
      public Builder setValueDigest(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        valueDigest_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>bytes value_digest = 4;</code>
       */
      public Builder clearValueDigest() {
        
        valueDigest_ = getDefaultInstance().getValueDigest();
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


      // @@protoc_insertion_point(builder_scope:protocol.PbftCommit)
    }

    // @@protoc_insertion_point(class_scope:protocol.PbftCommit)
    private static final io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit();
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<PbftCommit>
        PARSER = new com.google.protobuf.AbstractParser<PbftCommit>() {
      public PbftCommit parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new PbftCommit(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<PbftCommit> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<PbftCommit> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PbftPreparedSetOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.PbftPreparedSet)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>.protocol.PbftEnv pre_prepare = 1;</code>
     */
    boolean hasPrePrepare();
    /**
     * <code>.protocol.PbftEnv pre_prepare = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getPrePrepare();
    /**
     * <code>.protocol.PbftEnv pre_prepare = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getPrePrepareOrBuilder();

    /**
     * <code>repeated .protocol.PbftEnv prepare = 2;</code>
     */
    java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv>
        getPrepareList();
    /**
     * <code>repeated .protocol.PbftEnv prepare = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getPrepare(int index);
    /**
     * <code>repeated .protocol.PbftEnv prepare = 2;</code>
     */
    int getPrepareCount();
    /**
     * <code>repeated .protocol.PbftEnv prepare = 2;</code>
     */
    java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>
        getPrepareOrBuilderList();
    /**
     * <code>repeated .protocol.PbftEnv prepare = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getPrepareOrBuilder(
        int index);
  }
  /**
   * Protobuf type {@code protocol.PbftPreparedSet}
   */
  public  static final class PbftPreparedSet extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.PbftPreparedSet)
      PbftPreparedSetOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use PbftPreparedSet.newBuilder() to construct.
    private PbftPreparedSet(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private PbftPreparedSet() {
      prepare_ = java.util.Collections.emptyList();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private PbftPreparedSet(
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
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder subBuilder = null;
              if (prePrepare_ != null) {
                subBuilder = prePrepare_.toBuilder();
              }
              prePrepare_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(prePrepare_);
                prePrepare_ = subBuilder.buildPartial();
              }

              break;
            }
            case 18: {
              if (!((mutable_bitField0_ & 0x00000002) == 0x00000002)) {
                prepare_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv>();
                mutable_bitField0_ |= 0x00000002;
              }
              prepare_.add(
                  input.readMessage(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.parser(), extensionRegistry));
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
          prepare_ = java.util.Collections.unmodifiableList(prepare_);
        }
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftPreparedSet_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftPreparedSet_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.Builder.class);
    }

    private int bitField0_;
    public static final int PRE_PREPARE_FIELD_NUMBER = 1;
    private io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv prePrepare_;
    /**
     * <code>.protocol.PbftEnv pre_prepare = 1;</code>
     */
    public boolean hasPrePrepare() {
      return prePrepare_ != null;
    }
    /**
     * <code>.protocol.PbftEnv pre_prepare = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getPrePrepare() {
      return prePrepare_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance() : prePrepare_;
    }
    /**
     * <code>.protocol.PbftEnv pre_prepare = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getPrePrepareOrBuilder() {
      return getPrePrepare();
    }

    public static final int PREPARE_FIELD_NUMBER = 2;
    private java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv> prepare_;
    /**
     * <code>repeated .protocol.PbftEnv prepare = 2;</code>
     */
    public java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv> getPrepareList() {
      return prepare_;
    }
    /**
     * <code>repeated .protocol.PbftEnv prepare = 2;</code>
     */
    public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>
        getPrepareOrBuilderList() {
      return prepare_;
    }
    /**
     * <code>repeated .protocol.PbftEnv prepare = 2;</code>
     */
    public int getPrepareCount() {
      return prepare_.size();
    }
    /**
     * <code>repeated .protocol.PbftEnv prepare = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getPrepare(int index) {
      return prepare_.get(index);
    }
    /**
     * <code>repeated .protocol.PbftEnv prepare = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getPrepareOrBuilder(
        int index) {
      return prepare_.get(index);
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
      if (prePrepare_ != null) {
        output.writeMessage(1, getPrePrepare());
      }
      for (int i = 0; i < prepare_.size(); i++) {
        output.writeMessage(2, prepare_.get(i));
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (prePrepare_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, getPrePrepare());
      }
      for (int i = 0; i < prepare_.size(); i++) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(2, prepare_.get(i));
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet other = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet) obj;

      boolean result = true;
      result = result && (hasPrePrepare() == other.hasPrePrepare());
      if (hasPrePrepare()) {
        result = result && getPrePrepare()
            .equals(other.getPrePrepare());
      }
      result = result && getPrepareList()
          .equals(other.getPrepareList());
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
      if (hasPrePrepare()) {
        hash = (37 * hash) + PRE_PREPARE_FIELD_NUMBER;
        hash = (53 * hash) + getPrePrepare().hashCode();
      }
      if (getPrepareCount() > 0) {
        hash = (37 * hash) + PREPARE_FIELD_NUMBER;
        hash = (53 * hash) + getPrepareList().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet prototype) {
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
     * Protobuf type {@code protocol.PbftPreparedSet}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.PbftPreparedSet)
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSetOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftPreparedSet_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftPreparedSet_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.newBuilder()
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
          getPrepareFieldBuilder();
        }
      }
      public Builder clear() {
        super.clear();
        if (prePrepareBuilder_ == null) {
          prePrepare_ = null;
        } else {
          prePrepare_ = null;
          prePrepareBuilder_ = null;
        }
        if (prepareBuilder_ == null) {
          prepare_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000002);
        } else {
          prepareBuilder_.clear();
        }
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftPreparedSet_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet build() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet result = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (prePrepareBuilder_ == null) {
          result.prePrepare_ = prePrepare_;
        } else {
          result.prePrepare_ = prePrepareBuilder_.build();
        }
        if (prepareBuilder_ == null) {
          if (((bitField0_ & 0x00000002) == 0x00000002)) {
            prepare_ = java.util.Collections.unmodifiableList(prepare_);
            bitField0_ = (bitField0_ & ~0x00000002);
          }
          result.prepare_ = prepare_;
        } else {
          result.prepare_ = prepareBuilder_.build();
        }
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.getDefaultInstance()) return this;
        if (other.hasPrePrepare()) {
          mergePrePrepare(other.getPrePrepare());
        }
        if (prepareBuilder_ == null) {
          if (!other.prepare_.isEmpty()) {
            if (prepare_.isEmpty()) {
              prepare_ = other.prepare_;
              bitField0_ = (bitField0_ & ~0x00000002);
            } else {
              ensurePrepareIsMutable();
              prepare_.addAll(other.prepare_);
            }
            onChanged();
          }
        } else {
          if (!other.prepare_.isEmpty()) {
            if (prepareBuilder_.isEmpty()) {
              prepareBuilder_.dispose();
              prepareBuilder_ = null;
              prepare_ = other.prepare_;
              bitField0_ = (bitField0_ & ~0x00000002);
              prepareBuilder_ = 
                com.google.protobuf.GeneratedMessageV3.alwaysUseFieldBuilders ?
                   getPrepareFieldBuilder() : null;
            } else {
              prepareBuilder_.addAllMessages(other.prepare_);
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
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv prePrepare_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder> prePrepareBuilder_;
      /**
       * <code>.protocol.PbftEnv pre_prepare = 1;</code>
       */
      public boolean hasPrePrepare() {
        return prePrepareBuilder_ != null || prePrepare_ != null;
      }
      /**
       * <code>.protocol.PbftEnv pre_prepare = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getPrePrepare() {
        if (prePrepareBuilder_ == null) {
          return prePrepare_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance() : prePrepare_;
        } else {
          return prePrepareBuilder_.getMessage();
        }
      }
      /**
       * <code>.protocol.PbftEnv pre_prepare = 1;</code>
       */
      public Builder setPrePrepare(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv value) {
        if (prePrepareBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          prePrepare_ = value;
          onChanged();
        } else {
          prePrepareBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.protocol.PbftEnv pre_prepare = 1;</code>
       */
      public Builder setPrePrepare(
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder builderForValue) {
        if (prePrepareBuilder_ == null) {
          prePrepare_ = builderForValue.build();
          onChanged();
        } else {
          prePrepareBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.protocol.PbftEnv pre_prepare = 1;</code>
       */
      public Builder mergePrePrepare(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv value) {
        if (prePrepareBuilder_ == null) {
          if (prePrepare_ != null) {
            prePrepare_ =
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.newBuilder(prePrepare_).mergeFrom(value).buildPartial();
          } else {
            prePrepare_ = value;
          }
          onChanged();
        } else {
          prePrepareBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.protocol.PbftEnv pre_prepare = 1;</code>
       */
      public Builder clearPrePrepare() {
        if (prePrepareBuilder_ == null) {
          prePrepare_ = null;
          onChanged();
        } else {
          prePrepare_ = null;
          prePrepareBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.protocol.PbftEnv pre_prepare = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder getPrePrepareBuilder() {
        
        onChanged();
        return getPrePrepareFieldBuilder().getBuilder();
      }
      /**
       * <code>.protocol.PbftEnv pre_prepare = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getPrePrepareOrBuilder() {
        if (prePrepareBuilder_ != null) {
          return prePrepareBuilder_.getMessageOrBuilder();
        } else {
          return prePrepare_ == null ?
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance() : prePrepare_;
        }
      }
      /**
       * <code>.protocol.PbftEnv pre_prepare = 1;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>
          getPrePrepareFieldBuilder() {
        if (prePrepareBuilder_ == null) {
          prePrepareBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>(
                  getPrePrepare(),
                  getParentForChildren(),
                  isClean());
          prePrepare_ = null;
        }
        return prePrepareBuilder_;
      }

      private java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv> prepare_ =
        java.util.Collections.emptyList();
      private void ensurePrepareIsMutable() {
        if (!((bitField0_ & 0x00000002) == 0x00000002)) {
          prepare_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv>(prepare_);
          bitField0_ |= 0x00000002;
         }
      }

      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder> prepareBuilder_;

      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv> getPrepareList() {
        if (prepareBuilder_ == null) {
          return java.util.Collections.unmodifiableList(prepare_);
        } else {
          return prepareBuilder_.getMessageList();
        }
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public int getPrepareCount() {
        if (prepareBuilder_ == null) {
          return prepare_.size();
        } else {
          return prepareBuilder_.getCount();
        }
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getPrepare(int index) {
        if (prepareBuilder_ == null) {
          return prepare_.get(index);
        } else {
          return prepareBuilder_.getMessage(index);
        }
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public Builder setPrepare(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv value) {
        if (prepareBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensurePrepareIsMutable();
          prepare_.set(index, value);
          onChanged();
        } else {
          prepareBuilder_.setMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public Builder setPrepare(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder builderForValue) {
        if (prepareBuilder_ == null) {
          ensurePrepareIsMutable();
          prepare_.set(index, builderForValue.build());
          onChanged();
        } else {
          prepareBuilder_.setMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public Builder addPrepare(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv value) {
        if (prepareBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensurePrepareIsMutable();
          prepare_.add(value);
          onChanged();
        } else {
          prepareBuilder_.addMessage(value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public Builder addPrepare(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv value) {
        if (prepareBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensurePrepareIsMutable();
          prepare_.add(index, value);
          onChanged();
        } else {
          prepareBuilder_.addMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public Builder addPrepare(
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder builderForValue) {
        if (prepareBuilder_ == null) {
          ensurePrepareIsMutable();
          prepare_.add(builderForValue.build());
          onChanged();
        } else {
          prepareBuilder_.addMessage(builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public Builder addPrepare(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder builderForValue) {
        if (prepareBuilder_ == null) {
          ensurePrepareIsMutable();
          prepare_.add(index, builderForValue.build());
          onChanged();
        } else {
          prepareBuilder_.addMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public Builder addAllPrepare(
          java.lang.Iterable<? extends io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv> values) {
        if (prepareBuilder_ == null) {
          ensurePrepareIsMutable();
          com.google.protobuf.AbstractMessageLite.Builder.addAll(
              values, prepare_);
          onChanged();
        } else {
          prepareBuilder_.addAllMessages(values);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public Builder clearPrepare() {
        if (prepareBuilder_ == null) {
          prepare_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000002);
          onChanged();
        } else {
          prepareBuilder_.clear();
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public Builder removePrepare(int index) {
        if (prepareBuilder_ == null) {
          ensurePrepareIsMutable();
          prepare_.remove(index);
          onChanged();
        } else {
          prepareBuilder_.remove(index);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder getPrepareBuilder(
          int index) {
        return getPrepareFieldBuilder().getBuilder(index);
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getPrepareOrBuilder(
          int index) {
        if (prepareBuilder_ == null) {
          return prepare_.get(index);  } else {
          return prepareBuilder_.getMessageOrBuilder(index);
        }
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>
           getPrepareOrBuilderList() {
        if (prepareBuilder_ != null) {
          return prepareBuilder_.getMessageOrBuilderList();
        } else {
          return java.util.Collections.unmodifiableList(prepare_);
        }
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder addPrepareBuilder() {
        return getPrepareFieldBuilder().addBuilder(
            io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance());
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder addPrepareBuilder(
          int index) {
        return getPrepareFieldBuilder().addBuilder(
            index, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance());
      }
      /**
       * <code>repeated .protocol.PbftEnv prepare = 2;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder>
           getPrepareBuilderList() {
        return getPrepareFieldBuilder().getBuilderList();
      }
      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>
          getPrepareFieldBuilder() {
        if (prepareBuilder_ == null) {
          prepareBuilder_ = new com.google.protobuf.RepeatedFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>(
                  prepare_,
                  ((bitField0_ & 0x00000002) == 0x00000002),
                  getParentForChildren(),
                  isClean());
          prepare_ = null;
        }
        return prepareBuilder_;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.PbftPreparedSet)
    }

    // @@protoc_insertion_point(class_scope:protocol.PbftPreparedSet)
    private static final io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet();
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<PbftPreparedSet>
        PARSER = new com.google.protobuf.AbstractParser<PbftPreparedSet>() {
      public PbftPreparedSet parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new PbftPreparedSet(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<PbftPreparedSet> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<PbftPreparedSet> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PbftViewChangeOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.PbftViewChange)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <pre>
     *v+1
     * </pre>
     *
     * <code>int64 view_number = 1;</code>
     */
    long getViewNumber();

    /**
     * <pre>
     *last execute seq
     * </pre>
     *
     * <code>int64 sequence = 2;</code>
     */
    long getSequence();

    /**
     * <pre>
     *prepared value hash
     * </pre>
     *
     * <code>bytes prepred_value_digest = 3;</code>
     */
    com.google.protobuf.ByteString getPrepredValueDigest();

    /**
     * <code>int64 replica_id = 4;</code>
     */
    long getReplicaId();
  }
  /**
   * Protobuf type {@code protocol.PbftViewChange}
   */
  public  static final class PbftViewChange extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.PbftViewChange)
      PbftViewChangeOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use PbftViewChange.newBuilder() to construct.
    private PbftViewChange(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private PbftViewChange() {
      viewNumber_ = 0L;
      sequence_ = 0L;
      prepredValueDigest_ = com.google.protobuf.ByteString.EMPTY;
      replicaId_ = 0L;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private PbftViewChange(
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

              viewNumber_ = input.readInt64();
              break;
            }
            case 16: {

              sequence_ = input.readInt64();
              break;
            }
            case 26: {

              prepredValueDigest_ = input.readBytes();
              break;
            }
            case 32: {

              replicaId_ = input.readInt64();
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
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftViewChange_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftViewChange_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.Builder.class);
    }

    public static final int VIEW_NUMBER_FIELD_NUMBER = 1;
    private long viewNumber_;
    /**
     * <pre>
     *v+1
     * </pre>
     *
     * <code>int64 view_number = 1;</code>
     */
    public long getViewNumber() {
      return viewNumber_;
    }

    public static final int SEQUENCE_FIELD_NUMBER = 2;
    private long sequence_;
    /**
     * <pre>
     *last execute seq
     * </pre>
     *
     * <code>int64 sequence = 2;</code>
     */
    public long getSequence() {
      return sequence_;
    }

    public static final int PREPRED_VALUE_DIGEST_FIELD_NUMBER = 3;
    private com.google.protobuf.ByteString prepredValueDigest_;
    /**
     * <pre>
     *prepared value hash
     * </pre>
     *
     * <code>bytes prepred_value_digest = 3;</code>
     */
    public com.google.protobuf.ByteString getPrepredValueDigest() {
      return prepredValueDigest_;
    }

    public static final int REPLICA_ID_FIELD_NUMBER = 4;
    private long replicaId_;
    /**
     * <code>int64 replica_id = 4;</code>
     */
    public long getReplicaId() {
      return replicaId_;
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
      if (viewNumber_ != 0L) {
        output.writeInt64(1, viewNumber_);
      }
      if (sequence_ != 0L) {
        output.writeInt64(2, sequence_);
      }
      if (!prepredValueDigest_.isEmpty()) {
        output.writeBytes(3, prepredValueDigest_);
      }
      if (replicaId_ != 0L) {
        output.writeInt64(4, replicaId_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (viewNumber_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, viewNumber_);
      }
      if (sequence_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, sequence_);
      }
      if (!prepredValueDigest_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(3, prepredValueDigest_);
      }
      if (replicaId_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(4, replicaId_);
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange other = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange) obj;

      boolean result = true;
      result = result && (getViewNumber()
          == other.getViewNumber());
      result = result && (getSequence()
          == other.getSequence());
      result = result && getPrepredValueDigest()
          .equals(other.getPrepredValueDigest());
      result = result && (getReplicaId()
          == other.getReplicaId());
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
      hash = (37 * hash) + VIEW_NUMBER_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getViewNumber());
      hash = (37 * hash) + SEQUENCE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getSequence());
      hash = (37 * hash) + PREPRED_VALUE_DIGEST_FIELD_NUMBER;
      hash = (53 * hash) + getPrepredValueDigest().hashCode();
      hash = (37 * hash) + REPLICA_ID_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getReplicaId());
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange prototype) {
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
     * Protobuf type {@code protocol.PbftViewChange}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.PbftViewChange)
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftViewChange_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftViewChange_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.newBuilder()
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
        viewNumber_ = 0L;

        sequence_ = 0L;

        prepredValueDigest_ = com.google.protobuf.ByteString.EMPTY;

        replicaId_ = 0L;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftViewChange_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange build() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange result = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange(this);
        result.viewNumber_ = viewNumber_;
        result.sequence_ = sequence_;
        result.prepredValueDigest_ = prepredValueDigest_;
        result.replicaId_ = replicaId_;
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.getDefaultInstance()) return this;
        if (other.getViewNumber() != 0L) {
          setViewNumber(other.getViewNumber());
        }
        if (other.getSequence() != 0L) {
          setSequence(other.getSequence());
        }
        if (other.getPrepredValueDigest() != com.google.protobuf.ByteString.EMPTY) {
          setPrepredValueDigest(other.getPrepredValueDigest());
        }
        if (other.getReplicaId() != 0L) {
          setReplicaId(other.getReplicaId());
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
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private long viewNumber_ ;
      /**
       * <pre>
       *v+1
       * </pre>
       *
       * <code>int64 view_number = 1;</code>
       */
      public long getViewNumber() {
        return viewNumber_;
      }
      /**
       * <pre>
       *v+1
       * </pre>
       *
       * <code>int64 view_number = 1;</code>
       */
      public Builder setViewNumber(long value) {
        
        viewNumber_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *v+1
       * </pre>
       *
       * <code>int64 view_number = 1;</code>
       */
      public Builder clearViewNumber() {
        
        viewNumber_ = 0L;
        onChanged();
        return this;
      }

      private long sequence_ ;
      /**
       * <pre>
       *last execute seq
       * </pre>
       *
       * <code>int64 sequence = 2;</code>
       */
      public long getSequence() {
        return sequence_;
      }
      /**
       * <pre>
       *last execute seq
       * </pre>
       *
       * <code>int64 sequence = 2;</code>
       */
      public Builder setSequence(long value) {
        
        sequence_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *last execute seq
       * </pre>
       *
       * <code>int64 sequence = 2;</code>
       */
      public Builder clearSequence() {
        
        sequence_ = 0L;
        onChanged();
        return this;
      }

      private com.google.protobuf.ByteString prepredValueDigest_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <pre>
       *prepared value hash
       * </pre>
       *
       * <code>bytes prepred_value_digest = 3;</code>
       */
      public com.google.protobuf.ByteString getPrepredValueDigest() {
        return prepredValueDigest_;
      }
      /**
       * <pre>
       *prepared value hash
       * </pre>
       *
       * <code>bytes prepred_value_digest = 3;</code>
       */
      public Builder setPrepredValueDigest(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        prepredValueDigest_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *prepared value hash
       * </pre>
       *
       * <code>bytes prepred_value_digest = 3;</code>
       */
      public Builder clearPrepredValueDigest() {
        
        prepredValueDigest_ = getDefaultInstance().getPrepredValueDigest();
        onChanged();
        return this;
      }

      private long replicaId_ ;
      /**
       * <code>int64 replica_id = 4;</code>
       */
      public long getReplicaId() {
        return replicaId_;
      }
      /**
       * <code>int64 replica_id = 4;</code>
       */
      public Builder setReplicaId(long value) {
        
        replicaId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 replica_id = 4;</code>
       */
      public Builder clearReplicaId() {
        
        replicaId_ = 0L;
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


      // @@protoc_insertion_point(builder_scope:protocol.PbftViewChange)
    }

    // @@protoc_insertion_point(class_scope:protocol.PbftViewChange)
    private static final io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange();
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<PbftViewChange>
        PARSER = new com.google.protobuf.AbstractParser<PbftViewChange>() {
      public PbftViewChange parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new PbftViewChange(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<PbftViewChange> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<PbftViewChange> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PbftViewChangeWithRawValueOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.PbftViewChangeWithRawValue)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <pre>
     * view change env
     * </pre>
     *
     * <code>.protocol.PbftEnv view_change_env = 1;</code>
     */
    boolean hasViewChangeEnv();
    /**
     * <pre>
     * view change env
     * </pre>
     *
     * <code>.protocol.PbftEnv view_change_env = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getViewChangeEnv();
    /**
     * <pre>
     * view change env
     * </pre>
     *
     * <code>.protocol.PbftEnv view_change_env = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getViewChangeEnvOrBuilder();

    /**
     * <pre>
     *prepared messages large than n
     * </pre>
     *
     * <code>.protocol.PbftPreparedSet prepared_set = 2;</code>
     */
    boolean hasPreparedSet();
    /**
     * <pre>
     *prepared messages large than n
     * </pre>
     *
     * <code>.protocol.PbftPreparedSet prepared_set = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet getPreparedSet();
    /**
     * <pre>
     *prepared messages large than n
     * </pre>
     *
     * <code>.protocol.PbftPreparedSet prepared_set = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSetOrBuilder getPreparedSetOrBuilder();
  }
  /**
   * Protobuf type {@code protocol.PbftViewChangeWithRawValue}
   */
  public  static final class PbftViewChangeWithRawValue extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.PbftViewChangeWithRawValue)
      PbftViewChangeWithRawValueOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use PbftViewChangeWithRawValue.newBuilder() to construct.
    private PbftViewChangeWithRawValue(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private PbftViewChangeWithRawValue() {
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private PbftViewChangeWithRawValue(
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
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder subBuilder = null;
              if (viewChangeEnv_ != null) {
                subBuilder = viewChangeEnv_.toBuilder();
              }
              viewChangeEnv_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(viewChangeEnv_);
                viewChangeEnv_ = subBuilder.buildPartial();
              }

              break;
            }
            case 18: {
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.Builder subBuilder = null;
              if (preparedSet_ != null) {
                subBuilder = preparedSet_.toBuilder();
              }
              preparedSet_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(preparedSet_);
                preparedSet_ = subBuilder.buildPartial();
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
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftViewChangeWithRawValue_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftViewChangeWithRawValue_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.Builder.class);
    }

    public static final int VIEW_CHANGE_ENV_FIELD_NUMBER = 1;
    private io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv viewChangeEnv_;
    /**
     * <pre>
     * view change env
     * </pre>
     *
     * <code>.protocol.PbftEnv view_change_env = 1;</code>
     */
    public boolean hasViewChangeEnv() {
      return viewChangeEnv_ != null;
    }
    /**
     * <pre>
     * view change env
     * </pre>
     *
     * <code>.protocol.PbftEnv view_change_env = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getViewChangeEnv() {
      return viewChangeEnv_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance() : viewChangeEnv_;
    }
    /**
     * <pre>
     * view change env
     * </pre>
     *
     * <code>.protocol.PbftEnv view_change_env = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getViewChangeEnvOrBuilder() {
      return getViewChangeEnv();
    }

    public static final int PREPARED_SET_FIELD_NUMBER = 2;
    private io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet preparedSet_;
    /**
     * <pre>
     *prepared messages large than n
     * </pre>
     *
     * <code>.protocol.PbftPreparedSet prepared_set = 2;</code>
     */
    public boolean hasPreparedSet() {
      return preparedSet_ != null;
    }
    /**
     * <pre>
     *prepared messages large than n
     * </pre>
     *
     * <code>.protocol.PbftPreparedSet prepared_set = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet getPreparedSet() {
      return preparedSet_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.getDefaultInstance() : preparedSet_;
    }
    /**
     * <pre>
     *prepared messages large than n
     * </pre>
     *
     * <code>.protocol.PbftPreparedSet prepared_set = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSetOrBuilder getPreparedSetOrBuilder() {
      return getPreparedSet();
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
      if (viewChangeEnv_ != null) {
        output.writeMessage(1, getViewChangeEnv());
      }
      if (preparedSet_ != null) {
        output.writeMessage(2, getPreparedSet());
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (viewChangeEnv_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, getViewChangeEnv());
      }
      if (preparedSet_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(2, getPreparedSet());
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue other = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue) obj;

      boolean result = true;
      result = result && (hasViewChangeEnv() == other.hasViewChangeEnv());
      if (hasViewChangeEnv()) {
        result = result && getViewChangeEnv()
            .equals(other.getViewChangeEnv());
      }
      result = result && (hasPreparedSet() == other.hasPreparedSet());
      if (hasPreparedSet()) {
        result = result && getPreparedSet()
            .equals(other.getPreparedSet());
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
      if (hasViewChangeEnv()) {
        hash = (37 * hash) + VIEW_CHANGE_ENV_FIELD_NUMBER;
        hash = (53 * hash) + getViewChangeEnv().hashCode();
      }
      if (hasPreparedSet()) {
        hash = (37 * hash) + PREPARED_SET_FIELD_NUMBER;
        hash = (53 * hash) + getPreparedSet().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue prototype) {
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
     * Protobuf type {@code protocol.PbftViewChangeWithRawValue}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.PbftViewChangeWithRawValue)
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValueOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftViewChangeWithRawValue_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftViewChangeWithRawValue_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.newBuilder()
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
        if (viewChangeEnvBuilder_ == null) {
          viewChangeEnv_ = null;
        } else {
          viewChangeEnv_ = null;
          viewChangeEnvBuilder_ = null;
        }
        if (preparedSetBuilder_ == null) {
          preparedSet_ = null;
        } else {
          preparedSet_ = null;
          preparedSetBuilder_ = null;
        }
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftViewChangeWithRawValue_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue build() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue result = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue(this);
        if (viewChangeEnvBuilder_ == null) {
          result.viewChangeEnv_ = viewChangeEnv_;
        } else {
          result.viewChangeEnv_ = viewChangeEnvBuilder_.build();
        }
        if (preparedSetBuilder_ == null) {
          result.preparedSet_ = preparedSet_;
        } else {
          result.preparedSet_ = preparedSetBuilder_.build();
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.getDefaultInstance()) return this;
        if (other.hasViewChangeEnv()) {
          mergeViewChangeEnv(other.getViewChangeEnv());
        }
        if (other.hasPreparedSet()) {
          mergePreparedSet(other.getPreparedSet());
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
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv viewChangeEnv_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder> viewChangeEnvBuilder_;
      /**
       * <pre>
       * view change env
       * </pre>
       *
       * <code>.protocol.PbftEnv view_change_env = 1;</code>
       */
      public boolean hasViewChangeEnv() {
        return viewChangeEnvBuilder_ != null || viewChangeEnv_ != null;
      }
      /**
       * <pre>
       * view change env
       * </pre>
       *
       * <code>.protocol.PbftEnv view_change_env = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getViewChangeEnv() {
        if (viewChangeEnvBuilder_ == null) {
          return viewChangeEnv_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance() : viewChangeEnv_;
        } else {
          return viewChangeEnvBuilder_.getMessage();
        }
      }
      /**
       * <pre>
       * view change env
       * </pre>
       *
       * <code>.protocol.PbftEnv view_change_env = 1;</code>
       */
      public Builder setViewChangeEnv(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv value) {
        if (viewChangeEnvBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          viewChangeEnv_ = value;
          onChanged();
        } else {
          viewChangeEnvBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <pre>
       * view change env
       * </pre>
       *
       * <code>.protocol.PbftEnv view_change_env = 1;</code>
       */
      public Builder setViewChangeEnv(
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder builderForValue) {
        if (viewChangeEnvBuilder_ == null) {
          viewChangeEnv_ = builderForValue.build();
          onChanged();
        } else {
          viewChangeEnvBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <pre>
       * view change env
       * </pre>
       *
       * <code>.protocol.PbftEnv view_change_env = 1;</code>
       */
      public Builder mergeViewChangeEnv(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv value) {
        if (viewChangeEnvBuilder_ == null) {
          if (viewChangeEnv_ != null) {
            viewChangeEnv_ =
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.newBuilder(viewChangeEnv_).mergeFrom(value).buildPartial();
          } else {
            viewChangeEnv_ = value;
          }
          onChanged();
        } else {
          viewChangeEnvBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <pre>
       * view change env
       * </pre>
       *
       * <code>.protocol.PbftEnv view_change_env = 1;</code>
       */
      public Builder clearViewChangeEnv() {
        if (viewChangeEnvBuilder_ == null) {
          viewChangeEnv_ = null;
          onChanged();
        } else {
          viewChangeEnv_ = null;
          viewChangeEnvBuilder_ = null;
        }

        return this;
      }
      /**
       * <pre>
       * view change env
       * </pre>
       *
       * <code>.protocol.PbftEnv view_change_env = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder getViewChangeEnvBuilder() {
        
        onChanged();
        return getViewChangeEnvFieldBuilder().getBuilder();
      }
      /**
       * <pre>
       * view change env
       * </pre>
       *
       * <code>.protocol.PbftEnv view_change_env = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getViewChangeEnvOrBuilder() {
        if (viewChangeEnvBuilder_ != null) {
          return viewChangeEnvBuilder_.getMessageOrBuilder();
        } else {
          return viewChangeEnv_ == null ?
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance() : viewChangeEnv_;
        }
      }
      /**
       * <pre>
       * view change env
       * </pre>
       *
       * <code>.protocol.PbftEnv view_change_env = 1;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>
          getViewChangeEnvFieldBuilder() {
        if (viewChangeEnvBuilder_ == null) {
          viewChangeEnvBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>(
                  getViewChangeEnv(),
                  getParentForChildren(),
                  isClean());
          viewChangeEnv_ = null;
        }
        return viewChangeEnvBuilder_;
      }

      private io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet preparedSet_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSetOrBuilder> preparedSetBuilder_;
      /**
       * <pre>
       *prepared messages large than n
       * </pre>
       *
       * <code>.protocol.PbftPreparedSet prepared_set = 2;</code>
       */
      public boolean hasPreparedSet() {
        return preparedSetBuilder_ != null || preparedSet_ != null;
      }
      /**
       * <pre>
       *prepared messages large than n
       * </pre>
       *
       * <code>.protocol.PbftPreparedSet prepared_set = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet getPreparedSet() {
        if (preparedSetBuilder_ == null) {
          return preparedSet_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.getDefaultInstance() : preparedSet_;
        } else {
          return preparedSetBuilder_.getMessage();
        }
      }
      /**
       * <pre>
       *prepared messages large than n
       * </pre>
       *
       * <code>.protocol.PbftPreparedSet prepared_set = 2;</code>
       */
      public Builder setPreparedSet(io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet value) {
        if (preparedSetBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          preparedSet_ = value;
          onChanged();
        } else {
          preparedSetBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <pre>
       *prepared messages large than n
       * </pre>
       *
       * <code>.protocol.PbftPreparedSet prepared_set = 2;</code>
       */
      public Builder setPreparedSet(
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.Builder builderForValue) {
        if (preparedSetBuilder_ == null) {
          preparedSet_ = builderForValue.build();
          onChanged();
        } else {
          preparedSetBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <pre>
       *prepared messages large than n
       * </pre>
       *
       * <code>.protocol.PbftPreparedSet prepared_set = 2;</code>
       */
      public Builder mergePreparedSet(io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet value) {
        if (preparedSetBuilder_ == null) {
          if (preparedSet_ != null) {
            preparedSet_ =
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.newBuilder(preparedSet_).mergeFrom(value).buildPartial();
          } else {
            preparedSet_ = value;
          }
          onChanged();
        } else {
          preparedSetBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <pre>
       *prepared messages large than n
       * </pre>
       *
       * <code>.protocol.PbftPreparedSet prepared_set = 2;</code>
       */
      public Builder clearPreparedSet() {
        if (preparedSetBuilder_ == null) {
          preparedSet_ = null;
          onChanged();
        } else {
          preparedSet_ = null;
          preparedSetBuilder_ = null;
        }

        return this;
      }
      /**
       * <pre>
       *prepared messages large than n
       * </pre>
       *
       * <code>.protocol.PbftPreparedSet prepared_set = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.Builder getPreparedSetBuilder() {
        
        onChanged();
        return getPreparedSetFieldBuilder().getBuilder();
      }
      /**
       * <pre>
       *prepared messages large than n
       * </pre>
       *
       * <code>.protocol.PbftPreparedSet prepared_set = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSetOrBuilder getPreparedSetOrBuilder() {
        if (preparedSetBuilder_ != null) {
          return preparedSetBuilder_.getMessageOrBuilder();
        } else {
          return preparedSet_ == null ?
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.getDefaultInstance() : preparedSet_;
        }
      }
      /**
       * <pre>
       *prepared messages large than n
       * </pre>
       *
       * <code>.protocol.PbftPreparedSet prepared_set = 2;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSetOrBuilder>
          getPreparedSetFieldBuilder() {
        if (preparedSetBuilder_ == null) {
          preparedSetBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSet.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPreparedSetOrBuilder>(
                  getPreparedSet(),
                  getParentForChildren(),
                  isClean());
          preparedSet_ = null;
        }
        return preparedSetBuilder_;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.PbftViewChangeWithRawValue)
    }

    // @@protoc_insertion_point(class_scope:protocol.PbftViewChangeWithRawValue)
    private static final io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue();
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<PbftViewChangeWithRawValue>
        PARSER = new com.google.protobuf.AbstractParser<PbftViewChangeWithRawValue>() {
      public PbftViewChangeWithRawValue parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new PbftViewChangeWithRawValue(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<PbftViewChangeWithRawValue> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<PbftViewChangeWithRawValue> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PbftNewViewOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.PbftNewView)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <pre>
     *v+1
     * </pre>
     *
     * <code>int64 view_number = 1;</code>
     */
    long getViewNumber();

    /**
     * <pre>
     *sequence
     * </pre>
     *
     * <code>int64 sequence = 2;</code>
     */
    long getSequence();

    /**
     * <code>int64 replica_id = 3;</code>
     */
    long getReplicaId();

    /**
     * <pre>
     *V
     * </pre>
     *
     * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
     */
    java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv>
        getViewChangesList();
    /**
     * <pre>
     *V
     * </pre>
     *
     * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getViewChanges(int index);
    /**
     * <pre>
     *V
     * </pre>
     *
     * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
     */
    int getViewChangesCount();
    /**
     * <pre>
     *V
     * </pre>
     *
     * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
     */
    java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>
        getViewChangesOrBuilderList();
    /**
     * <pre>
     *V
     * </pre>
     *
     * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getViewChangesOrBuilder(
        int index);

    /**
     * <pre>
     *O
     * </pre>
     *
     * <code>.protocol.PbftEnv pre_prepare = 5;</code>
     */
    boolean hasPrePrepare();
    /**
     * <pre>
     *O
     * </pre>
     *
     * <code>.protocol.PbftEnv pre_prepare = 5;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getPrePrepare();
    /**
     * <pre>
     *O
     * </pre>
     *
     * <code>.protocol.PbftEnv pre_prepare = 5;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getPrePrepareOrBuilder();
  }
  /**
   * Protobuf type {@code protocol.PbftNewView}
   */
  public  static final class PbftNewView extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.PbftNewView)
      PbftNewViewOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use PbftNewView.newBuilder() to construct.
    private PbftNewView(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private PbftNewView() {
      viewNumber_ = 0L;
      sequence_ = 0L;
      replicaId_ = 0L;
      viewChanges_ = java.util.Collections.emptyList();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private PbftNewView(
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

              viewNumber_ = input.readInt64();
              break;
            }
            case 16: {

              sequence_ = input.readInt64();
              break;
            }
            case 24: {

              replicaId_ = input.readInt64();
              break;
            }
            case 34: {
              if (!((mutable_bitField0_ & 0x00000008) == 0x00000008)) {
                viewChanges_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv>();
                mutable_bitField0_ |= 0x00000008;
              }
              viewChanges_.add(
                  input.readMessage(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.parser(), extensionRegistry));
              break;
            }
            case 42: {
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder subBuilder = null;
              if (prePrepare_ != null) {
                subBuilder = prePrepare_.toBuilder();
              }
              prePrepare_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(prePrepare_);
                prePrepare_ = subBuilder.buildPartial();
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
        if (((mutable_bitField0_ & 0x00000008) == 0x00000008)) {
          viewChanges_ = java.util.Collections.unmodifiableList(viewChanges_);
        }
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftNewView_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftNewView_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.Builder.class);
    }

    private int bitField0_;
    public static final int VIEW_NUMBER_FIELD_NUMBER = 1;
    private long viewNumber_;
    /**
     * <pre>
     *v+1
     * </pre>
     *
     * <code>int64 view_number = 1;</code>
     */
    public long getViewNumber() {
      return viewNumber_;
    }

    public static final int SEQUENCE_FIELD_NUMBER = 2;
    private long sequence_;
    /**
     * <pre>
     *sequence
     * </pre>
     *
     * <code>int64 sequence = 2;</code>
     */
    public long getSequence() {
      return sequence_;
    }

    public static final int REPLICA_ID_FIELD_NUMBER = 3;
    private long replicaId_;
    /**
     * <code>int64 replica_id = 3;</code>
     */
    public long getReplicaId() {
      return replicaId_;
    }

    public static final int VIEW_CHANGES_FIELD_NUMBER = 4;
    private java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv> viewChanges_;
    /**
     * <pre>
     *V
     * </pre>
     *
     * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
     */
    public java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv> getViewChangesList() {
      return viewChanges_;
    }
    /**
     * <pre>
     *V
     * </pre>
     *
     * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
     */
    public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>
        getViewChangesOrBuilderList() {
      return viewChanges_;
    }
    /**
     * <pre>
     *V
     * </pre>
     *
     * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
     */
    public int getViewChangesCount() {
      return viewChanges_.size();
    }
    /**
     * <pre>
     *V
     * </pre>
     *
     * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getViewChanges(int index) {
      return viewChanges_.get(index);
    }
    /**
     * <pre>
     *V
     * </pre>
     *
     * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getViewChangesOrBuilder(
        int index) {
      return viewChanges_.get(index);
    }

    public static final int PRE_PREPARE_FIELD_NUMBER = 5;
    private io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv prePrepare_;
    /**
     * <pre>
     *O
     * </pre>
     *
     * <code>.protocol.PbftEnv pre_prepare = 5;</code>
     */
    public boolean hasPrePrepare() {
      return prePrepare_ != null;
    }
    /**
     * <pre>
     *O
     * </pre>
     *
     * <code>.protocol.PbftEnv pre_prepare = 5;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getPrePrepare() {
      return prePrepare_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance() : prePrepare_;
    }
    /**
     * <pre>
     *O
     * </pre>
     *
     * <code>.protocol.PbftEnv pre_prepare = 5;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getPrePrepareOrBuilder() {
      return getPrePrepare();
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
      if (viewNumber_ != 0L) {
        output.writeInt64(1, viewNumber_);
      }
      if (sequence_ != 0L) {
        output.writeInt64(2, sequence_);
      }
      if (replicaId_ != 0L) {
        output.writeInt64(3, replicaId_);
      }
      for (int i = 0; i < viewChanges_.size(); i++) {
        output.writeMessage(4, viewChanges_.get(i));
      }
      if (prePrepare_ != null) {
        output.writeMessage(5, getPrePrepare());
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (viewNumber_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, viewNumber_);
      }
      if (sequence_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, sequence_);
      }
      if (replicaId_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(3, replicaId_);
      }
      for (int i = 0; i < viewChanges_.size(); i++) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(4, viewChanges_.get(i));
      }
      if (prePrepare_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(5, getPrePrepare());
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView other = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView) obj;

      boolean result = true;
      result = result && (getViewNumber()
          == other.getViewNumber());
      result = result && (getSequence()
          == other.getSequence());
      result = result && (getReplicaId()
          == other.getReplicaId());
      result = result && getViewChangesList()
          .equals(other.getViewChangesList());
      result = result && (hasPrePrepare() == other.hasPrePrepare());
      if (hasPrePrepare()) {
        result = result && getPrePrepare()
            .equals(other.getPrePrepare());
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
      hash = (37 * hash) + VIEW_NUMBER_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getViewNumber());
      hash = (37 * hash) + SEQUENCE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getSequence());
      hash = (37 * hash) + REPLICA_ID_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getReplicaId());
      if (getViewChangesCount() > 0) {
        hash = (37 * hash) + VIEW_CHANGES_FIELD_NUMBER;
        hash = (53 * hash) + getViewChangesList().hashCode();
      }
      if (hasPrePrepare()) {
        hash = (37 * hash) + PRE_PREPARE_FIELD_NUMBER;
        hash = (53 * hash) + getPrePrepare().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView prototype) {
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
     * Protobuf type {@code protocol.PbftNewView}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.PbftNewView)
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewViewOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftNewView_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftNewView_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.newBuilder()
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
          getViewChangesFieldBuilder();
        }
      }
      public Builder clear() {
        super.clear();
        viewNumber_ = 0L;

        sequence_ = 0L;

        replicaId_ = 0L;

        if (viewChangesBuilder_ == null) {
          viewChanges_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000008);
        } else {
          viewChangesBuilder_.clear();
        }
        if (prePrepareBuilder_ == null) {
          prePrepare_ = null;
        } else {
          prePrepare_ = null;
          prePrepareBuilder_ = null;
        }
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftNewView_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView build() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView result = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        result.viewNumber_ = viewNumber_;
        result.sequence_ = sequence_;
        result.replicaId_ = replicaId_;
        if (viewChangesBuilder_ == null) {
          if (((bitField0_ & 0x00000008) == 0x00000008)) {
            viewChanges_ = java.util.Collections.unmodifiableList(viewChanges_);
            bitField0_ = (bitField0_ & ~0x00000008);
          }
          result.viewChanges_ = viewChanges_;
        } else {
          result.viewChanges_ = viewChangesBuilder_.build();
        }
        if (prePrepareBuilder_ == null) {
          result.prePrepare_ = prePrepare_;
        } else {
          result.prePrepare_ = prePrepareBuilder_.build();
        }
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.getDefaultInstance()) return this;
        if (other.getViewNumber() != 0L) {
          setViewNumber(other.getViewNumber());
        }
        if (other.getSequence() != 0L) {
          setSequence(other.getSequence());
        }
        if (other.getReplicaId() != 0L) {
          setReplicaId(other.getReplicaId());
        }
        if (viewChangesBuilder_ == null) {
          if (!other.viewChanges_.isEmpty()) {
            if (viewChanges_.isEmpty()) {
              viewChanges_ = other.viewChanges_;
              bitField0_ = (bitField0_ & ~0x00000008);
            } else {
              ensureViewChangesIsMutable();
              viewChanges_.addAll(other.viewChanges_);
            }
            onChanged();
          }
        } else {
          if (!other.viewChanges_.isEmpty()) {
            if (viewChangesBuilder_.isEmpty()) {
              viewChangesBuilder_.dispose();
              viewChangesBuilder_ = null;
              viewChanges_ = other.viewChanges_;
              bitField0_ = (bitField0_ & ~0x00000008);
              viewChangesBuilder_ = 
                com.google.protobuf.GeneratedMessageV3.alwaysUseFieldBuilders ?
                   getViewChangesFieldBuilder() : null;
            } else {
              viewChangesBuilder_.addAllMessages(other.viewChanges_);
            }
          }
        }
        if (other.hasPrePrepare()) {
          mergePrePrepare(other.getPrePrepare());
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
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private long viewNumber_ ;
      /**
       * <pre>
       *v+1
       * </pre>
       *
       * <code>int64 view_number = 1;</code>
       */
      public long getViewNumber() {
        return viewNumber_;
      }
      /**
       * <pre>
       *v+1
       * </pre>
       *
       * <code>int64 view_number = 1;</code>
       */
      public Builder setViewNumber(long value) {
        
        viewNumber_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *v+1
       * </pre>
       *
       * <code>int64 view_number = 1;</code>
       */
      public Builder clearViewNumber() {
        
        viewNumber_ = 0L;
        onChanged();
        return this;
      }

      private long sequence_ ;
      /**
       * <pre>
       *sequence
       * </pre>
       *
       * <code>int64 sequence = 2;</code>
       */
      public long getSequence() {
        return sequence_;
      }
      /**
       * <pre>
       *sequence
       * </pre>
       *
       * <code>int64 sequence = 2;</code>
       */
      public Builder setSequence(long value) {
        
        sequence_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *sequence
       * </pre>
       *
       * <code>int64 sequence = 2;</code>
       */
      public Builder clearSequence() {
        
        sequence_ = 0L;
        onChanged();
        return this;
      }

      private long replicaId_ ;
      /**
       * <code>int64 replica_id = 3;</code>
       */
      public long getReplicaId() {
        return replicaId_;
      }
      /**
       * <code>int64 replica_id = 3;</code>
       */
      public Builder setReplicaId(long value) {
        
        replicaId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 replica_id = 3;</code>
       */
      public Builder clearReplicaId() {
        
        replicaId_ = 0L;
        onChanged();
        return this;
      }

      private java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv> viewChanges_ =
        java.util.Collections.emptyList();
      private void ensureViewChangesIsMutable() {
        if (!((bitField0_ & 0x00000008) == 0x00000008)) {
          viewChanges_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv>(viewChanges_);
          bitField0_ |= 0x00000008;
         }
      }

      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder> viewChangesBuilder_;

      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv> getViewChangesList() {
        if (viewChangesBuilder_ == null) {
          return java.util.Collections.unmodifiableList(viewChanges_);
        } else {
          return viewChangesBuilder_.getMessageList();
        }
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public int getViewChangesCount() {
        if (viewChangesBuilder_ == null) {
          return viewChanges_.size();
        } else {
          return viewChangesBuilder_.getCount();
        }
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getViewChanges(int index) {
        if (viewChangesBuilder_ == null) {
          return viewChanges_.get(index);
        } else {
          return viewChangesBuilder_.getMessage(index);
        }
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public Builder setViewChanges(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv value) {
        if (viewChangesBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensureViewChangesIsMutable();
          viewChanges_.set(index, value);
          onChanged();
        } else {
          viewChangesBuilder_.setMessage(index, value);
        }
        return this;
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public Builder setViewChanges(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder builderForValue) {
        if (viewChangesBuilder_ == null) {
          ensureViewChangesIsMutable();
          viewChanges_.set(index, builderForValue.build());
          onChanged();
        } else {
          viewChangesBuilder_.setMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public Builder addViewChanges(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv value) {
        if (viewChangesBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensureViewChangesIsMutable();
          viewChanges_.add(value);
          onChanged();
        } else {
          viewChangesBuilder_.addMessage(value);
        }
        return this;
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public Builder addViewChanges(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv value) {
        if (viewChangesBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensureViewChangesIsMutable();
          viewChanges_.add(index, value);
          onChanged();
        } else {
          viewChangesBuilder_.addMessage(index, value);
        }
        return this;
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public Builder addViewChanges(
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder builderForValue) {
        if (viewChangesBuilder_ == null) {
          ensureViewChangesIsMutable();
          viewChanges_.add(builderForValue.build());
          onChanged();
        } else {
          viewChangesBuilder_.addMessage(builderForValue.build());
        }
        return this;
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public Builder addViewChanges(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder builderForValue) {
        if (viewChangesBuilder_ == null) {
          ensureViewChangesIsMutable();
          viewChanges_.add(index, builderForValue.build());
          onChanged();
        } else {
          viewChangesBuilder_.addMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public Builder addAllViewChanges(
          java.lang.Iterable<? extends io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv> values) {
        if (viewChangesBuilder_ == null) {
          ensureViewChangesIsMutable();
          com.google.protobuf.AbstractMessageLite.Builder.addAll(
              values, viewChanges_);
          onChanged();
        } else {
          viewChangesBuilder_.addAllMessages(values);
        }
        return this;
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public Builder clearViewChanges() {
        if (viewChangesBuilder_ == null) {
          viewChanges_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000008);
          onChanged();
        } else {
          viewChangesBuilder_.clear();
        }
        return this;
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public Builder removeViewChanges(int index) {
        if (viewChangesBuilder_ == null) {
          ensureViewChangesIsMutable();
          viewChanges_.remove(index);
          onChanged();
        } else {
          viewChangesBuilder_.remove(index);
        }
        return this;
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder getViewChangesBuilder(
          int index) {
        return getViewChangesFieldBuilder().getBuilder(index);
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getViewChangesOrBuilder(
          int index) {
        if (viewChangesBuilder_ == null) {
          return viewChanges_.get(index);  } else {
          return viewChangesBuilder_.getMessageOrBuilder(index);
        }
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>
           getViewChangesOrBuilderList() {
        if (viewChangesBuilder_ != null) {
          return viewChangesBuilder_.getMessageOrBuilderList();
        } else {
          return java.util.Collections.unmodifiableList(viewChanges_);
        }
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder addViewChangesBuilder() {
        return getViewChangesFieldBuilder().addBuilder(
            io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance());
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder addViewChangesBuilder(
          int index) {
        return getViewChangesFieldBuilder().addBuilder(
            index, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance());
      }
      /**
       * <pre>
       *V
       * </pre>
       *
       * <code>repeated .protocol.PbftEnv view_changes = 4;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder>
           getViewChangesBuilderList() {
        return getViewChangesFieldBuilder().getBuilderList();
      }
      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>
          getViewChangesFieldBuilder() {
        if (viewChangesBuilder_ == null) {
          viewChangesBuilder_ = new com.google.protobuf.RepeatedFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>(
                  viewChanges_,
                  ((bitField0_ & 0x00000008) == 0x00000008),
                  getParentForChildren(),
                  isClean());
          viewChanges_ = null;
        }
        return viewChangesBuilder_;
      }

      private io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv prePrepare_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder> prePrepareBuilder_;
      /**
       * <pre>
       *O
       * </pre>
       *
       * <code>.protocol.PbftEnv pre_prepare = 5;</code>
       */
      public boolean hasPrePrepare() {
        return prePrepareBuilder_ != null || prePrepare_ != null;
      }
      /**
       * <pre>
       *O
       * </pre>
       *
       * <code>.protocol.PbftEnv pre_prepare = 5;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getPrePrepare() {
        if (prePrepareBuilder_ == null) {
          return prePrepare_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance() : prePrepare_;
        } else {
          return prePrepareBuilder_.getMessage();
        }
      }
      /**
       * <pre>
       *O
       * </pre>
       *
       * <code>.protocol.PbftEnv pre_prepare = 5;</code>
       */
      public Builder setPrePrepare(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv value) {
        if (prePrepareBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          prePrepare_ = value;
          onChanged();
        } else {
          prePrepareBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <pre>
       *O
       * </pre>
       *
       * <code>.protocol.PbftEnv pre_prepare = 5;</code>
       */
      public Builder setPrePrepare(
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder builderForValue) {
        if (prePrepareBuilder_ == null) {
          prePrepare_ = builderForValue.build();
          onChanged();
        } else {
          prePrepareBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <pre>
       *O
       * </pre>
       *
       * <code>.protocol.PbftEnv pre_prepare = 5;</code>
       */
      public Builder mergePrePrepare(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv value) {
        if (prePrepareBuilder_ == null) {
          if (prePrepare_ != null) {
            prePrepare_ =
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.newBuilder(prePrepare_).mergeFrom(value).buildPartial();
          } else {
            prePrepare_ = value;
          }
          onChanged();
        } else {
          prePrepareBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <pre>
       *O
       * </pre>
       *
       * <code>.protocol.PbftEnv pre_prepare = 5;</code>
       */
      public Builder clearPrePrepare() {
        if (prePrepareBuilder_ == null) {
          prePrepare_ = null;
          onChanged();
        } else {
          prePrepare_ = null;
          prePrepareBuilder_ = null;
        }

        return this;
      }
      /**
       * <pre>
       *O
       * </pre>
       *
       * <code>.protocol.PbftEnv pre_prepare = 5;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder getPrePrepareBuilder() {
        
        onChanged();
        return getPrePrepareFieldBuilder().getBuilder();
      }
      /**
       * <pre>
       *O
       * </pre>
       *
       * <code>.protocol.PbftEnv pre_prepare = 5;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getPrePrepareOrBuilder() {
        if (prePrepareBuilder_ != null) {
          return prePrepareBuilder_.getMessageOrBuilder();
        } else {
          return prePrepare_ == null ?
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance() : prePrepare_;
        }
      }
      /**
       * <pre>
       *O
       * </pre>
       *
       * <code>.protocol.PbftEnv pre_prepare = 5;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>
          getPrePrepareFieldBuilder() {
        if (prePrepareBuilder_ == null) {
          prePrepareBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>(
                  getPrePrepare(),
                  getParentForChildren(),
                  isClean());
          prePrepare_ = null;
        }
        return prePrepareBuilder_;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.PbftNewView)
    }

    // @@protoc_insertion_point(class_scope:protocol.PbftNewView)
    private static final io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView();
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<PbftNewView>
        PARSER = new com.google.protobuf.AbstractParser<PbftNewView>() {
      public PbftNewView parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new PbftNewView(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<PbftNewView> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<PbftNewView> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PbftOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.Pbft)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <pre>
     *for send again
     * </pre>
     *
     * <code>int64 round_number = 1;</code>
     */
    long getRoundNumber();

    /**
     * <code>.protocol.PbftMessageType type = 2;</code>
     */
    int getTypeValue();
    /**
     * <code>.protocol.PbftMessageType type = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftMessageType getType();

    /**
     * <code>.protocol.PbftPrePrepare pre_prepare = 3;</code>
     */
    boolean hasPrePrepare();
    /**
     * <code>.protocol.PbftPrePrepare pre_prepare = 3;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare getPrePrepare();
    /**
     * <code>.protocol.PbftPrePrepare pre_prepare = 3;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepareOrBuilder getPrePrepareOrBuilder();

    /**
     * <code>.protocol.PbftPrepare prepare = 4;</code>
     */
    boolean hasPrepare();
    /**
     * <code>.protocol.PbftPrepare prepare = 4;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare getPrepare();
    /**
     * <code>.protocol.PbftPrepare prepare = 4;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepareOrBuilder getPrepareOrBuilder();

    /**
     * <code>.protocol.PbftCommit commit = 5;</code>
     */
    boolean hasCommit();
    /**
     * <code>.protocol.PbftCommit commit = 5;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit getCommit();
    /**
     * <code>.protocol.PbftCommit commit = 5;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommitOrBuilder getCommitOrBuilder();

    /**
     * <code>.protocol.PbftViewChange view_change = 6;</code>
     */
    boolean hasViewChange();
    /**
     * <code>.protocol.PbftViewChange view_change = 6;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange getViewChange();
    /**
     * <code>.protocol.PbftViewChange view_change = 6;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeOrBuilder getViewChangeOrBuilder();

    /**
     * <code>.protocol.PbftNewView new_view = 7;</code>
     */
    boolean hasNewView();
    /**
     * <code>.protocol.PbftNewView new_view = 7;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView getNewView();
    /**
     * <code>.protocol.PbftNewView new_view = 7;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewViewOrBuilder getNewViewOrBuilder();

    /**
     * <code>.protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;</code>
     */
    boolean hasViewChangeWithRawvalue();
    /**
     * <code>.protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue getViewChangeWithRawvalue();
    /**
     * <code>.protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValueOrBuilder getViewChangeWithRawvalueOrBuilder();
  }
  /**
   * Protobuf type {@code protocol.Pbft}
   */
  public  static final class Pbft extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.Pbft)
      PbftOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Pbft.newBuilder() to construct.
    private Pbft(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Pbft() {
      roundNumber_ = 0L;
      type_ = 0;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Pbft(
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

              roundNumber_ = input.readInt64();
              break;
            }
            case 16: {
              int rawValue = input.readEnum();

              type_ = rawValue;
              break;
            }
            case 26: {
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.Builder subBuilder = null;
              if (prePrepare_ != null) {
                subBuilder = prePrepare_.toBuilder();
              }
              prePrepare_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(prePrepare_);
                prePrepare_ = subBuilder.buildPartial();
              }

              break;
            }
            case 34: {
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.Builder subBuilder = null;
              if (prepare_ != null) {
                subBuilder = prepare_.toBuilder();
              }
              prepare_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(prepare_);
                prepare_ = subBuilder.buildPartial();
              }

              break;
            }
            case 42: {
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.Builder subBuilder = null;
              if (commit_ != null) {
                subBuilder = commit_.toBuilder();
              }
              commit_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(commit_);
                commit_ = subBuilder.buildPartial();
              }

              break;
            }
            case 50: {
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.Builder subBuilder = null;
              if (viewChange_ != null) {
                subBuilder = viewChange_.toBuilder();
              }
              viewChange_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(viewChange_);
                viewChange_ = subBuilder.buildPartial();
              }

              break;
            }
            case 58: {
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.Builder subBuilder = null;
              if (newView_ != null) {
                subBuilder = newView_.toBuilder();
              }
              newView_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(newView_);
                newView_ = subBuilder.buildPartial();
              }

              break;
            }
            case 66: {
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.Builder subBuilder = null;
              if (viewChangeWithRawvalue_ != null) {
                subBuilder = viewChangeWithRawvalue_.toBuilder();
              }
              viewChangeWithRawvalue_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(viewChangeWithRawvalue_);
                viewChangeWithRawvalue_ = subBuilder.buildPartial();
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
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_Pbft_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_Pbft_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.class, io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.Builder.class);
    }

    public static final int ROUND_NUMBER_FIELD_NUMBER = 1;
    private long roundNumber_;
    /**
     * <pre>
     *for send again
     * </pre>
     *
     * <code>int64 round_number = 1;</code>
     */
    public long getRoundNumber() {
      return roundNumber_;
    }

    public static final int TYPE_FIELD_NUMBER = 2;
    private int type_;
    /**
     * <code>.protocol.PbftMessageType type = 2;</code>
     */
    public int getTypeValue() {
      return type_;
    }
    /**
     * <code>.protocol.PbftMessageType type = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftMessageType getType() {
      io.rexx.sdk.core.extend.protobuf.Consensus.PbftMessageType result = io.rexx.sdk.core.extend.protobuf.Consensus.PbftMessageType.valueOf(type_);
      return result == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftMessageType.UNRECOGNIZED : result;
    }

    public static final int PRE_PREPARE_FIELD_NUMBER = 3;
    private io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare prePrepare_;
    /**
     * <code>.protocol.PbftPrePrepare pre_prepare = 3;</code>
     */
    public boolean hasPrePrepare() {
      return prePrepare_ != null;
    }
    /**
     * <code>.protocol.PbftPrePrepare pre_prepare = 3;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare getPrePrepare() {
      return prePrepare_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.getDefaultInstance() : prePrepare_;
    }
    /**
     * <code>.protocol.PbftPrePrepare pre_prepare = 3;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepareOrBuilder getPrePrepareOrBuilder() {
      return getPrePrepare();
    }

    public static final int PREPARE_FIELD_NUMBER = 4;
    private io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare prepare_;
    /**
     * <code>.protocol.PbftPrepare prepare = 4;</code>
     */
    public boolean hasPrepare() {
      return prepare_ != null;
    }
    /**
     * <code>.protocol.PbftPrepare prepare = 4;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare getPrepare() {
      return prepare_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.getDefaultInstance() : prepare_;
    }
    /**
     * <code>.protocol.PbftPrepare prepare = 4;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepareOrBuilder getPrepareOrBuilder() {
      return getPrepare();
    }

    public static final int COMMIT_FIELD_NUMBER = 5;
    private io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit commit_;
    /**
     * <code>.protocol.PbftCommit commit = 5;</code>
     */
    public boolean hasCommit() {
      return commit_ != null;
    }
    /**
     * <code>.protocol.PbftCommit commit = 5;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit getCommit() {
      return commit_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.getDefaultInstance() : commit_;
    }
    /**
     * <code>.protocol.PbftCommit commit = 5;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommitOrBuilder getCommitOrBuilder() {
      return getCommit();
    }

    public static final int VIEW_CHANGE_FIELD_NUMBER = 6;
    private io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange viewChange_;
    /**
     * <code>.protocol.PbftViewChange view_change = 6;</code>
     */
    public boolean hasViewChange() {
      return viewChange_ != null;
    }
    /**
     * <code>.protocol.PbftViewChange view_change = 6;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange getViewChange() {
      return viewChange_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.getDefaultInstance() : viewChange_;
    }
    /**
     * <code>.protocol.PbftViewChange view_change = 6;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeOrBuilder getViewChangeOrBuilder() {
      return getViewChange();
    }

    public static final int NEW_VIEW_FIELD_NUMBER = 7;
    private io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView newView_;
    /**
     * <code>.protocol.PbftNewView new_view = 7;</code>
     */
    public boolean hasNewView() {
      return newView_ != null;
    }
    /**
     * <code>.protocol.PbftNewView new_view = 7;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView getNewView() {
      return newView_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.getDefaultInstance() : newView_;
    }
    /**
     * <code>.protocol.PbftNewView new_view = 7;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewViewOrBuilder getNewViewOrBuilder() {
      return getNewView();
    }

    public static final int VIEW_CHANGE_WITH_RAWVALUE_FIELD_NUMBER = 8;
    private io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue viewChangeWithRawvalue_;
    /**
     * <code>.protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;</code>
     */
    public boolean hasViewChangeWithRawvalue() {
      return viewChangeWithRawvalue_ != null;
    }
    /**
     * <code>.protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue getViewChangeWithRawvalue() {
      return viewChangeWithRawvalue_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.getDefaultInstance() : viewChangeWithRawvalue_;
    }
    /**
     * <code>.protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValueOrBuilder getViewChangeWithRawvalueOrBuilder() {
      return getViewChangeWithRawvalue();
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
      if (roundNumber_ != 0L) {
        output.writeInt64(1, roundNumber_);
      }
      if (type_ != io.rexx.sdk.core.extend.protobuf.Consensus.PbftMessageType.PBFT_TYPE_PREPREPARE.getNumber()) {
        output.writeEnum(2, type_);
      }
      if (prePrepare_ != null) {
        output.writeMessage(3, getPrePrepare());
      }
      if (prepare_ != null) {
        output.writeMessage(4, getPrepare());
      }
      if (commit_ != null) {
        output.writeMessage(5, getCommit());
      }
      if (viewChange_ != null) {
        output.writeMessage(6, getViewChange());
      }
      if (newView_ != null) {
        output.writeMessage(7, getNewView());
      }
      if (viewChangeWithRawvalue_ != null) {
        output.writeMessage(8, getViewChangeWithRawvalue());
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (roundNumber_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, roundNumber_);
      }
      if (type_ != io.rexx.sdk.core.extend.protobuf.Consensus.PbftMessageType.PBFT_TYPE_PREPREPARE.getNumber()) {
        size += com.google.protobuf.CodedOutputStream
          .computeEnumSize(2, type_);
      }
      if (prePrepare_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(3, getPrePrepare());
      }
      if (prepare_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(4, getPrepare());
      }
      if (commit_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(5, getCommit());
      }
      if (viewChange_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(6, getViewChange());
      }
      if (newView_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(7, getNewView());
      }
      if (viewChangeWithRawvalue_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(8, getViewChangeWithRawvalue());
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Consensus.Pbft)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Consensus.Pbft other = (io.rexx.sdk.core.extend.protobuf.Consensus.Pbft) obj;

      boolean result = true;
      result = result && (getRoundNumber()
          == other.getRoundNumber());
      result = result && type_ == other.type_;
      result = result && (hasPrePrepare() == other.hasPrePrepare());
      if (hasPrePrepare()) {
        result = result && getPrePrepare()
            .equals(other.getPrePrepare());
      }
      result = result && (hasPrepare() == other.hasPrepare());
      if (hasPrepare()) {
        result = result && getPrepare()
            .equals(other.getPrepare());
      }
      result = result && (hasCommit() == other.hasCommit());
      if (hasCommit()) {
        result = result && getCommit()
            .equals(other.getCommit());
      }
      result = result && (hasViewChange() == other.hasViewChange());
      if (hasViewChange()) {
        result = result && getViewChange()
            .equals(other.getViewChange());
      }
      result = result && (hasNewView() == other.hasNewView());
      if (hasNewView()) {
        result = result && getNewView()
            .equals(other.getNewView());
      }
      result = result && (hasViewChangeWithRawvalue() == other.hasViewChangeWithRawvalue());
      if (hasViewChangeWithRawvalue()) {
        result = result && getViewChangeWithRawvalue()
            .equals(other.getViewChangeWithRawvalue());
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
      hash = (37 * hash) + ROUND_NUMBER_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getRoundNumber());
      hash = (37 * hash) + TYPE_FIELD_NUMBER;
      hash = (53 * hash) + type_;
      if (hasPrePrepare()) {
        hash = (37 * hash) + PRE_PREPARE_FIELD_NUMBER;
        hash = (53 * hash) + getPrePrepare().hashCode();
      }
      if (hasPrepare()) {
        hash = (37 * hash) + PREPARE_FIELD_NUMBER;
        hash = (53 * hash) + getPrepare().hashCode();
      }
      if (hasCommit()) {
        hash = (37 * hash) + COMMIT_FIELD_NUMBER;
        hash = (53 * hash) + getCommit().hashCode();
      }
      if (hasViewChange()) {
        hash = (37 * hash) + VIEW_CHANGE_FIELD_NUMBER;
        hash = (53 * hash) + getViewChange().hashCode();
      }
      if (hasNewView()) {
        hash = (37 * hash) + NEW_VIEW_FIELD_NUMBER;
        hash = (53 * hash) + getNewView().hashCode();
      }
      if (hasViewChangeWithRawvalue()) {
        hash = (37 * hash) + VIEW_CHANGE_WITH_RAWVALUE_FIELD_NUMBER;
        hash = (53 * hash) + getViewChangeWithRawvalue().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.Pbft parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Pbft parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Pbft parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Pbft parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Pbft parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Pbft parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Pbft parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Pbft parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Pbft parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Pbft parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Pbft parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Pbft parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Consensus.Pbft prototype) {
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
     * Protobuf type {@code protocol.Pbft}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.Pbft)
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_Pbft_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_Pbft_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.class, io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.newBuilder()
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
        roundNumber_ = 0L;

        type_ = 0;

        if (prePrepareBuilder_ == null) {
          prePrepare_ = null;
        } else {
          prePrepare_ = null;
          prePrepareBuilder_ = null;
        }
        if (prepareBuilder_ == null) {
          prepare_ = null;
        } else {
          prepare_ = null;
          prepareBuilder_ = null;
        }
        if (commitBuilder_ == null) {
          commit_ = null;
        } else {
          commit_ = null;
          commitBuilder_ = null;
        }
        if (viewChangeBuilder_ == null) {
          viewChange_ = null;
        } else {
          viewChange_ = null;
          viewChangeBuilder_ = null;
        }
        if (newViewBuilder_ == null) {
          newView_ = null;
        } else {
          newView_ = null;
          newViewBuilder_ = null;
        }
        if (viewChangeWithRawvalueBuilder_ == null) {
          viewChangeWithRawvalue_ = null;
        } else {
          viewChangeWithRawvalue_ = null;
          viewChangeWithRawvalueBuilder_ = null;
        }
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_Pbft_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.Pbft getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.Pbft build() {
        io.rexx.sdk.core.extend.protobuf.Consensus.Pbft result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.Pbft buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Consensus.Pbft result = new io.rexx.sdk.core.extend.protobuf.Consensus.Pbft(this);
        result.roundNumber_ = roundNumber_;
        result.type_ = type_;
        if (prePrepareBuilder_ == null) {
          result.prePrepare_ = prePrepare_;
        } else {
          result.prePrepare_ = prePrepareBuilder_.build();
        }
        if (prepareBuilder_ == null) {
          result.prepare_ = prepare_;
        } else {
          result.prepare_ = prepareBuilder_.build();
        }
        if (commitBuilder_ == null) {
          result.commit_ = commit_;
        } else {
          result.commit_ = commitBuilder_.build();
        }
        if (viewChangeBuilder_ == null) {
          result.viewChange_ = viewChange_;
        } else {
          result.viewChange_ = viewChangeBuilder_.build();
        }
        if (newViewBuilder_ == null) {
          result.newView_ = newView_;
        } else {
          result.newView_ = newViewBuilder_.build();
        }
        if (viewChangeWithRawvalueBuilder_ == null) {
          result.viewChangeWithRawvalue_ = viewChangeWithRawvalue_;
        } else {
          result.viewChangeWithRawvalue_ = viewChangeWithRawvalueBuilder_.build();
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Consensus.Pbft) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Consensus.Pbft)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Consensus.Pbft other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.getDefaultInstance()) return this;
        if (other.getRoundNumber() != 0L) {
          setRoundNumber(other.getRoundNumber());
        }
        if (other.type_ != 0) {
          setTypeValue(other.getTypeValue());
        }
        if (other.hasPrePrepare()) {
          mergePrePrepare(other.getPrePrepare());
        }
        if (other.hasPrepare()) {
          mergePrepare(other.getPrepare());
        }
        if (other.hasCommit()) {
          mergeCommit(other.getCommit());
        }
        if (other.hasViewChange()) {
          mergeViewChange(other.getViewChange());
        }
        if (other.hasNewView()) {
          mergeNewView(other.getNewView());
        }
        if (other.hasViewChangeWithRawvalue()) {
          mergeViewChangeWithRawvalue(other.getViewChangeWithRawvalue());
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
        io.rexx.sdk.core.extend.protobuf.Consensus.Pbft parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Consensus.Pbft) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private long roundNumber_ ;
      /**
       * <pre>
       *for send again
       * </pre>
       *
       * <code>int64 round_number = 1;</code>
       */
      public long getRoundNumber() {
        return roundNumber_;
      }
      /**
       * <pre>
       *for send again
       * </pre>
       *
       * <code>int64 round_number = 1;</code>
       */
      public Builder setRoundNumber(long value) {
        
        roundNumber_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *for send again
       * </pre>
       *
       * <code>int64 round_number = 1;</code>
       */
      public Builder clearRoundNumber() {
        
        roundNumber_ = 0L;
        onChanged();
        return this;
      }

      private int type_ = 0;
      /**
       * <code>.protocol.PbftMessageType type = 2;</code>
       */
      public int getTypeValue() {
        return type_;
      }
      /**
       * <code>.protocol.PbftMessageType type = 2;</code>
       */
      public Builder setTypeValue(int value) {
        type_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>.protocol.PbftMessageType type = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftMessageType getType() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftMessageType result = io.rexx.sdk.core.extend.protobuf.Consensus.PbftMessageType.valueOf(type_);
        return result == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftMessageType.UNRECOGNIZED : result;
      }
      /**
       * <code>.protocol.PbftMessageType type = 2;</code>
       */
      public Builder setType(io.rexx.sdk.core.extend.protobuf.Consensus.PbftMessageType value) {
        if (value == null) {
          throw new NullPointerException();
        }
        
        type_ = value.getNumber();
        onChanged();
        return this;
      }
      /**
       * <code>.protocol.PbftMessageType type = 2;</code>
       */
      public Builder clearType() {
        
        type_ = 0;
        onChanged();
        return this;
      }

      private io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare prePrepare_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepareOrBuilder> prePrepareBuilder_;
      /**
       * <code>.protocol.PbftPrePrepare pre_prepare = 3;</code>
       */
      public boolean hasPrePrepare() {
        return prePrepareBuilder_ != null || prePrepare_ != null;
      }
      /**
       * <code>.protocol.PbftPrePrepare pre_prepare = 3;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare getPrePrepare() {
        if (prePrepareBuilder_ == null) {
          return prePrepare_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.getDefaultInstance() : prePrepare_;
        } else {
          return prePrepareBuilder_.getMessage();
        }
      }
      /**
       * <code>.protocol.PbftPrePrepare pre_prepare = 3;</code>
       */
      public Builder setPrePrepare(io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare value) {
        if (prePrepareBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          prePrepare_ = value;
          onChanged();
        } else {
          prePrepareBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.protocol.PbftPrePrepare pre_prepare = 3;</code>
       */
      public Builder setPrePrepare(
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.Builder builderForValue) {
        if (prePrepareBuilder_ == null) {
          prePrepare_ = builderForValue.build();
          onChanged();
        } else {
          prePrepareBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.protocol.PbftPrePrepare pre_prepare = 3;</code>
       */
      public Builder mergePrePrepare(io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare value) {
        if (prePrepareBuilder_ == null) {
          if (prePrepare_ != null) {
            prePrepare_ =
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.newBuilder(prePrepare_).mergeFrom(value).buildPartial();
          } else {
            prePrepare_ = value;
          }
          onChanged();
        } else {
          prePrepareBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.protocol.PbftPrePrepare pre_prepare = 3;</code>
       */
      public Builder clearPrePrepare() {
        if (prePrepareBuilder_ == null) {
          prePrepare_ = null;
          onChanged();
        } else {
          prePrepare_ = null;
          prePrepareBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.protocol.PbftPrePrepare pre_prepare = 3;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.Builder getPrePrepareBuilder() {
        
        onChanged();
        return getPrePrepareFieldBuilder().getBuilder();
      }
      /**
       * <code>.protocol.PbftPrePrepare pre_prepare = 3;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepareOrBuilder getPrePrepareOrBuilder() {
        if (prePrepareBuilder_ != null) {
          return prePrepareBuilder_.getMessageOrBuilder();
        } else {
          return prePrepare_ == null ?
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.getDefaultInstance() : prePrepare_;
        }
      }
      /**
       * <code>.protocol.PbftPrePrepare pre_prepare = 3;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepareOrBuilder>
          getPrePrepareFieldBuilder() {
        if (prePrepareBuilder_ == null) {
          prePrepareBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepare.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrePrepareOrBuilder>(
                  getPrePrepare(),
                  getParentForChildren(),
                  isClean());
          prePrepare_ = null;
        }
        return prePrepareBuilder_;
      }

      private io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare prepare_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepareOrBuilder> prepareBuilder_;
      /**
       * <code>.protocol.PbftPrepare prepare = 4;</code>
       */
      public boolean hasPrepare() {
        return prepareBuilder_ != null || prepare_ != null;
      }
      /**
       * <code>.protocol.PbftPrepare prepare = 4;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare getPrepare() {
        if (prepareBuilder_ == null) {
          return prepare_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.getDefaultInstance() : prepare_;
        } else {
          return prepareBuilder_.getMessage();
        }
      }
      /**
       * <code>.protocol.PbftPrepare prepare = 4;</code>
       */
      public Builder setPrepare(io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare value) {
        if (prepareBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          prepare_ = value;
          onChanged();
        } else {
          prepareBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.protocol.PbftPrepare prepare = 4;</code>
       */
      public Builder setPrepare(
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.Builder builderForValue) {
        if (prepareBuilder_ == null) {
          prepare_ = builderForValue.build();
          onChanged();
        } else {
          prepareBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.protocol.PbftPrepare prepare = 4;</code>
       */
      public Builder mergePrepare(io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare value) {
        if (prepareBuilder_ == null) {
          if (prepare_ != null) {
            prepare_ =
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.newBuilder(prepare_).mergeFrom(value).buildPartial();
          } else {
            prepare_ = value;
          }
          onChanged();
        } else {
          prepareBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.protocol.PbftPrepare prepare = 4;</code>
       */
      public Builder clearPrepare() {
        if (prepareBuilder_ == null) {
          prepare_ = null;
          onChanged();
        } else {
          prepare_ = null;
          prepareBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.protocol.PbftPrepare prepare = 4;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.Builder getPrepareBuilder() {
        
        onChanged();
        return getPrepareFieldBuilder().getBuilder();
      }
      /**
       * <code>.protocol.PbftPrepare prepare = 4;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepareOrBuilder getPrepareOrBuilder() {
        if (prepareBuilder_ != null) {
          return prepareBuilder_.getMessageOrBuilder();
        } else {
          return prepare_ == null ?
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.getDefaultInstance() : prepare_;
        }
      }
      /**
       * <code>.protocol.PbftPrepare prepare = 4;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepareOrBuilder>
          getPrepareFieldBuilder() {
        if (prepareBuilder_ == null) {
          prepareBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepare.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftPrepareOrBuilder>(
                  getPrepare(),
                  getParentForChildren(),
                  isClean());
          prepare_ = null;
        }
        return prepareBuilder_;
      }

      private io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit commit_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit, io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommitOrBuilder> commitBuilder_;
      /**
       * <code>.protocol.PbftCommit commit = 5;</code>
       */
      public boolean hasCommit() {
        return commitBuilder_ != null || commit_ != null;
      }
      /**
       * <code>.protocol.PbftCommit commit = 5;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit getCommit() {
        if (commitBuilder_ == null) {
          return commit_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.getDefaultInstance() : commit_;
        } else {
          return commitBuilder_.getMessage();
        }
      }
      /**
       * <code>.protocol.PbftCommit commit = 5;</code>
       */
      public Builder setCommit(io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit value) {
        if (commitBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          commit_ = value;
          onChanged();
        } else {
          commitBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.protocol.PbftCommit commit = 5;</code>
       */
      public Builder setCommit(
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.Builder builderForValue) {
        if (commitBuilder_ == null) {
          commit_ = builderForValue.build();
          onChanged();
        } else {
          commitBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.protocol.PbftCommit commit = 5;</code>
       */
      public Builder mergeCommit(io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit value) {
        if (commitBuilder_ == null) {
          if (commit_ != null) {
            commit_ =
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.newBuilder(commit_).mergeFrom(value).buildPartial();
          } else {
            commit_ = value;
          }
          onChanged();
        } else {
          commitBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.protocol.PbftCommit commit = 5;</code>
       */
      public Builder clearCommit() {
        if (commitBuilder_ == null) {
          commit_ = null;
          onChanged();
        } else {
          commit_ = null;
          commitBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.protocol.PbftCommit commit = 5;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.Builder getCommitBuilder() {
        
        onChanged();
        return getCommitFieldBuilder().getBuilder();
      }
      /**
       * <code>.protocol.PbftCommit commit = 5;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommitOrBuilder getCommitOrBuilder() {
        if (commitBuilder_ != null) {
          return commitBuilder_.getMessageOrBuilder();
        } else {
          return commit_ == null ?
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.getDefaultInstance() : commit_;
        }
      }
      /**
       * <code>.protocol.PbftCommit commit = 5;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit, io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommitOrBuilder>
          getCommitFieldBuilder() {
        if (commitBuilder_ == null) {
          commitBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit, io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommit.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftCommitOrBuilder>(
                  getCommit(),
                  getParentForChildren(),
                  isClean());
          commit_ = null;
        }
        return commitBuilder_;
      }

      private io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange viewChange_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeOrBuilder> viewChangeBuilder_;
      /**
       * <code>.protocol.PbftViewChange view_change = 6;</code>
       */
      public boolean hasViewChange() {
        return viewChangeBuilder_ != null || viewChange_ != null;
      }
      /**
       * <code>.protocol.PbftViewChange view_change = 6;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange getViewChange() {
        if (viewChangeBuilder_ == null) {
          return viewChange_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.getDefaultInstance() : viewChange_;
        } else {
          return viewChangeBuilder_.getMessage();
        }
      }
      /**
       * <code>.protocol.PbftViewChange view_change = 6;</code>
       */
      public Builder setViewChange(io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange value) {
        if (viewChangeBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          viewChange_ = value;
          onChanged();
        } else {
          viewChangeBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.protocol.PbftViewChange view_change = 6;</code>
       */
      public Builder setViewChange(
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.Builder builderForValue) {
        if (viewChangeBuilder_ == null) {
          viewChange_ = builderForValue.build();
          onChanged();
        } else {
          viewChangeBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.protocol.PbftViewChange view_change = 6;</code>
       */
      public Builder mergeViewChange(io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange value) {
        if (viewChangeBuilder_ == null) {
          if (viewChange_ != null) {
            viewChange_ =
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.newBuilder(viewChange_).mergeFrom(value).buildPartial();
          } else {
            viewChange_ = value;
          }
          onChanged();
        } else {
          viewChangeBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.protocol.PbftViewChange view_change = 6;</code>
       */
      public Builder clearViewChange() {
        if (viewChangeBuilder_ == null) {
          viewChange_ = null;
          onChanged();
        } else {
          viewChange_ = null;
          viewChangeBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.protocol.PbftViewChange view_change = 6;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.Builder getViewChangeBuilder() {
        
        onChanged();
        return getViewChangeFieldBuilder().getBuilder();
      }
      /**
       * <code>.protocol.PbftViewChange view_change = 6;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeOrBuilder getViewChangeOrBuilder() {
        if (viewChangeBuilder_ != null) {
          return viewChangeBuilder_.getMessageOrBuilder();
        } else {
          return viewChange_ == null ?
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.getDefaultInstance() : viewChange_;
        }
      }
      /**
       * <code>.protocol.PbftViewChange view_change = 6;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeOrBuilder>
          getViewChangeFieldBuilder() {
        if (viewChangeBuilder_ == null) {
          viewChangeBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChange.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeOrBuilder>(
                  getViewChange(),
                  getParentForChildren(),
                  isClean());
          viewChange_ = null;
        }
        return viewChangeBuilder_;
      }

      private io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView newView_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView, io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewViewOrBuilder> newViewBuilder_;
      /**
       * <code>.protocol.PbftNewView new_view = 7;</code>
       */
      public boolean hasNewView() {
        return newViewBuilder_ != null || newView_ != null;
      }
      /**
       * <code>.protocol.PbftNewView new_view = 7;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView getNewView() {
        if (newViewBuilder_ == null) {
          return newView_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.getDefaultInstance() : newView_;
        } else {
          return newViewBuilder_.getMessage();
        }
      }
      /**
       * <code>.protocol.PbftNewView new_view = 7;</code>
       */
      public Builder setNewView(io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView value) {
        if (newViewBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          newView_ = value;
          onChanged();
        } else {
          newViewBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.protocol.PbftNewView new_view = 7;</code>
       */
      public Builder setNewView(
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.Builder builderForValue) {
        if (newViewBuilder_ == null) {
          newView_ = builderForValue.build();
          onChanged();
        } else {
          newViewBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.protocol.PbftNewView new_view = 7;</code>
       */
      public Builder mergeNewView(io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView value) {
        if (newViewBuilder_ == null) {
          if (newView_ != null) {
            newView_ =
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.newBuilder(newView_).mergeFrom(value).buildPartial();
          } else {
            newView_ = value;
          }
          onChanged();
        } else {
          newViewBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.protocol.PbftNewView new_view = 7;</code>
       */
      public Builder clearNewView() {
        if (newViewBuilder_ == null) {
          newView_ = null;
          onChanged();
        } else {
          newView_ = null;
          newViewBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.protocol.PbftNewView new_view = 7;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.Builder getNewViewBuilder() {
        
        onChanged();
        return getNewViewFieldBuilder().getBuilder();
      }
      /**
       * <code>.protocol.PbftNewView new_view = 7;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewViewOrBuilder getNewViewOrBuilder() {
        if (newViewBuilder_ != null) {
          return newViewBuilder_.getMessageOrBuilder();
        } else {
          return newView_ == null ?
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.getDefaultInstance() : newView_;
        }
      }
      /**
       * <code>.protocol.PbftNewView new_view = 7;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView, io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewViewOrBuilder>
          getNewViewFieldBuilder() {
        if (newViewBuilder_ == null) {
          newViewBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView, io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewView.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftNewViewOrBuilder>(
                  getNewView(),
                  getParentForChildren(),
                  isClean());
          newView_ = null;
        }
        return newViewBuilder_;
      }

      private io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue viewChangeWithRawvalue_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValueOrBuilder> viewChangeWithRawvalueBuilder_;
      /**
       * <code>.protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;</code>
       */
      public boolean hasViewChangeWithRawvalue() {
        return viewChangeWithRawvalueBuilder_ != null || viewChangeWithRawvalue_ != null;
      }
      /**
       * <code>.protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue getViewChangeWithRawvalue() {
        if (viewChangeWithRawvalueBuilder_ == null) {
          return viewChangeWithRawvalue_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.getDefaultInstance() : viewChangeWithRawvalue_;
        } else {
          return viewChangeWithRawvalueBuilder_.getMessage();
        }
      }
      /**
       * <code>.protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;</code>
       */
      public Builder setViewChangeWithRawvalue(io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue value) {
        if (viewChangeWithRawvalueBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          viewChangeWithRawvalue_ = value;
          onChanged();
        } else {
          viewChangeWithRawvalueBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;</code>
       */
      public Builder setViewChangeWithRawvalue(
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.Builder builderForValue) {
        if (viewChangeWithRawvalueBuilder_ == null) {
          viewChangeWithRawvalue_ = builderForValue.build();
          onChanged();
        } else {
          viewChangeWithRawvalueBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;</code>
       */
      public Builder mergeViewChangeWithRawvalue(io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue value) {
        if (viewChangeWithRawvalueBuilder_ == null) {
          if (viewChangeWithRawvalue_ != null) {
            viewChangeWithRawvalue_ =
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.newBuilder(viewChangeWithRawvalue_).mergeFrom(value).buildPartial();
          } else {
            viewChangeWithRawvalue_ = value;
          }
          onChanged();
        } else {
          viewChangeWithRawvalueBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;</code>
       */
      public Builder clearViewChangeWithRawvalue() {
        if (viewChangeWithRawvalueBuilder_ == null) {
          viewChangeWithRawvalue_ = null;
          onChanged();
        } else {
          viewChangeWithRawvalue_ = null;
          viewChangeWithRawvalueBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.Builder getViewChangeWithRawvalueBuilder() {
        
        onChanged();
        return getViewChangeWithRawvalueFieldBuilder().getBuilder();
      }
      /**
       * <code>.protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValueOrBuilder getViewChangeWithRawvalueOrBuilder() {
        if (viewChangeWithRawvalueBuilder_ != null) {
          return viewChangeWithRawvalueBuilder_.getMessageOrBuilder();
        } else {
          return viewChangeWithRawvalue_ == null ?
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.getDefaultInstance() : viewChangeWithRawvalue_;
        }
      }
      /**
       * <code>.protocol.PbftViewChangeWithRawValue view_change_with_rawvalue = 8;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValueOrBuilder>
          getViewChangeWithRawvalueFieldBuilder() {
        if (viewChangeWithRawvalueBuilder_ == null) {
          viewChangeWithRawvalueBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValue.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftViewChangeWithRawValueOrBuilder>(
                  getViewChangeWithRawvalue(),
                  getParentForChildren(),
                  isClean());
          viewChangeWithRawvalue_ = null;
        }
        return viewChangeWithRawvalueBuilder_;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.Pbft)
    }

    // @@protoc_insertion_point(class_scope:protocol.Pbft)
    private static final io.rexx.sdk.core.extend.protobuf.Consensus.Pbft DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Consensus.Pbft();
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.Pbft getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Pbft>
        PARSER = new com.google.protobuf.AbstractParser<Pbft>() {
      public Pbft parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Pbft(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Pbft> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Pbft> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Consensus.Pbft getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PbftEnvOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.PbftEnv)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>.protocol.Pbft pbft = 1;</code>
     */
    boolean hasPbft();
    /**
     * <code>.protocol.Pbft pbft = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.Pbft getPbft();
    /**
     * <code>.protocol.Pbft pbft = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftOrBuilder getPbftOrBuilder();

    /**
     * <code>.protocol.Signature signature = 2;</code>
     */
    boolean hasSignature();
    /**
     * <code>.protocol.Signature signature = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Common.Signature getSignature();
    /**
     * <code>.protocol.Signature signature = 2;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Common.SignatureOrBuilder getSignatureOrBuilder();
  }
  /**
   * Protobuf type {@code protocol.PbftEnv}
   */
  public  static final class PbftEnv extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.PbftEnv)
      PbftEnvOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use PbftEnv.newBuilder() to construct.
    private PbftEnv(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private PbftEnv() {
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private PbftEnv(
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
              io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.Builder subBuilder = null;
              if (pbft_ != null) {
                subBuilder = pbft_.toBuilder();
              }
              pbft_ = input.readMessage(io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(pbft_);
                pbft_ = subBuilder.buildPartial();
              }

              break;
            }
            case 18: {
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
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftEnv_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftEnv_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder.class);
    }

    public static final int PBFT_FIELD_NUMBER = 1;
    private io.rexx.sdk.core.extend.protobuf.Consensus.Pbft pbft_;
    /**
     * <code>.protocol.Pbft pbft = 1;</code>
     */
    public boolean hasPbft() {
      return pbft_ != null;
    }
    /**
     * <code>.protocol.Pbft pbft = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.Pbft getPbft() {
      return pbft_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.getDefaultInstance() : pbft_;
    }
    /**
     * <code>.protocol.Pbft pbft = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftOrBuilder getPbftOrBuilder() {
      return getPbft();
    }

    public static final int SIGNATURE_FIELD_NUMBER = 2;
    private io.rexx.sdk.core.extend.protobuf.Common.Signature signature_;
    /**
     * <code>.protocol.Signature signature = 2;</code>
     */
    public boolean hasSignature() {
      return signature_ != null;
    }
    /**
     * <code>.protocol.Signature signature = 2;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Common.Signature getSignature() {
      return signature_ == null ? io.rexx.sdk.core.extend.protobuf.Common.Signature.getDefaultInstance() : signature_;
    }
    /**
     * <code>.protocol.Signature signature = 2;</code>
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
      if (pbft_ != null) {
        output.writeMessage(1, getPbft());
      }
      if (signature_ != null) {
        output.writeMessage(2, getSignature());
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (pbft_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, getPbft());
      }
      if (signature_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(2, getSignature());
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv other = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv) obj;

      boolean result = true;
      result = result && (hasPbft() == other.hasPbft());
      if (hasPbft()) {
        result = result && getPbft()
            .equals(other.getPbft());
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
      if (hasPbft()) {
        hash = (37 * hash) + PBFT_FIELD_NUMBER;
        hash = (53 * hash) + getPbft().hashCode();
      }
      if (hasSignature()) {
        hash = (37 * hash) + SIGNATURE_FIELD_NUMBER;
        hash = (53 * hash) + getSignature().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv prototype) {
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
     * Protobuf type {@code protocol.PbftEnv}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.PbftEnv)
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftEnv_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftEnv_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.newBuilder()
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
        if (pbftBuilder_ == null) {
          pbft_ = null;
        } else {
          pbft_ = null;
          pbftBuilder_ = null;
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
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftEnv_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv build() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv result = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv(this);
        if (pbftBuilder_ == null) {
          result.pbft_ = pbft_;
        } else {
          result.pbft_ = pbftBuilder_.build();
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance()) return this;
        if (other.hasPbft()) {
          mergePbft(other.getPbft());
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
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private io.rexx.sdk.core.extend.protobuf.Consensus.Pbft pbft_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.Pbft, io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftOrBuilder> pbftBuilder_;
      /**
       * <code>.protocol.Pbft pbft = 1;</code>
       */
      public boolean hasPbft() {
        return pbftBuilder_ != null || pbft_ != null;
      }
      /**
       * <code>.protocol.Pbft pbft = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.Pbft getPbft() {
        if (pbftBuilder_ == null) {
          return pbft_ == null ? io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.getDefaultInstance() : pbft_;
        } else {
          return pbftBuilder_.getMessage();
        }
      }
      /**
       * <code>.protocol.Pbft pbft = 1;</code>
       */
      public Builder setPbft(io.rexx.sdk.core.extend.protobuf.Consensus.Pbft value) {
        if (pbftBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          pbft_ = value;
          onChanged();
        } else {
          pbftBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.protocol.Pbft pbft = 1;</code>
       */
      public Builder setPbft(
          io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.Builder builderForValue) {
        if (pbftBuilder_ == null) {
          pbft_ = builderForValue.build();
          onChanged();
        } else {
          pbftBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.protocol.Pbft pbft = 1;</code>
       */
      public Builder mergePbft(io.rexx.sdk.core.extend.protobuf.Consensus.Pbft value) {
        if (pbftBuilder_ == null) {
          if (pbft_ != null) {
            pbft_ =
              io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.newBuilder(pbft_).mergeFrom(value).buildPartial();
          } else {
            pbft_ = value;
          }
          onChanged();
        } else {
          pbftBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.protocol.Pbft pbft = 1;</code>
       */
      public Builder clearPbft() {
        if (pbftBuilder_ == null) {
          pbft_ = null;
          onChanged();
        } else {
          pbft_ = null;
          pbftBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.protocol.Pbft pbft = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.Builder getPbftBuilder() {
        
        onChanged();
        return getPbftFieldBuilder().getBuilder();
      }
      /**
       * <code>.protocol.Pbft pbft = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftOrBuilder getPbftOrBuilder() {
        if (pbftBuilder_ != null) {
          return pbftBuilder_.getMessageOrBuilder();
        } else {
          return pbft_ == null ?
              io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.getDefaultInstance() : pbft_;
        }
      }
      /**
       * <code>.protocol.Pbft pbft = 1;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.Pbft, io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftOrBuilder>
          getPbftFieldBuilder() {
        if (pbftBuilder_ == null) {
          pbftBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Consensus.Pbft, io.rexx.sdk.core.extend.protobuf.Consensus.Pbft.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftOrBuilder>(
                  getPbft(),
                  getParentForChildren(),
                  isClean());
          pbft_ = null;
        }
        return pbftBuilder_;
      }

      private io.rexx.sdk.core.extend.protobuf.Common.Signature signature_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Common.Signature, io.rexx.sdk.core.extend.protobuf.Common.Signature.Builder, io.rexx.sdk.core.extend.protobuf.Common.SignatureOrBuilder> signatureBuilder_;
      /**
       * <code>.protocol.Signature signature = 2;</code>
       */
      public boolean hasSignature() {
        return signatureBuilder_ != null || signature_ != null;
      }
      /**
       * <code>.protocol.Signature signature = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Common.Signature getSignature() {
        if (signatureBuilder_ == null) {
          return signature_ == null ? io.rexx.sdk.core.extend.protobuf.Common.Signature.getDefaultInstance() : signature_;
        } else {
          return signatureBuilder_.getMessage();
        }
      }
      /**
       * <code>.protocol.Signature signature = 2;</code>
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
       * <code>.protocol.Signature signature = 2;</code>
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
       * <code>.protocol.Signature signature = 2;</code>
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
       * <code>.protocol.Signature signature = 2;</code>
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
       * <code>.protocol.Signature signature = 2;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Common.Signature.Builder getSignatureBuilder() {
        
        onChanged();
        return getSignatureFieldBuilder().getBuilder();
      }
      /**
       * <code>.protocol.Signature signature = 2;</code>
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
       * <code>.protocol.Signature signature = 2;</code>
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


      // @@protoc_insertion_point(builder_scope:protocol.PbftEnv)
    }

    // @@protoc_insertion_point(class_scope:protocol.PbftEnv)
    private static final io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv();
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<PbftEnv>
        PARSER = new com.google.protobuf.AbstractParser<PbftEnv>() {
      public PbftEnv parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new PbftEnv(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<PbftEnv> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<PbftEnv> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface ValidatorOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.Validator)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string address = 1;</code>
     */
    java.lang.String getAddress();
    /**
     * <code>string address = 1;</code>
     */
    com.google.protobuf.ByteString
        getAddressBytes();

    /**
     * <code>int64 pledge_coin_amount = 2;</code>
     */
    long getPledgeCoinAmount();
  }
  /**
   * Protobuf type {@code protocol.Validator}
   */
  public  static final class Validator extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.Validator)
      ValidatorOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Validator.newBuilder() to construct.
    private Validator(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Validator() {
      address_ = "";
      pledgeCoinAmount_ = 0L;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Validator(
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

              address_ = s;
              break;
            }
            case 16: {

              pledgeCoinAmount_ = input.readInt64();
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
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_Validator_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_Validator_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Consensus.Validator.class, io.rexx.sdk.core.extend.protobuf.Consensus.Validator.Builder.class);
    }

    public static final int ADDRESS_FIELD_NUMBER = 1;
    private volatile java.lang.Object address_;
    /**
     * <code>string address = 1;</code>
     */
    public java.lang.String getAddress() {
      java.lang.Object ref = address_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        address_ = s;
        return s;
      }
    }
    /**
     * <code>string address = 1;</code>
     */
    public com.google.protobuf.ByteString
        getAddressBytes() {
      java.lang.Object ref = address_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        address_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int PLEDGE_COIN_AMOUNT_FIELD_NUMBER = 2;
    private long pledgeCoinAmount_;
    /**
     * <code>int64 pledge_coin_amount = 2;</code>
     */
    public long getPledgeCoinAmount() {
      return pledgeCoinAmount_;
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
      if (!getAddressBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, address_);
      }
      if (pledgeCoinAmount_ != 0L) {
        output.writeInt64(2, pledgeCoinAmount_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!getAddressBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, address_);
      }
      if (pledgeCoinAmount_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, pledgeCoinAmount_);
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Consensus.Validator)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Consensus.Validator other = (io.rexx.sdk.core.extend.protobuf.Consensus.Validator) obj;

      boolean result = true;
      result = result && getAddress()
          .equals(other.getAddress());
      result = result && (getPledgeCoinAmount()
          == other.getPledgeCoinAmount());
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
      hash = (37 * hash) + ADDRESS_FIELD_NUMBER;
      hash = (53 * hash) + getAddress().hashCode();
      hash = (37 * hash) + PLEDGE_COIN_AMOUNT_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getPledgeCoinAmount());
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.Validator parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Validator parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Validator parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Validator parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Validator parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Validator parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Validator parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Validator parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Validator parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Validator parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Validator parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.Validator parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Consensus.Validator prototype) {
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
     * Protobuf type {@code protocol.Validator}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.Validator)
        io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_Validator_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_Validator_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Consensus.Validator.class, io.rexx.sdk.core.extend.protobuf.Consensus.Validator.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Consensus.Validator.newBuilder()
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
        address_ = "";

        pledgeCoinAmount_ = 0L;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_Validator_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.Validator getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.Validator.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.Validator build() {
        io.rexx.sdk.core.extend.protobuf.Consensus.Validator result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.Validator buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Consensus.Validator result = new io.rexx.sdk.core.extend.protobuf.Consensus.Validator(this);
        result.address_ = address_;
        result.pledgeCoinAmount_ = pledgeCoinAmount_;
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Consensus.Validator) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Consensus.Validator)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Consensus.Validator other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Consensus.Validator.getDefaultInstance()) return this;
        if (!other.getAddress().isEmpty()) {
          address_ = other.address_;
          onChanged();
        }
        if (other.getPledgeCoinAmount() != 0L) {
          setPledgeCoinAmount(other.getPledgeCoinAmount());
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
        io.rexx.sdk.core.extend.protobuf.Consensus.Validator parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Consensus.Validator) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private java.lang.Object address_ = "";
      /**
       * <code>string address = 1;</code>
       */
      public java.lang.String getAddress() {
        java.lang.Object ref = address_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          address_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string address = 1;</code>
       */
      public com.google.protobuf.ByteString
          getAddressBytes() {
        java.lang.Object ref = address_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          address_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string address = 1;</code>
       */
      public Builder setAddress(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        address_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string address = 1;</code>
       */
      public Builder clearAddress() {
        
        address_ = getDefaultInstance().getAddress();
        onChanged();
        return this;
      }
      /**
       * <code>string address = 1;</code>
       */
      public Builder setAddressBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        address_ = value;
        onChanged();
        return this;
      }

      private long pledgeCoinAmount_ ;
      /**
       * <code>int64 pledge_coin_amount = 2;</code>
       */
      public long getPledgeCoinAmount() {
        return pledgeCoinAmount_;
      }
      /**
       * <code>int64 pledge_coin_amount = 2;</code>
       */
      public Builder setPledgeCoinAmount(long value) {
        
        pledgeCoinAmount_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 pledge_coin_amount = 2;</code>
       */
      public Builder clearPledgeCoinAmount() {
        
        pledgeCoinAmount_ = 0L;
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


      // @@protoc_insertion_point(builder_scope:protocol.Validator)
    }

    // @@protoc_insertion_point(class_scope:protocol.Validator)
    private static final io.rexx.sdk.core.extend.protobuf.Consensus.Validator DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Consensus.Validator();
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.Validator getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Validator>
        PARSER = new com.google.protobuf.AbstractParser<Validator>() {
      public Validator parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Validator(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Validator> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Validator> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Consensus.Validator getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface ValidatorSetOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.ValidatorSet)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>repeated .protocol.Validator validators = 1;</code>
     */
    java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.Validator>
        getValidatorsList();
    /**
     * <code>repeated .protocol.Validator validators = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.Validator getValidators(int index);
    /**
     * <code>repeated .protocol.Validator validators = 1;</code>
     */
    int getValidatorsCount();
    /**
     * <code>repeated .protocol.Validator validators = 1;</code>
     */
    java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorOrBuilder>
        getValidatorsOrBuilderList();
    /**
     * <code>repeated .protocol.Validator validators = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorOrBuilder getValidatorsOrBuilder(
        int index);
  }
  /**
   * Protobuf type {@code protocol.ValidatorSet}
   */
  public  static final class ValidatorSet extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.ValidatorSet)
      ValidatorSetOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use ValidatorSet.newBuilder() to construct.
    private ValidatorSet(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private ValidatorSet() {
      validators_ = java.util.Collections.emptyList();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private ValidatorSet(
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
                validators_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Consensus.Validator>();
                mutable_bitField0_ |= 0x00000001;
              }
              validators_.add(
                  input.readMessage(io.rexx.sdk.core.extend.protobuf.Consensus.Validator.parser(), extensionRegistry));
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
          validators_ = java.util.Collections.unmodifiableList(validators_);
        }
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_ValidatorSet_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_ValidatorSet_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet.class, io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet.Builder.class);
    }

    public static final int VALIDATORS_FIELD_NUMBER = 1;
    private java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.Validator> validators_;
    /**
     * <code>repeated .protocol.Validator validators = 1;</code>
     */
    public java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.Validator> getValidatorsList() {
      return validators_;
    }
    /**
     * <code>repeated .protocol.Validator validators = 1;</code>
     */
    public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorOrBuilder>
        getValidatorsOrBuilderList() {
      return validators_;
    }
    /**
     * <code>repeated .protocol.Validator validators = 1;</code>
     */
    public int getValidatorsCount() {
      return validators_.size();
    }
    /**
     * <code>repeated .protocol.Validator validators = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.Validator getValidators(int index) {
      return validators_.get(index);
    }
    /**
     * <code>repeated .protocol.Validator validators = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorOrBuilder getValidatorsOrBuilder(
        int index) {
      return validators_.get(index);
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
      for (int i = 0; i < validators_.size(); i++) {
        output.writeMessage(1, validators_.get(i));
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      for (int i = 0; i < validators_.size(); i++) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, validators_.get(i));
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet other = (io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet) obj;

      boolean result = true;
      result = result && getValidatorsList()
          .equals(other.getValidatorsList());
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
      if (getValidatorsCount() > 0) {
        hash = (37 * hash) + VALIDATORS_FIELD_NUMBER;
        hash = (53 * hash) + getValidatorsList().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet prototype) {
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
     * Protobuf type {@code protocol.ValidatorSet}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.ValidatorSet)
        io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSetOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_ValidatorSet_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_ValidatorSet_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet.class, io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet.newBuilder()
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
          getValidatorsFieldBuilder();
        }
      }
      public Builder clear() {
        super.clear();
        if (validatorsBuilder_ == null) {
          validators_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000001);
        } else {
          validatorsBuilder_.clear();
        }
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_ValidatorSet_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet build() {
        io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet result = new io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet(this);
        int from_bitField0_ = bitField0_;
        if (validatorsBuilder_ == null) {
          if (((bitField0_ & 0x00000001) == 0x00000001)) {
            validators_ = java.util.Collections.unmodifiableList(validators_);
            bitField0_ = (bitField0_ & ~0x00000001);
          }
          result.validators_ = validators_;
        } else {
          result.validators_ = validatorsBuilder_.build();
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet.getDefaultInstance()) return this;
        if (validatorsBuilder_ == null) {
          if (!other.validators_.isEmpty()) {
            if (validators_.isEmpty()) {
              validators_ = other.validators_;
              bitField0_ = (bitField0_ & ~0x00000001);
            } else {
              ensureValidatorsIsMutable();
              validators_.addAll(other.validators_);
            }
            onChanged();
          }
        } else {
          if (!other.validators_.isEmpty()) {
            if (validatorsBuilder_.isEmpty()) {
              validatorsBuilder_.dispose();
              validatorsBuilder_ = null;
              validators_ = other.validators_;
              bitField0_ = (bitField0_ & ~0x00000001);
              validatorsBuilder_ = 
                com.google.protobuf.GeneratedMessageV3.alwaysUseFieldBuilders ?
                   getValidatorsFieldBuilder() : null;
            } else {
              validatorsBuilder_.addAllMessages(other.validators_);
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
        io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.Validator> validators_ =
        java.util.Collections.emptyList();
      private void ensureValidatorsIsMutable() {
        if (!((bitField0_ & 0x00000001) == 0x00000001)) {
          validators_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Consensus.Validator>(validators_);
          bitField0_ |= 0x00000001;
         }
      }

      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.Validator, io.rexx.sdk.core.extend.protobuf.Consensus.Validator.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorOrBuilder> validatorsBuilder_;

      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.Validator> getValidatorsList() {
        if (validatorsBuilder_ == null) {
          return java.util.Collections.unmodifiableList(validators_);
        } else {
          return validatorsBuilder_.getMessageList();
        }
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public int getValidatorsCount() {
        if (validatorsBuilder_ == null) {
          return validators_.size();
        } else {
          return validatorsBuilder_.getCount();
        }
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.Validator getValidators(int index) {
        if (validatorsBuilder_ == null) {
          return validators_.get(index);
        } else {
          return validatorsBuilder_.getMessage(index);
        }
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public Builder setValidators(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.Validator value) {
        if (validatorsBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensureValidatorsIsMutable();
          validators_.set(index, value);
          onChanged();
        } else {
          validatorsBuilder_.setMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public Builder setValidators(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.Validator.Builder builderForValue) {
        if (validatorsBuilder_ == null) {
          ensureValidatorsIsMutable();
          validators_.set(index, builderForValue.build());
          onChanged();
        } else {
          validatorsBuilder_.setMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public Builder addValidators(io.rexx.sdk.core.extend.protobuf.Consensus.Validator value) {
        if (validatorsBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensureValidatorsIsMutable();
          validators_.add(value);
          onChanged();
        } else {
          validatorsBuilder_.addMessage(value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public Builder addValidators(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.Validator value) {
        if (validatorsBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensureValidatorsIsMutable();
          validators_.add(index, value);
          onChanged();
        } else {
          validatorsBuilder_.addMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public Builder addValidators(
          io.rexx.sdk.core.extend.protobuf.Consensus.Validator.Builder builderForValue) {
        if (validatorsBuilder_ == null) {
          ensureValidatorsIsMutable();
          validators_.add(builderForValue.build());
          onChanged();
        } else {
          validatorsBuilder_.addMessage(builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public Builder addValidators(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.Validator.Builder builderForValue) {
        if (validatorsBuilder_ == null) {
          ensureValidatorsIsMutable();
          validators_.add(index, builderForValue.build());
          onChanged();
        } else {
          validatorsBuilder_.addMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public Builder addAllValidators(
          java.lang.Iterable<? extends io.rexx.sdk.core.extend.protobuf.Consensus.Validator> values) {
        if (validatorsBuilder_ == null) {
          ensureValidatorsIsMutable();
          com.google.protobuf.AbstractMessageLite.Builder.addAll(
              values, validators_);
          onChanged();
        } else {
          validatorsBuilder_.addAllMessages(values);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public Builder clearValidators() {
        if (validatorsBuilder_ == null) {
          validators_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000001);
          onChanged();
        } else {
          validatorsBuilder_.clear();
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public Builder removeValidators(int index) {
        if (validatorsBuilder_ == null) {
          ensureValidatorsIsMutable();
          validators_.remove(index);
          onChanged();
        } else {
          validatorsBuilder_.remove(index);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.Validator.Builder getValidatorsBuilder(
          int index) {
        return getValidatorsFieldBuilder().getBuilder(index);
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorOrBuilder getValidatorsOrBuilder(
          int index) {
        if (validatorsBuilder_ == null) {
          return validators_.get(index);  } else {
          return validatorsBuilder_.getMessageOrBuilder(index);
        }
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorOrBuilder>
           getValidatorsOrBuilderList() {
        if (validatorsBuilder_ != null) {
          return validatorsBuilder_.getMessageOrBuilderList();
        } else {
          return java.util.Collections.unmodifiableList(validators_);
        }
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.Validator.Builder addValidatorsBuilder() {
        return getValidatorsFieldBuilder().addBuilder(
            io.rexx.sdk.core.extend.protobuf.Consensus.Validator.getDefaultInstance());
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.Validator.Builder addValidatorsBuilder(
          int index) {
        return getValidatorsFieldBuilder().addBuilder(
            index, io.rexx.sdk.core.extend.protobuf.Consensus.Validator.getDefaultInstance());
      }
      /**
       * <code>repeated .protocol.Validator validators = 1;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.Validator.Builder>
           getValidatorsBuilderList() {
        return getValidatorsFieldBuilder().getBuilderList();
      }
      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.Validator, io.rexx.sdk.core.extend.protobuf.Consensus.Validator.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorOrBuilder>
          getValidatorsFieldBuilder() {
        if (validatorsBuilder_ == null) {
          validatorsBuilder_ = new com.google.protobuf.RepeatedFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Consensus.Validator, io.rexx.sdk.core.extend.protobuf.Consensus.Validator.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorOrBuilder>(
                  validators_,
                  ((bitField0_ & 0x00000001) == 0x00000001),
                  getParentForChildren(),
                  isClean());
          validators_ = null;
        }
        return validatorsBuilder_;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.ValidatorSet)
    }

    // @@protoc_insertion_point(class_scope:protocol.ValidatorSet)
    private static final io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet();
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<ValidatorSet>
        PARSER = new com.google.protobuf.AbstractParser<ValidatorSet>() {
      public ValidatorSet parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new ValidatorSet(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<ValidatorSet> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<ValidatorSet> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Consensus.ValidatorSet getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface PbftProofOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.PbftProof)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>repeated .protocol.PbftEnv commits = 1;</code>
     */
    java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv>
        getCommitsList();
    /**
     * <code>repeated .protocol.PbftEnv commits = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getCommits(int index);
    /**
     * <code>repeated .protocol.PbftEnv commits = 1;</code>
     */
    int getCommitsCount();
    /**
     * <code>repeated .protocol.PbftEnv commits = 1;</code>
     */
    java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>
        getCommitsOrBuilderList();
    /**
     * <code>repeated .protocol.PbftEnv commits = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getCommitsOrBuilder(
        int index);
  }
  /**
   * Protobuf type {@code protocol.PbftProof}
   */
  public  static final class PbftProof extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.PbftProof)
      PbftProofOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use PbftProof.newBuilder() to construct.
    private PbftProof(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private PbftProof() {
      commits_ = java.util.Collections.emptyList();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private PbftProof(
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
                commits_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv>();
                mutable_bitField0_ |= 0x00000001;
              }
              commits_.add(
                  input.readMessage(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.parser(), extensionRegistry));
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
          commits_ = java.util.Collections.unmodifiableList(commits_);
        }
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftProof_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftProof_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof.Builder.class);
    }

    public static final int COMMITS_FIELD_NUMBER = 1;
    private java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv> commits_;
    /**
     * <code>repeated .protocol.PbftEnv commits = 1;</code>
     */
    public java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv> getCommitsList() {
      return commits_;
    }
    /**
     * <code>repeated .protocol.PbftEnv commits = 1;</code>
     */
    public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>
        getCommitsOrBuilderList() {
      return commits_;
    }
    /**
     * <code>repeated .protocol.PbftEnv commits = 1;</code>
     */
    public int getCommitsCount() {
      return commits_.size();
    }
    /**
     * <code>repeated .protocol.PbftEnv commits = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getCommits(int index) {
      return commits_.get(index);
    }
    /**
     * <code>repeated .protocol.PbftEnv commits = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getCommitsOrBuilder(
        int index) {
      return commits_.get(index);
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
      for (int i = 0; i < commits_.size(); i++) {
        output.writeMessage(1, commits_.get(i));
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      for (int i = 0; i < commits_.size(); i++) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, commits_.get(i));
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof other = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof) obj;

      boolean result = true;
      result = result && getCommitsList()
          .equals(other.getCommitsList());
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
      if (getCommitsCount() > 0) {
        hash = (37 * hash) + COMMITS_FIELD_NUMBER;
        hash = (53 * hash) + getCommitsList().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof prototype) {
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
     * Protobuf type {@code protocol.PbftProof}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.PbftProof)
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftProofOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftProof_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftProof_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof.class, io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof.newBuilder()
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
          getCommitsFieldBuilder();
        }
      }
      public Builder clear() {
        super.clear();
        if (commitsBuilder_ == null) {
          commits_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000001);
        } else {
          commitsBuilder_.clear();
        }
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_PbftProof_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof build() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof result = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof(this);
        int from_bitField0_ = bitField0_;
        if (commitsBuilder_ == null) {
          if (((bitField0_ & 0x00000001) == 0x00000001)) {
            commits_ = java.util.Collections.unmodifiableList(commits_);
            bitField0_ = (bitField0_ & ~0x00000001);
          }
          result.commits_ = commits_;
        } else {
          result.commits_ = commitsBuilder_.build();
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof.getDefaultInstance()) return this;
        if (commitsBuilder_ == null) {
          if (!other.commits_.isEmpty()) {
            if (commits_.isEmpty()) {
              commits_ = other.commits_;
              bitField0_ = (bitField0_ & ~0x00000001);
            } else {
              ensureCommitsIsMutable();
              commits_.addAll(other.commits_);
            }
            onChanged();
          }
        } else {
          if (!other.commits_.isEmpty()) {
            if (commitsBuilder_.isEmpty()) {
              commitsBuilder_.dispose();
              commitsBuilder_ = null;
              commits_ = other.commits_;
              bitField0_ = (bitField0_ & ~0x00000001);
              commitsBuilder_ = 
                com.google.protobuf.GeneratedMessageV3.alwaysUseFieldBuilders ?
                   getCommitsFieldBuilder() : null;
            } else {
              commitsBuilder_.addAllMessages(other.commits_);
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
        io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv> commits_ =
        java.util.Collections.emptyList();
      private void ensureCommitsIsMutable() {
        if (!((bitField0_ & 0x00000001) == 0x00000001)) {
          commits_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv>(commits_);
          bitField0_ |= 0x00000001;
         }
      }

      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder> commitsBuilder_;

      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv> getCommitsList() {
        if (commitsBuilder_ == null) {
          return java.util.Collections.unmodifiableList(commits_);
        } else {
          return commitsBuilder_.getMessageList();
        }
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public int getCommitsCount() {
        if (commitsBuilder_ == null) {
          return commits_.size();
        } else {
          return commitsBuilder_.getCount();
        }
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv getCommits(int index) {
        if (commitsBuilder_ == null) {
          return commits_.get(index);
        } else {
          return commitsBuilder_.getMessage(index);
        }
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public Builder setCommits(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv value) {
        if (commitsBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensureCommitsIsMutable();
          commits_.set(index, value);
          onChanged();
        } else {
          commitsBuilder_.setMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public Builder setCommits(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder builderForValue) {
        if (commitsBuilder_ == null) {
          ensureCommitsIsMutable();
          commits_.set(index, builderForValue.build());
          onChanged();
        } else {
          commitsBuilder_.setMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public Builder addCommits(io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv value) {
        if (commitsBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensureCommitsIsMutable();
          commits_.add(value);
          onChanged();
        } else {
          commitsBuilder_.addMessage(value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public Builder addCommits(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv value) {
        if (commitsBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensureCommitsIsMutable();
          commits_.add(index, value);
          onChanged();
        } else {
          commitsBuilder_.addMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public Builder addCommits(
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder builderForValue) {
        if (commitsBuilder_ == null) {
          ensureCommitsIsMutable();
          commits_.add(builderForValue.build());
          onChanged();
        } else {
          commitsBuilder_.addMessage(builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public Builder addCommits(
          int index, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder builderForValue) {
        if (commitsBuilder_ == null) {
          ensureCommitsIsMutable();
          commits_.add(index, builderForValue.build());
          onChanged();
        } else {
          commitsBuilder_.addMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public Builder addAllCommits(
          java.lang.Iterable<? extends io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv> values) {
        if (commitsBuilder_ == null) {
          ensureCommitsIsMutable();
          com.google.protobuf.AbstractMessageLite.Builder.addAll(
              values, commits_);
          onChanged();
        } else {
          commitsBuilder_.addAllMessages(values);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public Builder clearCommits() {
        if (commitsBuilder_ == null) {
          commits_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000001);
          onChanged();
        } else {
          commitsBuilder_.clear();
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public Builder removeCommits(int index) {
        if (commitsBuilder_ == null) {
          ensureCommitsIsMutable();
          commits_.remove(index);
          onChanged();
        } else {
          commitsBuilder_.remove(index);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder getCommitsBuilder(
          int index) {
        return getCommitsFieldBuilder().getBuilder(index);
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder getCommitsOrBuilder(
          int index) {
        if (commitsBuilder_ == null) {
          return commits_.get(index);  } else {
          return commitsBuilder_.getMessageOrBuilder(index);
        }
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>
           getCommitsOrBuilderList() {
        if (commitsBuilder_ != null) {
          return commitsBuilder_.getMessageOrBuilderList();
        } else {
          return java.util.Collections.unmodifiableList(commits_);
        }
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder addCommitsBuilder() {
        return getCommitsFieldBuilder().addBuilder(
            io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance());
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder addCommitsBuilder(
          int index) {
        return getCommitsFieldBuilder().addBuilder(
            index, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.getDefaultInstance());
      }
      /**
       * <code>repeated .protocol.PbftEnv commits = 1;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder>
           getCommitsBuilderList() {
        return getCommitsFieldBuilder().getBuilderList();
      }
      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>
          getCommitsFieldBuilder() {
        if (commitsBuilder_ == null) {
          commitsBuilder_ = new com.google.protobuf.RepeatedFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnv.Builder, io.rexx.sdk.core.extend.protobuf.Consensus.PbftEnvOrBuilder>(
                  commits_,
                  ((bitField0_ & 0x00000001) == 0x00000001),
                  getParentForChildren(),
                  isClean());
          commits_ = null;
        }
        return commitsBuilder_;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.PbftProof)
    }

    // @@protoc_insertion_point(class_scope:protocol.PbftProof)
    private static final io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof();
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<PbftProof>
        PARSER = new com.google.protobuf.AbstractParser<PbftProof>() {
      public PbftProof parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new PbftProof(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<PbftProof> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<PbftProof> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Consensus.PbftProof getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface FeeConfigOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.FeeConfig)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int64 gas_price = 1;</code>
     */
    long getGasPrice();

    /**
     * <code>int64 base_reserve = 2;</code>
     */
    long getBaseReserve();
  }
  /**
   * Protobuf type {@code protocol.FeeConfig}
   */
  public  static final class FeeConfig extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.FeeConfig)
      FeeConfigOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use FeeConfig.newBuilder() to construct.
    private FeeConfig(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private FeeConfig() {
      gasPrice_ = 0L;
      baseReserve_ = 0L;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private FeeConfig(
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

              gasPrice_ = input.readInt64();
              break;
            }
            case 16: {

              baseReserve_ = input.readInt64();
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
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_FeeConfig_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_FeeConfig_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig.class, io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig.Builder.class);
    }

    /**
     * Protobuf enum {@code protocol.FeeConfig.Type}
     */
    public enum Type
        implements com.google.protobuf.ProtocolMessageEnum {
      /**
       * <code>UNKNOWN = 0;</code>
       */
      UNKNOWN(0),
      /**
       * <code>GAS_PRICE = 1;</code>
       */
      GAS_PRICE(1),
      /**
       * <code>BASE_RESERVE = 2;</code>
       */
      BASE_RESERVE(2),
      UNRECOGNIZED(-1),
      ;

      /**
       * <code>UNKNOWN = 0;</code>
       */
      public static final int UNKNOWN_VALUE = 0;
      /**
       * <code>GAS_PRICE = 1;</code>
       */
      public static final int GAS_PRICE_VALUE = 1;
      /**
       * <code>BASE_RESERVE = 2;</code>
       */
      public static final int BASE_RESERVE_VALUE = 2;


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
      public static Type valueOf(int value) {
        return forNumber(value);
      }

      public static Type forNumber(int value) {
        switch (value) {
          case 0: return UNKNOWN;
          case 1: return GAS_PRICE;
          case 2: return BASE_RESERVE;
          default: return null;
        }
      }

      public static com.google.protobuf.Internal.EnumLiteMap<Type>
          internalGetValueMap() {
        return internalValueMap;
      }
      private static final com.google.protobuf.Internal.EnumLiteMap<
          Type> internalValueMap =
            new com.google.protobuf.Internal.EnumLiteMap<Type>() {
              public Type findValueByNumber(int number) {
                return Type.forNumber(number);
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
        return io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig.getDescriptor().getEnumTypes().get(0);
      }

      private static final Type[] VALUES = values();

      public static Type valueOf(
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

      private Type(int value) {
        this.value = value;
      }

      // @@protoc_insertion_point(enum_scope:protocol.FeeConfig.Type)
    }

    public static final int GAS_PRICE_FIELD_NUMBER = 1;
    private long gasPrice_;
    /**
     * <code>int64 gas_price = 1;</code>
     */
    public long getGasPrice() {
      return gasPrice_;
    }

    public static final int BASE_RESERVE_FIELD_NUMBER = 2;
    private long baseReserve_;
    /**
     * <code>int64 base_reserve = 2;</code>
     */
    public long getBaseReserve() {
      return baseReserve_;
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
      if (gasPrice_ != 0L) {
        output.writeInt64(1, gasPrice_);
      }
      if (baseReserve_ != 0L) {
        output.writeInt64(2, baseReserve_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (gasPrice_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, gasPrice_);
      }
      if (baseReserve_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(2, baseReserve_);
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig other = (io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig) obj;

      boolean result = true;
      result = result && (getGasPrice()
          == other.getGasPrice());
      result = result && (getBaseReserve()
          == other.getBaseReserve());
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
      hash = (37 * hash) + GAS_PRICE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getGasPrice());
      hash = (37 * hash) + BASE_RESERVE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getBaseReserve());
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig prototype) {
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
     * Protobuf type {@code protocol.FeeConfig}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.FeeConfig)
        io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfigOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_FeeConfig_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_FeeConfig_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig.class, io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig.newBuilder()
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
        gasPrice_ = 0L;

        baseReserve_ = 0L;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.internal_static_protocol_FeeConfig_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig build() {
        io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig result = new io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig(this);
        result.gasPrice_ = gasPrice_;
        result.baseReserve_ = baseReserve_;
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig.getDefaultInstance()) return this;
        if (other.getGasPrice() != 0L) {
          setGasPrice(other.getGasPrice());
        }
        if (other.getBaseReserve() != 0L) {
          setBaseReserve(other.getBaseReserve());
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
        io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private long gasPrice_ ;
      /**
       * <code>int64 gas_price = 1;</code>
       */
      public long getGasPrice() {
        return gasPrice_;
      }
      /**
       * <code>int64 gas_price = 1;</code>
       */
      public Builder setGasPrice(long value) {
        
        gasPrice_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 gas_price = 1;</code>
       */
      public Builder clearGasPrice() {
        
        gasPrice_ = 0L;
        onChanged();
        return this;
      }

      private long baseReserve_ ;
      /**
       * <code>int64 base_reserve = 2;</code>
       */
      public long getBaseReserve() {
        return baseReserve_;
      }
      /**
       * <code>int64 base_reserve = 2;</code>
       */
      public Builder setBaseReserve(long value) {
        
        baseReserve_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 base_reserve = 2;</code>
       */
      public Builder clearBaseReserve() {
        
        baseReserve_ = 0L;
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


      // @@protoc_insertion_point(builder_scope:protocol.FeeConfig)
    }

    // @@protoc_insertion_point(class_scope:protocol.FeeConfig)
    private static final io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig();
    }

    public static io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<FeeConfig>
        PARSER = new com.google.protobuf.AbstractParser<FeeConfig>() {
      public FeeConfig parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new FeeConfig(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<FeeConfig> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<FeeConfig> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Consensus.FeeConfig getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_PbftPrePrepare_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_PbftPrePrepare_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_PbftPrepare_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_PbftPrepare_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_PbftCommit_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_PbftCommit_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_PbftPreparedSet_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_PbftPreparedSet_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_PbftViewChange_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_PbftViewChange_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_PbftViewChangeWithRawValue_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_PbftViewChangeWithRawValue_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_PbftNewView_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_PbftNewView_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_Pbft_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_Pbft_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_PbftEnv_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_PbftEnv_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_Validator_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_Validator_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_ValidatorSet_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_ValidatorSet_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_PbftProof_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_PbftProof_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_FeeConfig_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_FeeConfig_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\017consensus.proto\022\010protocol\032\014common.prot" +
      "o\"p\n\016PbftPrePrepare\022\023\n\013view_number\030\001 \001(\003" +
      "\022\020\n\010sequence\030\002 \001(\003\022\022\n\nreplica_id\030\003 \001(\003\022\r" +
      "\n\005value\030\004 \001(\014\022\024\n\014value_digest\030\005 \001(\014\"^\n\013P" +
      "bftPrepare\022\023\n\013view_number\030\001 \001(\003\022\020\n\010seque" +
      "nce\030\002 \001(\003\022\022\n\nreplica_id\030\003 \001(\003\022\024\n\014value_d" +
      "igest\030\004 \001(\014\"]\n\nPbftCommit\022\023\n\013view_number" +
      "\030\001 \001(\003\022\020\n\010sequence\030\002 \001(\003\022\022\n\nreplica_id\030\003" +
      " \001(\003\022\024\n\014value_digest\030\004 \001(\014\"]\n\017PbftPrepar" +
      "edSet\022&\n\013pre_prepare\030\001 \001(\0132\021.protocol.Pb" +
      "ftEnv\022\"\n\007prepare\030\002 \003(\0132\021.protocol.PbftEn" +
      "v\"i\n\016PbftViewChange\022\023\n\013view_number\030\001 \001(\003" +
      "\022\020\n\010sequence\030\002 \001(\003\022\034\n\024prepred_value_dige" +
      "st\030\003 \001(\014\022\022\n\nreplica_id\030\004 \001(\003\"y\n\032PbftView" +
      "ChangeWithRawValue\022*\n\017view_change_env\030\001 " +
      "\001(\0132\021.protocol.PbftEnv\022/\n\014prepared_set\030\002" +
      " \001(\0132\031.protocol.PbftPreparedSet\"\231\001\n\013Pbft" +
      "NewView\022\023\n\013view_number\030\001 \001(\003\022\020\n\010sequence" +
      "\030\002 \001(\003\022\022\n\nreplica_id\030\003 \001(\003\022\'\n\014view_chang" +
      "es\030\004 \003(\0132\021.protocol.PbftEnv\022&\n\013pre_prepa" +
      "re\030\005 \001(\0132\021.protocol.PbftEnv\"\343\002\n\004Pbft\022\024\n\014" +
      "round_number\030\001 \001(\003\022\'\n\004type\030\002 \001(\0162\031.proto" +
      "col.PbftMessageType\022-\n\013pre_prepare\030\003 \001(\013" +
      "2\030.protocol.PbftPrePrepare\022&\n\007prepare\030\004 " +
      "\001(\0132\025.protocol.PbftPrepare\022$\n\006commit\030\005 \001" +
      "(\0132\024.protocol.PbftCommit\022-\n\013view_change\030" +
      "\006 \001(\0132\030.protocol.PbftViewChange\022\'\n\010new_v" +
      "iew\030\007 \001(\0132\025.protocol.PbftNewView\022G\n\031view" +
      "_change_with_rawvalue\030\010 \001(\0132$.protocol.P" +
      "bftViewChangeWithRawValue\"O\n\007PbftEnv\022\034\n\004" +
      "pbft\030\001 \001(\0132\016.protocol.Pbft\022&\n\tsignature\030" +
      "\002 \001(\0132\023.protocol.Signature\"8\n\tValidator\022" +
      "\017\n\007address\030\001 \001(\t\022\032\n\022pledge_coin_amount\030\002" +
      " \001(\003\"7\n\014ValidatorSet\022\'\n\nvalidators\030\001 \003(\013" +
      "2\023.protocol.Validator\"/\n\tPbftProof\022\"\n\007co" +
      "mmits\030\001 \003(\0132\021.protocol.PbftEnv\"j\n\tFeeCon" +
      "fig\022\021\n\tgas_price\030\001 \001(\003\022\024\n\014base_reserve\030\002" +
      " \001(\003\"4\n\004Type\022\013\n\007UNKNOWN\020\000\022\r\n\tGAS_PRICE\020\001" +
      "\022\020\n\014BASE_RESERVE\020\002*\260\001\n\017PbftMessageType\022\030" +
      "\n\024PBFT_TYPE_PREPREPARE\020\000\022\025\n\021PBFT_TYPE_PR" +
      "EPARE\020\001\022\024\n\020PBFT_TYPE_COMMIT\020\002\022\030\n\024PBFT_TY" +
      "PE_VIEWCHANGE\020\003\022\025\n\021PBFT_TYPE_NEWVIEW\020\004\022%" +
      "\n!PBFT_TYPE_VIEWCHANG_WITH_RAWVALUE\020\005*8\n" +
      "\rPbftValueType\022\021\n\rPBFT_VALUE_TX\020\000\022\024\n\020PBF" +
      "T_VALUE_TXSET\020\001B\"\n io.rexx.sdk.core.exte" +
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
        }, assigner);
    internal_static_protocol_PbftPrePrepare_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_protocol_PbftPrePrepare_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_PbftPrePrepare_descriptor,
        new java.lang.String[] { "ViewNumber", "Sequence", "ReplicaId", "Value", "ValueDigest", });
    internal_static_protocol_PbftPrepare_descriptor =
      getDescriptor().getMessageTypes().get(1);
    internal_static_protocol_PbftPrepare_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_PbftPrepare_descriptor,
        new java.lang.String[] { "ViewNumber", "Sequence", "ReplicaId", "ValueDigest", });
    internal_static_protocol_PbftCommit_descriptor =
      getDescriptor().getMessageTypes().get(2);
    internal_static_protocol_PbftCommit_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_PbftCommit_descriptor,
        new java.lang.String[] { "ViewNumber", "Sequence", "ReplicaId", "ValueDigest", });
    internal_static_protocol_PbftPreparedSet_descriptor =
      getDescriptor().getMessageTypes().get(3);
    internal_static_protocol_PbftPreparedSet_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_PbftPreparedSet_descriptor,
        new java.lang.String[] { "PrePrepare", "Prepare", });
    internal_static_protocol_PbftViewChange_descriptor =
      getDescriptor().getMessageTypes().get(4);
    internal_static_protocol_PbftViewChange_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_PbftViewChange_descriptor,
        new java.lang.String[] { "ViewNumber", "Sequence", "PrepredValueDigest", "ReplicaId", });
    internal_static_protocol_PbftViewChangeWithRawValue_descriptor =
      getDescriptor().getMessageTypes().get(5);
    internal_static_protocol_PbftViewChangeWithRawValue_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_PbftViewChangeWithRawValue_descriptor,
        new java.lang.String[] { "ViewChangeEnv", "PreparedSet", });
    internal_static_protocol_PbftNewView_descriptor =
      getDescriptor().getMessageTypes().get(6);
    internal_static_protocol_PbftNewView_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_PbftNewView_descriptor,
        new java.lang.String[] { "ViewNumber", "Sequence", "ReplicaId", "ViewChanges", "PrePrepare", });
    internal_static_protocol_Pbft_descriptor =
      getDescriptor().getMessageTypes().get(7);
    internal_static_protocol_Pbft_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_Pbft_descriptor,
        new java.lang.String[] { "RoundNumber", "Type", "PrePrepare", "Prepare", "Commit", "ViewChange", "NewView", "ViewChangeWithRawvalue", });
    internal_static_protocol_PbftEnv_descriptor =
      getDescriptor().getMessageTypes().get(8);
    internal_static_protocol_PbftEnv_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_PbftEnv_descriptor,
        new java.lang.String[] { "Pbft", "Signature", });
    internal_static_protocol_Validator_descriptor =
      getDescriptor().getMessageTypes().get(9);
    internal_static_protocol_Validator_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_Validator_descriptor,
        new java.lang.String[] { "Address", "PledgeCoinAmount", });
    internal_static_protocol_ValidatorSet_descriptor =
      getDescriptor().getMessageTypes().get(10);
    internal_static_protocol_ValidatorSet_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_ValidatorSet_descriptor,
        new java.lang.String[] { "Validators", });
    internal_static_protocol_PbftProof_descriptor =
      getDescriptor().getMessageTypes().get(11);
    internal_static_protocol_PbftProof_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_PbftProof_descriptor,
        new java.lang.String[] { "Commits", });
    internal_static_protocol_FeeConfig_descriptor =
      getDescriptor().getMessageTypes().get(12);
    internal_static_protocol_FeeConfig_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_FeeConfig_descriptor,
        new java.lang.String[] { "GasPrice", "BaseReserve", });
    io.rexx.sdk.core.extend.protobuf.Common.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}
