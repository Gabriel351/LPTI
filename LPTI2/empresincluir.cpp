#include "empresincluir.h"
#include "ui_empresincluir.h"
#include "menuempres.h"

EmpresIncluir::EmpresIncluir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmpresIncluir)
{
    ui->setupUi(this);
}

EmpresIncluir::~EmpresIncluir()
{
    delete ui;
}

void EmpresIncluir::on_pushButton_clicked()
{
    MenuEmpres menuempres;
    menuempres.setModal(true);
    menuempres.exec();
}
