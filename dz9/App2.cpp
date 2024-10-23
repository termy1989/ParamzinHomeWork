// App1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Figure {

private:
    int a;
    int b;
public:
    int getA() { return a; }
    int getB() { return b; }
    void setA(int newA) { a = newA; }
    void setB(int newB) { b = newB; }
};

void read(Figure *figure)
{
    cout << "Введите сторону а: " << endl;
    int a;
    cin >> a;
    figure->setA(a);
    cout << "Введите сторону b: " << endl;
    int b;
    cin >> b;
    figure->setB(b);
}

int sq(Figure *figure)
{
    return figure->getA() * figure->getB();
}

int per(Figure *figure)
{
    return (figure->getA() + figure->getB()) * 2;
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