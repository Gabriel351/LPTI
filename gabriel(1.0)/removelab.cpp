#include "removelab.h"
#include "ui_removelab.h"
#include "menuremove.h"
#include "QString"
#include "QSqlQuery"
#include "QPalette"

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


void RemoveLab::on_btn_confirma_clicked()
{
    QSqlQuery query;
    QString codigo = ui->cod_lab->text();
    int count = 0;
    bool aux = true;
    QPalette paleta;
    paleta.setColor(QPalette::WindowText, Qt::red);
    ui->fail->setPalette(paleta);



    //verificando se o codigo do laboratório existe
    query.prepare("select CodLaboratorio from laboratorio where IdLaboratorio='"+codigo+"' and Estado=true ");
    if (query.exec()) {
        while(query.next()) {
            count++;
        }
    }
    if (count != 1) {
        aux = false;
        ui->fail->setText("Código de laboratório preenchido não existe");
    }
    count = 0;

    if(aux == true) {
        query.prepare("update laboratorio set Estado=false where IdLaboratorio='"+codigo+"' and Estado=true");
        if(query.exec()) {
            paleta.setColor(QPalette::WindowText, Qt::darkGreen);
            ui->fail->setPalette(paleta);
            ui->fail->setText("Laboratório excluido com sucesso");
        }
    }
}

void RemoveLab::on_cod_lab_textChanged()
{
    QString codigo = ui->cod_lab->text();
    QString descricao;
    QSqlQuery query;
    int count = 0;
    query.prepare("select Descricao from laboratorio where IdLaboratorio='"+codigo+"' and Estado=true");
    if(query.exec()) {
        while(query.next()) {
            count++;
            descricao = query.value(0).toString();
        }
        if (count == 1) {
            ui->lab_decricao->setText(descricao);
        }
    }
}
