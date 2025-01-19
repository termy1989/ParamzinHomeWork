#ifndef COMBOBOXDELEGATE_H
#define COMBOBOXDELEGATE_H

#include <QStyledItemDelegate>
#include <QComboBox>
#include <QSqlQuery>
#include <QSqlRecord>

// класс делегата ComboBox для таблицы
class ComboBoxDelegate : public QStyledItemDelegate
{
public:
    explicit ComboBoxDelegate(QObject *parent = nullptr, const QString &visualColumn = "",
                              const QString &queryTail = "");
    QWidget* createEditor(QWidget *parent, const QStyleOptionViewItem&,
                          const QModelIndex &) const;
    void setEditorData(QWidget *editor,const QModelIndex &index) const;
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                              const QModelIndex &) const;

private:
    QString visualColumn;               // столбец с данными для comboBox
    QString queryTail;                  // таблица с данными для comboBox
};

#endif // COMBOBOXDELEGATE_H
