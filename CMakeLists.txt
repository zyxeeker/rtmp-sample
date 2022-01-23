cmake_minimum_required(VERSION 3.20)
project(tokenServer)

set(CMAKE_CXX_STANDARD 14)

set(RTMP_DIR ${CMAKE_SOURCE_DIR}/3rdparty/librtmp)
set(RTMP_LIB_FILE ${CMAKE_SOURCE_DIR}/lib/librtmp.lib)
set(ZLIB_LIB_FILE ${CMAKE_SOURCE_DIR}/lib/zlibwapi.lib)
set(OPENSSL_LIB_FILE ${CMAKE_SOURCE_DIR}/lib/ssleay32.lib ${CMAKE_SOURCE_DIR}/lib/libeay32.lib)

include_directories(${RTMP_DIR})

add_executable(tokenServer main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC ${RTMP_LIB_FILE}
        ${ZLIB_LIB_FILE}
        ${OPENSSL_LIB_FILE}
        ws2_32.lib
        winmm.lib
        )