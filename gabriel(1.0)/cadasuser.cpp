#include "cadasuser.h"
#include "ui_cadasuser.h"
#include "menucadas.h"

CadasUser::CadasUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadasUser)
{
    ui->setupUi(this);
}

CadasUser::~CadasUser()
{
    delete ui;
}

void CadasUser::on_pushButton_3_clicked()
{
    MenuCadas menucadas;
    menucadas.setModal(true);
    menucadas.exec();
}
