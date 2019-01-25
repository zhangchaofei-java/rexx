

package io.rexx.sdk.core.extend.protobuf;

public final class Merkeltrie {
  private Merkeltrie() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  /**
   * Protobuf enum {@code protocol.CHILDTYPE}
   */
  public enum CHILDTYPE
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>NONE = 0;</code>
     */
    NONE(0),
    /**
     * <code>INNER = 1;</code>
     */
    INNER(1),
    /**
     * <code>LEAF = 2;</code>
     */
    LEAF(2),
    UNRECOGNIZED(-1),
    ;

    /**
     * <code>NONE = 0;</code>
     */
    public static final int NONE_VALUE = 0;
    /**
     * <code>INNER = 1;</code>
     */
    public static final int INNER_VALUE = 1;
    /**
     * <code>LEAF = 2;</code>
     */
    public static final int LEAF_VALUE = 2;


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
    public static CHILDTYPE valueOf(int value) {
      return forNumber(value);
    }

    public static CHILDTYPE forNumber(int value) {
      switch (value) {
        case 0: return NONE;
        case 1: return INNER;
        case 2: return LEAF;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<CHILDTYPE>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static final com.google.protobuf.Internal.EnumLiteMap<
        CHILDTYPE> internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<CHILDTYPE>() {
            public CHILDTYPE findValueByNumber(int number) {
              return CHILDTYPE.forNumber(number);
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
      return io.rexx.sdk.core.extend.protobuf.Merkeltrie.getDescriptor().getEnumTypes().get(0);
    }

    private static final CHILDTYPE[] VALUES = values();

    public static CHILDTYPE valueOf(
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

    private CHILDTYPE(int value) {
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:protocol.CHILDTYPE)
  }

  public interface ChildOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.Child)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>bytes sublocation = 1;</code>
     */
    com.google.protobuf.ByteString getSublocation();

    /**
     * <code>bytes hash = 2;</code>
     */
    com.google.protobuf.ByteString getHash();

    /**
     * <pre>
     *int64 count = 4;
     * </pre>
     *
     * <code>.protocol.CHILDTYPE childtype = 3;</code>
     */
    int getChildtypeValue();
    /**
     * <pre>
     *int64 count = 4;
     * </pre>
     *
     * <code>.protocol.CHILDTYPE childtype = 3;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Merkeltrie.CHILDTYPE getChildtype();
  }
  /**
   * Protobuf type {@code protocol.Child}
   */
  public  static final class Child extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.Child)
      ChildOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Child.newBuilder() to construct.
    private Child(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Child() {
      sublocation_ = com.google.protobuf.ByteString.EMPTY;
      hash_ = com.google.protobuf.ByteString.EMPTY;
      childtype_ = 0;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Child(
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

              sublocation_ = input.readBytes();
              break;
            }
            case 18: {

              hash_ = input.readBytes();
              break;
            }
            case 24: {
              int rawValue = input.readEnum();

              childtype_ = rawValue;
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
      return io.rexx.sdk.core.extend.protobuf.Merkeltrie.internal_static_protocol_Child_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Merkeltrie.internal_static_protocol_Child_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.class, io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.Builder.class);
    }

    public static final int SUBLOCATION_FIELD_NUMBER = 1;
    private com.google.protobuf.ByteString sublocation_;
    /**
     * <code>bytes sublocation = 1;</code>
     */
    public com.google.protobuf.ByteString getSublocation() {
      return sublocation_;
    }

    public static final int HASH_FIELD_NUMBER = 2;
    private com.google.protobuf.ByteString hash_;
    /**
     * <code>bytes hash = 2;</code>
     */
    public com.google.protobuf.ByteString getHash() {
      return hash_;
    }

    public static final int CHILDTYPE_FIELD_NUMBER = 3;
    private int childtype_;
    /**
     * <pre>
     *int64 count = 4;
     * </pre>
     *
     * <code>.protocol.CHILDTYPE childtype = 3;</code>
     */
    public int getChildtypeValue() {
      return childtype_;
    }
    /**
     * <pre>
     *int64 count = 4;
     * </pre>
     *
     * <code>.protocol.CHILDTYPE childtype = 3;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Merkeltrie.CHILDTYPE getChildtype() {
      io.rexx.sdk.core.extend.protobuf.Merkeltrie.CHILDTYPE result = io.rexx.sdk.core.extend.protobuf.Merkeltrie.CHILDTYPE.valueOf(childtype_);
      return result == null ? io.rexx.sdk.core.extend.protobuf.Merkeltrie.CHILDTYPE.UNRECOGNIZED : result;
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
      if (!sublocation_.isEmpty()) {
        output.writeBytes(1, sublocation_);
      }
      if (!hash_.isEmpty()) {
        output.writeBytes(2, hash_);
      }
      if (childtype_ != io.rexx.sdk.core.extend.protobuf.Merkeltrie.CHILDTYPE.NONE.getNumber()) {
        output.writeEnum(3, childtype_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!sublocation_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(1, sublocation_);
      }
      if (!hash_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(2, hash_);
      }
      if (childtype_ != io.rexx.sdk.core.extend.protobuf.Merkeltrie.CHILDTYPE.NONE.getNumber()) {
        size += com.google.protobuf.CodedOutputStream
          .computeEnumSize(3, childtype_);
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child other = (io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child) obj;

      boolean result = true;
      result = result && getSublocation()
          .equals(other.getSublocation());
      result = result && getHash()
          .equals(other.getHash());
      result = result && childtype_ == other.childtype_;
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
      hash = (37 * hash) + SUBLOCATION_FIELD_NUMBER;
      hash = (53 * hash) + getSublocation().hashCode();
      hash = (37 * hash) + HASH_FIELD_NUMBER;
      hash = (53 * hash) + getHash().hashCode();
      hash = (37 * hash) + CHILDTYPE_FIELD_NUMBER;
      hash = (53 * hash) + childtype_;
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child prototype) {
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
     * Protobuf type {@code protocol.Child}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.Child)
        io.rexx.sdk.core.extend.protobuf.Merkeltrie.ChildOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Merkeltrie.internal_static_protocol_Child_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Merkeltrie.internal_static_protocol_Child_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.class, io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.newBuilder()
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
        sublocation_ = com.google.protobuf.ByteString.EMPTY;

        hash_ = com.google.protobuf.ByteString.EMPTY;

        childtype_ = 0;

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Merkeltrie.internal_static_protocol_Child_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child build() {
        io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child result = new io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child(this);
        result.sublocation_ = sublocation_;
        result.hash_ = hash_;
        result.childtype_ = childtype_;
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.getDefaultInstance()) return this;
        if (other.getSublocation() != com.google.protobuf.ByteString.EMPTY) {
          setSublocation(other.getSublocation());
        }
        if (other.getHash() != com.google.protobuf.ByteString.EMPTY) {
          setHash(other.getHash());
        }
        if (other.childtype_ != 0) {
          setChildtypeValue(other.getChildtypeValue());
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
        io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private com.google.protobuf.ByteString sublocation_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>bytes sublocation = 1;</code>
       */
      public com.google.protobuf.ByteString getSublocation() {
        return sublocation_;
      }
      /**
       * <code>bytes sublocation = 1;</code>
       */
      public Builder setSublocation(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        sublocation_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>bytes sublocation = 1;</code>
       */
      public Builder clearSublocation() {
        
        sublocation_ = getDefaultInstance().getSublocation();
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

      private int childtype_ = 0;
      /**
       * <pre>
       *int64 count = 4;
       * </pre>
       *
       * <code>.protocol.CHILDTYPE childtype = 3;</code>
       */
      public int getChildtypeValue() {
        return childtype_;
      }
      /**
       * <pre>
       *int64 count = 4;
       * </pre>
       *
       * <code>.protocol.CHILDTYPE childtype = 3;</code>
       */
      public Builder setChildtypeValue(int value) {
        childtype_ = value;
        onChanged();
        return this;
      }
      /**
       * <pre>
       *int64 count = 4;
       * </pre>
       *
       * <code>.protocol.CHILDTYPE childtype = 3;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Merkeltrie.CHILDTYPE getChildtype() {
        io.rexx.sdk.core.extend.protobuf.Merkeltrie.CHILDTYPE result = io.rexx.sdk.core.extend.protobuf.Merkeltrie.CHILDTYPE.valueOf(childtype_);
        return result == null ? io.rexx.sdk.core.extend.protobuf.Merkeltrie.CHILDTYPE.UNRECOGNIZED : result;
      }
      /**
       * <pre>
       *int64 count = 4;
       * </pre>
       *
       * <code>.protocol.CHILDTYPE childtype = 3;</code>
       */
      public Builder setChildtype(io.rexx.sdk.core.extend.protobuf.Merkeltrie.CHILDTYPE value) {
        if (value == null) {
          throw new NullPointerException();
        }
        
        childtype_ = value.getNumber();
        onChanged();
        return this;
      }
      /**
       * <pre>
       *int64 count = 4;
       * </pre>
       *
       * <code>.protocol.CHILDTYPE childtype = 3;</code>
       */
      public Builder clearChildtype() {
        
        childtype_ = 0;
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


      // @@protoc_insertion_point(builder_scope:protocol.Child)
    }

    // @@protoc_insertion_point(class_scope:protocol.Child)
    private static final io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child();
    }

    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Child>
        PARSER = new com.google.protobuf.AbstractParser<Child>() {
      public Child parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Child(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Child> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Child> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  public interface NodeOrBuilder extends
      // @@protoc_insertion_point(interface_extends:protocol.Node)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>repeated .protocol.Child children = 1;</code>
     */
    java.util.List<io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child>
        getChildrenList();
    /**
     * <code>repeated .protocol.Child children = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child getChildren(int index);
    /**
     * <code>repeated .protocol.Child children = 1;</code>
     */
    int getChildrenCount();
    /**
     * <code>repeated .protocol.Child children = 1;</code>
     */
    java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Merkeltrie.ChildOrBuilder>
        getChildrenOrBuilderList();
    /**
     * <code>repeated .protocol.Child children = 1;</code>
     */
    io.rexx.sdk.core.extend.protobuf.Merkeltrie.ChildOrBuilder getChildrenOrBuilder(
        int index);
  }
  /**
   * Protobuf type {@code protocol.Node}
   */
  public  static final class Node extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:protocol.Node)
      NodeOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Node.newBuilder() to construct.
    private Node(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Node() {
      children_ = java.util.Collections.emptyList();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Node(
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
                children_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child>();
                mutable_bitField0_ |= 0x00000001;
              }
              children_.add(
                  input.readMessage(io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.parser(), extensionRegistry));
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
          children_ = java.util.Collections.unmodifiableList(children_);
        }
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return io.rexx.sdk.core.extend.protobuf.Merkeltrie.internal_static_protocol_Node_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return io.rexx.sdk.core.extend.protobuf.Merkeltrie.internal_static_protocol_Node_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node.class, io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node.Builder.class);
    }

    public static final int CHILDREN_FIELD_NUMBER = 1;
    private java.util.List<io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child> children_;
    /**
     * <code>repeated .protocol.Child children = 1;</code>
     */
    public java.util.List<io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child> getChildrenList() {
      return children_;
    }
    /**
     * <code>repeated .protocol.Child children = 1;</code>
     */
    public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Merkeltrie.ChildOrBuilder>
        getChildrenOrBuilderList() {
      return children_;
    }
    /**
     * <code>repeated .protocol.Child children = 1;</code>
     */
    public int getChildrenCount() {
      return children_.size();
    }
    /**
     * <code>repeated .protocol.Child children = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child getChildren(int index) {
      return children_.get(index);
    }
    /**
     * <code>repeated .protocol.Child children = 1;</code>
     */
    public io.rexx.sdk.core.extend.protobuf.Merkeltrie.ChildOrBuilder getChildrenOrBuilder(
        int index) {
      return children_.get(index);
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
      for (int i = 0; i < children_.size(); i++) {
        output.writeMessage(1, children_.get(i));
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      for (int i = 0; i < children_.size(); i++) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, children_.get(i));
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
      if (!(obj instanceof io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node)) {
        return super.equals(obj);
      }
      io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node other = (io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node) obj;

      boolean result = true;
      result = result && getChildrenList()
          .equals(other.getChildrenList());
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
      if (getChildrenCount() > 0) {
        hash = (37 * hash) + CHILDREN_FIELD_NUMBER;
        hash = (53 * hash) + getChildrenList().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node parseFrom(
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
    public static Builder newBuilder(io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node prototype) {
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
     * Protobuf type {@code protocol.Node}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:protocol.Node)
        io.rexx.sdk.core.extend.protobuf.Merkeltrie.NodeOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return io.rexx.sdk.core.extend.protobuf.Merkeltrie.internal_static_protocol_Node_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return io.rexx.sdk.core.extend.protobuf.Merkeltrie.internal_static_protocol_Node_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node.class, io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node.Builder.class);
      }

      // Construct using io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node.newBuilder()
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
          getChildrenFieldBuilder();
        }
      }
      public Builder clear() {
        super.clear();
        if (childrenBuilder_ == null) {
          children_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000001);
        } else {
          childrenBuilder_.clear();
        }
        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return io.rexx.sdk.core.extend.protobuf.Merkeltrie.internal_static_protocol_Node_descriptor;
      }

