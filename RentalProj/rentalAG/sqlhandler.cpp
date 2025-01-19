#include "sqlhandler.h"

// конструктор
SqlHandler::SqlHandler(QObject *parent) : QObject(parent){}

// деструктор
SqlHandler::~SqlHandler(){}

// проверка соединения
bool SqlHandler::isConnected()
{
    QSqlQuery query;
    QString str = "SELECT * FROM orders_table;";
    if (!query.exec(str)) {
        db.close();
        return false;
    }
    return true;
}

// соединение с сервером
void SqlHandler::sqlConnect()
{
    // считывание параметров соединения из файла
    QSettings *settings = new QSettings("config.ini", QSettings::IniFormat, this);
    settings->beginGroup("sql");
    db_driver = settings->value("driver", "QMYSQL").toString();
    db_host = settings->value("host", "127.0.0.1").toString();
    db_name = settings->value("db", "null").toString();
    db_username = settings->value("username", "username").toString();
    db_password = settings->value("password", "password").toString();
    delete settings;

    // соединение с базой данных
    db = QSqlDatabase::addDatabase(db_driver);
    db.setHostName(db_host);
    db.setDatabaseName(db_name);
    db.setUserName(db_username);
    db.setPassword(db_password);

    // открытие базы данных
    if (db.open()) {

        // отправка сигнала о подключении к базе
        emit signalConnectStatus(true);

        // инициализация модели групп товаров
        sqlModelGroups = new QSqlTableModel(this, db);
        connect(sqlModelGroups, SIGNAL(dataChanged(QModelIndex,QModelIndex)),
                this, SLOT(sqlUpdateGroups()));

        // инициализация модели клиентов
        sqlModelCustomers = new QSqlTableModel(this, db);
        connect(sqlModelCustomers, SIGNAL(dataChanged(QModelIndex,QModelIndex)),
                this, SLOT(sqlUpdateCustomers()));

        // инициализация модели товаров
        sqlModelProducts = new QSqlRelationalTableModel(this, db);
        connect(sqlModelProducts, SIGNAL(dataChanged(QModelIndex,QModelIndex)),
                this, SLOT(sqlUpdateProducts()));
    }
    else emit signalErrorMsg(db.lastError().text());
}

// отключение от сервера
void SqlHandler::sqlDisconnect()
{
    db.close();

    disconnect(sqlModelGroups, SIGNAL(dataChanged(QModelIndex,QModelIndex)),
               this, SLOT(sqlUpdateGroups()));
    delete sqlModelGroups;

    disconnect(sqlModelCustomers, SIGNAL(dataChanged(QModelIndex,QModelIndex)),
                this, SLOT(sqlUpdateCustomers()));
    delete sqlModelCustomers;

    disconnect(sqlModelProducts, SIGNAL(dataChanged(QModelIndex,QModelIndex)),
                this, SLOT(sqlUpdateProducts()));
    delete sqlModelProducts;

    emit signalConnectStatus(false);
}


/* Работа с groups_table */


// обновление таблицы с категориями товаров
void SqlHandler::sqlRefreshGroups()
{
    sqlModelGroups->setTable("groups_table");
    if (!sqlModelGroups->select())
        emit signalErrorMsg(sqlModelGroups->lastError().text());
    else emit sqlGroupsRefreshed(sqlModelGroups);
}

// добавление новой категории товаров
void SqlHandler::sqlAddGroup()
{
    QSqlQuery query;
    QString str = "INSERT INTO groups_table (name) VALUES ('<Новая запись>');";
    if (!query.exec(str))
        emit signalErrorMsg(query.lastError().text());
    else sqlRefreshGroups();
}

// применение изменений к таблице категорий товаров
void SqlHandler::sqlUpdateGroups()
{
    // применение изменений
    if (!sqlModelGroups->submitAll())
    {
        // откат изменений в случае ошибки
        sqlModelGroups->revertAll();
        emit signalErrorMsg(sqlModelGroups->lastError().text());
    }
}

