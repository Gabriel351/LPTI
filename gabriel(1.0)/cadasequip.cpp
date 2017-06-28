#include "cadasequip.h"
#include "ui_cadasequip.h"
#include "menucadas.h"
#include "QString"
#include "QSqlquery"
#include "QDebug"
#include "QSqlDatabase"

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

void CadasEquip::on_btn_confirma_clicked()
{
    QSqlDatabase db;
    QString codigo = ui->cod->text();
    QString descricao = ui->descricao->toPlainText();
    QString localizacao = ui->localizacao->text();
    QString data_aq = ui->data_aquisicao->text();
    QString fornecedor = ui->fornecedor->text();
    QString nota_fiscal = ui->nota_fiscal->text();
    QString garantia = ui->garantia->text();
    QString data_fiscal = ui->data_fiscal->text();
    QString aquisicao = ui->aquisicao->text();
    QString solicitante = ui->solicitante->text();
    bool aux = true;

    //chave estrangeira é int
    int lab;

    //mudança na data para ficar no padrão do mysql
    QString data1 = data_aq.right(4) + "-" + data_aq.mid(3, 2) + "-" + data_aq.left(2);
    QString data2 = data_fiscal.right(4) + "-" + data_fiscal.mid(3, 2) + "-" + data_fiscal.left(2);


    QPalette paleta;
    paleta.setColor(QPalette::WindowText, Qt::red);
    ui->mensagem->setPalette(paleta);


    //código, descrição e localização devem ser preenchidos
    if (codigo.size() == 0 || descricao.size() == 0 || localizacao.size() == 0) {
        ui->mensagem->setText("Os campos com asterisco não podem ficar em branco");
    } else {
        QSqlQuery query;
        int count = 0;
        aux = true;


        //verificando se o código do equipamento já existe
        //EstadoEmpres->false(não está emprestado)
        //EstadoExcluir->false(não é um equipamento que foi excluído)
        query.prepare("select CodEquipamento from equipamento where IdEquipamento='"+codigo+"' and EstadoExcluir=false");
        if (query.exec()) {
            while(query.next()) {
                count++;
            }
            if (count > 0) {
                ui->mensagem->setText("Código do equipamento já está sendo usado");
            }
        }
        count = 0;


        //verificando se o código do laboratório existe
        query.prepare("select CodLaboratorio from laboratorio where IdLaboratorio='"+localizacao+"' and Estado=true");
        if (query.exec()) {
            while(query.next()) {
                lab = query.value(0).toInt();
                count++;
            }
            if (count != 1){
                aux = false;
                ui->mensagem->setText("Código do laboratório inserido não existe");
            }
        }
        count = 0;


        //tentiva de inserção no banco de dados
        if(aux == true) {
            query.prepare("insert into equipamento (Descricao,DataAquisicao,Fornecedor,NotaFiscal,TempoGarantia,"
            "DataNotaFiscal,ProcessoAquisicao,Solicitante,IdEquipamento,Laboratorio,EstadoEmpres,EstadoExcluir)"
            "values(?,?,?,?,?,?,?,?,?,?,?,?)");
            query.addBindValue(descricao);
            query.addBindValue(data1);
            /*if (fornecedor.size() == 0) {
                query.addBindValue("");
            } else {
                query.addBindValue(fornecedor);
            }

            if (nota_fiscal.size() == 0) {
                query.addBindValue("");
            } else {
                query.addBindValue(nota_fiscal);
            }

            if (garantia.size() == 0) {
                query.addBindValue("");
            } else {
                query.addBindValue(garantia);
            }

            query.addBindValue(data2);

            if (aquisicao.size() == 0) {
                query.addBindValue("");
            } else {
                query.addBindValue(aquisicao);
            }

            if (solicitante.size() == 0) {
                query.addBindValue("");
            } else {
                query.addBindValue(solicitante);
            }*/
            query.addBindValue(fornecedor);
            query.addBindValue(nota_fiscal);
            query.addBindValue("0000-00-00");
            query.addBindValue(data2);
            query.addBindValue(aquisicao);
            query.addBindValue(solicitante);
            query.addBindValue(codigo);
            query.addBindValue(lab);
            query.addBindValue(false);
            query.addBindValue(false);
            if (query.exec()) {
                paleta.setColor(QPalette::WindowText, Qt::darkGreen);
                ui->mensagem->setPalette(paleta);
                ui->mensagem->setText("Equipamento cadastrado com sucesso");
            } else {

                ui->mensagem->setText("erro");
            }
        }
    }
}
