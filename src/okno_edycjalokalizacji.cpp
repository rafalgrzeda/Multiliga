#include "okno_edycjalokalizacji.h"
#include "ui_okno_edycjalokalizacji.h"

Okno_edycjaLokalizacji::Okno_edycjaLokalizacji(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Okno_edycjaLokalizacji)
{
    ui->setupUi(this);
}

Okno_edycjaLokalizacji::~Okno_edycjaLokalizacji()
{
    delete ui;
}
