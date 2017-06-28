#include "empresrenovar.h"
#include "ui_empresrenovar.h"
#include "menuempres.h"

EmpresRenovar::EmpresRenovar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmpresRenovar)
{
    ui->setupUi(this);
}

EmpresRenovar::~EmpresRenovar()
{
    delete ui;
}

void EmpresRenovar::on_pushButton_clicked()
{
    MenuEmpres menuempres;
    menuempres.setModal(true);
    menuempres.exec();
}
