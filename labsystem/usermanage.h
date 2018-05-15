#ifndef USERMANAGE_H
#define USERMANAGE_H
#include "user.h"
#include <string>
using namespace std;


class Usermanage
{
public:
    Usermanage(string dir);

    User loadUser(string userName);
    void deleteUser(string userName);

private:
    string _dirName;

};
#endif // USERMANAGE_H
