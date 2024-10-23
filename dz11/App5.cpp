// App1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

class Point {

private:
    int x;
    int y;
public:
    Point(int newX, int newY)
    {
        x = newX;
        y = newY;
    }
    int getX() { return x; }
    int getY() { return y; }
    void setX(int newX) { x = newX; }
    void setY(int newY) { y = newY; }
};

double rasst(Point *a, Point *b)
{
    return sqrt(pow(a->getX() - b->getX(), 2) + pow(a->getY() - b->getY(), 2));
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Point *k = new Point(1, 1);
    Point *l = new Point(5, 5);
    cout << rasst(k, l) << endl;
    getchar();
}