// App1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Animal {

public:
    string name;
    int expirience;
    float weight;
    float speed;
    int health;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Animal alex;
    
    cout << "Введите имя: ";
    cin >> alex.name;
    cout << endl;

    cout << "Введите сколько опыта: ";
    cin >> alex.expirience;
    cout << endl;

    cout << "Ввдите вес инвентаря: ";
    cin >> alex.weight;
    cout << endl;

    cout << "Введите кол-во жизни: ";
    cin >> alex.health;
    cout << endl;

    cout << "Введите скорость: ";
    cin >> alex.speed;
    cout << endl;

    cout << "Персонаж создан!" << endl;
    cout << "Его информация: " << alex.name << ", " << alex.expirience << " xp, " << alex.weight << " kg, " << alex.speed << " sp, " << alex.health << " hp." << endl;
}
