#ifndef OKNO_DODANIELOKALIZACJI_H
#define OKNO_DODANIELOKALIZACJI_H

#include <QDialog>

namespace Ui {
class Okno_dodanieLokalizacji;
}

class Okno_dodanieLokalizacji : public QDialog
{
    Q_OBJECT

public:
    explicit Okno_dodanieLokalizacji(QWidget *parent = nullptr);
    ~Okno_dodanieLokalizacji();

private:
    Ui::Okno_dodanieLokalizacji *ui;
};

#endif // OKNO_DODANIELOKALIZACJI_H
