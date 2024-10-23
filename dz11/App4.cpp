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
    void setA(int newA)
    {
        if (newA < 0)
        {
            a = 0;
        }
        else
        {
            a = newA;
        }
    }
    void setB(int newB)
    {
        if (newB < 0)
        {
            b = 0;
        }
        else
        {
            b = newB;
        }
    }
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

void comparisson(Figure* f1, Figure* f2)
{
    int s1, s2, p1, p2;

    s1 = sq(f1);
    s2 = sq(f2);
    p1 = per(f1);
    p2 = per(f2);

    if (s1 == s2)
    {
        cout << "Площади равны" << endl;
    }
    else if (s1 > s2)
    {
        cout << "Площадь figure1 больше, чем площадь figure2" << endl;
    }
    else
    {
        cout << "Площадь figure2 больше, чем площадь figure1" << endl;
    }

    if (p1 == p2)
    {
        cout << "Периметры равны" << endl;
    }
    else if (p1 > p2)
    {
        cout << "Периметр figure1 больше, чем периметр figure2" << endl;
    }
    else
    {
        cout << "Периметр figure2 больше, чем периметр figure1" << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Figure *kv1 = new Figure;
    Figure* kv2 = new Figure;
    read(kv1);
    read(kv2);
    comparisson(kv1, kv2);
}