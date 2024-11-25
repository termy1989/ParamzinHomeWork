// Application2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <tuple>

struct Fish
{
    std::string name;
    std::string place;
    std::string tel;
};

void input(std::vector<Fish>& fishList)
{
    int count;
    Fish tmp;
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
        tmp.name = name;
        tmp.place = place;
        tmp.tel = tel;
        fishList.push_back(tmp);
    }
}

void find(std::vector<Fish>& fishList, std::string name)
{
    if (fishList.size() > 0)
    {
        bool exist = false;
        for (unsigned long i = 0; i < fishList.size(); i++)
        {
            if (fishList.at(i).name == name)
            {
                std::cout << fishList.at(i).place << ", телефон базы - " << fishList.at(i).tel << std::endl;
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

void del(std::vector<Fish>& fishList, std::string name)
{
    if (fishList.size() > 0)
    {
        bool exist = false;
        for (unsigned long i = 0; i < fishList.size(); i++)
        {
            if (fishList.at(i).name == name)
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
    std::vector<Fish> fishList;
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
