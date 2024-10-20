add_llvm_component_library(LLVMMYSIMDesc
  MYSIMMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  MYSIMInfo

  ADD_TO_COMPONENT
  MYSIM
 )