#include "papermanage.h"

Papermanage::Papermanage(string dir)
{
    _dirName = dir;
}

string Papermanage::getString(const char * path){
    string str;
    fstream fin(path);
    fin >> str;
    return str;
}
