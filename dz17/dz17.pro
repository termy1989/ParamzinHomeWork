TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        person.cpp \
        professor.cpp \
        starosta.cpp \
        student.cpp \
        university.cpp

HEADERS += \
    obj.h \
    person.h \
    professor.h \
    starosta.h \
    student.h \
    university.h
