#include "removeequip.h"
#include "ui_removeequip.h"
#include "menuremove.h"

RemoveEquip::RemoveEquip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveEquip)
{
    ui->setupUi(this);
}

RemoveEquip::~RemoveEquip()
{
    delete ui;
}

void RemoveEquip::on_pushButton_clicked()
{
    MenuRemove menuremove;
    menuremove.setModal(true);
    menuremove.exec();
}

