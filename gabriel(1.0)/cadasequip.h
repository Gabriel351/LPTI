#ifndef CADASEQUIP_H
#define CADASEQUIP_H

#include <QDialog>

namespace Ui {
class CadasEquip;
}

class CadasEquip : public QDialog
{
    Q_OBJECT

public:
    explicit CadasEquip(QWidget *parent = 0);
    ~CadasEquip();

private slots:
    void on_pushButton_3_clicked();

    void on_btn_confirma_clicked();

private:
    Ui::CadasEquip *ui;
};

#endif // CADASEQUIP_H
