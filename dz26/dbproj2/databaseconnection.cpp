#include "databaseconnection.h"

DatabaseConnection::DatabaseConnection(const QString dbname)
{
    const QString DRIVER("QSQLITE");
    if (QSqlDatabase::isDriverAvailable(DRIVER))
    {
        QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);

        db.setDatabaseName(dbname);

        if (!db.open())
        {
            qCritical() << "MainWindow::DatabaseConnect - ERROR: can't open DB";
        }
    }
    else
    {
        qCritical() << "MainWindow::DatabaseConnect - ERROR: driver error";
    }
}

DatabaseConnection::~DatabaseConnection()
{

}

void DatabaseConnection::insertAirline(const Airline airline)
{
    QSqlQuery query;
    QString strF = "INSERT INTO Airlines ('AirlineName', 'ContactInfo') VALUES ('%1', '%2');";
    QString str = strF.arg(airline.AirlineName).arg(airline.ContactInfo);
    //query.exec(str);
    if (!query.exec(str))
    {
        qWarning() << "MainWindow::DatabaseConnect - ERROR: can't add in table Airlines";
    }
}

void DatabaseConnection::insertFlight(const Flight flight)
{
    QSqlQuery query;
    QString strF = "INSERT INTO Flights ('DepartureCity', 'ArrivalCity', 'DepartureTime', 'ArrivalTime', 'rowNameAirline')"
                   "VALUES ('%1', '%2', '%3', '%4', '%5');";
    QString str = strF.arg(flight.DepartureCity)
                      .arg(flight.ArrivalCity)
                      .arg(flight.DepartureTime)
                      .arg(flight.ArrivalTime)
                      .arg(flight.AirlineId->AirlineName);

    if (!query.exec(str))
    {
        qWarning() << "MainWindow::DatabaseConnect - ERROR: can't add in table Flights";
    }
}

void DatabaseConnection::deleteAirline(const QString name)
{
    QSqlQuery query;
    QString strF = "DELETE FROM Airlines WHERE AirlineName='%1';";
    QString str = strF.arg(name);

    if (!query.exec(str))
    {
        qWarning() << "MainWindow::DatabaseConnect - ERROR: can't remove from table Airlines";
    }
}

void DatabaseConnection::deleteFlight(const QString name)
{
    QSqlQuery query;
    QString strF = "DELETE FROM Flights WHERE FlightID=%1;";
    QString str = strF.arg(name);

    if (!query.exec(str))
    {
        qWarning() << "MainWindow::DatabaseConnect - ERROR: can't remove from table Airlines";
    }
}

void DatabaseConnection::updateArrivalCity()
{
    QSqlQuery query;
    QString str = "UPDATE Flights SET ArrivalCity = REPLACE(ArrivalCity, 'Moscow', 'Ekaterinburg') WHERE ArrivalCity LIKE 'Moscow';";
    if (!query.exec(str))
    {
        qWarning() << "MainWindow::DatabaseConnect - ERROR: can't update in table Flights";
    }
}

QList<Airline> DatabaseConnection::getAirlines()
{
    QSqlQuery query;
    QString str = "SELECT * FROM Airlines;";
    query.exec(str);
    QSqlRecord rec = query.record();
    Airline a;
    QList<Airline> list;
    while (query.next())
    {
        a.AirlineName = query.value(rec.indexOf("AirlineName")).toString();
        a.ContactInfo = query.value(rec.indexOf("ContactInfo")).toString();
        list.append(a);
        //qDebug() << a.AirlineName;
        //qDebug() << a.ContactInfo;
    }
    return list;
}

QList<Flight> DatabaseConnection::getFlights()
{
    QSqlQuery query;
    QString str = "SELECT * FROM Flights;";
    query.exec(str);
    QSqlRecord rec = query.record();
    Flight f;
    Airline *a;
    QList<Flight> list;
    while (query.next())
    {
        f.FlightID = query.value(rec.indexOf("FlightID")).toInt();
        f.DepartureCity = query.value(rec.indexOf("DepartureCity")).toString();
        f.DepartureTime = query.value(rec.indexOf("DepartureTime")).toString();
        f.ArrivalCity = query.value(rec.indexOf("ArrivalCity")).toString();
        f.ArrivalTime = query.value(rec.indexOf("ArrivalTime")).toString();
        a = new Airline;
        a->AirlineName = query.value(rec.indexOf("rowNameAirline")).toString();
        a->ContactInfo = "";
        f.AirlineId = a;
        //f = query.value(rec.indexOf("ContactInfo")).toString();
        list.append(f);
    }
    return list;
}


