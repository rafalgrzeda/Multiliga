#include "okno_dodaniekontauzytkownika.h"
#include "ui_okno_dodaniekontauzytkownika.h"
#include <QMessageBox>
Okno_dodanieKontaUzytkownika::Okno_dodanieKontaUzytkownika(Okno_panelAdministratora *_panel ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Okno_dodanieKontaUzytkownika)
{
    ui->setupUi(this);

    panel =_panel;
    ui->comboBoxTyp->addItems(QStringList()<< "Administrator" << "Uczestnik" << "Ksiegowa" << "Organizator");
}

Okno_dodanieKontaUzytkownika::~Okno_dodanieKontaUzytkownika()
{
    delete ui;
}

void Okno_dodanieKontaUzytkownika::on_button_dodaj_clicked()
{
    if(ui->haslo1->text() == ui->haslo2->text()){
        if(!panel->getAdmin()->dodajUzytkownika(ui->login->text(), ui->email->text(),ui->imie->text(),ui->nazwisko->text(),ui->haslo1->text(),ui->comboBoxTyp->currentText())){
            QMessageBox::information(this,"Błąd", "Login już istnieje");
        }
        else{
            panel->wyswwietlTabliceUzyt();
            this->hide();
        }
    }
    else{
        QMessageBox::information(this,"Błąd","Hasła nie są identyczne");
    }

}
