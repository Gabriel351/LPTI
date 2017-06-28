#ifndef ALTERARLAB_H
#define ALTERARLAB_H

#include <QDialog>

namespace Ui {
class AlterarLab;
}

class AlterarLab : public QDialog
{
    Q_OBJECT

public:
    explicit AlterarLab(QWidget *parent = 0);
    ~AlterarLab();

private slots:
     void on_pushButton_4_clicked();

     void on_setCodigo_textChanged();

     void on_btn_alterar_clicked();

private:
    Ui::AlterarLab *ui;
};

#endif // ALTERARLAB_H
