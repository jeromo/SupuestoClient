INCLUDEPATH += ../src
QT += testlib
SOURCES += ../src/users.cpp \
    testuser.cpp
TEMPLATE = app
TARGET = tests
INCLUDEPATH += .

# Input
HEADERS += \
    testuser.h
