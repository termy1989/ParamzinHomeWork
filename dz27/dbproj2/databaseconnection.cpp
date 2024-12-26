#include "databaseconnection.h"

DatabaseConnection::DatabaseConnection(const QString dbname)
{
    const QString DRIVER("QSQLITE");
    if (QSqlDatabase::isDriverAvailable(DRIVER))
    {
        db = QSqlDatabase::addDatabase(DRIVER);
        db.setDatabaseName(dbname);
    }
    else
    {
        qCritical() << "MainWindow::DatabaseConnect - ERROR: driver error";
    }
}

DatabaseConnection::~DatabaseConnection()
{

}

void DatabaseConnection::openDB()
{
    if (!db.open())
    {
        qCritical() << "MainWindow::DatabaseConnect - ERROR: can't open DB";
    }
    // инициализация модели товаров
    sqlModel = new QSqlTableModel(this, db);
    connect(sqlModel, SIGNAL(dataChanged(QModelIndex,QModelIndex)),
                                    this, SLOT(slotUpdateDatabase()));
    emit dbStatus("Database is opened");
    refreshDatabase();
}

void DatabaseConnection::closeDB()
{
    db.close();
    emit dbStatus("Database is closed");
}

void DatabaseConnection::refreshDatabase()
{
    sqlModel->setTable("user_data");
    if (!sqlModel->select())
    {
        qCritical() << "MainWindow::DatabaseConnect - ERROR: can't select table";
    }
    else
    {
        emit sqlRefreshed(sqlModel);
    }
}

// добавление новой категории товаров
void DatabaseConnection::slotAddToDatabase()
{
    QSqlQuery query;
    QString str = "INSERT INTO user_data (name, email, height) VALUES ('<Новая запись>', '<Новая запись>', 1.5);";
    if (!query.exec(str))
    {
        qCritical() << "MainWindow::DatabaseConnect - ERROR: can't add to table";
    }
    else refreshDatabase();
}

// применение изменений к таблице
void DatabaseConnection::slotUpdateDatabase()
{
    // применение изменений
    if (!sqlModel->submitAll())
    {
        // откат изменений в случае ошибки
        sqlModel->revertAll();
        qCritical() << "MainWindow::DatabaseConnect - ERROR: can't submit table";
    }
}

void DatabaseConnection::slotDelFromDatabase(QString name)
{
    QSqlQuery query;
    QString strF = "DELETE FROM user_data WHERE id=%1;";
    QString str = strF.arg(name);

    if (!query.exec(str))
    {
        qWarning() << "MainWindow::DatabaseConnect - ERROR: can't remove from table";
    }
    refreshDatabase();
}
