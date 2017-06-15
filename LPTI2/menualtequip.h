#ifndef MENUALTEQUIP_H
#define MENUALTEQUIP_H

#include <QDialog>

namespace Ui {
class MenuAltEquip;
}

class MenuAltEquip : public QDialog
{
    Q_OBJECT

public:
    explicit MenuAltEquip(QWidget *parent = 0);
    ~MenuAltEquip();

private:
    Ui::MenuAltEquip *ui;
};

#endif // MENUALTEQUIP_H
