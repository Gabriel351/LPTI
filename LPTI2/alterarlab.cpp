#include "alterarlab.h"
#include "ui_alterarlab.h"
#include "menualterar.h"
#include "QSqlQuery"

AlterarLab::AlterarLab(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlterarLab)
{
    ui->setupUi(this);
}

AlterarLab::~AlterarLab()
{
    delete ui;
}

void AlterarLab::on_pushButton_4_clicked()
{
    MenuAlterar menualterar;
    menualterar.setModal(true);
    menualterar.exec();
}



void AlterarLab::on_setCodigo_textChanged()
{
    QString codigo = ui->setCodigo->text();
    QString descricao, localizacao, professor, tecnico;
    int count = 0;

    QSqlQuery query;
    //buscar dados banco de dados
    query.prepare("select Descricao,Localizacao from laboratorio where IdLaboratorio='"+codigo+"' ");
    if(query.exec()) {
        while(query.next()) {
            if (count == 0) {
                descricao = query.value(0).toString();
                localizacao = query.value(1).toString();
            }
            count++;
        }
        if (count == 1) {
            ui->setDescricao->setText(descricao);
            ui->setLocalizacao->setText(localizacao);
        }
    }
    count = 0;


    //buscar SIAPE do professor no banco de dados
    query.prepare("select SIAPE from laboratorio as L inner join usuario as U where (L.IdLaboratorio = '"+codigo+"' and L.Professor = U.CodUsuario and U.Estado=true)");
    if (query.exec()) {
        while (query.next()) {
            if (count == 0) {
                professor = query.value(0).toString();
                count++;
            }
        }
    }
    count = 0;


    //buscar SIAPE do tecnico
    query.prepare("select SIAPE from laboratorio as L inner join usuario as U where (L.IdLaboratorio = '"+codigo+"' and L.Tecnico = U.CodUsuario and U.Estado = true)");
    if (query.exec()) {
        while (query.next()) {
            if (count == 0) {
                tecnico = query.value(0).toString();
                count++;
            }
        }
    }

    //caso o tecnico esteja em branco
    if (tecnico == "ghost") {
        tecnico = "";
    }
    ui->setProfessor->setText(professor);
    ui->setTecnico->setText(tecnico);
}



void AlterarLab::on_btn_alterar_clicked()
{
    QSqlQuery query;
    QString codigo = ui->setCodigo->text();
    QString descricao = ui->setDescricao->toPlainText();
    QString localizacao = ui->setLocalizacao->text();
    QString professor = ui->setProfessor->text();
    QString tecnico = ui->setTecnico->text();
    //usada para não acontecer uma tentativa de update no banco de dados
    //caso alguma das "exceções" mais abaixo aconteça
    bool aux = true;

    //chave estrangeira é um número
    int prof, tec = 0;

    //usado nas querys
    int count = 0;


    //teste para ver quais campos estão em branco(apenas o técnico pode estar)
    if (codigo.size() == 0 || descricao.size() == 0 || localizacao.size() == 0 || professor.size() == 0) {
        ui->fail->setText("teste");
    } else {
        //verificando se o SIAPE do professor inserido já existe
        //cargo=true->professor
        query.prepare("select CodUsuario,SIAPE,Cargo from usuario where SIAPE='"+professor+"' and Cargo=true and Estado=true");
        if (query.exec()) {
            while(query.next()) {
                prof = query.value(0).toInt();
                count++;
            }
             if (count != 1) {
                aux = false;
                ui->fail->setText("SIAPE do professor não encontrado");
            }
        }
        count = 0;


        //verificando se o SIAPE do técnico inserido já existe, se o campo não estiver em branco
        //cargo=false->tecnico
        if (tecnico.size() != 0) {
            query.prepare("select CodUsuario,SIAPE,Cargo from usuario where SIAPE='"+tecnico+"' and Cargo=false and Estado=true");
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


        //tentativa de update no banco de dados(laboratório)
        if (aux == true) {
            query.prepare("update laboratorio set Descricao=?, Localizacao=?, "
            "Professor=?, Tecnico=? where IdLaboratorio='"+codigo+"' ");
            query.addBindValue(descricao);
            query.addBindValue(localizacao);
            query.addBindValue(prof);
            if (tec != 0) {
                query.addBindValue(tec);
            } else {
                query.addBindValue(8);
            }
            if (query.exec()) {
                MenuAlterar menualterar;
                menualterar.setModal(true);
                ui->fail->setText("");
                this->close();
                menualterar.exec();
            } else {
                ui->fail->setText("falha ao conectar no banco de dados");
            }
        }
    }
}
