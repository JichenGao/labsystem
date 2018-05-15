#ifndef EUIPMENT_H
#define EUIPMENT_H
#include <source.h>

class Equipment:public Source{
private:
    string _type;
    string _factory;
public:
    Equipment(string id, string name, string comment, string type, string factory);
    void setType(string type){_type = type;}
    void setFactory(string factory){_factory = factory;}
    string getType(){return _type;}
    string getFactory(){return _factory;}
};

#endif // EUIPMENT_H
