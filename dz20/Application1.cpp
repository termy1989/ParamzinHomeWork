// Application1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include "Application1.h"

using pairOfFish = std::pair<std::string, std::string>;

void input(std::set<pairOfFish>& fishList)
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
        fishList.insert(tmp);
    }
}

void find(std::set<pairOfFish>& fishList, std::string name)
{
    if (!fishList.empty())
    {
        bool exist = false;
        for (pairOfFish n : fishList)
        {
            if (n.first == name)
            {
                std::cout << "Обитает в " << n.second << "\n";
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

void del(std::set<pairOfFish>& fishList, std::string name)
{
    if (!fishList.empty())
    {
        bool exist = false;
        for (auto it = fishList.begin(); it != fishList.end();)
        {
            if (it->first == name)
            {
                it = fishList.erase(it);
                exist = true;
                std::cout << "Удалено\n";
            }
            else
            {
                ++it;
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
    std::set<pairOfFish> fishList;
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
