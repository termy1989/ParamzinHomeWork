#ifndef STAROSTA_H
#define STAROSTA_H

#include "student.h"

class Starosta : public Student
{
protected:
    int* middlemark;
public:
    Starosta();
    ~Starosta();
    void info() override;
};

#endif // STAROSTA_H
