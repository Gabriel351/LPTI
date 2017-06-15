#include "menucadas.h"
#include "ui_menucadas.h"
#include "cadasuser.h"
#include "cadaslab.h"
#include "cadasequip.h"
#include "menucadasoption.h"

MenuCadas::MenuCadas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuCadas)
{
    ui->setupUi(this);
}

MenuCadas::~MenuCadas()
{
    delete ui;
}

void MenuCadas::on_pushButton_clicked()
{
    CadasUser cadasuser;
    cadasuser.setModal(true);
    cadasuser.exec();
}

void MenuCadas::on_pushButton_2_clicked()
{
    CadasLab cadaslab;
    cadaslab.setModal(true);
    cadaslab.exec();
}


void MenuCadas::on_pushButton_3_clicked()
{
    CadasEquip cadasequip;
    cadasequip.setModal(true);
    cadasequip.exec();
}

void MenuCadas::on_pushButton_4_clicked()
{
    MenuCadasOption menucadasoption;
    menucadasoption.setModal(true);
    menucadasoption.exec();
}
