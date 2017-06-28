#ifndef MENUCADAS_H
#define MENUCADAS_H

#include <QDialog>

namespace Ui {
class MenuCadas;
}

class MenuCadas : public QDialog
{
    Q_OBJECT

public:
    explicit MenuCadas(QWidget *parent = 0);
    ~MenuCadas();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MenuCadas *ui;
};

#endif // MENUCADAS_H
