#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

namespace dz1 {
    void read(double* rubl);
    double* convert(double* rubl);
    void show(double* dubl);
}

namespace dz2 {
    void read(int arr[], int size);
    int count6(int arr[], int size);
    void show(int* count);
}

namespace dz3 {
    void read(int arr[], int size);
    int count6(int arr[], int size);
    void show(int arr[], int size);
}

namespace dz4 {
    void read(int arr[], int size);
    int* add(int arr[], int size, int val);
    void show(int arr[], int size);
}

namespace dz1 {
    void read(double* rubl)
    {
        while (0 >= *rubl)
        {
            cout << "Введите сумму в рублях: ";
            cin >> *rubl;
            cout << endl;
        }
    }
    double* convert(double* rubl)
    {
        *rubl = *rubl * 3.14;
        return rubl;
    }
    void show(double* dubl)
    {
        cout << "Сумма в дублонах: " << fixed << setprecision(2) << *dubl << endl;
    }
}

namespace dz2 {
    void read(int arr[], int size)
    {
        cout << "Элементы массива: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << endl;
    }
    int count6(int arr[], int size)
    {
        int cnt = 0;
        for (int i = 0; i < size; i++)
        {
            if (0 == arr[i] % 6)
                cnt++;
        }
        return cnt;
    }
    void show(int* count)
    {
        cout << "Количество элементов, кратных 6: " << *count << endl;
    }
}

