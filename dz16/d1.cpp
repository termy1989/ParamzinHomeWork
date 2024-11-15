#include <iostream>

auto read
{ 
    [](int *a, int *b)
    {
        std::cout << "Введите a: ";
        std::cin >> *a;
        std::cout << std::endl << "Введите b: ";
        std::cin >> *b;
        std::cout << std::endl;
    } 
};

auto pr{ [](int *a, int *b) { return *(a) * *(b); } };

int main()
{
    setlocale(LC_ALL, "Russian");
    int* a = new int;
    int* b = new int;
    read(a, b); 
    std::cout << pr(a, b);
}