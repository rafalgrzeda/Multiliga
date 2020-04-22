#ifndef OKNO_EDYCJASEZONU_H
#define OKNO_EDYCJASEZONU_H

#include <QDialog>

namespace Ui {
class Okno_edycjaSezonu;
}

class Okno_edycjaSezonu : public QDialog
{
    Q_OBJECT

public:
    explicit Okno_edycjaSezonu(QWidget *parent = nullptr);
    ~Okno_edycjaSezonu();

private:
    Ui::Okno_edycjaSezonu *ui;
};

#endif // OKNO_EDYCJASEZONU_H
