#ifndef REMOVELAB_H
#define REMOVELAB_H

#include <QDialog>

namespace Ui {
class RemoveLab;
}

class RemoveLab : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveLab(QWidget *parent = 0);
    ~RemoveLab();

private slots:
     void on_pushButton_clicked();

     void on_btn_confirma_clicked();

     void on_cod_lab_textChanged();

private:
    Ui::RemoveLab *ui;
};

#endif // REMOVELAB_H
