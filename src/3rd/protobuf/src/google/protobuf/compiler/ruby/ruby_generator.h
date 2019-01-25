
#ifndef GOOGLE_PROTOBUF_COMPILER_RUBY_GENERATOR_H__
#define GOOGLE_PROTOBUF_COMPILER_RUBY_GENERATOR_H__

#include <string>

#include <google/protobuf/compiler/code_generator.h>

namespace google {
namespace protobuf {
namespace compiler {
namespace ruby {

// CodeGenerator implementation for generated Ruby protocol buffer classes.
// If you create your own protocol compiler binary and you want it to support
// Ruby output, you can do so by registering an instance of this
// CodeGenerator with the CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT Generator
    : public google::protobuf::compiler::CodeGenerator {
  virtual bool Generate(
      const FileDescriptor* file,
      const string& parameter,
      GeneratorContext* generator_context,
      string* error) const;
};

}  // namespace ruby
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

#endif  // GOOGLE_PROTOBUF_COMPILER_RUBY_GENERATOR_H__

