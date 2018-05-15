#ifndef USER_H
#define USER_H
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>
using namespace std;

class User
{
public:
    User(string n, string p, string e, string t, string id);
    void save(string dirName);
    void borrowBook(string bookName);
    void returnBook(string bookName);
    void borrowPaper(string paperName);
    void returnPaper(string paperName);
    void createUser();
    void setUser(string n, string p, string e, string t, string id);

    string getTextroad(string filename);

private:
    string _nickname, _password, _email, _tel, _ID;
};
#endif // USER_H
