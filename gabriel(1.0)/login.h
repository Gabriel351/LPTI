#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_actionSobre_triggered();

    void on_pushButton_2_clicked();

    void on_iniciar_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
