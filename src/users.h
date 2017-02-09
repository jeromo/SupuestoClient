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

    int extractIdentifier(unsigned position);

public:
    Users();
    int extractRandIdentifier();
    string createName();
};

#endif // USERS_H
