#ifndef LLVM_LIB_TARGET_MYSIM_MYSIM_H
#define LLVM_LIB_TARGET_MYSIM_MYSIM_H

#include "llvm/Support/raw_ostream.h"

#define MYSIM_DUMP(Color)                                                        \
  {                                                                            \
    llvm::errs().changeColor(Color)                                            \
        << __func__ << "\n\t\t" << __FILE__ << ":" << __LINE__ << "\n";        \
    llvm::errs().changeColor(llvm::raw_ostream::WHITE);                        \
  }
// #define MYSIM_DUMP(Color) {}

#define MYSIM_DUMP_RED MYSIM_DUMP(llvm::raw_ostream::RED)
#define MYSIM_DUMP_GREEN MYSIM_DUMP(llvm::raw_ostream::GREEN)
#define MYSIM_DUMP_YELLOW MYSIM_DUMP(llvm::raw_ostream::YELLOW)
#define MYSIM_DUMP_CYAN MYSIM_DUMP(llvm::raw_ostream::CYAN)
#define MYSIM_DUMP_MAGENTA MYSIM_DUMP(llvm::raw_ostream::MAGENTA)
#define MYSIM_DUMP_WHITE MYSIM_DUMP(llvm::raw_ostream::WHITE)

#endif // LLVM_LIB_TARGET_MYSIM_MYSIM_H