#include "consusuarios.h"
#include "ui_consusuarios.h"
#include "consultaprincipal.h"

ConsUsuarios::ConsUsuarios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConsUsuarios)
{
    ui->setupUi(this);
}

ConsUsuarios::~ConsUsuarios()
{
    delete ui;
}

void ConsUsuarios::on_pushButton_3_clicked()
{
    ConsultaPrincipal consultaprincipal;
    consultaprincipal.setModal(true);
    consultaprincipal.exec();
}
