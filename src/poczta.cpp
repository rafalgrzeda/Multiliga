#include "poczta.h"
#include <ctime>
#include <QDebug>
#include <QString>
using namespace std;
Poczta::Poczta(Uzytkownik* _uzytkownik)
{
    uzytkownik = _uzytkownik;
}

QString Poczta::generujKod()
{
    string a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string kod;
    srand(time(NULL));
    for(int i = 0; i < 8; i++) kod.push_back(a.at(size_t(rand() % 62)));
    QString skod = QString::fromStdString(kod);
    return skod;
}

void Poczta::wyslijemail()
{
    qDebug() << "Wyslano emaila";
}
