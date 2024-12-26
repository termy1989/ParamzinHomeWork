#ifndef LOCALDATA_H
#define LOCALDATA_H

#include <QString>
#include <limits>
#include <vector>

struct PersonData
{
    int id = 0;
    QString name = "";
    QString email = "";
    double height = std::numeric_limits<double>::quiet_NaN() ;
};

enum DataType : uint16_t
{
    PersonDataType = 0,
    OtherDataType= 1
};

struct AllData
{
    DataType type;
    std::vector<PersonData*> data;
};

#endif // LOCALDATA_H
