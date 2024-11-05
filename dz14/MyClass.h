#pragma once

#include <string>
#include <memory>

class Person
{
public:
    Person();

    void setName(std::string newName);
    void setExpirience(int newExpirience);
    void setDamage(float newDamage);
    void setSpeed(float newSpeed);
    void setHealth(int newHealth);
    virtual void infoPerson() const = 0;

    virtual ~Person();

protected:
    class ProtectedData;
    std::unique_ptr<ProtectedData> m_pData;
};

class Golum final : public Person
{
public:
    explicit Golum();
    void infoPerson() const override;

    ~Golum() override;

private:
    class PrivateData;
    std::unique_ptr<PrivateData> m_pPrivateData;
};

class Fairy final: public Person
{
public:
    explicit Fairy();
    void infoPerson() const override;

    ~Fairy() override;

private:
    class PrivateData;
    std::unique_ptr<PrivateData> m_pPrivateData;
};

class Vampire final: public Person
{
public:
    explicit Vampire();
    void infoPerson() const override;

    ~Vampire() override;

private:
    class PrivateData;
    std::unique_ptr<PrivateData> m_pPrivateData;
};

class StoneMan : public Person
{
public:
    explicit StoneMan();
    void infoPerson() const override;

    ~StoneMan() override;

private:
    class PrivateData;
    std::unique_ptr<PrivateData> m_pPrivateData;
};

class StoneManV2 : public StoneMan
{
public:
    explicit StoneManV2();
    void infoPerson() const override;

    ~StoneManV2() override;

private:
    class PrivateData;
    std::unique_ptr<PrivateData> m_pPrivateData;
};