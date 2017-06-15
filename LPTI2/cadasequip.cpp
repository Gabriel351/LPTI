#include "cadasequip.h"
#include "ui_cadasequip.h"
#include "menucadas.h"

CadasEquip::CadasEquip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadasEquip)
{
    ui->setupUi(this);
}

CadasEquip::~CadasEquip()
{
    delete ui;
}

void CadasEquip::on_pushButton_3_clicked()
{
    MenuCadas menucadas;
    menucadas.setModal(true);
    menucadas.exec();
}
