#ifndef CONSUSUARIOS_H
#define CONSUSUARIOS_H

#include <QDialog>

namespace Ui {
class ConsUsuarios;
}

class ConsUsuarios : public QDialog
{
    Q_OBJECT

public:
    explicit ConsUsuarios(QWidget *parent = 0);
    ~ConsUsuarios();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::ConsUsuarios *ui;
};

#endif // CONSUSUARIOS_H
