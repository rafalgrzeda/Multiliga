#include "okno_odzyskajhaslo.h"
#include "ui_okno_odzyskajhaslo.h"
#include <QMessageBox>
#include <okno_logowanie.h>
#include <QDebug>
Okno_odzyskajHaslo::Okno_odzyskajHaslo(Okno_logowanie *_okno,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Okno_odzyskajHaslo)
{
    ui->setupUi(this);
    okno_logowanie = _okno;
}

Okno_odzyskajHaslo::~Okno_odzyskajHaslo()
{
    delete ui;
}

void Okno_odzyskajHaslo::on_button_zatwierdz_clicked()
{
    if(ui->haslo1->text() == ui->haslo2->text()){
        if(ui->kod->text() == okno_logowanie->getLogowanie()->getUzytkownik()->getKod()){
            okno_logowanie->getLogowanie()->getUzytkownik()->setHaslo(ui->haslo1->text());
            okno_logowanie->getLogowanie()->getUzytkownik()->zapisz(okno_logowanie->getLogowanie()->getUzytkownik()->getID());
            this->hide();
        }
        else{
            QMessageBox::information(this,"Błąd","Kod nie jest poprawny");
        }
    }
    else{
        QMessageBox::information(this,"Błąd","Hasła nie są identyczne");
    }
}
