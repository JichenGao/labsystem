#ifndef DOCUMENT_H
#define DOCUMENT_H
#include<source.h>

class Document: public Source{
private:
    string _author;
    string _time;
public:
    Document(string id, string name, string comment, string author, string _time);
    void setAuthor(string author){_author = author;}
    void setTime(string time){_time = time;}
    string getAuthor(){return _author;}
    string getTime(){return _time;}
};

#endif // DOCUMENT_H
