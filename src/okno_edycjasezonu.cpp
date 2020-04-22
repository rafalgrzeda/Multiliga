#include "okno_edycjasezonu.h"
#include "ui_okno_edycjasezonu.h"

Okno_edycjaSezonu::Okno_edycjaSezonu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Okno_edycjaSezonu)
{
    ui->setupUi(this);
}

Okno_edycjaSezonu::~Okno_edycjaSezonu()
{
    delete ui;
}
