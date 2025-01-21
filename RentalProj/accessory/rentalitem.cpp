#include "rentalitem.h"

RentalItem::RentalItem(QObject *parent)
    : QObject{parent}
{}

// наименование
const QString &RentalItem::getName() const
{
    return mName;
}
void RentalItem::setName(const QString &newName)
{
    mName = newName;
}

// количество
int RentalItem::getCount() const
{
    return mCount;
}
void RentalItem::setCount(int newCount)
{
    mCount = newCount;
}
