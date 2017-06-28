#ifndef CADASUSER_H
#define CADASUSER_H

#include <QDialog>

namespace Ui {
class CadasUser;
}

class CadasUser : public QDialog
{
    Q_OBJECT

public:
    explicit CadasUser(QWidget *parent = 0);
    ~CadasUser();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::CadasUser *ui;
};

#endif // CADASUSER_H
