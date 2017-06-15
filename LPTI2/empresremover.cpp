#include "empresremover.h"
#include "ui_empresremover.h"
#include "menuempres.h"

EmpresRemover::EmpresRemover(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmpresRemover)
{
    ui->setupUi(this);
}

EmpresRemover::~EmpresRemover()
{
    delete ui;
}

void EmpresRemover::on_pushButton_clicked()
{
    MenuEmpres menuempres;
    menuempres.setModal(true);
    menuempres.exec();
}

