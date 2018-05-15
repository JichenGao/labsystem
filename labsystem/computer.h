#ifndef COMPUTER_H
#define COMPUTER_H
#include <equipment.h>

class Computer: public Equipment{
private:
    string _buytime;
    string _owner;
public:
    Computer(string id, string name, string comment, string type, string factory, string buytime,
             string owner);
    void creatComputer();
    void setBuytime(string buytime){_buytime = buytime;}
    void setOwner(string owner){_owner = owner;}
    string getBuytime(){return _buytime;}
    string getOwner(){return _owner;}
    string getTextroad(string filename){return "C:\\Users\\78679\\Desktop\\GradeTwoSpring\\computer\\"
                +filename+".txt";}
};

#endif // COMPUTER_H
