#include "users.h"

Users::Users()
{
   for (int i = min_identifier;i <= max_identifier;i++)
   {
       vectorIdentifiers.push_back(i);
   }
}
int Users::extractIdentifier(unsigned position)
{

    if (position >= vectorIdentifiers.size())
        return -1;


    int value = vectorIdentifiers[position];
    vectorIdentifiers.erase(vectorIdentifiers.begin() + position);

    return value;
}

int Users::extractRandIdentifier()
{
    size_t vector_size = vectorIdentifiers.size();

    if (vector_size == 0)
        return -1;

    srand(time(NULL));


    unsigned position = rand() % vector_size;

    return extractIdentifier(position);

}

string Users::createName()
{
    int length = 10;
    char str[length];
    str[length-1] = '\0';
    size_t i = 0;
    int r;

    for(i = 0; i < length-1; ++i) { //length-1 for the '\0' at the end
        for(;;) {
            r = rand() % 57 + 65; //interval between 65 ('A') and 65+57=122 ('z')
            if((r >= 65 && r <= 90) || (r >= 97 && r <= 122)) { // exclude '[' to '`'
                str[i] = static_cast<char>(r);
                break;
            }
        }
    }

    return string(str);
}
