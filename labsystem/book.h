#ifndef BOOK_H
#define BOOK_H
#include <document.h>

class Book: public Document{
private:
    string _ISBN;
    string _press;
public:
    Book(string id, string name, string comment, string author, string _time, string isbn, string press);
    void creatBook();
    void setISBN(string isbn){_ISBN = isbn;}
    void setPress(string press){_press = press;}
    string getISBN(){return _ISBN;}
    string getPress(){return _press;}
    string getTextroad(string filename){return "C:\\Users\\78679\\Desktop\\GradeTwoSpring\\book\\"
                +filename+".txt";}
    void changeBook();
};

#endif // BOOK_H
