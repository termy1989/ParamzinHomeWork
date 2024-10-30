
#include <iostream>

using namespace std;

class ArrayContainer {

private:
    int *array;
    int size;

public:

    ArrayContainer()
    {
    }

    void inputData(int* array, int size)
    {
        this->array = array;
        this->size = size;
    }

    int* getArray() { return this->array; }
    int getSize() { return this->size; }

    void showData()
    {
        
        if (array != NULL)
        {
            cout << "Элементы: ";
            for (int i = 0; i < this->size; i++)
            {
                cout << this->array[i];
                cout << " ";
            }
        }
        else
        {
            cout << "Элементы отсутствуют!";
        }
        cout << endl;
    }

    bool isElemInArray(int elem)
    {
        for (int i = 0; i < this->size; i++)
        {
            if (elem == this->array[i])
            {
                return true;
            }
        }
        return false;
    }

    int getElemPosition(int elem)
    {
        for (int i = 0; i < this->size; i++)
        {
            if (elem == this->array[i])
            {
                return i;
            }
        }
        return -1;
    }

    void pushBack(int value)
    {
        this->size++;
        this->array + size;
        this->array[size - 1] = value;
    }

    void pushBack(ArrayContainer array)
    {
        int a;
    }

    void pushFront(int value)
    {
        this->size++;
        this->array--;
        this->array[0] = value;
    }

    void pushOnSelectedPos(int value, int pos)
    {
        this->size++;
        int* newArray = new int[this->size + 1];
        for (int i = 0; i < pos; i++)
        {
            newArray[i] = this->array[i];
        }
        newArray[pos] = value;
        for (int i = pos + 1; i < size; i++)
        {
            newArray[i] = this->array[i];
        }
        array = newArray;
        delete[] newArray;
    }
};

ArrayContainer intersecData(ArrayContainer &dataOne, ArrayContainer &dataSecond)
{
    int* tmp = new int(dataOne.getSize() + dataSecond.getSize());
    int k = 0;
    for (int i = 0; i < dataOne.getSize(); i++)
    {
        for (int j = 0; j < dataSecond.getSize(); j++)
        {
            if (dataOne.getArray()[i] == dataSecond.getArray()[j])
            {
                tmp[k] = dataOne.getArray()[i];
                k++;
            }
        }
    }
    ArrayContainer* arrayContainer = new ArrayContainer();
    arrayContainer->inputData(tmp, k);
    return *arrayContainer;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int *array, n, tmp;
    ArrayContainer* arrayContainer = new ArrayContainer();
    cout << "Введите размер: ";
    cin >> n;
    cout << endl;
    array = new int[n];
    cout << "Введите элементы: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << endl;
    arrayContainer->inputData(array, n);
    arrayContainer->showData();
    cout << endl;
    cout << "Введите число: ";
    cin >> tmp;
    cout << endl;
    if (arrayContainer->isElemInArray(tmp))
    {
        cout << 
            "Число присутствует в массиве, его индекс равен " << 
            arrayContainer->getElemPosition(tmp) << endl;
    }
    else
    {
        cout << "Такого числа в массиве нет, " <<
            arrayContainer->getElemPosition(tmp) << endl;
    }
    cout << endl;
    cout << "Введите число: ";
    cin >> tmp;
    cout << endl;
    arrayContainer->pushBack(tmp);
    cout << "Вставка в конец" << endl;
    arrayContainer->showData();
    cout << endl;
    arrayContainer->pushFront(tmp);
    cout << "Вставка в начало" << endl;
    arrayContainer->showData();
    cout << endl;

    int index;
    cout << endl;
    cout << "Введите позицию: ";
    cin >> index;
    cout << endl;
    arrayContainer->pushOnSelectedPos(tmp, index);
    cout << "Вставка в позицию " << index <<endl;
    arrayContainer->showData();
    cout << endl;

    int *array1, *array2, n1, n2;
    ArrayContainer arrayContainerIntersec;
    ArrayContainer *a1 = new ArrayContainer();
    ArrayContainer *a2 = new ArrayContainer();

    cout << "Введите размер 1: ";
    cin >> n1;
    cout << endl;
    array1 = new int[n1];
    cout << "Введите элементы 1: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> array1[i];
    }
    cout << endl;
    a1->inputData(array1, n1);

    cout << "Введите размер 2: ";
    cin >> n2;
    cout << endl;
    array2 = new int[n2];
    cout << "Введите элементы 1: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> array2[i];
    }
    cout << endl;
    a2->inputData(array2, n2);

    arrayContainerIntersec = intersecData(*a1, *a2);
    arrayContainerIntersec.showData();
}