#ifndef LLVM_LIB_TARGET_MYSIM_MYSIMTARGETMACHINE_H
#define LLVM_LIB_TARGET_MYSIM_MYSIMTARGETMACHINE_H
#include "llvm/Target/TargetMachine.h"
#include <optional>
namespace llvm {

extern Target TheMYSIMTarget;

class MYSIMTargetMachine : public LLVMTargetMachine {
public:
  MYSIMTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                   StringRef FS, const TargetOptions &Options,
                   std::optional<Reloc::Model> RM,
                   std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                   bool JIT);
};
} // end namespace llvm

#endif // LLVM_LIB_TARGET_MYSIM_MYSIMTARGETMACHINE_H