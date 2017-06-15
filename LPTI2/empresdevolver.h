#ifndef EMPRESDEVOLVER_H
#define EMPRESDEVOLVER_H

#include <QDialog>

namespace Ui {
class Empresdevolver;
}

class EmpresDevolver : public QDialog
{
    Q_OBJECT

public:
    explicit EmpresDevolver(QWidget *parent = 0);
    ~EmpresDevolver();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Empresdevolver *ui;
};

#endif // EMPRESDEVOLVER_H
