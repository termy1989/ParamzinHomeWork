#include <iostream>
#include <string>
#include <vector>
#include <set>

using address = std::pair<std::string, std::string>;
using fish = std::pair<std::string, address>;

void input(std::set<fish> &fishList)
{
    int count;
    std::string name, place, tel;
    std::cout << "Сколько рыб хотите добавить: ";
    std::cin >> count;

    for (int i = 0; i < count; i++)
    {
        std::cout << "Введите имя рыбы: ";
        std::cin >> name;
        std::cout << "Введите город: ";
        std::cin >> place;
        std::cout << "Введите телефон: ";
        std::cin >> tel;
        fish tmp1;
        address tmp2;
        tmp2.first = place;
        tmp2.second = tel;
        tmp1.first = name;
        tmp1.second = tmp2;
        fishList.insert(tmp1);
    }
}

void find(std::set<fish>& fishList, std::string name)
{
    if (!fishList.empty())
    {
        bool exist = false;
        for (const auto& fish : fishList)
        {
            if (fish.first == name)
            {
                std::cout << fish.second.first
                    << ", телефон "
                    << fish.second.second << std::endl;
                exist = true;
            }
        }
        if (!exist)
        {
            std::cout << "Такой записи в справочнике не содержится!\n";
        }
    }
    else
    {
        std::cout << "Список пуст!" << std::endl;
    }
}

void del(std::set<fish>& fishList, std::string name)
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
            std::cout << "Такой записи в справочнике не содержится!\n";
        }
    }
    else
    {
        std::cout << "Список пуст!" << std::endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    std::set<fish> fishList;
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