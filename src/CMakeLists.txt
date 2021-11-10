# Copyright (C) 2007 Fabien Chereau
# Copyright (C) 2015 Kirill Snezhko
# Copyright (C) 2018 Alexander Wolf
#
# Based on the HelloStelModule

INCLUDE_DIRECTORIES(.)

LINK_DIRECTORIES(${BUILD_DIR}/src)

SET(ExtraTelescopePlugin_SRCS
     # Source code
     ExtraTelescopePlugin.hpp
     ExtraTelescopePlugin.cpp
     gui/ExtraTelescopePluginWindow.cpp
     gui/ExtraTelescopePluginWindow.hpp
)

SET(ExtraTelescopePlugin_UIS
     # Forms
     gui/ExtraTelescopePluginWindow.ui
)

SET(ExtraTelescopePlugin_RES_SXX
     # Resources
     # ../resources/ExtraTelescopePlugin.qrc
)

# Wrapping UI
QT5_WRAP_UI(ExtraTelescopePlugin_UIS_H ${ExtraTelescopePlugin_UIS})

# compiles resources files
# QT5_ADD_RESOURCES(ExtraTelescopePlugin_RES_CXX ${ExtraTelescopePlugin_RES})

# Library properties
ADD_LIBRARY(ExtraTelescopePlugin-dynamic MODULE ${ExtraTelescopePlugin_SRCS} ${ExtraTelescopePlugin_RES_SXX} ${ExtraTelescopePlugin_UIS_H})
TARGET_LINK_LIBRARIES(ExtraTelescopePlugin-dynamic Qt5::Core Qt5::Gui Qt5::Widgets Qt5::OpenGL)
SET_TARGET_PROPERTIES(ExtraTelescopePlugin-dynamic PROPERTIES OUTPUT_NAME "ExtraTelescopePlugin")
SET_TARGET_PROPERTIES(ExtraTelescopePlugin-dynamic PROPERTIES COMPILE_FLAGS "-DQT_DYNAMICPLUGIN")
SET_TARGET_PROPERTIES(ExtraTelescopePlugin-dynamic PROPERTIES AUTOMOC TRUE)
SET_TARGET_PROPERTIES(ExtraTelescopePlugin-dynamic PROPERTIES FOLDER "plugins/ExtraTelescopePlugin")
