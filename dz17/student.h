#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public Person
{
protected:
    int *mark;
public:
    Student();
    ~Student();
    void info() override;
};

#endif // STUDENT_H
