#ifndef MENUALTERAR_H
#define MENUALTERAR_H

#include <QDialog>

namespace Ui {
class MenuAlterar;
}

class MenuAlterar : public QDialog
{
    Q_OBJECT

public:
    explicit MenuAlterar(QWidget *parent = 0);
    ~MenuAlterar();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MenuAlterar *ui;
};

#endif // MENUALTERAR_H
