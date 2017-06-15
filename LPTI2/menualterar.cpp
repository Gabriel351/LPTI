#include "menualterar.h"
#include "ui_menualterar.h"
#include "menucadasoption.h"
#include "alterarequip.h"
#include "alterarlab.h"
#include "alteraruser.h"


MenuAlterar::MenuAlterar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuAlterar)
{
    ui->setupUi(this);
}

MenuAlterar::~MenuAlterar()
{
    delete ui;
}

void MenuAlterar::on_pushButton_clicked()
{
    AlterarUser alteraruser;
    alteraruser.setModal(true);
    alteraruser.exec();
}

void MenuAlterar::on_pushButton_2_clicked()
{
    AlterarLab alterarlab;
    alterarlab.setModal(true);
    alterarlab.exec();
}

void MenuAlterar::on_pushButton_3_clicked()
{
    AlterarEquip alterarequip;
    alterarequip.setModal(true);
    alterarequip.exec();
}

void MenuAlterar::on_pushButton_4_clicked()
{
    MenuCadasOption menucadasoption;
    menucadasoption.setModal(true);
    menucadasoption.exec();
}
