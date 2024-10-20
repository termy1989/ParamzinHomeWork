#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    //rand % 100;
    
    // --- Задание 1 ---

    double arr[100];
    int n;

    cout << "Введите количество животных: ";
    cin >> n;
    cout << endl;
    cout << "Введите вес животных: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Изначальный массив: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    double tmp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                //Меняем местами элемент массива с индексом j и следующий за ним
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    
    cout << "Отсортированный массив веса животных: ";
        for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;

    // --- Задание 2 ---

    double arr1[100];
    int n1;

    cout << "Введите количество животных: ";
    cin >> n1;
    cout << endl;
    cout << "Введите вес животных: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << endl;
    cout << "Изначальный массив: ";
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    double tmp1;
    for (int i = 0; i < n1 - 1; i++)
    {
        for (int j = 0; j < n1 - 1 - i; j++)
        {
            if (arr1[j] < arr1[j + 1])
            {
                //Меняем местами элемент массива с индексом j и следующий за ним
                tmp1 = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = tmp1;
            }
        }
    }
    
    cout << "Отсортированный массив веса животных: ";
        for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << endl;

    // --- Задание 3 ---

    double arr2[100];
    int n2;

    cout << "Введите количество животных: ";
    cin >> n2;
    cout << endl;
    cout << "Введите вес животных: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    cout << endl;
    cout << "Изначальный массив: ";
    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    
    double tmp2;
    for (int i = 0; i < n2 - 1; i++)
    {
        for (int j = 0; j < n2 - 1 - i; j++)
        {
            if (arr2[j] > arr2[j + 1])
            {
                //Меняем местами элемент массива с индексом j и следующий за ним
                tmp2 = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = tmp2;
            }
        }
    }
    
    cout << "Отсортированный массив веса животных: ";
    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    cout << "Сколько элементов вы хотите добавить?" << endl;
    int add;
    cin >> add;
    cout << endl;
    cout << "Введите вес животных: ";
    for (int i = n2; i < n2 + add; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n2 + add - 1; i++)
    {
        for (int j = 0; j < n2 + add - 1 - i; j++)
        {
            if (arr2[j] > arr2[j + 1])
            {
                //Меняем местами элемент массива с индексом j и следующий за ним
                tmp2 = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = tmp2;
            }
        }
    }
    cout << endl;
    cout << "Новые измерения добавлены, полученные изменения: ";
    for (int i = 0; i < n2 + add; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    cout << endl;
    
    // --- Задание 4 ---

    double arr3[100][100];
    int n3;

    cout << "Введите размерность матрицы: ";
    cin >> n3;
    cout << endl;
    cout << "Введите элементы:" << endl;
    for (int i = 0; i < n3; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> arr3[i][j];
        }
    }
    cout << endl;
    cout << "Изначальный массив:" << endl;
    for (int i = 0; i < n3; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < n3; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            if (i < j)
                sum += arr3[i][j];
        }
    }
    cout << "Сумма элементов над главной диагональю: " << sum;
    cout << endl;
    cout << endl;

    // --- Задание 4 ---

    double arr4[100][100];
    int n4;

    cout << "Введите размерность матрицы: ";
    cin >> n4;
    cout << endl;
    for (int i = 0; i < n4; i++)
    {
        for (int j = 0; j < n4; j++)
        {
            arr4[i][j] = rand() % 10 + 1;
        }
    }
    cout << endl;
    cout << "Изначальный массив:" << endl;
    for (int i = 0; i < n4; i++)
    {
        for (int j = 0; j < n4; j++)
        {
            cout << arr4[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int p = 1;
    for (int i = 0; i < n4; i++)
    {
        for (int j = 0; j < n4; j++)
        {
            if (j == n4 - i - 1)
                p *= arr4[i][j];
        }
    }
    cout << "Произведение элементов побочной диагонали: " << p;

    cout << endl;
    cout << endl;
}