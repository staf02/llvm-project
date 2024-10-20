#include "TargetInfo/MYSIMTargetInfo.h"
#include "MYSIM.h"
#include "llvm/MC/TargetRegistry.h"
using namespace llvm;
Target &llvm::getTheMYSIMTarget() {
  static Target TheMYSIMTarget;
  return TheMYSIMTarget;
}
extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeMYSIMTargetInfo() {
  RegisterTarget<Triple::mysim> X(getTheMYSIMTarget(), "mysim",
                                "My SIM", "mysim");
}