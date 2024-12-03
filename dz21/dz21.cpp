#include <iostream>
#include <algorithm>
#include <deque>
#include <list>
#include "dz21.h"

class Student
{
protected:
    std::string name;
    int* age;
    int* mark;

public:

    Student()
    {
        name = "Student";
        age = new int;
        *age = 18;
        mark = new int;
        *mark = 5;
    }

    ~Student()
    {
        delete age;
        delete mark;
    }

    void read()
    {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << std::endl;
        std::cout << "Enter age: ";
        age = new int;
        std::cin >> *age;
        std::cout << std::endl;
        std::cout << "Enter mark: ";
        mark = new int;
        std::cin >> *mark;
        std::cout << std::endl;
    }

    void info()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << *age << std::endl;
        std::cout << "Mark: " << *mark << std::endl;
    }

    bool nameIs(std::string name)
    {
        if (name == this->name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator == (Student& s)
    {
        if (name == s.name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator > (Student& s)
    {
        if (name > s.name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator < (Student& s)
    {
        if (name < s.name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

void del(std::deque<Student*> &students, std::string name)
{
    if (!students.empty())
    {
        bool exist = false;
        int i = 0;
        for (auto it = students.begin(); it != students.end();)
        {
            if (students[i]->nameIs(name))
            {
                it = students.erase(it);
                exist = true;
                std::cout << "Удалено\n";
            }
            else
            {
                ++it;
                ++i;
            }
        }
        if (!exist)
        {
            std::cout << "Такой записи в справочнике не содержится!\n";
        }
    }
    else
    {
        std::cout << "Список пуст!" << std::endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    std::deque<Student*> students;
    int count;
    std::cout << "Введите количество студентов: ";
    std::cin >> count;
    for (int i = 0; i < count; i++)
    {
        Student* student = new Student();
        student->read();
        students.push_back(student);
    }

    std::cout << "Список с дубликатами" << std::endl;
    for (int i = 0; i < students.size(); i++)
    {
        students[i]->info();
    }
    std::cout << std::endl;
    std::cout << "Список без дубликатов" << std::endl;
    
    //sort(students);

    std::sort(students.begin(), students.end(), [](Student* a, Student* b)
        {
            return a < b;
        });

    
    auto result = std::unique(students.begin(), students.end(), [](Student *a, Student *b)
        {
            //return a->name == b->name;
            return *a == *b;
        });
    students.erase(result, students.end());

    for (int i = 0; i < students.size(); i++)
    {
        students[i]->info();
    }

    std::string name;
    std::cout << std::endl;
    std::cout << "Enter name for delete: ";
    std::cin >> name;
    std::cout << std::endl;
    del(students, name);
    std::cout << std::endl;
    std::cout << "Список после удаления" << std::endl;
    for (int i = 0; i < students.size(); i++)
    {
        students[i]->info();
    }
}
