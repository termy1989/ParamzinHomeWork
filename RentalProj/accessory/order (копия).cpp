#include "order.h"

// конструктор
Order::Order(QObject *parent) : QObject(parent) {}

// первичный ключ
uint64_t Order::getPk() const
{
    return pk;
}
void Order::setPk(uint64_t newPk)
{
    pk = newPk;
}

// наименование товара
const QString &Order::getProductName() const
{
    return productName;
}
void Order::setProductName(const QString &newProductName)
{
    productName = newProductName;
}

// количество товара
int Order::getCount() const
{
    return count;
}
void Order::setCount(int newCount)
{
    count = newCount;
}

// стоимость аренды за первые три дня
double Order::getCost3() const
{
    return cost3;
}
void Order::setCost3(double newCost)
{
    cost3 = newCost;
}

// стоимость аренды в последующие дни
double Order::getCost() const
{
    return cost;
}
void Order::setCost(double newCost)
{
    cost = newCost;
}

// имя клиента
const QString &Order::getCustomerName() const
{
    return customerName;
}
void Order::setCustomerName(const QString &newCustomerName)
{
    customerName = newCustomerName;
}

// начало аренды
const QDate &Order::getStartDate() const
{
    return startDate;
}
void Order::setStartDate(const QDate &newStartDate)
{
    startDate = newStartDate;
}

// конец аренды
const QDate &Order::getEndDate() const
{
    return endDate;
}
void Order::setEndDate(const QDate &newEndDate)
{
    endDate = newEndDate;
}
