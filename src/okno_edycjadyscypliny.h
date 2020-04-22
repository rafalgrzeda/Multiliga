#ifndef OKNO_EDYCJADYSCYPLINY_H
#define OKNO_EDYCJADYSCYPLINY_H

#include <QDialog>

namespace Ui {
class Okno_edycjaDyscypliny;
}

class Okno_edycjaDyscypliny : public QDialog
{
    Q_OBJECT

public:
    explicit Okno_edycjaDyscypliny(QWidget *parent = nullptr);
    ~Okno_edycjaDyscypliny();

private:
    Ui::Okno_edycjaDyscypliny *ui;
};

#endif // OKNO_EDYCJADYSCYPLINY_H
