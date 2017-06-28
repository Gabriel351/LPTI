#include "menucadasoption.h"
#include "ui_menucadasoption.h"
#include "menucadas.h"
#include "menuprinc.h"
#include "menualterar.h"
#include "menuremove.h"

MenuCadasOption::MenuCadasOption(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuCadasOption)
{
    ui->setupUi(this);
}

MenuCadasOption::~MenuCadasOption()
{
    delete ui;
}

void MenuCadasOption::on_pushButton_clicked()
{
    MenuCadas cadas;
    cadas.setModal(true);
    cadas.exec();
}

void MenuCadasOption::on_pushButton_4_clicked()
{
    MenuPrinc menuprinc;
    menuprinc.setModal(true);
    menuprinc.exec();
}

void MenuCadasOption::on_pushButton_2_clicked()
{
    MenuAlterar menualterar;
    menualterar.setModal(true);
    menualterar.exec();
}

void MenuCadasOption::on_pushButton_3_clicked()
{
    MenuRemove menuremove;
    menuremove.setModal(true);
    menuremove.exec();
}


