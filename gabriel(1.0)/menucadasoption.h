#ifndef MENUCADASOPTION_H
#define MENUCADASOPTION_H

#include <QDialog>

namespace Ui {
class MenuCadasOption;
}

class MenuCadasOption : public QDialog
{
    Q_OBJECT

public:
    explicit MenuCadasOption(QWidget *parent = 0);
    ~MenuCadasOption();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();


private:
    Ui::MenuCadasOption *ui;
};

#endif // MENUCADASOPTION_H
