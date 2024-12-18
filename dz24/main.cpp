#include <QCoreApplication>
#include <QFile>
#include <QXmlStreamReader>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    QFile* file = new QFile("config.xml");
    if (!file->open(QIODevice::ReadOnly | QIODevice::Text))
    {
        emit Log(tr("Невозможно открыть XML-конфиг"), LOG_LEVEL_ERROR);
        return false;
    }
    QXmlStreamReader xml(file);



    return a.exec();
}
