#include "okno_edycjaligi.h"
#include "ui_okno_edycjaligi.h"

Okno_edycjaLigi::Okno_edycjaLigi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Okno_edycjaLigi)
{
    ui->setupUi(this);
}

Okno_edycjaLigi::~Okno_edycjaLigi()
{
    delete ui;
}
