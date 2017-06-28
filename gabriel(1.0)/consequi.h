#ifndef CONSEQUI_H
#define CONSEQUI_H

#include <QDialog>

namespace Ui {
class ConsEqui;
}

class ConsEqui : public QDialog
{
    Q_OBJECT

public:
    explicit ConsEqui(QWidget *parent = 0);
    ~ConsEqui();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::ConsEqui *ui;
};

#endif // CONSEQUI_H
