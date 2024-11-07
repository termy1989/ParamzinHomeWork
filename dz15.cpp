#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int min(vector<int>& vector)
{
    int min = vector.at(0);
    int index = 0;
    for (int i = 0; i < vector.size(); i++)
    {
        if (vector.at(i) < min)
        {
            min = vector.at(i);
            index = i;
        }
    }
    return index;
}

int sum(vector<int>& vector)
{
    int sum = 0;
    for (int n : vector)
    {
        sum += n;
    }
    return sum;
}

void bud(vector<int>& vector, int b, int &k)
{
    /*for (int n : vector)
    {
        cout << n << " ";
    }
    cout << endl;*/
    if (sum(vector) > b)
    {
        k++;
        vector.erase(vector.begin() + min(vector));
        bud(vector, b, k);
    }
}

void sort(vector<int>& vector, int v)
{
    int size = vector.size();
    while (size--)
    {
        bool swapped = false;
        for (int i = 0; i < size; i++)
        {
            if (v > 0)
            {
                if (vector.at(i) > vector.at(i + 1))
                {
                    std::swap(vector.at(i), vector.at(i + 1));
                    swapped = true;
                }
            }
            else
            {
                if (vector.at(i) < vector.at(i + 1))
                {
                    std::swap(vector.at(i), vector.at(i + 1));
                    swapped = true;
                }
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    // 1
    int size;
    cout << "Введите количество товаров: ";
    cin >> size;
    cout << endl;
    cout << "Введите товары: ";
    std::vector<int> numbers(size);
    for (int i = 0; i < numbers.size(); i++)
    {
        cin >> numbers.at(i);
    }
    cout << "Итоговая стоимость: " << sum(numbers) << endl;

    // 2
    cout << "Введите бюджет: ";
    int b;
    cin >> b;
    cout << endl;
    int k = 0;
    bud(numbers, b, k);
    cout << "Корзина прошла форматирование: удалено " << k << " товара." << endl;
    cout << "Итоговая стоимость: " << sum(numbers) << endl;

    // 3
    int size2;
    cout << "Введите количество товаров: ";
    cin >> size2;
    cout << endl;
    cout << "Введите товары: ";
    std::vector<int> numbers2(size2);
    for (int i = 0; i < numbers2.size(); i++)
    {
        cin >> numbers2.at(i);
    }

    for (int i = 0; i < numbers2.size(); i++)
    {
        if (numbers2.at(i) > 500)
        {
            numbers2.erase(numbers2.begin() + i);
        }
    }
    cout << "Новая корзина: ";
    for (int n : numbers2)
    {
        cout << n << " ";
    }
    cout << endl;
    cout << "Размер корзины: " << numbers2.size() << endl;

    // 4
    int size3;
    cout << "Введите количество элементов: ";
    cin >> size3;
    cout << endl;
    cout << "Введите элементы: ";
    std::vector<int> numbers3(size3);
    for (int i = 0; i < numbers3.size(); i++)
    {
        cin >> numbers3.at(i);
        if (numbers3.at(i) < 0)
        {
            numbers3.at(i) *= -1;
        }
    }
    cout << endl;
    cout << "Новые элементы: ";
    sort(numbers3, 1);
    for (int n : numbers3)
    {
        cout << n << " ";
    }
    cout << endl;

    // 5
    int size4, size5;
    cout << "Введите количество элементов: ";
    cin >> size4;
    cout << endl;
    cout << "Введите элементы: ";
    std::vector<int> numbers4(size4);
    for (int i = 0; i < numbers4.size(); i++)
    {
        cin >> numbers4.at(i);
    }
    cout << endl;
    cout << "Введите количество элементов: ";
    cin >> size5;
    cout << endl;
    cout << "Введите элементы: ";
    std::vector<int> numbers5(size5);
    for (int i = 0; i < numbers5.size(); i++)
    {
        cin >> numbers5.at(i);
    }
    cout << endl;
    
    std::vector<int> numbers6(size4 + size5);
    numbers6.assign(numbers4.cbegin(), numbers4.cend());
    numbers6.insert(numbers6.end(), numbers5.cbegin(), numbers5.cend());
    sort(numbers6, 0);

    cout << "Новые элементы: ";
    for (int n : numbers6)
    {
        cout << n << " ";
    }
    cout << endl;
    cout << "Новый размер: " << numbers6.size() << endl;
}