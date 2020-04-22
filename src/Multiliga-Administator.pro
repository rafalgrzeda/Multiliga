#-------------------------------------------------
#
# Project created by QtCreator 2020-01-30T13:10:07
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Multiliga-Administator
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        okno_logowanie.cpp \
    okno_odzyskajhaslo.cpp \
    okno_paneladministratora.cpp \
    okno_dodaniekontauzytkownika.cpp \
    okno_edycjakontauzytkownika.cpp \
    okno_dodaniedyscypliny.cpp \
    okno_edycjadyscypliny.cpp \
    okno_dodaniesezonu.cpp \
    okno_edycjasezonu.cpp \
    okno_dodanieligi.cpp \
    okno_edycjaligi.cpp \
    okno_dodanielokalizacji.cpp \
    okno_edycjalokalizacji.cpp \
    listakontuzytkownikow.cpp \
    listadyscyplin.cpp \
    listalokalizacji.cpp \
    listasezonow.cpp \
    listalig.cpp \
    aplikacja.cpp \
    bazapolaczenie.cpp \
    uzytkownik.cpp \
    logowanie.cpp \
    administator.cpp \
    permanentny.cpp \
    poczta.cpp

HEADERS += \
        okno_logowanie.h \
    okno_odzyskajhaslo.h \
    okno_paneladministratora.h \
    okno_dodaniekontauzytkownika.h \
    okno_edycjakontauzytkownika.h \
    okno_dodaniedyscypliny.h \
    okno_edycjadyscypliny.h \
    okno_dodaniesezonu.h \
    okno_edycjasezonu.h \
    okno_dodanieligi.h \
    okno_edycjaligi.h \
    okno_dodanielokalizacji.h \
    okno_edycjalokalizacji.h \
    listakontuzytkownikow.h \
    listadyscyplin.h \
    listalokalizacji.h \
    listasezonow.h \
    listalig.h \
    aplikacja.h \
    bazapolaczenie.h \
    uzytkownik.h \
    logowanie.h \
    administator.h \
    permanentny.h \
    poczta.h

FORMS += \
        okno_logowanie.ui \
    okno_odzyskajhaslo.ui \
    okno_paneladministratora.ui \
    okno_dodaniekontauzytkownika.ui \
    okno_edycjakontauzytkownika.ui \
    okno_dodaniedyscypliny.ui \
    okno_edycjadyscypliny.ui \
    okno_dodaniesezonu.ui \
    okno_edycjasezonu.ui \
    okno_dodanieligi.ui \
    okno_edycjaligi.ui \
    okno_dodanielokalizacji.ui \
    okno_edycjalokalizacji.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
