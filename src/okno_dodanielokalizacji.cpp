#include "okno_dodanielokalizacji.h"
#include "ui_okno_dodanielokalizacji.h"

Okno_dodanieLokalizacji::Okno_dodanieLokalizacji(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Okno_dodanieLokalizacji)
{
    ui->setupUi(this);
}

Okno_dodanieLokalizacji::~Okno_dodanieLokalizacji()
{
    delete ui;
}
