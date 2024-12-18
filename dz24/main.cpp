#include <QCoreApplication>
#include <QFile>
#include <QtXml>
#include <iostream>


void traverseNode(const QDomNode& node, QTextStream& stream)
{

    QDomNode domNode = node.firstChild();
    while (!domNode.isNull())
    {
        if (domNode.isElement())
        {
            QDomElement domElement = domNode.toElement();
            if (!domElement.isNull())
            {
                if (domElement.tagName() == "param_text")
                {
                    stream << '\n';
                    qDebug() << "Attr: " << domElement.attribute("number", "");
                }
                else
                {
                    stream << domElement.text() << '\n';
                    qDebug() << "Tag name: " << domElement.tagName() << "\tText: " << domElement.text();
                }
            }
        }
        traverseNode(domNode, stream);
        domNode = domNode.nextSibling();
    }
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDomDocument domDoc;
    QFile file("test.xml");
    if (file.open(QIODevice::ReadOnly))
    {
        if (domDoc.setContent(&file))
        {
            QFile file2("out.txt");
            if (file2.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
            {
                QTextStream stream(&file2);
                QDomElement domElement = domDoc.documentElement();
                traverseNode(domElement, stream);
                file2.close();
            }
        }
        file.close();
    }

    return a.exec();
}