// удаление указанных категорий товаров
void SqlHandler::sqlDelGroups(QModelIndexList selectedIndexes)
{
    if (selectedIndexes.count() == 0)
        emit signalErrorMsg(tr("Не выбраны записи для удаления"));
    else
        if (QMessageBox::warning(nullptr, tr("Предупреждение"),
                                       tr("Вы уверены, что хотите удалить выбранные записи?"),
                                       QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
        {
            foreach (QModelIndex index, selectedIndexes) {
                QSqlQuery query;
                QString strF = "DELETE FROM groups_table WHERE name='%1';";
                QString str = strF.arg(index.data(Qt::EditRole).toString());
                if (!query.exec(str)) {
                    emit signalErrorMsg(query.lastError().text());
                    return;
                }
            }
            sqlRefreshGroups();
        }
}


/* Работа с customers_table */


// обновление таблицы клиентов
void SqlHandler::sqlRefreshCustomers()
{
    sqlModelCustomers->setTable("customers_table");
    if (!sqlModelCustomers->select())
        emit signalErrorMsg(sqlModelCustomers->lastError().text());
    else emit sqlCustomersRefreshed(sqlModelCustomers);
}

// добавление нового клиента
void SqlHandler::sqlAddCustomer(bool fromOrder)
{
    QSqlQuery query;
    QString str = "INSERT INTO customers_table (name, phone) VALUES ('<Новая запись>', '+7');";
    if (!query.exec(str))
        emit signalErrorMsg(query.lastError().text());
    else {
        sqlRefreshCustomers();
        sqlRefreshMainWindow(fromOrder);
    }
}

// применение изменений к таблице клиентов
void SqlHandler::sqlUpdateCustomers()
{
    // применение изменений
    if (!sqlModelCustomers->submitAll())
    {
        // откат изменений в случае ошибки
        sqlModelCustomers->revertAll();
        emit signalErrorMsg(sqlModelCustomers->lastError().text());
    }
    else
    {
        emit sqlCustomersUpdated();
        sqlRefreshMainWindow(true);
    }
}

// удаление указанных клиентов
void SqlHandler::sqlDelCustomers(QModelIndexList selectedIndexes, bool fromOrder)
{

    if (selectedIndexes.count() == 0)
        emit signalErrorMsg(tr("Не выбраны записи для удаления"));
    else
        if (QMessageBox::warning(nullptr, tr("Предупреждение"),
                                       tr("Вы уверены, что хотите удалить выбранные записи?"),
                                       QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
        {
            foreach (QModelIndex index, selectedIndexes) {
                QSqlQuery query;
                QString strF = "DELETE FROM customers_table WHERE name='%1';";
                QString str = strF.arg(index.data(Qt::EditRole).toString());
                if (!query.exec(str)) {
                    emit signalErrorMsg(query.lastError().text());
                    return;
                }
            }
            sqlRefreshCustomers(); sqlRefreshMainWindow(fromOrder);
        }
}


/* Работа с products_table */


// обновление таблицы товаров
void SqlHandler::sqlRefreshProducts()
{
    sqlModelProducts->setTable("products_table");
    sqlModelProducts->setRelation(0, QSqlRelation("groups_table", "name", "name"));
    if (!sqlModelProducts->select())
        emit signalErrorMsg(sqlModelProducts->lastError().text());
    else {
        sqlModelGroups->setTable("groups_table");
        if (!sqlModelGroups->select())
            emit signalErrorMsg(sqlModelGroups->lastError().text());
        else
            emit sqlProductsRefreshed(sqlModelProducts, sqlModelGroups);
    }
}

// добавление нового товара
void SqlHandler::sqlAddProduct(QString group)
{
    QSqlQuery query;
    QString str;

    if (group == "")
        str = "INSERT INTO products_table (group_name, name, count, price) VALUES ('не указана', '<Новая запись>', 1, 100);";
    else {
        QString strF = "INSERT INTO products_table (group_name, name, count, price) VALUES ('%1', '<Новая запись>', 1, 100);";
        str = strF.arg(group);
    }

    if (!query.exec(str))
        emit signalErrorMsg(query.lastError().text());
    else sqlRefreshProducts();
}

// применение изменений к таблице товаров
void SqlHandler::sqlUpdateProducts()
{
    // применение изменений
    if (!sqlModelProducts->submitAll())
    {
        // откат изменений в случае ошибки
        sqlModelProducts->revertAll();
        emit signalErrorMsg(sqlModelProducts->lastError().text());
    }
}

// удаление указанных товаров
void SqlHandler::sqlDelProducts(QModelIndexList selectedIndexes)
{
    if (selectedIndexes.count() == 0)
        emit signalErrorMsg(tr("Не выбраны записи для удаления"));
    else
        if (QMessageBox::warning(nullptr, tr("Предупреждение"),
                                       tr("Вы уверены, что хотите удалить выбранные записи?"),
                                       QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
        {
            foreach (QModelIndex index, selectedIndexes) {
                QSqlQuery query;
                QString strF = "DELETE FROM products_table WHERE name='%1';";
                QString str = strF.arg(index.data(Qt::EditRole).toString());
                if (!query.exec(str)) {
                    emit signalErrorMsg(query.lastError().text());
                    return;
                }
            }
            sqlRefreshProducts();
        }
}


/* Работа с orders_table */


//
void SqlHandler::sqlRefreshMainWindow(bool fromOrder)
{
    QSqlQuery query;
    QString str = "SELECT * FROM orders_table;";
    if (!query.exec(str))
        emit signalErrorMsg(query.lastError().text());
    else {
        QSqlRecord rec = query.record();
        QList<Order*> ordersList;
        while (query.next())
        {
            Order *order = new Order();
            order->setPk(query.value(rec.indexOf("id_order")).toInt());
            order->setProductName(query.value(rec.indexOf("product_name")).toString());
            order->setCount(query.value(rec.indexOf("count")).toInt());
            order->setCustomerName(query.value(rec.indexOf("customer_name")).toString());
            order->setStartDate(QDate::fromString(query.value(rec.indexOf("startDate")).toString(), "yyyy-MM-dd"));
            order->setEndDate(QDate::fromString(query.value(rec.indexOf("endDate")).toString(), "yyyy-MM-dd"));
            ordersList.append(order);
        }

        //////////////////////////////////////////

        QList<QString> customersList;

        str = "SELECT * FROM customers_table;";

        if (query.exec(str)) {
            rec = query.record();
            while (query.next())
            {
                customersList.append(query.value(rec.indexOf("name")).toString());
            }
            emit sqlMainWindowRefreshed(ordersList, customersList, fromOrder);
        }
        else emit signalErrorMsg(query.lastError().text());
    }
}

// отправка арендных позиций указанного клиента
void SqlHandler::sqlOrdersByCustomer(QString customer)
{
    QSqlQuery query;
    QString strF = "SELECT * FROM orders_table WHERE customer_name='%1';";
    QString str = strF.arg(customer);

    if (!query.exec(str))
        emit signalErrorMsg(query.lastError().text());
    else {
        QSqlRecord rec = query.record();
        QList<Order*> ordersList;
        while (query.next())
        {
            // формирование арендной позиции
            Order *order = new Order();
            order->setPk(query.value(rec.indexOf("id_order")).toInt());
            order->setProductName(query.value(rec.indexOf("product_name")).toString());
            order->setCount(query.value(rec.indexOf("count")).toInt());
            order->setCustomerName(query.value(rec.indexOf("customer_name")).toString());
            order->setStartDate(QDate::fromString(query.value(rec.indexOf("startDate")).toString(), "yyyy-MM-dd"));
            order->setEndDate(QDate::fromString(query.value(rec.indexOf("endDate")).toString(), "yyyy-MM-dd"));

            // вычисление стоимости арендной позиции
            QSqlQuery query2;
            QString strF = "SELECT * FROM products_table WHERE name='%1';";
            QString str = strF.arg(query.value(rec.indexOf("product_name")).toString());
            if (!query2.exec(str)) {
                emit signalErrorMsg(query2.lastError().text());
                break;
            }
            else {
                QSqlRecord rec2 = query2.record();
                while (query2.next()) {
                    order->setCost3(query2.value(rec2.indexOf("price3")).toDouble() * order->getCount());
                    order->setCost(query2.value(rec2.indexOf("price")).toDouble() * order->getCount());
                }
            }

            // добавление арендной позиции в список
            ordersList.append(order);
        }

        if (ordersList.isEmpty()) emit signalErrorMsg("Для указанного пользователя нет информации об аренде");
        else emit sqlOrdersByCustomerRefreshed(ordersList);
    }
}

// добавление арендной позиции
void SqlHandler::sqlAddOrder(QList<Order*> orderList)
{

    // цикл по списку товаров к аренде
    foreach (Order *order, orderList) {

        QSqlQuery query;
        QString strF = "INSERT INTO orders_table (product_name, count, customer_name, startDate, endDate) VALUES ('%1', %2, '%3', '%4', '%5');";
        QString str = strF.arg(order->getProductName())
                .arg(order->getCount())
                .arg(order->getCustomerName())
                .arg(order->getStartDate().toString("yyyy-MM-dd"))
                .arg(order->getEndDate().toString("yyyy-MM-dd"));
        if (!query.exec(str)) {
            emit signalErrorMsg(query.lastError().text());
            break;
        }
        else {
            if (sqlDecrementProductsCount(order->getProductName(), order->getCount()))
                sqlRefreshMainWindow(false);
            else break;
        }
    }
}

// завершение выбранных арендных позиций
void SqlHandler::sqlCloseOrder(QModelIndexList removeRows)
{
    foreach (QModelIndex index, removeRows) {
        QSqlQuery query;
        QString strF;
        QString str;

        strF = "SELECT * FROM orders_table WHERE id_order=%1";
        str = strF.arg(index.data(Qt::EditRole).toInt());
        if (!query.exec(str)) {
            emit signalErrorMsg(query.lastError().text());
            return;
        }
        else {
            QSqlRecord rec = query.record();
            while (query.next())
            {
                int count = query.value(rec.indexOf("count")).toInt();
                QString name = query.value(rec.indexOf("product_name")).toString();
                sqlIncrementProductsCount(name, count);
            }

            strF = "DELETE FROM orders_table WHERE id_order=%1;";
            str = strF.arg(index.data(Qt::EditRole).toInt());
            if (!query.exec(str)) {
                emit signalErrorMsg(query.lastError().text());
                return;
            }
        }
    }
    sqlRefreshMainWindow(false);
}

// увеличение количества товаров в базе
bool SqlHandler::sqlIncrementProductsCount(QString name, int count)
{
    int oldCount = 0;
    QSqlQuery query;
    QString strF = "SELECT * FROM products_table WHERE name='%1'";
    QString str = strF.arg(name);

    if (query.exec(str)) {
        QSqlRecord rec = query.record();
        while (query.next())
        {
            oldCount = query.value(rec.indexOf("count")).toInt();
        }
        int newCount = oldCount + count;
        strF = "UPDATE products_table SET count=%1 WHERE name='%2'";
        str = strF.arg(newCount).arg(name);
        if (query.exec(str)) return true;
        else {
            emit signalErrorMsg(query.lastError().text());
            return false;
        }
    }
    else {
        emit signalErrorMsg(query.lastError().text());
        return false;
    }
}

// уменьшение количества товаров в базе
bool SqlHandler::sqlDecrementProductsCount(QString name, int count)
{
    int oldCount = 0;
    QSqlQuery query;
    QString strF = "SELECT * FROM products_table WHERE name='%1'";
    QString str = strF.arg(name);

    if (query.exec(str)) {
        QSqlRecord rec = query.record();
        while (query.next())
        {
            oldCount = query.value(rec.indexOf("count")).toInt();
        }
        int newCount = oldCount - count;
        strF = "UPDATE products_table SET count=%1 WHERE name='%2'";
        str = strF.arg(newCount).arg(name);
        if (query.exec(str)) return true;
        else {
            emit signalErrorMsg(query.lastError().text());
            return false;
        }
    }
    else {
        emit signalErrorMsg(query.lastError().text());
        return false;
    }
}
