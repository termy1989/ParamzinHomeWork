#ifndef PERSON_H
#define PERSON_H

#include "obj.h"


class Person : public Obj
{
protected:
    char name[50]{};
    int *age;
    char email[50]{};

public:
    Person();
    ~Person();
    void read();
    bool validateEmail();
    void info() override;
};

#endif // PERSON_H
