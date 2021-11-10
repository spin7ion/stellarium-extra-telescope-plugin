# Copyright (C) 2007 Fabien Chereau
# Copyright (C) 2015 Kirill Snezhko
# Copyright (C) 2018 Alexander Wolf
#
# Based on the HelloStelModule

CMAKE_MINIMUM_REQUIRED(VERSION 3.1)

PROJECT(ExtraTelescopePlugin)

SET(EXTRATELESCOPEPLUGIN_VERSION "0.1.0")
SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_C_STANDARD 11)

ADD_DEFINITIONS(-DEXTRATELESCOPEPLUGIN_VERSION="${EXTRATELESCOPEPLUGIN_VERSION}")
ADD_DEFINITIONS(-DEXTRATELESCOPEPLUGIN_LICENSE="GPLv2+")

FIND_PACKAGE(Qt5Core REQUIRED)
FIND_PACKAGE(Qt5Gui REQUIRED)
FIND_PACKAGE(Qt5Widgets REQUIRED)
FIND_PACKAGE(Qt5OpenGL REQUIRED)
FIND_PACKAGE(Qt5Network REQUIRED)
FIND_PACKAGE(Qt5SerialPort REQUIRED)

SET(STELLARIUM_SOURCE_DIR $ENV{STELROOT})

INCLUDE_DIRECTORIES(
     ${CMAKE_BINARY_DIR}
     ${CMAKE_SOURCE_DIR}/src
     ${CMAKE_SOURCE_DIR}/src/gui
     ${CMAKE_SOURCE_DIR}/src/NexStar
     ${STELLARIUM_SOURCE_DIR}/src
     ${STELLARIUM_SOURCE_DIR}/src/core
     ${STELLARIUM_SOURCE_DIR}/src/core/modules
     ${STELLARIUM_SOURCE_DIR}/src/core/planetsephems
     ${STELLARIUM_SOURCE_DIR}/src/external
     ${STELLARIUM_SOURCE_DIR}/src/external/qtcompress
     ${STELLARIUM_SOURCE_DIR}/src/external/qcustomplot
     ${STELLARIUM_SOURCE_DIR}/src/external/glues_stel/source/
     ${STELLARIUM_SOURCE_DIR}/src/external/glues_stel/source/libtess
     ${STELLARIUM_SOURCE_DIR}/src/gui
     ${STELLARIUM_SOURCE_DIR}/src/scripting
     ${STELLARIUM_SOURCE_DIR}/plugins/TelescopeControl/src/
     ${INTL_INCLUDE_DIR}
     ${CMAKE_BINARY_DIR}/src
     ${ZLIB_INCLUDE_DIR}
)

ADD_SUBDIRECTORY( src )

# Building 
IF(APPLE)
     SET(CMAKE_INSTALL_PREFIX $ENV{HOME}/Library/Application\ Support/Stellarium)
ElSE(APPLE)
     SET(CMAKE_INSTALL_PREFIX $ENV{HOME}/.stellarium)
ENDIF(APPLE)

INSTALL(FILES "${CMAKE_BINARY_DIR}/src/libExtraTelescopePlugin.so" DESTINATION "modules/ExtraTelescopePlugin")
