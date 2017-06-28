#include "removeuser.h"
#include "ui_removeuser.h"
#include "menuremove.h"

RemoveUser::RemoveUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveUser)
{
    ui->setupUi(this);
}

RemoveUser::~RemoveUser()
{
    delete ui;
}

void RemoveUser::on_pushButton_clicked()
{
    MenuRemove menuremove;
    menuremove.setModal(true);
    menuremove.exec();
}

