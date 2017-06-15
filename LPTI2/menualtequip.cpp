#include "menualtequip.h"
#include "ui_menualtequip.h"

MenuAltEquip::MenuAltEquip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuAltEquip)
{
    ui->setupUi(this);
}

MenuAltEquip::~MenuAltEquip()
{
    delete ui;
}
