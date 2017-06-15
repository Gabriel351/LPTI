#include "consempresimo.h"
#include "ui_consempresimo.h"
#include "menuempres.h"

ConsEmpresimo::ConsEmpresimo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConsEmpresimo)
{
    ui->setupUi(this);
}

ConsEmpresimo::~ConsEmpresimo()
{
    delete ui;
}

void ConsEmpresimo::on_pushButton_4_clicked()
{
    MenuEmpres menuempres;
    menuempres.setModal(true);
    menuempres.exec();
}
