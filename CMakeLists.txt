cmake_minimum_required(VERSION 3.19)
project(rtmp_sample)

set(CMAKE_CXX_STANDARD 14)

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/3rdparty/include)
set(LIB_DIR ${CMAKE_SOURCE_DIR}/3rdparty/lib)

#set(RTMP_INCLUDE ${INCLUDE_DIR}/rtmp)
set(RTMP_LIB_FILE ${LIB_DIR}/librtmp.lib)

#set(ZLIB_INCLUDE ${INCLUDE_DIR}/zlib)
set(ZLIB_LIB_FILE ${LIB_DIR}/zlibwapi.lib)

#set(OPENSSL_INCLUDE ${INCLUDE_DIR}/openssl)
set(OPENSSL_LIB_FILE ${LIB_DIR}/ssleay32.lib ${LIB_DIR}/libeay32.lib)

#set(OPENSSL_LIB_FILE ${CMAKE_SOURCE_DIR}/lib/ssleay32.lib ${CMAKE_SOURCE_DIR}/lib/libeay32.lib)

include_directories(${INCLUDE_DIR})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC ${RTMP_LIB_FILE}
        ${ZLIB_LIB_FILE}
        ${OPENSSL_LIB_FILE}
        ws2_32.lib
        winmm.lib
        )