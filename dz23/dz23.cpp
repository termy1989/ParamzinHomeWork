
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    const int value = 1426145806;
    std::cout << "Исходное число: " << value << std::endl;
    std::cout << std::endl;
    
    // массив байтов числа
    unsigned char byteArray[4];

    // цикл по 4-м байтам (32-м битам) числа 
    int j = 0, k = 0;
    for (int i = 0; i < 32; i++) {

        // считываем каждый бит числа справа налево и записываем очередной байт числа
        ((bool((1 << i) & value)) ? byteArray[j] |= (1 << k) : byteArray[j] &= ~(1 << k));
        k++;

        // отделяем каждый байт
        if ((i + 1) % 8 == 0)
        {
            k = 0;
            j++;
        }
    }

    std::cout << "Первый байт справа: " << (int)byteArray[0] << std::endl;
    std::cout << "Второй байт справа: " << (int)byteArray[1] << std::endl;
    std::cout << "Первый байт слева: " << (int)byteArray[3] << std::endl;
    std::cout << "Второй байт слева: " << (int)byteArray[2] << std::endl;
    std::cout << std::endl;
    std::cout << "Проверка на четность: ";
    std::cout << ((value & 1) ? "Нечетное" : "Четное") << std::endl;
    return 0;
}