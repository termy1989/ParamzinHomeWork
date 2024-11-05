#include "MyClass.h"
#include <iostream>

class Person::ProtectedData {

public:
    explicit ProtectedData() {
        name = "Alex";
        experience = 10;
        health = 3;
        speed = 5;
        damage = 20;
    }
    std::string name;
    int experience;
    float speed;
    int health;
    float damage;
};

class Fairy::PrivateData {

public:
    explicit PrivateData()
    {
        magicPower = 1.5;
    }
    float magicPower;
};

class Golum::PrivateData {

public:
    explicit PrivateData()
    {
        agility = 28;
    }
    int agility;
};

class Vampire::PrivateData {

public:
    explicit PrivateData()
    {
        darkPower = 50.45;
    }
    double darkPower;
};

class StoneMan::PrivateData {

public:
    explicit PrivateData()
    {
        armor = 5;
    }
    int armor;
};

class StoneManV2::PrivateData {

public:
    explicit PrivateData()
    {
        firePower = 555.5;
    }
    float firePower;
};

Person::~Person() {
    std::cout << "__PRETTY_FUNCTION__" << std::endl;
}

Person::Person()
    : m_pData(
        std::make_unique<ProtectedData>()
    )
{
}

void Person::setName(std::string newName)
{
    m_pData->name = newName;
}

void Person::setExpirience(int newExpirience)
{
    m_pData->experience = newExpirience;
}

void Person::setDamage(float newDamage)
{
    m_pData->damage = newDamage;
}

void Person::Person::setSpeed(float newSpeed)
{
    m_pData->speed = newSpeed;
}

void Person::setHealth(int newHealth)
{
    m_pData->health = newHealth;
}

Fairy::Fairy() : Person(), m_pPrivateData(std::make_unique<PrivateData>()) {
}

Fairy::~Fairy() {
}

Golum::Golum() : Person(), m_pPrivateData(std::make_unique<PrivateData>()) {
}

Golum::~Golum() {
}

Vampire::Vampire() : Person(), m_pPrivateData(std::make_unique<PrivateData>()) {
}

Vampire::~Vampire() {
}

StoneMan::StoneMan() : Person(), m_pPrivateData(std::make_unique<PrivateData>()) {
}

StoneMan::~StoneMan() {
}

StoneManV2::StoneManV2() : StoneMan(), m_pPrivateData(std::make_unique<PrivateData>()) {
}

StoneManV2::~StoneManV2() {
}


void Fairy::infoPerson() const {

    if (nullptr == m_pData) {
        return;
    }

    std::cout << m_pData->name << ", "
        << m_pData->experience
        << " ex, " << m_pData->speed
        << " sp, " << m_pData->health << " hp, "
        << m_pData->damage << " dmg, "
        << m_pPrivateData->magicPower << " mpower.\n";
}

void Golum::infoPerson() const {

    if (nullptr == m_pData) {
        return;
    }

    std::cout << m_pData->name << ", "
        << m_pData->experience
        << " ex, " << m_pData->speed
        << " sp, " << m_pData->health << " hp, "
        << m_pData->damage << " dmg, "
        << m_pPrivateData->agility << " agility.\n";
}

void Vampire::infoPerson() const {

    if (nullptr == m_pData) {
        return;
    }

    std::cout << m_pData->name << ", "
        << m_pData->experience
        << " ex, " << m_pData->speed
        << " sp, " << m_pData->health << " hp, "
        << m_pData->damage << " dmg, "
        << m_pPrivateData->darkPower << " darkPower.\n";
}

void StoneMan::infoPerson() const {

    if (nullptr == m_pData) {
        return;
    }

    std::cout << m_pData->name << ", "
        << m_pData->experience
        << " ex, " << m_pData->speed
        << " sp, " << m_pData->health << " hp, "
        << m_pData->damage << " dmg, "
        << m_pPrivateData->armor << " armor.\n";
}

void StoneManV2::infoPerson() const {

    if (nullptr == m_pData) {
        return;
    }

    std::cout << m_pData->name << ", "
        << m_pData->experience
        << " ex, " << m_pData->speed
        << " sp, " << m_pData->health << " hp, "
        << m_pData->damage << " dmg, "
        << m_pPrivateData->firePower << " firePower.\n";
}