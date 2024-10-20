add_llvm_component_library(LLVMMYSIMInfo
  MYSIMTargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support
  
  ADD_TO_COMPONENT
  MYSIM
  )