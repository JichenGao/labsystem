#ifndef PAPERMANAGE_H
#define PAPERMANAGE_H
#include "paper.h"

class Papermanage
{
public:
    Papermanage(string dir);

    Paper loadPaper(string paperName);
    Paper searchPaper(string keyword);
    void deletePaper(string paperName);
    void borrowPaper(string paperName);
    void returnPaper(string paperName);
    string getString(const char * path);

private:
    string _dirName;
};

#endif // PAPERMANAGE_H
