add_llvm_component_group(MYSIM)
add_llvm_target(MYSIMCodeGen
  MYSIMTargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  Support
  Target
  MYSIMInfo

  ADD_TO_COMPONENT
  MYSIM
  )
add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)