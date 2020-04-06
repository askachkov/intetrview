TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    keyvalue.cpp \
    keyboard.cpp \
    keyresult.cpp

HEADERS += \
    keyvalue.h \
    keyboard.h \
    keyresult.h
