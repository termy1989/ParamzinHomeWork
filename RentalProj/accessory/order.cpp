#include "order.h"

// конструктор
Order::Order(QObject *parent) : QObject(parent) {}

// первичный ключ
quint64 Order::getPk() const
{
    return mPk;
}
void Order::setPk(quint64 newPk)
{
    mPk = newPk;
}

// наименование товара
const QString &Order::getProductName() const
{
    return mProductName;
}
void Order::setProductName(const QString &newProductName)
{
    mProductName = newProductName;
}

// количество товара
quint32 Order::getCount() const
{
    return mCount;
}
void Order::setCount(quint32 newCount)
{
    mCount = newCount;
}

// стоимость аренды за первые три дня
double Order::getCost3() const
{
    return mCost3;
}
void Order::setCost3(double newCost)
{
    mCost3 = newCost;
}

// стоимость аренды в последующие дни
double Order::getCost() const
{
    return mCost;
}
void Order::setCost(double newCost)
{
    mCost = newCost;
}

// имя клиента
const QString &Order::getCustomerName() const
{
    return mCustomerName;
}
void Order::setCustomerName(const QString &newCustomerName)
{
    mCustomerName = newCustomerName;
}

// начало аренды
const QDate &Order::getStartDate() const
{
    return mStartDate;
}
void Order::setStartDate(const QDate &newStartDate)
{
    mStartDate = newStartDate;
}

// конец аренды
const QDate &Order::getEndDate() const
{
    return mEndDate;
}
void Order::setEndDate(const QDate &newEndDate)
{
    mEndDate = newEndDate;
}
