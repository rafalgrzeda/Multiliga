#ifndef OKNO_EDYCJALOKALIZACJI_H
#define OKNO_EDYCJALOKALIZACJI_H

#include <QDialog>

namespace Ui {
class Okno_edycjaLokalizacji;
}

class Okno_edycjaLokalizacji : public QDialog
{
    Q_OBJECT

public:
    explicit Okno_edycjaLokalizacji(QWidget *parent = nullptr);
    ~Okno_edycjaLokalizacji();

private:
    Ui::Okno_edycjaLokalizacji *ui;
};

#endif // OKNO_EDYCJALOKALIZACJI_H
