QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accessory/order.cpp \
    accessory/rentalitem.cpp \
    customersdialog.cpp \
    accessory/comboboxdelegate.cpp \
    groupsdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    orderdialog.cpp \
    productsdialog.cpp \
    rentaldialog.cpp \
    sqlhandler.cpp

HEADERS += \
    accessory/order.h \
    accessory/rentalitem.h \
    customersdialog.h \
    accessory/comboboxdelegate.h \
    groupsdialog.h \
    mainwindow.h \
    orderdialog.h \
    productsdialog.h \
    rentaldialog.h \
    sqlhandler.h

FORMS += \
    customersdialog.ui \
    groupsdialog.ui \
    mainwindow.ui \
    orderdialog.ui \
    productsdialog.ui \
    rentaldialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc

win32: RC_ICONS = images/logo.ico
