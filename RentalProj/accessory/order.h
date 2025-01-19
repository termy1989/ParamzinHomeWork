#ifndef ORDER_H
#define ORDER_H

#include <QObject>
#include <QDate>
#include "rentalitem.h"

// класс арендной позиции
class Order : public QObject
{
    Q_OBJECT
public:
    explicit Order(QObject *parent = nullptr);

    // первичный ключ
    quint64 getPk() const;
    void setPk(quint64 newPk);

    // наименование товара
    const QString &getProductName() const;
    void setProductName(const QString &newProductName);

    // количество товара
    quint32 getCount() const;
    void setCount(quint32 newCount);

    // стоимость аренды за первые три дня
    double getCost3() const;
    void setCost3(double newCost);

    // стоимость аренды за последующие дни
    double getCost() const;
    void setCost(double newCost);

    // имя клиента
    const QString &getCustomerName() const;
    void setCustomerName(const QString &newCustomerName);

    // начало аренды
    const QDate &getStartDate() const;
    void setStartDate(const QDate &newStartDate);

    // конец аренды
    const QDate &getEndDate() const;
    void setEndDate(const QDate &newEndDate);

signals:

private:
    quint64 mPk;                             // первичный ключ
    QString mProductName;                    // наименование товара
    quint32 mCount;                          // количество товара
    double mCost3;                           // стоимость аренды за первые три дня
    double mCost;                            // стоимость аренды за последующие дни
    QString mCustomerName;                   // имя клиента
    QDate mStartDate;                        // начало аренды
    QDate mEndDate;                          // конец аренды
};

#endif // ORDER_H
