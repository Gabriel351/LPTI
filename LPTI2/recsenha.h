#ifndef RECSENHA_H
#define RECSENHA_H

#include <QDialog>

namespace Ui {
class RecSenha;
}

class RecSenha : public QDialog
{
    Q_OBJECT

public:
    explicit RecSenha(QWidget *parent = 0);
    ~RecSenha();

private:
    Ui::RecSenha *ui;
};

#endif // RECSENHA_H
