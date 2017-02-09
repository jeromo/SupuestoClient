#include "testuser.h"
#include <cstdlib>

void TestUser::getUsers()
{
    Users user;
    int identifier;

    srand(time(NULL));

    for (int  i= 0; i < 250;i++)
    {
        unsigned position = rand() % (250 -i);
        identifier = user.extractRandIdentifier();
        cout << identifier << ":" << user.createName() <<"\n";
        QVERIFY(identifier != -1);
    }

    QVERIFY(-1 == user.extractRandIdentifier());
}


QTEST_MAIN(TestUser)
