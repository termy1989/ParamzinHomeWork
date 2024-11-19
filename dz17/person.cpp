#include "person.h"

Person::Person()
{
    name[0] = 'P';
    name[1] = 'e';
    name[2] = 'r';
    name[3] = 's';
    name[4] = 'o';
    name[5] = 'n';
    age = new int;
    *age = 45;
}

Person::~Person()
{
    delete age;
}

void Person::read()
{
    std::cout << "Enter name: ";
    std::cin.getline(name, 50);
    std::cout << std::endl;
    std::cout << "Enter age: ";
    age = new int;
    std::cin >> *age;
    std::cout << std::endl;

    while (!validateEmail())
    {
        std::cout << "Enter email: ";
        std::cin.getline(email, 50);
        std::cout << std::endl;
    }
}

bool Person::validateEmail()
{
    int k1 = 0, k2 = 0, index1 = 0, index2 = 0;
    for (int i = 0; i < 50; i++)
    {
        if (email[i] == '@')
        {
            k1++;
            if (k1 == 1)
            {
                index1 = i;
            }
        }
        if (email[i] == '.')
        {
            k2++;
            if (k2 == 1)
            {
                index2 = i;
            }
        }
    }

    if (k1 != 1 || k2 != 1)
    {
        return false;
    }
    else
    {
        if (index1 > index2)
        {
            return false;
        }
        else
        {
            return true;
        }
    }


    return false;
}

void Person::info()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << *age << std::endl;
    //std::cout << "Email: " << email << std::endl;
}
