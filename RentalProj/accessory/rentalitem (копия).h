#ifndef RENTALITEM_H
#define RENTALITEM_H

#include <QObject>

// класс товара для выдачи в аренду
class RentalItem : public QObject
{
    Q_OBJECT
public:
    explicit RentalItem(QObject *parent = nullptr);

    // наименование
    const QString &getName() const;
    void setName(const QString &newName);

    // количество
    int getCount() const;
    void setCount(int newCount);

signals:

private:
    QString name;               // наименование товара
    int count;                  // количество товара
};

#endif // RENTALITEM_H
