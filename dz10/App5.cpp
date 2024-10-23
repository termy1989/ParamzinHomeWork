// App1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Animal {

private:
    string name;
    int expirience;
    float weight;
    float speed;
    int health;

public:
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
    Animal alex;
    
    cout << "Введите имя: ";
    string name;
    cin >> name;
    alex.setName(name);
    cout << endl;

    cout << "Введите сколько опыта: ";
    int expirience;
    cin >> expirience;
    alex.setExpirience(expirience);
    cout << endl;

    cout << "Ввдите вес инвентаря: ";
    float weight;
    cin >> weight;
    alex.setWeight(weight);
    cout << endl;

    cout << "Введите кол-во жизни: ";
    int health;
    cin >> health;
    alex.setHealth(health);
    cout << endl;

    cout << "Введите скорость: ";
    float speed;
    cin >> speed;
    alex.setSpeed(speed);
    cout << endl;

    cout << "Персонаж создан!" << endl;

    /*for (int i = 0; i < 5; i++)
    {
        cout << "Его информация: " << alex.getName() << ", "
            << alex.getExpirience() << " xp, " << alex.getWeight()
            << " kg, " << alex.getSpeed() << " sp, " << alex.getHealth()
            << " hp." << endl;

        alex.incSpeed();

        cout << "========Скорость увеличина=============" << endl;
    }

    cout << "Его информация: " << alex.getName() << ", " 
        << alex.getExpirience() << " xp, " << alex.getWeight() 
        << " kg, " << alex.getSpeed() << " sp, " << alex.getHealth() 
        << " hp." << endl;*/

    while (alex.getWeight() > 0)
    {
        cout << "Его информация: " << alex.getName() << ", "
            << alex.getExpirience() << " xp, " << alex.getWeight()
            << " kg, " << alex.getSpeed() << " sp, " << alex.getHealth()
            << " hp." << endl;

        alex.decWeight50();

        cout << "========Инвентарь уменьшен============ =" << endl;
    }

    cout << "Его информация: " << alex.getName() << ", "
        << alex.getExpirience() << " xp, " << alex.getWeight()
        << " kg, " << alex.getSpeed() << " sp, " << alex.getHealth()
        << " hp." << endl;

    cout << "=========Конец игры=====================" << endl;
}
