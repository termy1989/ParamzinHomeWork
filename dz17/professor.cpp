#include "professor.h"

Professor::Professor() {
    name[0] = 'P';
    name[1] = 'r';
    name[2] = 'o';
    name[3] = 'f';
    name[4] = 'e';
    name[5] = 's';
    name[6] = 's';
    name[7] = 'o';
    name[8] = 'r';
    age = new int;
    *age = 60;
    salary = new int;
    *salary = 100;
}

Professor::~Professor()
{
    delete age;
    delete salary;
}

void Professor::info()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << *age << std::endl;
    std::cout << "Salary: " << *salary << std::endl;
}
