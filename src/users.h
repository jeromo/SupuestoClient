#ifndef USERS_H
#define USERS_H


#include <iostream>
#include <vector>

using namespace std;


class Users
{
private:
    const int max_identifier = 250;
    const int min_identifier = 1;
    vector<int> vectorIdentifiers;

public:
    Users();
    int getIdentifier (unsigned position);
    string createUserName();
};

#endif // USERS_H
