#ifndef OKNO_DODANIELIGI_H
#define OKNO_DODANIELIGI_H

#include <QDialog>

namespace Ui {
class Okno_dodanieLigi;
}

class Okno_dodanieLigi : public QDialog
{
    Q_OBJECT

public:
    explicit Okno_dodanieLigi(QWidget *parent = nullptr);
    ~Okno_dodanieLigi();

private:
    Ui::Okno_dodanieLigi *ui;
};

#endif // OKNO_DODANIELIGI_H
