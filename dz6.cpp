#include <iostream>
#include <cmath>
#define PI 3.14

using namespace std;

// задание 1
int fun1(int arr[], int size)
{
    int kol = 0;
    for (int i = 0; i < size; i++)
    {
        if (0 > arr[i])
        {
            kol++;
        }
    }
    return kol;
}

// задание 2
int fun2(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// задание 3
int fun3(int arr[][10], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j > size - i - 1)
            {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

// задание 4
double fun4(double r)
{
    return r*r*PI;
}

// задание 5
void fun5(int a, int b, int c)
{
    if (0 == a)
    {
        cout << "x = " << (-1 * c / b);
    }
    else
    {
        double d = b * b - 4 * a *c;
        
        if (0 > d)
        {
            cout << "нет решения";
        }
        else if (0 == d)
        {
            cout << "x = " << (-1 * b) / (2 * a);
        }
        else
        {
            cout << "x1 = " << ((-1 * b) + sqrt(d)) / (2 * a) << endl;
            cout << "x2 = " << ((-1 * b) - sqrt(d)) / (2 * a);
        }

    }
}

int main()
{

    int arr[10], n;
    cout << "Размер массива: ";
    cin >> n;
    cout << "Элементы массива: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Количество отрицательных значений: " << fun1(arr, n) << endl;
    cout << "Максимальный элемент: " << fun2(arr, n) << endl;
    cout << endl;
    cout << endl;

    int arr2[10][10], n2;
    cout << "Размерность квадратного массива: ";
    cin >> n2;
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    cout << endl;
    cout << "Сумма элементов ниже побочной диагонали: " << fun3(arr2, n2);
    cout << endl;
    cout << endl;

    double r;
    cout << "Радиус круга: ";
    cin >> r;
    cout << endl;
    cout << "Площадь круга: " << fun4(r);
    cout << endl;
    cout << endl;

    int a, b, c;
    cout << "a: ";
    cin >> a;
    cout << endl;
    cout << "b: ";
    cin >> b;
    cout << endl;
    cout << "c: ";
    cin >> c;
    cout << endl;
    cout << endl;
    fun5(a, b, c);
    cout << endl;
}