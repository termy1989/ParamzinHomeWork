#include "rentalitem.h"

// конструктор
RentalItem::RentalItem(QObject *parent) : QObject(parent){}

// наименование
const QString &RentalItem::getName() const
{
    return name;
}
void RentalItem::setName(const QString &newName)
{
    name = newName;
}

// количество
int RentalItem::getCount() const
{
    return count;
}
void RentalItem::setCount(int newCount)
{
    count = newCount;
}
