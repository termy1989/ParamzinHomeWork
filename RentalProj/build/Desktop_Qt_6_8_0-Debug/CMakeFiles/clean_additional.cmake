# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/RentalProj_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/RentalProj_autogen.dir/ParseCache.txt"
  "RentalProj_autogen"
  )
endif()
