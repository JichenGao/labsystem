#ifndef BOOKMANAGE_H
#define BOOKMANAGE_H
#include <book.h>

class Bookmanage
{
public:
    Bookmanage(string dir);

    Book loadBook(string bookName);
    Book searchBook(string keyword);
    void deleteBook(string bookName);
    void borrowBook(string bookName);
    void returnBook(string bookName);
    string getString(const char * path);
private:
    string _dirName;
};
#endif // BOOKMANAGE_H
