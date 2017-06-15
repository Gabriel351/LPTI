#include "menuprinc.h"
#include "ui_menuprinc.h"
#include "menucadasoption.h"
#include "menuempres.h"
#include "consultaprincipal.h"

MenuPrinc::MenuPrinc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuPrinc)
{
    ui->setupUi(this);
}

MenuPrinc::~MenuPrinc()
{
    delete ui;
}



void MenuPrinc::on_pushButton_clicked()
{
    MenuCadasOption menucadasoption;
    menucadasoption.setModal(true);
    menucadasoption.exec();
}

void MenuPrinc::on_pushButton_2_clicked()
{
    MenuEmpres menuemp;
    menuemp.setModal(true);
    menuemp.exec();
}

void MenuPrinc::on_pushButton_3_clicked()
{
    ConsultaPrincipal consultaprincipal;
    consultaprincipal.setModal(true);
    consultaprincipal.exec();
}
