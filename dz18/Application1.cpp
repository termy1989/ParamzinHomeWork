// Application1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <tuple>

using pairOfFish = std::pair<std::string, std::string>;

void input(std::vector<pairOfFish>& fishList)
{
    int count;
    pairOfFish tmp;
    std::string name, place;
    std::cout << "Сколько рыб хотите добавить: ";
    std::cin >> count;

    for (int i = 0; i < count; i++)
    {
        std::cout << "Введите имя рыбы: ";
        std::cin >> name;
        std::cout << "Введите место обитания: ";
        std::cin >> place;
        tmp.first = name;
        tmp.second = place;
        fishList.push_back(tmp);
    }
}

void find(std::vector<pairOfFish>& fishList, std::string name)
{
    if (fishList.size() > 0)
    {
        bool exist = false;
        for (unsigned long i = 0; i < fishList.size(); i++)
        {
            if (fishList.at(i).first == name)
            {
                std::cout << "Обитает в " << fishList.at(i).second << "\n";
                exist = true;
            }
        }
        if (!exist)
        {
            std::cout << "Такой записи в словаре не содержится!\n";
        }
    }
    else
    {
        std::cout << "Словарь пуст!" << std::endl;
    }
}

void del(std::vector<pairOfFish>& fishList, std::string name)
{
    if (fishList.size() > 0)
    {
        bool exist = false;
        for (unsigned long i = 0; i < fishList.size(); i++)
        {
            if (fishList.at(i).first == name)
            {
                std::cout << "Удалено\n";
                fishList.erase(fishList.begin() + i);
                exist = true;
            }
        }
        if (!exist)
        {
            std::cout << "Такой записи в словаре не содержится!\n";
        }
    }
    else
    {
        std::cout << "Словарь пуст!" << std::endl;
    }
}



int main()
{
    setlocale(LC_ALL, "Russian");
    std::vector<pairOfFish> fishList;
    int inp = 0;
    std::cout << "===Программа справочник по обитателям вод===\n";
    while (inp != 3)
    {
        std::cout << "Выбери одну из кнопок программы\n";
        std::cout << "1 - Добавить в справочник\n";
        std::cout << "2 - Найти в справочнике\n";
        std::cout << "3 - Выйти\n";
        std::cout << "4 - Удалить запись\n";

        std::cin >> inp;
        std::string name;
        switch (inp)
        {
        case 1:
            input(fishList);
            break;
        case 2:
            std::cout << "Поиск рыбы по имени: ";
            std::cin >> name;
            find(fishList, name);
            break;
        case 4:
            std::cout << "Удаление рыбы по имени: ";
            std::cin >> name;
            del(fishList, name);
            break;
        }
    }
}
