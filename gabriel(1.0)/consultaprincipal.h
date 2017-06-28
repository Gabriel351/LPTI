#ifndef CONSULTAPRINCIPAL_H
#define CONSULTAPRINCIPAL_H

#include <QDialog>

namespace Ui {
class ConsultaPrincipal;
}

class ConsultaPrincipal : public QDialog
{
    Q_OBJECT

public:
    explicit ConsultaPrincipal(QWidget *parent = 0);
    ~ConsultaPrincipal();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::ConsultaPrincipal *ui;
};

#endif // CONSULTAPRINCIPAL_H
