#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = new DatabaseConnection("database");
    refreshAirlinesTable(db->getAirlines());
    refreshFlightsTable(db->getFlights());
}

MainWindow::~MainWindow()
{
    delete ui;
    delete db;
}

void MainWindow::on_pushButton_2_clicked()
{
    Airline a1;
    a1.AirlineName = "British Airlines";
    a1.ContactInfo = "England";
    db->insertAirline(a1);
    Airline a2;
    a2.AirlineName = "American Airlines";
    a2.ContactInfo = "USA";
    db->insertAirline(a2);
    Airline a3;
    a3.AirlineName = "Lufthanza";
    a3.ContactInfo = "Germany";
    db->insertAirline(a3);
    Airline a4;
    a4.AirlineName = "AirFrance";
    a4.ContactInfo = "France";
    db->insertAirline(a4);

    refreshAirlinesTable(db->getAirlines());

    Flight f;
    f.ArrivalCity = "London";
    f.ArrivalTime = "10:00";
    f.DepartureCity = "Paris";
    f.DepartureTime = "11:00";
    f.AirlineId = &a1;
    db->insertFlight(f);
    f.ArrivalCity = "Moscow";
    f.ArrivalTime = "12:00";
    f.DepartureCity = "Pekin";
    f.DepartureTime = "19:00";
    f.AirlineId = &a2;
    db->insertFlight(f);
    f.ArrivalCity = "Berlin";
    f.ArrivalTime = "13:00";
    f.DepartureCity = "Madrid";
    f.DepartureTime = "17:00";
    f.AirlineId = &a3;
    db->insertFlight(f);
    f.ArrivalCity = "Moscow";
    f.ArrivalTime = "09:00";
    f.DepartureCity = "Paris";
    f.DepartureTime = "16:00";
    f.AirlineId = &a4;
    db->insertFlight(f);
    f.ArrivalCity = "London";
    f.ArrivalTime = "15:00";
    f.DepartureCity = "Moscow";
    f.DepartureTime = "22:00";
    f.AirlineId = &a1;
    db->insertFlight(f);

    refreshFlightsTable(db->getFlights());
}

void MainWindow::refreshAirlinesTable(QList<Airline> list)
{
    // заполнение таблицы
    ui->tableWidget_airlines->clear();
    ui->tableWidget_airlines->setRowCount(list.size());
    ui->tableWidget_airlines->setColumnCount(2);
    QStringList header;
    header << "Airline Name" << "Contact Info";
    ui->tableWidget_airlines->setHorizontalHeaderLabels(header);
    for (int i = 0; i < list.size(); i++)
    {
        QTableWidgetItem *item1 = new QTableWidgetItem();
        item1->setText(list.at(i).AirlineName);
        ui->tableWidget_airlines->setItem(i, 0, item1);
        QTableWidgetItem *item2 = new QTableWidgetItem();
        item2->setText(list.at(i).ContactInfo);
        ui->tableWidget_airlines->setItem(i, 1, item2);
    }
    ui->tableWidget_airlines->resizeColumnsToContents();
    ui->tableWidget_airlines->setStyleSheet("QHeaderView::section { background-color:lightGray }");
    ui->tableWidget_airlines->horizontalHeader()->show();
}

void MainWindow::refreshFlightsTable(QList<Flight> list)
{
    // заполнение таблицы
    ui->tableWidget_flights->clear();
    ui->tableWidget_flights->setRowCount(list.size());
    ui->tableWidget_flights->setColumnCount(6);
    QStringList header;
    header << "Flight ID" << "Departure City" << "Departure Time"
           << "Arrival City" << "Arrival Time" << "Airline Name";
    ui->tableWidget_flights->setHorizontalHeaderLabels(header);
    for (int i = 0; i < list.size(); i++)
    {
        QTableWidgetItem *item1 = new QTableWidgetItem();
        item1->setText(QString::number(list.at(i).FlightID));
        ui->tableWidget_flights->setItem(i, 0, item1);
        QTableWidgetItem *item2 = new QTableWidgetItem();
        item2->setText(list.at(i).DepartureCity);
        ui->tableWidget_flights->setItem(i, 1, item2);
        QTableWidgetItem *item3 = new QTableWidgetItem();
        item3->setText(list.at(i).DepartureTime);
        ui->tableWidget_flights->setItem(i, 2, item3);
        QTableWidgetItem *item4 = new QTableWidgetItem();
        item4->setText(list.at(i).ArrivalCity);
        ui->tableWidget_flights->setItem(i, 3, item4);
        QTableWidgetItem *item5 = new QTableWidgetItem();
        item5->setText(list.at(i).ArrivalTime);
        ui->tableWidget_flights->setItem(i, 4, item5);
        QTableWidgetItem *item6 = new QTableWidgetItem();
        item6->setText(list.at(i).AirlineId->AirlineName);
        ui->tableWidget_flights->setItem(i, 5, item6);
        //qDebug() << list.at(i).AirlineId->AirlineName;
    }
    ui->tableWidget_flights->resizeColumnsToContents();
    ui->tableWidget_flights->setStyleSheet("QHeaderView::section { background-color:lightGray }");
    ui->tableWidget_flights->horizontalHeader()->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    db->updateArrivalCity();
    refreshFlightsTable(db->getFlights());
}


void MainWindow::on_pushButton_clicked()
{
    if (ui->tableWidget_airlines->selectionModel()->selectedRows(0).isEmpty())
    {
        QMessageBox::critical(0, "Error", "Please select row for delete!");
    }
    else
    {
        db->deleteAirline(ui->tableWidget_airlines->selectionModel()->selectedRows(0).at(0).data().toString());
        refreshAirlinesTable(db->getAirlines());
        refreshFlightsTable(db->getFlights());
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if (ui->tableWidget_flights->selectionModel()->selectedRows(0).isEmpty())
    {
        QMessageBox::critical(0, "Error", "Please select row for delete!");
    }
    else
    {
        db->deleteFlight(ui->tableWidget_flights->selectionModel()->selectedRows(0).at(0).data().toString());
        refreshAirlinesTable(db->getAirlines());
        refreshFlightsTable(db->getFlights());
    }
}

