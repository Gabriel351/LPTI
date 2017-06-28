#include "cadaslab.h"
#include "ui_cadaslab.h"
#include "menucadas.h"
#include "QSqlQuery"
#include "QDebug"
#include "QVariant"

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
    QString descricao = ui->lab_setDescricao->toPlainText();
    QString localizacao = ui->lab_setLocalizacao->text();
    QString professor = ui->lab_setProfessor->text();
    QString tecnico = ui->lab_setTecnico->text();
    QPalette paleta;
    paleta.setColor(QPalette::WindowText, Qt::red);
    ui->fail->setPalette(paleta);

    //usada para não acontecer uma tentativa de inserção no banco de dados
    //caso alguma das "exceções" mais abaixo aconteça
    bool aux = true;

    //chave estrangeira é um número
    int prof, tec = 0;

    //usado nas querys
    int count = 0;


    //teste para ver quais campos estão em branco(apenas o técnico pode estar)
    if (codigo.size() == 0 || descricao.size() == 0 || localizacao.size() == 0 || professor.size() == 0) {
        ui->fail->setText("Apenas o técnico de laboratório pode ficar em branco");
    } else {
        //verificando se o SIAPE do professor inserido já existe
        //cargo=true->professor
        query.prepare("select CodUsuario,SIAPE,Cargo from usuario where SIAPE='"+professor+"' and Cargo=true and Estado=true ");
        if (query.exec()) {
            while(query.next()) {
                prof = query.value(0).toInt();
                count++;
            }
        }
        if (count != 1) {
            aux = false;
            ui->fail->setText("SIAPE do professor não encontrado");
        }
        count = 0;


        //verificando se o SIAPE do técnico inserido já existe, se o campo não estiver em branco
        //cargo=false->tecnico
        if (tecnico.size() != 0) {
            query.prepare("select CodUsuario,SIAPE,Cargo from usuario where SIAPE='"+tecnico+"' and Cargo=false and Estado=true ");
            if (query.exec()) {
                while(query.next()) {
                    tec = query.value(0).toInt();
                    count++;
                }
            }
            if (count != 1) {
                    aux = false;
                    ui->fail->setText("SIAPE do técnico não encontrado");
            }
        }
        count = 0;


        //verificando se o codigo do laboratório já existe
        query.prepare("select CodLaboratorio from laboratorio where IdLaboratorio='"+codigo+"' and Estado=true ");
        if (query.exec()) {
            while(query.next()) {
                count++;
            }
        }
        if (count > 0) {
            aux = false;
            ui->fail->setText("Código de laboratório preenchido já existe");
        }


        //tentativa de inserção no banco de dados(laboratório)
        if (aux == true) {
            query.prepare("INSERT INTO laboratorio (IdLaboratorio,Descricao,Localizacao,Tecnico,Professor,Estado)"
            "VALUES (?,?,?,?,?,?)");
            query.addBindValue(codigo);
            query.addBindValue(descricao);
            query.addBindValue(localizacao);
            if (tec != 0) {
                query.addBindValue(tec);
            } else {
                query.addBindValue(8);
            }
            query.addBindValue(prof);
            query.addBindValue(true);
            if (query.exec()) {
                QPalette paleta;
                paleta.setColor(QPalette::WindowText, Qt::darkGreen);
                ui->fail->setPalette(paleta);
                ui->fail->setText("Cadastro realizado com sucesso");

            } else {
                ui->fail->setText("Falha na tentativa de inserção no banco de dados");
            }
        }
    }
}
