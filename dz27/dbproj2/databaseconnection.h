#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>

class DatabaseConnection : public QObject
{
    Q_OBJECT
public:
    DatabaseConnection(const QString dbname);
    ~DatabaseConnection();
    void openDB();
    void closeDB();
    void refreshDatabase();
    /*void insertAirline(const Airline);
    void insertFlight(const Flight);
    void deleteAirline(const QString);
    void deleteFlight(const QString);
    void updateArrivalCity();
    QList<Airline> getAirlines();
    QList<Flight> getFlights();*/

public slots:
    void slotAddToDatabase();
    void slotUpdateDatabase();
    void slotDelFromDatabase(QString);

signals:
    void dbStatus(QString);
    void sqlUpdateDatabase();
    void sqlRefreshed(QSqlTableModel*);

private:
    QSqlDatabase db;
    QSqlTableModel *sqlModel = nullptr;
};

#endif // DATABASECONNECTION_H
