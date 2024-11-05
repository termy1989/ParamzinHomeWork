// App2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "MyClass.cpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    //Person* alex = new Person();
    Fairy* fairy = new Fairy();
    Golum* golum = new Golum();
    Vampire* vampire = new Vampire();
    StoneMan* stoneMan = new StoneMan();
    StoneManV2* stoneManV2 = new StoneManV2();

    cout << "Персонаж создан!" << endl;
    cout << "Его информация: ";
    fairy->infoPerson();
    cout << endl;

    cout << "Персонаж создан!" << endl;
    cout << "Его информация: ";
    golum->infoPerson();
    cout << endl;

    cout << "Персонаж создан!" << endl;
    cout << "Его информация: ";
    vampire->infoPerson();
    cout << endl;

    cout << "Персонаж создан!" << endl;
    cout << "Его информация: ";
    stoneMan->infoPerson();
    cout << endl;

    cout << "Персонаж создан!" << endl;
    cout << "Его информация: ";
    stoneManV2->infoPerson();
    cout << endl;
}