      public io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node getDefaultInstanceForType() {
        return io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node.getDefaultInstance();
      }

      public io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node build() {
        io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node buildPartial() {
        io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node result = new io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node(this);
        int from_bitField0_ = bitField0_;
        if (childrenBuilder_ == null) {
          if (((bitField0_ & 0x00000001) == 0x00000001)) {
            children_ = java.util.Collections.unmodifiableList(children_);
            bitField0_ = (bitField0_ & ~0x00000001);
          }
          result.children_ = children_;
        } else {
          result.children_ = childrenBuilder_.build();
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
        if (other instanceof io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node) {
          return mergeFrom((io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node other) {
        if (other == io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node.getDefaultInstance()) return this;
        if (childrenBuilder_ == null) {
          if (!other.children_.isEmpty()) {
            if (children_.isEmpty()) {
              children_ = other.children_;
              bitField0_ = (bitField0_ & ~0x00000001);
            } else {
              ensureChildrenIsMutable();
              children_.addAll(other.children_);
            }
            onChanged();
          }
        } else {
          if (!other.children_.isEmpty()) {
            if (childrenBuilder_.isEmpty()) {
              childrenBuilder_.dispose();
              childrenBuilder_ = null;
              children_ = other.children_;
              bitField0_ = (bitField0_ & ~0x00000001);
              childrenBuilder_ = 
                com.google.protobuf.GeneratedMessageV3.alwaysUseFieldBuilders ?
                   getChildrenFieldBuilder() : null;
            } else {
              childrenBuilder_.addAllMessages(other.children_);
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
        io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private java.util.List<io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child> children_ =
        java.util.Collections.emptyList();
      private void ensureChildrenIsMutable() {
        if (!((bitField0_ & 0x00000001) == 0x00000001)) {
          children_ = new java.util.ArrayList<io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child>(children_);
          bitField0_ |= 0x00000001;
         }
      }

      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child, io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.Builder, io.rexx.sdk.core.extend.protobuf.Merkeltrie.ChildOrBuilder> childrenBuilder_;

      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child> getChildrenList() {
        if (childrenBuilder_ == null) {
          return java.util.Collections.unmodifiableList(children_);
        } else {
          return childrenBuilder_.getMessageList();
        }
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public int getChildrenCount() {
        if (childrenBuilder_ == null) {
          return children_.size();
        } else {
          return childrenBuilder_.getCount();
        }
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child getChildren(int index) {
        if (childrenBuilder_ == null) {
          return children_.get(index);
        } else {
          return childrenBuilder_.getMessage(index);
        }
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public Builder setChildren(
          int index, io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child value) {
        if (childrenBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensureChildrenIsMutable();
          children_.set(index, value);
          onChanged();
        } else {
          childrenBuilder_.setMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public Builder setChildren(
          int index, io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.Builder builderForValue) {
        if (childrenBuilder_ == null) {
          ensureChildrenIsMutable();
          children_.set(index, builderForValue.build());
          onChanged();
        } else {
          childrenBuilder_.setMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public Builder addChildren(io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child value) {
        if (childrenBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensureChildrenIsMutable();
          children_.add(value);
          onChanged();
        } else {
          childrenBuilder_.addMessage(value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public Builder addChildren(
          int index, io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child value) {
        if (childrenBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          ensureChildrenIsMutable();
          children_.add(index, value);
          onChanged();
        } else {
          childrenBuilder_.addMessage(index, value);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public Builder addChildren(
          io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.Builder builderForValue) {
        if (childrenBuilder_ == null) {
          ensureChildrenIsMutable();
          children_.add(builderForValue.build());
          onChanged();
        } else {
          childrenBuilder_.addMessage(builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public Builder addChildren(
          int index, io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.Builder builderForValue) {
        if (childrenBuilder_ == null) {
          ensureChildrenIsMutable();
          children_.add(index, builderForValue.build());
          onChanged();
        } else {
          childrenBuilder_.addMessage(index, builderForValue.build());
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public Builder addAllChildren(
          java.lang.Iterable<? extends io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child> values) {
        if (childrenBuilder_ == null) {
          ensureChildrenIsMutable();
          com.google.protobuf.AbstractMessageLite.Builder.addAll(
              values, children_);
          onChanged();
        } else {
          childrenBuilder_.addAllMessages(values);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public Builder clearChildren() {
        if (childrenBuilder_ == null) {
          children_ = java.util.Collections.emptyList();
          bitField0_ = (bitField0_ & ~0x00000001);
          onChanged();
        } else {
          childrenBuilder_.clear();
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public Builder removeChildren(int index) {
        if (childrenBuilder_ == null) {
          ensureChildrenIsMutable();
          children_.remove(index);
          onChanged();
        } else {
          childrenBuilder_.remove(index);
        }
        return this;
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.Builder getChildrenBuilder(
          int index) {
        return getChildrenFieldBuilder().getBuilder(index);
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Merkeltrie.ChildOrBuilder getChildrenOrBuilder(
          int index) {
        if (childrenBuilder_ == null) {
          return children_.get(index);  } else {
          return childrenBuilder_.getMessageOrBuilder(index);
        }
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public java.util.List<? extends io.rexx.sdk.core.extend.protobuf.Merkeltrie.ChildOrBuilder>
           getChildrenOrBuilderList() {
        if (childrenBuilder_ != null) {
          return childrenBuilder_.getMessageOrBuilderList();
        } else {
          return java.util.Collections.unmodifiableList(children_);
        }
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.Builder addChildrenBuilder() {
        return getChildrenFieldBuilder().addBuilder(
            io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.getDefaultInstance());
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.Builder addChildrenBuilder(
          int index) {
        return getChildrenFieldBuilder().addBuilder(
            index, io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.getDefaultInstance());
      }
      /**
       * <code>repeated .protocol.Child children = 1;</code>
       */
      public java.util.List<io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.Builder>
           getChildrenBuilderList() {
        return getChildrenFieldBuilder().getBuilderList();
      }
      private com.google.protobuf.RepeatedFieldBuilderV3<
          io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child, io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.Builder, io.rexx.sdk.core.extend.protobuf.Merkeltrie.ChildOrBuilder>
          getChildrenFieldBuilder() {
        if (childrenBuilder_ == null) {
          childrenBuilder_ = new com.google.protobuf.RepeatedFieldBuilderV3<
              io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child, io.rexx.sdk.core.extend.protobuf.Merkeltrie.Child.Builder, io.rexx.sdk.core.extend.protobuf.Merkeltrie.ChildOrBuilder>(
                  children_,
                  ((bitField0_ & 0x00000001) == 0x00000001),
                  getParentForChildren(),
                  isClean());
          children_ = null;
        }
        return childrenBuilder_;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:protocol.Node)
    }

    // @@protoc_insertion_point(class_scope:protocol.Node)
    private static final io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node();
    }

    public static io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Node>
        PARSER = new com.google.protobuf.AbstractParser<Node>() {
      public Node parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Node(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Node> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Node> getParserForType() {
      return PARSER;
    }

    public io.rexx.sdk.core.extend.protobuf.Merkeltrie.Node getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_Child_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_Child_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_protocol_Node_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_protocol_Node_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\020merkeltrie.proto\022\010protocol\"R\n\005Child\022\023\n" +
      "\013sublocation\030\001 \001(\014\022\014\n\004hash\030\002 \001(\014\022&\n\tchil" +
      "dtype\030\003 \001(\0162\023.protocol.CHILDTYPE\")\n\004Node" +
      "\022!\n\010children\030\001 \003(\0132\017.protocol.Child**\n\tC" +
      "HILDTYPE\022\010\n\004NONE\020\000\022\t\n\005INNER\020\001\022\010\n\004LEAF\020\002B" +
      "\"\n io.rexx.sdk.core.extend.protobufb\006pro" +
      "to3"
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
    internal_static_protocol_Child_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_protocol_Child_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_Child_descriptor,
        new java.lang.String[] { "Sublocation", "Hash", "Childtype", });
    internal_static_protocol_Node_descriptor =
      getDescriptor().getMessageTypes().get(1);
    internal_static_protocol_Node_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_protocol_Node_descriptor,
        new java.lang.String[] { "Children", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
