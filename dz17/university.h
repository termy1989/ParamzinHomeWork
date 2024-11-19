#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include "starosta.h"
#include "professor.h"
#include <vector>

class University
{
protected:
    std::vector<Obj*> *list;
public:
    University();
    ~University();
    virtual void info();
};

#endif // UNIVERSITY_H
