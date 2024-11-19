#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "person.h"

class Professor : public Person
{
protected:
    int *salary;

public:
    Professor();
    ~Professor();
    void info() override;
};

#endif // PROFESSOR_H
