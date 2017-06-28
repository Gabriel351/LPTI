#include "menuremove.h"
#include "ui_menuremove.h"
#include "menucadasoption.h"
#include "removeequip.h"
#include "removeuser.h"
#include "removelab.h"


MenuRemove::MenuRemove(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuRemove)
{
    ui->setupUi(this);
}

MenuRemove::~MenuRemove()
{
    delete ui;
}

void MenuRemove::on_pushButton_clicked()
{
    RemoveUser removeuser;
    removeuser.setModal(true);
    removeuser.exec();
}

void MenuRemove::on_pushButton_2_clicked()
{
    RemoveLab removelab;
    removelab.setModal(true);
    removelab.exec();
}

void MenuRemove::on_pushButton_3_clicked()
{
    RemoveEquip removeequip;
    removeequip.setModal(true);
    removeequip.exec();
}

void MenuRemove::on_pushButton_4_clicked()
{
    MenuCadasOption menucadasoption;
    menucadasoption.setModal(true);
    menucadasoption.exec();
}
