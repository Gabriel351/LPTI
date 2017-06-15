#ifndef CADASLAB_H
#define CADASLAB_H

#include <QDialog>

namespace Ui {
class CadasLab;
}

class CadasLab : public QDialog
{
    Q_OBJECT

public:
    explicit CadasLab(QWidget *parent = 0);
    ~CadasLab();

private slots:
    void on_pushButton_3_clicked();

    void on_btn_confirma_clicked();

private:
    Ui::CadasLab *ui;
};

#endif // CADASLAB_H
