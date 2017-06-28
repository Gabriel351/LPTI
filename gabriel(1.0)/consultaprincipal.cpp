#include "consultaprincipal.h"
#include "ui_consultaprincipal.h"
#include "consusuarios.h"
#include "conslab.h"
#include "consequi.h"
#include "menuprinc.h"

ConsultaPrincipal::ConsultaPrincipal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConsultaPrincipal)
{
    ui->setupUi(this);
}

ConsultaPrincipal::~ConsultaPrincipal()
{
    delete ui;
}

void ConsultaPrincipal::on_pushButton_3_clicked()
{
    ConsUsuarios consusuarios;
    consusuarios.setModal(true);
    consusuarios.exec();
}

void ConsultaPrincipal::on_pushButton_2_clicked()
{
    ConsLab conslab;
    conslab.setModal(true);
    conslab.exec();
}

void ConsultaPrincipal::on_pushButton_clicked()
{
    ConsEqui consequi;
    consequi.setModal(true);
    consequi.exec();
}

void ConsultaPrincipal::on_pushButton_4_clicked()
{
    MenuPrinc menuprinc;
    menuprinc.setModal(true);
    menuprinc.exec();
}
