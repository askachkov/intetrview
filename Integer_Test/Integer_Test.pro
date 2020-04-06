QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_integer_test.cpp \
    ../Integer/object.cpp \
    ../Integer/integer.cpp

HEADERS += \
    ../Integer/object.h \
    ../Integer/integer.h
