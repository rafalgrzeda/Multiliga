#include "okno_logowanie.h"
#include "ui_okno_logowanie.h"
#include "okno_paneladministratora.h"
#include "okno_odzyskajhaslo.h"
#include <QDebug>
#include "logowanie.h"
#include <QMessageBox>
Okno_logowanie::Okno_logowanie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Okno_logowanie)
{
    ui->setupUi(this);
}

Okno_logowanie::~Okno_logowanie()
{
    delete ui;
}

void Okno_logowanie::on_button_zaloguj_clicked()
{
    logowanie = new Logowanie(ui->login->text(), ui->haslo->text());
    if(logowanie->zaloguj()){
        this->close();
    }
    else{
        QMessageBox::information(this,"Błąd","Błędny login bądź hasło");
    }
    delete logowanie;
}

void Okno_logowanie::on_button_odzyskaj_clicked()
{
    logowanie = new Logowanie(ui->login->text(), ui->haslo->text());
    logowanie->odzyskajHaslo();
    if(logowanie->getUzytkownik() == nullptr){
        QMessageBox::information(this,"Błąd", "Podany login nie istnieje");
    }
    else{
        Okno_odzyskajHaslo *okno_odzyskaj = new Okno_odzyskajHaslo(this);
        okno_odzyskaj->show();
    }
    //delete logowanie;
}

Logowanie *Okno_logowanie::getLogowanie() const
{
    return logowanie;
}
