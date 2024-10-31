#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Person {

protected:
    string name;
    int expirience;
    float damage;
    float speed;
    int health;

public:
    Person(string newName)
    {
        name = newName;
        expirience = 10;
        damage = 20;
        speed = 5;
        health = 3;

    }
    string getName() { return name; }
    void setName(string newName) { name = newName; }
    int getExpirience() { return expirience; }
    void setExpirience(int newExpirience)
    {
        if (newExpirience < 0)
        {
            expirience = 0;
        }
        else
        {
            expirience = newExpirience;
        }
    }
    float getDamage() { return damage; }
    void setDamage(float newDamage) { damage = newDamage; }
    float getSpeed() { return speed; }
    void setSpeed(float newSpeed)
    {
        if (newSpeed < 0)
        {
            speed = 0;
        }
        else
        {
            speed = newSpeed;
        }
    }
    int getHealth() { return health; }
    void setHealth(int newHealth)
    {
        if (newHealth < 1)
        {
            health = 1;
        }
        else if (newHealth > 12)
        {
            health = 12;
        }
        else
        {
            health = newHealth;
        }
    }

    void incSpeed()
    {
        speed++;
    }
};

class Fairy : public Person {

protected:
    float magicPower;

public:
    Fairy(string newName) : Person(newName)
    {
        magicPower = 1.5;
    }

    float getMagicPower() { return magicPower; }
    void setMagicPower(float newMagicPower) { magicPower = newMagicPower; }
};

class Golum : public Person {

protected:
    int agility;

public:
    Golum(string newName) : Person(newName)
    {
        agility = 28;
    }

    int getAgility() { return agility; }
    void setAgility(int newAgility) { agility = newAgility; }
};

class Vampire : public Person {
    
protected:
    double darkPower;

public:
    Vampire(string newName) : Person(newName)
    {
        darkPower = 50.45;
    }

    double getDarkPower() { return darkPower; }
    void setDarkPower(double newDarkPower) { darkPower = newDarkPower; }
};

class StoneMan : public Person {
    
protected:
    int armor;

public:
    StoneMan(string newName) : Person(newName)
    {
        armor = 5;
    }

    int getArmor() { return armor; }
    void setArmor(int newArmor) { armor = newArmor; }
};

class StoneManV2 : public StoneMan {

protected:
    float firePower;

public:
    StoneManV2(string newName) : StoneMan(newName)
    {
        firePower = 555.5;
    }

    float getFirePower() { return firePower; }
    void setFirePower(float newFirePower) { firePower = newFirePower; }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Person* alex = new Person("Alex");
    Fairy* fairy = new Fairy("Fairy");
    Golum* golum = new Golum("Golum");
    Vampire* vampire = new Vampire("Vampire");
    StoneMan* stoneMan = new StoneMan("StoneMan");
    StoneManV2* stoneManV2 = new StoneManV2("StoneManV2");

    cout << "Персонаж создан!" << endl;
    cout << "Его информация: " << alex->getName() << ", "
        << alex->getExpirience() << " xp, " << alex->getDamage()
        << " dam, " << alex->getSpeed() << " sp, " << alex->getHealth()
        << " hp." << endl;

    cout << "Персонаж создан!" << endl;
    cout << "Его информация: " << fairy->getName() << ", "
        << fairy->getExpirience() << " xp, " << fairy->getDamage()
        << " dam, " << fairy->getSpeed() << " sp, " << fairy->getHealth()
        << " hp, " << fairy->getMagicPower() << " mP." << endl;

    cout << "Персонаж создан!" << endl;
    cout << "Его информация: " << golum->getName() << ", "
        << golum->getExpirience() << " xp, " << golum->getDamage()
        << " dam, " << golum->getSpeed() << " sp, " << golum->getHealth()
        << " hp, " << golum->getAgility() << " a." << endl;

    cout << "Персонаж создан!" << endl;
    cout << "Его информация: " << vampire->getName() << ", "
        << vampire->getExpirience() << " xp, " << vampire->getDamage()
        << " dam, " << vampire->getSpeed() << " sp, " << vampire->getHealth()
        << " hp, " << vampire->getDarkPower() << " dp." << endl;

    cout << "Персонаж создан!" << endl;
    cout << "Его информация: " << stoneMan->getName() << ", "
        << stoneMan->getExpirience() << " xp, " << stoneMan->getDamage()
        << " dam, " << stoneMan->getSpeed() << " sp, " << stoneMan->getHealth()
        << " hp, " << stoneMan->getArmor() << " ar." << endl;

    cout << "Персонаж создан!" << endl;
    cout << "Его информация: " << stoneManV2->getName() << ", "
        << stoneManV2->getExpirience() << " xp, " << stoneManV2->getDamage()
        << " dam, " << stoneManV2->getSpeed() << " sp, " << stoneManV2->getHealth()
        << " hp, " << stoneManV2->getArmor() << " ar, " << stoneManV2->getFirePower() << " fp." << endl;
}