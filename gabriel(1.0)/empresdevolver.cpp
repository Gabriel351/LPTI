#include "empresdevolver.h"
#include "ui_empresdevolver.h"
#include "menuempres.h"

EmpresDevolver::EmpresDevolver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Empresdevolver)
{
    ui->setupUi(this);
}

EmpresDevolver::~EmpresDevolver()
{
    delete ui;
}

void EmpresDevolver::on_pushButton_clicked()
{
    MenuEmpres menuempres;
    menuempres.setModal(true);
    menuempres.exec();
}
