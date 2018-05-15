#ifndef PRINTER_H
#define PRINTER_H
#include <equipment.h>

class Printer: public Equipment{
private:
    string _buytime;
public:
    Printer(string id, string name, string comment, string type, string factory, string buytime);
    void creatPrinter();
    void setBuytime(string buytime){_buytime = buytime;}
    string getBuytime(){return _buytime;}
    string getTextroad(string filename){return "C:\\Users\\78679\\Desktop\\GradeTwoSpring\\printer\\"
                +filename+".txt";}
};

#endif // PRINTER_H
