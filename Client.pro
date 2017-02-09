QT += core
QT -= gui

CONFIG += c++11

TARGET = Client
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

HEADERS += \
    src/users.h

SOURCES += \
    src/users.cpp


