#ifndef OKNO_EDYCJALIGI_H
#define OKNO_EDYCJALIGI_H

#include <QDialog>

namespace Ui {
class Okno_edycjaLigi;
}

class Okno_edycjaLigi : public QDialog
{
    Q_OBJECT

public:
    explicit Okno_edycjaLigi(QWidget *parent = nullptr);
    ~Okno_edycjaLigi();

private:
    Ui::Okno_edycjaLigi *ui;
};

#endif // OKNO_EDYCJALIGI_H
