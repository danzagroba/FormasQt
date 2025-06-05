# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Formas_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Formas_autogen.dir\\ParseCache.txt"
  "Formas_autogen"
  )
endif()
