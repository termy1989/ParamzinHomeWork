#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Animal {

protected:
    string name;
    int expirience;
    float weight;
    float speed;
    int health;

public:
    Animal(string newName)
    {
        name = newName;
        expirience = 10;
        weight = 20;
        speed = 5;
        health = 3;

    }
    string getName() { return name; }
    void setName(string newName) { name = newName; }
    int getExpirience() { return expirience; }
    void setExpirience(int newExpirience)
    {
        if (newExpirience < 0)
        {
            expirience = 0;
        }
        else
        {
            expirience = newExpirience;
        }
    }
    float getWeight() { return weight; }
    void setWeight(float newWeight) { weight = newWeight; }
    float getSpeed() { return speed; }
    void setSpeed(float newSpeed)
    {
        if (newSpeed < 0)
        {
            speed = 0;
        }
        else
        {
            speed = newSpeed;
        }
    }
    int getHealth() { return health; }
    void setHealth(int newHealth)
    {
        if (newHealth < 1)
        {
            health = 1;
        }
        else if (newHealth > 12)
        {
            health = 12;
        }
        else
        {
            health = newHealth;
        }
    }

    void incSpeed()
    {
        speed++;
    }

    void decWeight50()
    {
        weight -= 50;
    }

};

int main()
{
    setlocale(LC_ALL, "Russian");
    Animal *alex = new Animal("Alex");

    cout << "Персонаж создан!" << endl;
    cout << "Его информация: " << alex->getName() << ", "
        << alex->getExpirience() << " xp, " << alex->getWeight()
        << " dam, " << alex->getSpeed() << " sp, " << alex->getHealth()
        << " hp." << endl;

    Animal* array[] = {new Animal("Alex1"),
                      new Animal("Alex2"),
                      new Animal("Alex3"),
                      new Animal("Alex4"),
                      new Animal("Alex5") };

    for (int i = 0; i < 5; i++)
    {
        cout << "Персонаж создан!" << endl;
        cout << "Его информация: " << array[i]->getName() << ", "
            << array[i]->getExpirience() << " xp, " << array[i]->getWeight()
            << " dam, " << array[i]->getSpeed() << " sp, " << array[i]->getHealth()
            << " hp." << endl;
    }
}