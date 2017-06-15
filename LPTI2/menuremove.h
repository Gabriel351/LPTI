#ifndef MENUREMOVE_H
#define MENUREMOVE_H

#include <QDialog>

namespace Ui {
class MenuRemove;
}

class MenuRemove : public QDialog
{
    Q_OBJECT

public:
    explicit MenuRemove(QWidget *parent = 0);
    ~MenuRemove();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MenuRemove *ui;
};

#endif // MENUREMOVE_H
