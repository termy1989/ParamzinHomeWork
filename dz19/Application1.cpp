// Application2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>

void input(std::map<std::string, std::string>& fishList)
{
    int count;
    std::string name, place;
    std::cout << "Сколько рыб хотите добавить: ";
    std::cin >> count;

    for (int i = 0; i < count; i++)
    {
        std::cout << "Введите имя рыбы: ";
        std::cin >> name;
        std::cout << "Введите место обитания: ";
        std::cin >> place;

        fishList[name] = place;
    }
}

void find(std::map<std::string, std::string>& fishList, std::string name)
{
    if (!fishList.empty())
    {
        bool exist = false;
        for (const auto& fish : fishList)
        {
            if (fish.first == name)
            {
                std::cout << "Обитает в " << fishList[name] << std::endl;
                fish.second;
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

void del(std::map<std::string, std::string>& fishList, std::string name)
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
    std::map<std::string, std::string> fishList;
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
