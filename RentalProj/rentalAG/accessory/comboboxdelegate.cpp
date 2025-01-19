#include "comboboxdelegate.h"

ComboBoxDelegate::ComboBoxDelegate(QObject *parent, const QString &visualColumn, const QString &queryTail)
    :QStyledItemDelegate(parent)
{
    this->visualColumn = visualColumn;
    this->queryTail = queryTail;
}

QWidget *ComboBoxDelegate::createEditor(QWidget *parent,
                                        const QStyleOptionViewItem &,
                                        const QModelIndex &) const
{
    auto *editor = new QComboBox(parent);
    QSqlQuery query;
    //query.prepare( QString( "SELECT %1.id, %2 FROM %3" ).arg( queryTail.split( ' ' ).first() ).arg( visualColumn ).arg( queryTail ) );
    //query.exec();

    QString strF = "SELECT * FROM %1 WHERE %2!='ВСЕ ТОВАРЫ'";
    QString str = strF.arg(queryTail).arg(visualColumn);

    if (query.exec(str)) {
        QSqlRecord rec = query.record();
        while (query.next())
        {
            // query.value(1).toString() - text
            // query.value(0) - userData (id)
            editor->addItem(query.value(rec.indexOf(visualColumn)).toString());
        }
    }
    return editor;
}

void ComboBoxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    auto *comboBox = dynamic_cast<QComboBox*>(editor);
    QString currentText = index.data(Qt::EditRole).toString();
    int cbIndex = comboBox->findText(currentText);
    if (cbIndex >= 0)
        comboBox->setCurrentIndex(cbIndex);
}

void ComboBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    if (auto *comboBox = dynamic_cast<QComboBox*>(editor))
    {
        /*QVariant modelData = comboBox->itemData(comboBox->currentIndex(), Qt::UserRole);    // id из Qt::UserRole
        model->setData(index, modelData.toString(), Qt::EditRole);*/
        model->setData(index,comboBox->currentText(), Qt::EditRole);
    }
    else
        QStyledItemDelegate::setModelData(editor, model, index);
}

void ComboBoxDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &) const
{
    editor->setGeometry(option.rect);
}
