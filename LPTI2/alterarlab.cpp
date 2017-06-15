#include "alterarlab.h"
#include "ui_alterarlab.h"
#include "menualterar.h"

AlterarLab::AlterarLab(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlterarLab)
{
    ui->setupUi(this);
}

AlterarLab::~AlterarLab()
{
    delete ui;
}

void AlterarLab::on_pushButton_4_clicked()
{
    MenuAlterar menualterar;
    menualterar.setModal(true);
    menualterar.exec();
}
