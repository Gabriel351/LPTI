#ifndef CONSLAB_H
#define CONSLAB_H

#include <QDialog>

namespace Ui {
class ConsLab;
}

class ConsLab : public QDialog
{
    Q_OBJECT

public:
    explicit ConsLab(QWidget *parent = 0);
    ~ConsLab();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::ConsLab *ui;
};

#endif // CONSLAB_H
