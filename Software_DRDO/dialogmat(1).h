#ifndef DIALOGMAT_H
#define DIALOGMAT_H

#include <QDialog>

namespace Ui {
class dialogmat;
}

class dialogmat : public QDialog
{
    Q_OBJECT

public:
    explicit dialogmat(QWidget *parent = 0);
    ~dialogmat();

private slots:
    void on_pushButton_clicked();

    void on_CustomButton_clicked();

    void on_CustomButton_clicked(bool checked);

    void on_z3img_valueChanged(double arg1);

private:
    Ui::dialogmat *ui;
};

#endif // DIALOGMAT_H
