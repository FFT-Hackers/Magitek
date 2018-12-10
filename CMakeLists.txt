cmake_minimum_required(VERSION 3.10)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

set(CID_NAME        "FF6_Magitek")
set(CID_TARGET      "FF6.exe")
set(CID_DLL         "Magitek.dll")
set(CID_INIT        "tekInit")

add_subdirectory(src)
add_subdirectory(vendor)
