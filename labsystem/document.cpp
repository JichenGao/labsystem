#include<document.h>

Document::Document(string id, string name, string comment, string author, string time):
    Source(id, name, comment){
    _author = author;
    _time = time;
}
