TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    object.cpp \
    integer.cpp

HEADERS += \
    object.h \
    integer.h

DISTFILES += \
    temp.bin
