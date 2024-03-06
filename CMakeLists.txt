cmake_minimum_required(VERSION 3.22.1)

project(State)

set(FILES
  "Context.h"
  "State.h"
  "CommunicationState.h"
  "InitializationState.h"
  "ErrorState.h"
  "Context.cpp"
  "CommunicationState.cpp"
  "InitializationState.cpp"
  "ErrorState.cpp"
  "main.cpp"
  )

add_executable(main ${FILES})

add_custom_target(run COMMAND ${CMAKE_CURRENT_BINARY_DIR}/main DEPENDS main)
