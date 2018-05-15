#ifndef SOURCE_H
#define SOURCE_H
#include <string>
#include <fstream>
#include <iomanip>
#include <conio.h>
using namespace std;

class Source{
private:
    string _id;
    string _name;
    string _comment;
public:
    Source(string id, string name, string comment);
    void setId(string id){_id = id;}
    void steName(string name){_name = name;}
    void setComment(string comment){_comment = comment;}
    string getId(){return _id;}
    string getName(){return _name;}
    string getComment(){return _comment;}
};

#endif // SOURCE_H
