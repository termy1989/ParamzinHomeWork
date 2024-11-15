#include <iostream>

int* a = new int;
int* b = new int;
auto read = [=]() { 
    std::cout << "Введите a: ";
    std::cin >> *a;
    std::cout << std::endl << "Введите b: ";
    std::cin >> *b;
    std::cout << std::endl;
    };
auto pr = [=](){ return (*a) * (*b); };

int main()
{
    setlocale(LC_ALL, "Russian");
    read();
    std::cout << pr() << std::endl;
}