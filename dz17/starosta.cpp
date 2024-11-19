#include "starosta.h"

Starosta::Starosta() {
    name[0] = 'S';
    name[1] = 't';
    name[2] = 'a';
    name[3] = 'r';
    name[4] = 'o';
    name[5] = 's';
    name[6] = 't';
    name[7] = 'a';
    age = new int;
    *age = 20;
    mark = new int;
    *mark = 5;
    middlemark = new int;
    *middlemark = 4;
}

Starosta::~Starosta()
{
    delete age;
    delete mark;
    delete middlemark;
}

void Starosta::info()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << *age << std::endl;
    std::cout << "Mark: " << *mark << std::endl;
    std::cout << "Middlemark: " << *middlemark << std::endl;
}
