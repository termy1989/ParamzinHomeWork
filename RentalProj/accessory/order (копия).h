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
    uint64_t getPk() const;
    void setPk(uint64_t newPk);

    // наименование товара
    const QString &getProductName() const;
    void setProductName(const QString &newProductName);

    // количество товара
    int getCount() const;
    void setCount(int newCount);

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
    uint64_t pk;                            // первичный ключ
    QString productName;                    // наименование товара
    int count;                              // количество товара
    double cost3;                           // стоимость аренды за первые три дня
    double cost;                            // стоимость аренды за последующие дни
    QString customerName;                   // имя клиента
    QDate startDate;                        // начало аренды
    QDate endDate;                          // конец аренды
};

#endif // ORDER_H
