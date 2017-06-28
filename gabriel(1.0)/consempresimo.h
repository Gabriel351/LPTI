#ifndef CONSEMPRESIMO_H
#define CONSEMPRESIMO_H

#include <QDialog>

namespace Ui {
class ConsEmpresimo;
}

class ConsEmpresimo : public QDialog
{
    Q_OBJECT

public:
    explicit ConsEmpresimo(QWidget *parent = 0);
    ~ConsEmpresimo();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::ConsEmpresimo *ui;
};

#endif // CONSEMPRESIMO_H
