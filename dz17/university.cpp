#include "university.h"

University::University()
{
    list = new std::vector<Obj*>(6);
    Person *person1 = new Person();
    Person *person2 = new Person();
    Starosta *starosta = new Starosta();
    Student *student1 = new Student();
    Student *student2 = new Student();
    Professor *professor = new Professor();

    list->insert(list->begin(), person1);
    list->insert(list->begin()+1, person2);
    list->insert(list->begin()+2, professor);
    list->insert(list->begin()+3, student1);
    list->insert(list->begin()+4, student2);
    list->insert(list->begin()+5, starosta);
}

University::~University()
{
    list->clear();
    delete list;
}

void University::info()
{
    for (int i = 0; i < 6; i++)
    {
        list->at(i)->info();
    }
}
