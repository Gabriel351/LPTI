#include "menuempres.h"
#include "ui_menuempres.h"
#include "menuprinc.h"
#include "empresincluir.h"
#include "empresremover.h"
#include "empresrenovar.h"
#include "empresdevolver.h"
#include "consempresimo.h"

MenuEmpres::MenuEmpres(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menuempres)
{
    ui->setupUi(this);
}

MenuEmpres::~MenuEmpres()
{
    delete ui;
}

void MenuEmpres::on_pushButton_6_clicked()
{
    MenuPrinc menuprinc;
    menuprinc.setModal(true);
    menuprinc.exec();
}

void MenuEmpres::on_pushButton_clicked()
{
    EmpresIncluir empresincluir;
    empresincluir.setModal(true);
    empresincluir.exec();
}

void MenuEmpres::on_pushButton_2_clicked()
{
    EmpresRemover empresremover;
    empresremover.setModal(true);
    empresremover.exec();
}

void MenuEmpres::on_pushButton_3_clicked()
{
    EmpresRenovar empresrenovar;
    empresrenovar.setModal(true);
    empresrenovar.exec();
}

void MenuEmpres::on_pushButton_4_clicked()
{
    EmpresDevolver empresdevolver;
    empresdevolver.setModal(true);
    empresdevolver.exec();
}

void MenuEmpres::on_pushButton_5_clicked()
{
    ConsEmpresimo consemprestimo;
    consemprestimo.setModal(true);
    consemprestimo.exec();
}
