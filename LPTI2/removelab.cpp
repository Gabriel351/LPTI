#include "removelab.h"
#include "ui_removelab.h"
#include "menuremove.h"

RemoveLab::RemoveLab(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveLab)
{
    ui->setupUi(this);
}

RemoveLab::~RemoveLab()
{
    delete ui;
}

void RemoveLab::on_pushButton_clicked()
{
    MenuRemove menuremove;
    menuremove.setModal(true);
    menuremove.exec();
}

