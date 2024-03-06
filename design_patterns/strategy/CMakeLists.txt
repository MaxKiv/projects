cmake_minimum_required(VERSION 3.22.1)

project(strategy)

set(FILES
  "main.cpp"
  "Character.h"
  "King.h"
  "Queen.h"
  "Troll.h"
  "WeaponBehavior.h"
  "Weapons.h"
  )

add_executable(main ${FILES})

add_custom_target(run COMMAND ${CMAKE_CURRENT_BINARY_DIR}/main DEPENDS main)
