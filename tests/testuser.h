#ifndef TESTUSER
#define TESTUSER

#include <QtTest/QtTest>
#include "users.h"
class TestUser: public QObject
{
    Q_OBJECT
private slots:
    void getUsers();
};

#endif // TESTUSER
