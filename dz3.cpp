#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // --- Задание 1 ---

    for (int i = 0; i < 13; i++)
        cout << i * 8 << " ";
    cout << endl;
    cout << endl;

    // --- Задание 2 ---   

    for (int i = -7; i < 7; i++)
        cout << 2 * (4 + 7 * i) << " ";
    cout << endl;
    cout << endl;

    // --- Задание 3 ---   

    for (int i = 0; i < 100; i++) {
        cout << 100 - i << " ";
        if ( ((i + 1)%37)==0 )
            cout << endl;
    }
    cout << endl;
    cout << endl;

    // --- Задание 4 ---   

    cout << "Таблица умножения на 11" << endl;
    for (int i = 0; i < 10; i++)
        cout << (i+1) << "*11=" << (i+1)*11 << endl;
    cout << endl;
    cout << endl;

    // --- Задание 5 ---   

    cout << "Таблица кубов до 1000" << endl;
    int k, i = 0;
    do {
        k = pow(++i,3);
        cout << k << " ";
    } while (k < 1000);
    cout << endl;
    cout << endl;

    // --- Задание 6 ---   

    int n, f = 1;
    cout << "Введите число: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        f *= i + 1;

    cout << n << "! = " << f;
    cout << endl;
    cout << endl;

    // --- Задание 7 ---  

    int n1, f1;
    while (n1 != 0) {

        cout << "Введите число (при вводе 0 программа прекратит работать): ";
        cin >> n1;

        if (n1 > 0) {
            f1 = 1;
            for (int i = 0; i < n; i++)
                f1 *= i + 1;
            cout << n1 << "! = " << f;
        }
        cout << endl;
        cout << endl;
    }   
    cout << endl;
    cout << endl;

    // --- Задание 8 ---  

    int n2;
    cout << "Введите число: ";
    cin >> n2;
    int p = 0;
    for (int i = n2; i != 0; i /= 10)
        p = p * 10 + i % 10;
    (p > 10 && p == n2)? cout <<  "Палиндром" : cout << "Не палиндром";
    cout << endl;
    cout << endl;
}