#include "users.h"

Users::Users()
{
   for (int i = min_identifier;i <= max_identifier;i++)
   {
       vectorIdentifiers.push_back(i);
   }
}
int Users::getIdentifier(unsigned position)
{

    if (position > vectorIdentifiers.size())
        return -1;


    int value = vectorIdentifiers[position];
    vectorIdentifiers.erase(vectorIdentifiers.begin() + position);

    return value;
}
