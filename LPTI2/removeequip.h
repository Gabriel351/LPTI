#ifndef REMOVEEQUIP_H
#define REMOVEEQUIP_H

#include <QDialog>

namespace Ui {
class RemoveEquip;
}

class RemoveEquip : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveEquip(QWidget *parent = 0);
    ~RemoveEquip();

private slots:
     void on_pushButton_clicked();

private:
    Ui::RemoveEquip *ui;
};

#endif // REMOVEEQUIP_H
