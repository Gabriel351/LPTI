#include "consequi.h"
#include "ui_consequi.h"
#include "consultaprincipal.h"

ConsEqui::ConsEqui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConsEqui)
{
    ui->setupUi(this);
}

ConsEqui::~ConsEqui()
{
    delete ui;
}

void ConsEqui::on_pushButton_4_clicked()
{
    ConsultaPrincipal consultaprincipal;
    consultaprincipal.setModal(true);
    consultaprincipal.exec();
}
