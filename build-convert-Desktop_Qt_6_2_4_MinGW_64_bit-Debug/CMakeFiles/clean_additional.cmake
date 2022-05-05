# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\convert_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\convert_autogen.dir\\ParseCache.txt"
  "convert_autogen"
  )
endif()
