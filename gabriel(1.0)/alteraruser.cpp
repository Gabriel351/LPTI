#include "alteraruser.h"
#include "ui_alteraruser.h"
#include "menualterar.h"

AlterarUser::AlterarUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlterarUser)
{
    ui->setupUi(this);
}

AlterarUser::~AlterarUser()
{
    delete ui;
}

void AlterarUser::on_pushButton_4_clicked()
{
    MenuAlterar menualterar;
    menualterar.setModal(true);
    menualterar.exec();
}
