#ifndef EMPRESREMOVER_H
#define EMPRESREMOVER_H

#include <QDialog>

namespace Ui {
class EmpresRemover;
}

class EmpresRemover : public QDialog
{
    Q_OBJECT

public:
    explicit EmpresRemover(QWidget *parent = 0);
    ~EmpresRemover();

private slots:
    void on_pushButton_clicked();

private:
    Ui::EmpresRemover *ui;
};

#endif // EMPRESREMOVER_H
