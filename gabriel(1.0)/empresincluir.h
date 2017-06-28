#ifndef EMPRESINCLUIR_H
#define EMPRESINCLUIR_H

#include <QDialog>

namespace Ui {
class EmpresIncluir;
}

class EmpresIncluir : public QDialog
{
    Q_OBJECT

public:
    explicit EmpresIncluir(QWidget *parent = 0);
    ~EmpresIncluir();

private slots:
    void on_pushButton_clicked();


private:
    Ui::EmpresIncluir *ui;
};

#endif // EMPRESINCLUIR_H
