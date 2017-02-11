QT += core
QT += network
QT -= gui

CONFIG += c++11
TARGET = Client

TEMPLATE = app
SOURCES += main.cpp \
    users.cpp \
    connection.cpp
HEADERS += users.h \ 
    connection.h
