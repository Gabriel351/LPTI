#ifndef MENUPRINC_H
#define MENUPRINC_H

#include <QDialog>

namespace Ui {
class MenuPrinc;
}

class MenuPrinc : public QDialog
{
    Q_OBJECT

public:
    explicit MenuPrinc(QWidget *parent = 0);
    ~MenuPrinc();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MenuPrinc *ui;
};

#endif // MENUPRINC_H
