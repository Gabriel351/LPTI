#include "recsenha.h"
#include "ui_recsenha.h"

RecSenha::RecSenha(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RecSenha)
{
    ui->setupUi(this);
}

RecSenha::~RecSenha()
{
    delete ui;
}
