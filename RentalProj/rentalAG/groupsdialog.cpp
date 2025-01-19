#include "groupsdialog.h"
#include "ui_groupsdialog.h"

// конструктор
GroupsDialog::GroupsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GroupsDialog)
{
    ui->setupUi(this);

    connect(ui->buttonAdd, SIGNAL(clicked()), this, SLOT(addGroup()));
    connect(ui->buttonDel, SIGNAL(clicked()), this, SLOT(delGroups()));
}

// деструктор
GroupsDialog::~GroupsDialog()
{
    delete ui;
}

// открытие диалогового окна
void GroupsDialog::openDialog()
{
    // открытие диалогового окна
    show();

    // отправка сигнала об открытии для обновления таблицы
    emit signalOpened();
}

// обновление таблицы
void GroupsDialog::refresh(QSqlTableModel *model)
{
    // настройка заголовков модели
    model->setHeaderData(0, Qt::Horizontal, tr("Наименование категории"));

    // сохранение настроек шрифта таблицы перед обновлением
    QFont font = ui->tableView->font();
    font.setPointSize(10);
    ui->tableView->setFont(font);

    // настройка таблицы
    ui->tableView->setModel(model);
    ui->tableView->setStyleSheet("QHeaderView::section { background-color:lightGray }");
    ui->tableView->setColumnWidth(0, 275);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->tableView->horizontalHeader()->setFont(font);

    // строка "ВСЕ ТОВАРЫ" недоступна для редактирования
    for (int i = 0; i < model->rowCount(); i++)
    {
        QSqlRecord record = ((QSqlTableModel*)ui->tableView->model())->record(i);
        if (record.value(0).toString() == "не указана"
                || record.value(0).toString() == "- ВСЕ ТОВАРЫ -")
            ui->tableView->hideRow(i);
    }
}

// добавление элемента
void GroupsDialog::addGroup()
{
    emit signalAddGroup();
}

// удаление элементов
void GroupsDialog::delGroups()
{
    emit signalDelGroups(ui->tableView->selectionModel()->selectedRows(0));
}