namespace dz3 {
    void read(int arr[], int size)
    {
        cout << "Элементы массива: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << endl;
    }
    void zamena(int arr[], int size)
    {
        int tmp;
        for (int i = 0; i < size / 2; i++)
        {
            tmp = arr[i];
            arr[i] = arr[size - 1 - i];
            arr[size - 1 - i] = tmp;
        }
        cout << endl;
    }
    void show(int arr[], int size)
    {
        cout << "Элементы перевернутого массива: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

    namespace dz4 {
    void read(int arr[], int size)
    {
        cout << "Элементы массива: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << endl;
    }
    int* add(int arr[], int size, int val)
    {
        int* new_arr = new int[size + 1];
        for (int i = 0; i < size; i++)
        {
            new_arr[i] = arr[i];
        }
        delete[] arr;
        new_arr[size] = val;
        return new_arr;
    }
    void show(int arr[], int size)
    {
        cout << "Элементы массива после добавления: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

    namespace dz4_1 {
        void read(int arr[], int size)
        {
            cout << "Элементы массива: ";
            for (int i = 0; i < size; i++)
            {
                cin >> arr[i];
            }
            cout << endl;
        }
        int* remove(int arr[], int size, int index)
        {
            int* new_arr = new int[size - 1];


            {
                for (int i = 0; i < size - 1; i++)
                {
                    if (0 == index)
                    {
                        new_arr[i] = arr[i + 1];
                    }
                    else
                    {
                        new_arr[i] = arr[i];
                    }
                }
            }
            delete[] arr;
            return new_arr;
        }
        void show(int arr[], int size)
        {
            cout << "Элементы массива после удаления: ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    namespace dz4_2 {
        void read(int arr[], int size)
        {
            cout << "Элементы массива: ";
            for (int i = 0; i < size; i++)
            {
                cin >> arr[i];
            }
            cout << endl;
        }
        int* remove(int arr[], int size, int index)
        {
            int* new_arr = new int[size - 1];
            for (int i = 0; i < index; i++)
            {
                new_arr[i] = arr[i];
            }
            for (int i = index + 1; i < size; i++)
            {
                new_arr[i - 1] = arr[i];
            }
            delete[] arr;
            return new_arr;
        }
        void show(int arr[], int size)
        {
            cout << "Элементы массива после удаления: ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    namespace dz4_3 {
        void read(int arr[], int size)
        {
            cout << "Элементы массива: ";
            for (int i = 0; i < size; i++)
            {
                cin >> arr[i];
            }
            cout << endl;
        }
        int min(int a, int b)
        {
            if (a < b)
            {
                return a;
            }
            else
            {
                return b;
            }
        }
        int* cross(int arr1[], int size1, int arr2[], int size2)
        {
            int* new_arr = new int[min(size1, size2) + 1];
            int index = 1;
            for (int i = 0; i < size1; i++)
            {
                for (int j = 0; j < size2; j++)
                {
                    if (arr1[i] == arr2[j])
                    {
                        new_arr[index] = arr1[i];
                        index++;
                    }
                }
            }
            new_arr[0] = index;

            delete[] arr1;
            delete[] arr2;
            return new_arr;
        }
        void show(int arr[])
        {
            cout << "Пересечение: ";
            for (int i = 1; i < arr[0]; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    namespace dz4_4 {
        void read(int arr[], int size)
        {
            cout << "Элементы массива: ";
            for (int i = 0; i < size; i++)
            {
                cin >> arr[i];
            }
            cout << endl;
        }
        int* cross(int arr1[], int size1, int arr2[], int size2)
        {
            int* new_arr = new int[size1 + size2];
            int index = 1;
            bool flag;

            for (int i = 0; i < size1; i++)
            {
                flag = false;
                for (int j = 0; j < size2; j++)
                {
                    if (arr1[i] == arr2[j])
                    {
                        flag = true;
                    }
                }
                if (!flag)
                {
                    new_arr[index] = arr1[i];
                    index++;
                }
            }

            for (int i = 0; i < size2; i++)
            {
                flag = false;
                for (int j = 0; j < size1; j++)
                {
                    if (arr2[i] == arr1[j])
                    {
                        flag = true;
                    }
                }
                if (!flag)
                {
                    new_arr[index] = arr2[i];
                    index++;
                }
            }


            new_arr[0] = index;
            delete[] arr1;
            delete[] arr2;
            return new_arr;
        }
        void show(int arr[])
        {
            cout << "Не встречающиеся элементы: ";
            for (int i = 1; i < arr[0]; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

int main()
{
    setlocale(LC_ALL, "Russian");

    // --- Задание 1 ---

    double* value = new double;
    dz1::read(value);
    value = dz1::convert(value);
    dz1::show(value);
    delete value;
    cout << endl;

    // --- Задание 2 ---

    int* arr1 = new int[10];
    int* count = new int;
    int size1;
    cout << "Размер массива: ";
    cin >> size1;
    cout << endl;
    dz2::read(arr1, size1);
    *count = dz2::count6(arr1, size1);
    dz2::show(count);
    delete count;
    delete[] arr1;
    cout << endl;

    // --- Задание 3 ---

    cout << "Размер массива: ";
    int size2;
    cin >> size2;
    int* arr2 = new int[size2];
    dz3::read(arr2, size2);
    dz3::zamena(arr2, size2);
    dz3::show(arr2, size2);
    delete[] arr2;
    cout << endl;

    // --- Задание 4 ---

    cout << "Размер массива: ";
    int size3;
    cin >> size3;
    int* arr3 = new int[size3];
    dz4::read(arr3, size3);
    int val;
    cout << "Новый элемент: ";
    cin >> val;
    cout << endl;
    arr3 = dz4::add(arr3, size3, val);
    dz4::show(arr3, size3 + 1);
    delete[] arr3;

    // --- Задание 1-1 ---

    cout << "Размер массива: ";
    int size4;
    cin >> size4;
    int* arr4 = new int[size4];
    dz4_1::read(arr4, size4);
    int index;
    cout << "Какой элемент хотите удалить? (0 - начальный, 1 - конечный) ";
    cin >> index;
    cout << endl;
    arr4 = dz4_1::remove(arr4, size4, index);
    dz4_1::show(arr4, size4 - 1);
    delete[] arr4;
    cout << endl;

    // --- Задание 1-2 ---

    cout << "Размер массива: ";
    int size5;
    cin >> size5;
    int* arr5 = new int[size5];
    dz4_2::read(arr5, size5);
    int index;
    cout << "Какой элемент хотите удалить? (нумерация с ноля!) ";
    cin >> index;
    cout << endl;
    arr5 = dz4_2::remove(arr5, size5, index);
    dz4_1::show(arr5, size5 - 1);
    delete[] arr5;
    cout << endl;

    // --- Задание 1-3 ---
    
    cout << "Размер первого массива: ";
    int size6_1;
    cin >> size6_1;
    cout << endl;
    int* arr6_1 = new int[size6_1];
    dz4_3::read(arr6_1, size6_1);
    cout << "Размер второго массива: ";
    int size6_2;
    cin >> size6_2;
    cout << endl;
    int* arr6_2 = new int[size6_2];
    dz4_3::read(arr6_2, size6_2);
    cout << endl;
    arr6_1 = dz4_3::cross(arr6_1, size6_1, arr6_2, size6_2);
    dz4_3::show(arr6_1);
    delete[] arr6_1;
    cout << endl;

    // --- Задание 1-4 ---

    cout << "Размер первого массива: ";
    int size7_1;
    cin >> size7_1;
    cout << endl;
    int* arr7_1 = new int[size7_1];
    dz4_4::read(arr7_1, size7_1);
    cout << "Размер второго массива: ";
    int size7_2;
    cin >> size7_2;
    cout << endl;
    int* arr7_2 = new int[size7_2];
    dz4_4::read(arr7_2, size7_2);
    cout << endl;
    arr7_1 = dz4_4::cross(arr7_1, size7_1, arr7_2, size7_2);
    dz4_4::show(arr7_1);
    delete[] arr7_1;
    cout << endl;
}