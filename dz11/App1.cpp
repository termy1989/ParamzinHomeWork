// App1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Figure {

public:
    int a;
    int b;
};

void read(Figure *figure)
{
    cout << "Введите сторону а: " << endl;
    cin >> figure->a;
    cout << "Введите сторону b: " << endl;
    cin >> figure->b;
}

int sq(Figure *figure)
{
    return figure->a * figure->b;
}

int per(Figure *figure)
{
    return (figure->a + figure->b) * 2;
}

void show(int res)
{
    cout << res << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Figure *kv1 = new Figure;
    read(kv1);
    show(per(kv1));
    show(sq(kv1));
}