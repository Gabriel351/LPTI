#ifndef MENUEMPRES_H
#define MENUEMPRES_H

#include <QDialog>

namespace Ui {
class menuempres;
}

class MenuEmpres : public QDialog
{
    Q_OBJECT

public:
    explicit MenuEmpres(QWidget *parent = 0);
    ~MenuEmpres();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::menuempres *ui;
};

#endif // MENUEMPRES_H
