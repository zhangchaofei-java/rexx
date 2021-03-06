
#include <google/protobuf/util/internal/object_writer.h>

#include <google/protobuf/util/internal/datapiece.h>

namespace google {
namespace protobuf {
namespace util {
namespace converter {

// static
void ObjectWriter::RenderDataPieceTo(const DataPiece& data, StringPiece name,
                                     ObjectWriter* ow) {
  switch (data.type()) {
    case DataPiece::TYPE_INT32: {
      ow->RenderInt32(name, data.ToInt32().ValueOrDie());
      break;
    }
    case DataPiece::TYPE_INT64: {
      ow->RenderInt64(name, data.ToInt64().ValueOrDie());
      break;
    }
    case DataPiece::TYPE_UINT32: {
      ow->RenderUint32(name, data.ToUint32().ValueOrDie());
      break;
    }
    case DataPiece::TYPE_UINT64: {
      ow->RenderUint64(name, data.ToUint64().ValueOrDie());
      break;
    }
    case DataPiece::TYPE_DOUBLE: {
      ow->RenderDouble(name, data.ToDouble().ValueOrDie());
      break;
    }
    case DataPiece::TYPE_FLOAT: {
      ow->RenderFloat(name, data.ToFloat().ValueOrDie());
      break;
    }
    case DataPiece::TYPE_BOOL: {
      ow->RenderBool(name, data.ToBool().ValueOrDie());
      break;
    }
    case DataPiece::TYPE_STRING: {
      ow->RenderString(name, data.ToString().ValueOrDie());
      break;
    }
    case DataPiece::TYPE_BYTES: {
      ow->RenderBytes(name, data.ToBytes().ValueOrDie());
      break;
    }
    case DataPiece::TYPE_NULL: {
      ow->RenderNull(name);
      break;
    }
    default:
      break;
  }
}

}  // namespace converter
}  // namespace util
}  // namespace protobuf
}  // namespace google
