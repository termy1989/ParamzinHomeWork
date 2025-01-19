#ifndef RENTALITEM_H
#define RENTALITEM_H

#include <QObject>

class RentalItem : public QObject
{
    Q_OBJECT
public:
    explicit RentalItem(QObject *parent = nullptr);

signals:
};

#endif // RENTALITEM_H
