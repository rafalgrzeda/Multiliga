#ifndef OKNO_ODZYSKAJHASLO_H
#define OKNO_ODZYSKAJHASLO_H

#include <QDialog>
#include <okno_logowanie.h>
namespace Ui {
class Okno_odzyskajHaslo;
}

class Okno_odzyskajHaslo : public QDialog
{
    Q_OBJECT
public:
    explicit Okno_odzyskajHaslo( Okno_logowanie *_okno,QWidget *parent = nullptr);
    ~Okno_odzyskajHaslo();

private slots:
    void on_button_zatwierdz_clicked();

private:
    Ui::Okno_odzyskajHaslo *ui;
    Okno_logowanie *okno_logowanie;
};

#endif // OKNO_ODZYSKAJHASLO_H
