#include "cadaslab.h"
#include "ui_cadaslab.h"
#include "menucadas.h"
#include "QSqlQuery"

CadasLab::CadasLab(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadasLab)
{
    ui->setupUi(this);
}

CadasLab::~CadasLab()
{
    delete ui;
}


void CadasLab::on_pushButton_3_clicked()
{
    MenuCadas menucadas;
    menucadas.setModal(true);
    menucadas.exec();
}


void CadasLab::on_btn_confirma_clicked()
{
    QSqlQuery query;
    QString codigo = ui->lab_setCodigo->text();
    QString descricao = ui->lab_setDescricao->text();
    QString localizacao = ui->lab_setLocalizacao->text();
    QString professor = ui->lab_setProfessor->text();
    QString tecnico = ui->lab_setTecnico->text();
    if (codigo == "" && descricao)
    //query.prepare("INSERT INTO laboratorio (IdLaboratorio,Descricao,Localizacao,Tecnico,Professor,Estado)"
   // "VALUES (:SenhaIdLaboratorio,:Descricao,:Localizacao,:Tecnico,:Professor,:Estado)");
    //query.bindValue(", 1001);
    //query.bindValue(":name", "Thad Beaumo
    //if (query.exec()) {

}
