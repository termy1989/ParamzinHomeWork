#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // --- Задание 1 ---

    // вводим число
    int arr[10], n, a, k = 0;

    //while (n < 0 || n > 9999999999)
    //{
        cout << "Введите число: ";
        cin >> n;
        cout << endl;
    //}


    // заполняем массив
    a = n;
    while (a != 0 ) {
        arr[k] = a % 10;
        a /= 10;
        k++;
    }

    // проверяем
    bool flag = true;
    for (int i = 0; i < k/2; i++) {
        if (arr[i] != arr[k - i - 1])
            flag = false;
    }
    (flag)? cout <<  "Палиндром" : cout << "Не палиндром";

    cout << endl;
    cout << endl;

    // --- Задание 2, 3, 4 ---

    int arr2[10], n2, max, min, i_max, i_min, c;
    //while (n2 < 0 || n2 >= 10) {
        cout << "Размер массива: ";
        cin >> n2;
    //}
    cout << "Элементы массива: ";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    cout << endl;
    cout << endl;

    max = arr2[0];
    min = arr2[0];
    for (int i = 0; i < n2; i++) {
        if (arr2[i] > max) {
            max = arr2[i];
            i_max = i;
        }
        if (arr2[i] < min) {
            min = arr2[i];
            i_min = i;
        }
    }

    cout << "Максимальный элемент: " << max << endl;
    cout << "Минимальный элемент: " << min << endl;
    cout << "Индекс максимального элемента: " << i_max << endl;
    cout << "Индекс минимального элемента: " << i_min << endl;
    cout << "Число вместо максимального элемента: ";
    cin >> c;
    arr2[i_max] = c;
    cout << "Получившийся массив: ";
    for (int i = 0; i < n2; i++)
        cout << arr2[i] << " ";
    cout << endl;
    cout << endl;

    // --- Задание 5 ---

    int arr3[10], n3, max1, min1, i_max1, i_min1, tmp;
    //while (n3 < 0 || n3 >= 10) {
        cout << "Размер массива: ";
        cin >> n3;
    //}
    cout << "Элементы массива: ";
    for (int i = 0; i < n3; i++)
        cin >> arr3[i];

    cout << endl;
    cout << endl;

    max1 = arr3[0];
    min1 = arr3[0];
    for (int i = 0; i < n3; i++) {
        if (arr3[i] > max1) {
            max1 = arr3[i];
            i_max1 = i;
        }
        if (arr3[i] < min1) {
            min1 = arr3[i];
            i_min1 = i;
        }
    }
    
    tmp = arr3[i_max1];
    arr3[i_max1] = arr3[i_min1];
    arr3[i_min1] = tmp;
    
    arr2[i_max] = c;
    cout << "Получившийся после перестановок min и max массив: ";
    for (int i = 0; i < n3; i++)
        cout << arr3[i] << " ";
}