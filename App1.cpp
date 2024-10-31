// App1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

class Point2D {

protected:
    int x;
    int y;

public:
    Point2D(int newX = 0, int newY = 0)
    {
        x = newX;
        y = newY;
    }
    int getX() { return x; }
    int getY() { return y; }
    void setX(int newX) { x = newX; }
    void setY(int newY) { y = newY; }
};

class Point3D : public Point2D
{
protected:
    int z;
    
public:
    Point3D(int newX = 0, int newY = 0, int newZ = 0) : Point2D(newX, newY)
    {
        z = newZ;
    }
    int getZ() { return z; }
    void setZ(int newZ) { z = newZ; }
};

double rasst(Point2D *a, Point2D *b)
{
    return sqrt(pow(a->getX() - b->getX(), 2) + pow(a->getY() - b->getY(), 2));
}

double rasst(Point3D* a, Point3D* b)
{
    return sqrt(pow(a->getX() - b->getX(), 2) + pow(a->getY() - b->getY(), 2) + pow(a->getZ() - b->getZ(), 2));
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    Point2D *k = new Point2D(1, 1);
    Point2D *l = new Point2D(5, 5);
    cout << "Расстояние 2D = " << rasst(k, l) << endl;
    
    Point3D* a = new Point3D(1, 1, 1);
    Point3D* b = new Point3D(5, 5, 5);
    cout << "Расстояние 3D = " << rasst(a, b) << endl;
    
    Point2D* array[] = { new Point2D(1, 1), new Point2D(5, 5),
                           new Point2D(2, 2), new Point2D(4, 4),
                             new Point2D(7, 7), new Point2D(8, 8) };
    
    int n = sizeof(array) / sizeof(array[0]);
    float res[10];
    int index = 0;
    for (int i = 0; i < n; i += 2)
    {
        res[index] = rasst(array[i], array[i + 1]);
        index++;
    }
    cout << "Расстояния между парными точками: ";
    for (int i = 0; i < index; i++)
    {
        cout << res[i] << " ";
    }
    getchar();
}