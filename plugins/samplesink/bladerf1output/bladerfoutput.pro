#--------------------------------------------
#
# Pro file for Windows builds with Qt Creator
#
#--------------------------------------------

TEMPLATE = lib
CONFIG += plugin

QT += core gui widgets multimedia opengl

TARGET = outputbladerf1

DEFINES += USE_SSE2=1
QMAKE_CXXFLAGS += -msse2
DEFINES += USE_SSE4_1=1
QMAKE_CXXFLAGS += -msse4.1
QMAKE_CXXFLAGS += -std=c++11

CONFIG(MINGW32):LIBBLADERFSRC = "C:\softs\bladeRF\host\libraries\libbladeRF\include"
CONFIG(MINGW64):LIBBLADERFSRC = "C:\softs\bladeRF\host\libraries\libbladeRF\include"
INCLUDEPATH += $$PWD
INCLUDEPATH += ../../../exports
INCLUDEPATH += ../../../sdrbase
INCLUDEPATH += ../../../sdrgui
INCLUDEPATH += ../../../swagger/sdrangel/code/qt5/client
INCLUDEPATH += ../../../devices
INCLUDEPATH += $$LIBBLADERFSRC

CONFIG(Release):build_subdir = release
CONFIG(Debug):build_subdir = debug

SOURCES += bladerf1outputgui.cpp\
    bladerf1output.cpp\
    bladerf1outputplugin.cpp\
    bladerf1outputsettings.cpp\
    bladerf1outputthread.cpp

HEADERS += bladerf1outputgui.h\
    bladerf1output.h\
    bladerf1outputplugin.h\
    bladerf1outputsettings.h\
    bladerf1outputthread.h

FORMS += bladerf1outputgui.ui

LIBS += -L../../../sdrbase/$${build_subdir} -lsdrbase
LIBS += -L../../../sdrgui/$${build_subdir} -lsdrgui
LIBS += -L../../../swagger/$${build_subdir} -lswagger
LIBS += -L../../../libbladerf/$${build_subdir} -llibbladerf
LIBS += -L../../../devices/$${build_subdir} -ldevices

RESOURCES = ../../../sdrgui/resources/res.qrc