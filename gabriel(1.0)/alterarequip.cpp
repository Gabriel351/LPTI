#include "alterarequip.h"
#include "ui_alterarequip.h"
#include "menualterar.h"

AlterarEquip::AlterarEquip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlterarEquip)
{
    ui->setupUi(this);
}

AlterarEquip::~AlterarEquip()
{
    delete ui;
}

void AlterarEquip::on_pushButton_3_clicked()
{
    MenuAlterar menualterar;
    menualterar.setModal(true);
    menualterar.exec();
}
