#include "login.h"
#include "ui_login.h"
#include "sobre.h"
#include "recsenha.h"
#include "menuprinc.h"
#include <QtSql>
#include <QCoreApplication>
#include <QSqlQuery>
#include <QString>

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    QSqlDatabase db;
    if(!(db.isOpen())) {
        db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setDatabaseName("mydb");
        db.setPassword("root");
        db.setUserName("root");
        db.open();
    }
    if(db.isOpen()) {
        ui->bd_connection->setText("Conectado ao banco de dados");
    } else {
        ui->bd_connection->setText("Falha ao conectar no banco de dados");
    }
}

Login::~Login()
{
    delete ui;
}

void Login::on_actionSobre_triggered()
{
    Sobre sobre;
    sobre.setModal(true);
    sobre.exec();
}


void Login::on_pushButton_2_clicked()
{
    RecSenha recsenha;
    recsenha.setModal(true);
    recsenha.exec();
}

void Login::on_iniciar_clicked()
{
    QSqlQuery query;
    QString siape = ui->siape->text();
    QString senha = ui->senha->text();
    query.prepare("select SIAPE,Senha from usuario where SIAPE='"+siape+"' and Senha='"+senha+"' ");
    if (query.exec()) {
        int count = 0;
        while(query.next()) {
            count++;
        }
        if(count == 1) {
            MenuPrinc menuprinc;
            menuprinc.setModal(true);
            this->close();
            menuprinc.exec();
        } else {
            ui->falha_conexao->setText("siape ou senha inválido");
        }
    } else {
        ui->falha_conexao->setText("cansei");
    }
}

