#include <equipment.h>

Equipment::Equipment(string id, string name, string comment, string type,
                     string factory): Source(id, name, comment){
    _type = type;
    _factory = factory;
}
