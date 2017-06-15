#ifndef EMPRESRENOVAR_H
#define EMPRESRENOVAR_H

#include <QDialog>

namespace Ui {
class EmpresRenovar;
}

class EmpresRenovar : public QDialog
{
    Q_OBJECT

public:
    explicit EmpresRenovar(QWidget *parent = 0);
    ~EmpresRenovar();

private slots:
    void on_pushButton_clicked();

private:
    Ui::EmpresRenovar *ui;
};

#endif // EMPRESRENOVAR_H
