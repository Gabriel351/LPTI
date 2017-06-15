#ifndef ALTERAREQUIP_H
#define ALTERAREQUIP_H

#include <QDialog>

namespace Ui {
class AlterarEquip;
}

class AlterarEquip : public QDialog
{
    Q_OBJECT

public:
    explicit AlterarEquip(QWidget *parent = 0);
    ~AlterarEquip();

private slots:
     void on_pushButton_3_clicked();

private:
    Ui::AlterarEquip *ui;
};

#endif // ALTERAREQUIP_H
