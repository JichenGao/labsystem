#include "bookmanage.h"

Bookmanage::Bookmanage(string dir)
{
    _dirName = dir;
}



string Bookmanage::getString(const char * path){
    string str;
    fstream fin(path);
    fin >> str;
    return str;
}
