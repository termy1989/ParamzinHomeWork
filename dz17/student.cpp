#include "student.h"

Student::Student() {
    name[0] = 'S';
    name[1] = 't';
    name[2] = 'u';
    name[3] = 'd';
    name[4] = 'e';
    name[5] = 'n';
    name[6] = 't';
    age = new int;
    *age = 18;
    mark = new int;
    *mark = 5;
}

Student::~Student()
{
    delete age;
    delete mark;
}

void Student::info()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << *age << std::endl;
    std::cout << "Mark: " << *mark << std::endl;
}
