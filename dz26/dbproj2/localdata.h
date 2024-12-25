#ifndef LOCALDATA_H
#define LOCALDATA_H
#include <QString>

struct Airline {
    QString AirlineName;
    QString ContactInfo;
};

struct Flight {
    int FlightID;
    QString DepartureCity;
    QString ArrivalCity;
    QString DepartureTime;
    QString ArrivalTime;
    Airline* AirlineId;
};

#endif // LOCALDATA_H
