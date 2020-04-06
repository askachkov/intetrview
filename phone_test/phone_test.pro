QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_phonetest.cpp \
    ../phone/keyboard.cpp \
    ../phone/keyresult.cpp \
    ../phone/keyvalue.cpp

HEADERS += \
    ../phone/keyboard.h \
    ../phone/keyresult.h \
    ../phone/keyvalue.h
