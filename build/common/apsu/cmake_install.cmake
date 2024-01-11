# Install script for directory: /home/APSU/common/apsu

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/APSU-0.7/apsu" TYPE FILE FILES
    "/home/APSU/common/apsu/apsu.h"
    "/home/APSU/common/apsu/crypto_context.h"
    "/home/APSU/common/apsu/item.h"
    "/home/APSU/common/apsu/log.h"
    "/home/APSU/common/apsu/powers.h"
    "/home/APSU/common/apsu/psu_params.h"
    "/home/APSU/common/apsu/requests.h"
    "/home/APSU/common/apsu/responses.h"
    "/home/APSU/common/apsu/seal_object.h"
    "/home/APSU/common/apsu/thread_pool_mgr.h"
    "/home/APSU/common/apsu/version.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/APSU/build/common/apsu/fourq/cmake_install.cmake")
  include("/home/APSU/build/common/apsu/network/cmake_install.cmake")
  include("/home/APSU/build/common/apsu/oprf/cmake_install.cmake")
  include("/home/APSU/build/common/apsu/util/cmake_install.cmake")
  include("/home/APSU/build/common/apsu/permute/cmake_install.cmake")
  include("/home/APSU/build/common/apsu/peqt/cmake_install.cmake")
  include("/home/APSU/build/common/apsu/ot/cmake_install.cmake")

endif()

