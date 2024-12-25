#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include "localdata.h"

class DatabaseConnection : public QObject
{
    Q_OBJECT

public:
    DatabaseConnection(const QString dbname);
    ~DatabaseConnection();
    void insertAirline(const Airline);
    void insertFlight(const Flight);
    void deleteAirline(const QString);
    void deleteFlight(const QString);
    void updateArrivalCity();
    QList<Airline> getAirlines();
    QList<Flight> getFlights();


private:
};

#endif // DATABASECONNECTION_H
