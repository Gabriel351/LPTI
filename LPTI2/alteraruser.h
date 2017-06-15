#ifndef ALTERARUSER_H
#define ALTERARUSER_H

#include <QDialog>

namespace Ui {
class AlterarUser;
}

class AlterarUser : public QDialog
{
    Q_OBJECT

public:
    explicit AlterarUser(QWidget *parent = 0);
    ~AlterarUser();

private slots:
     void on_pushButton_4_clicked();

private:
    Ui::AlterarUser *ui;
};

#endif // ALTERARUSER_H
