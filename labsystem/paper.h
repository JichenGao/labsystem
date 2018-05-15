#ifndef PAPER_H
#define PAPER_H
#include <document.h>

class Paper:public Document{
private:
    string _periodical;
    string _location;
public:
    Paper(string id, string name, string comment, string author, string time, string periodical,
          string loaction);
    void creatPaper();
    void setPeriodical(string periodical){_periodical = periodical;}
    //void setLocation(string location){_location = location;}
    string getPeriodical(){return _periodical;}
    //void setPaper(string id, string name, string comment, string author, string time, string periodical,
                  //string location);
    string getLocation(string filename){return "C:\\Users\\78679\\Desktop\\GradeTwoSpring\\paper\\"
                +filename+".txt";}
};

#endif // PAPER_H
