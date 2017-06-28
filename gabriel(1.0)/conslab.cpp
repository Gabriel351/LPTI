#include "conslab.h"
#include "ui_conslab.h"
#include "consultaprincipal.h"

ConsLab::ConsLab(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConsLab)
{
    ui->setupUi(this);
}

ConsLab::~ConsLab()
{
    delete ui;
}

void ConsLab::on_pushButton_4_clicked()
{
    ConsultaPrincipal consultaprincipal;
    consultaprincipal.setModal(true);
    consultaprincipal.exec();
}
