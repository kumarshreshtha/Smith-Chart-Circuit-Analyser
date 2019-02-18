#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnReal_clicked();

    void on_btnImaginary_clicked();

    void on_btnSuperimpose_clicked();



    void on_doubleSpinBox_2_valueChanged(double arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_doubleSpinBox_3_valueChanged(double arg1);

    void on_doubleSpinBox_4_valueChanged(double arg1);

    void on_doubleSpinBox_5_valueChanged(double arg1);

    void on_doubleSpinBox_6_valueChanged(double arg1);

    void on_doubleSpinBox_7_valueChanged(double arg1);

    void on_doubleSpinBox_8_valueChanged(double arg1);

    void on_pushButton_3_clicked();

    void on_rs_valueChanged(double arg1);

    void on_rp_valueChanged(double arg1);

    void on_frequency_valueChanged(double arg1);

    void on_pushButton_4_clicked();

    void on_X1L_valueChanged(double arg1);

    void on_X2L_valueChanged(double arg1);

    void on_Zinput_valueChanged(double arg1);

    void on_ZinputY_valueChanged(double arg1);

    void on_frequency2_valueChanged(double arg1);

    void on_Inductance_valueChanged(double arg1);

    void on_doubleSpinBox_9_valueChanged(double arg1);

    void on_Capacitance_valueChanged(double arg1);

    void on_btn_path_clicked();

    void on_pathButton_clicked();

    void on_pathStopButton_clicked();

    void on_cSeriesRadioButton_clicked();

    void on_cShuntRadioButton_clicked();

    void on_lSeriesRadioButton_clicked();

    void on_lShuntRadioButton_clicked();

    void on_label_10_linkActivated(const QString &link);

    void on_LCvalue_valueChanged(double arg1);

    void on_frequencyLC_valueChanged(double arg1);

    void on_label_9_linkActivated(const QString &link);

    void on_LClabel_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
