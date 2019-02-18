/********************************************************************************
** Form generated from reading UI file 'dialogmat.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMAT_H
#define UI_DIALOGMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogmat
{
public:
    QLabel *B;
    QRadioButton *CustomButton;
    QDoubleSpinBox *z2real;
    QLabel *label_9;
    QLabel *label_8;
    QDoubleSpinBox *z3real;
    QLabel *label_4;
    QLabel *C;
    QSpinBox *spinBox_2;
    QDoubleSpinBox *z3img;
    QDoubleSpinBox *z1real;
    QDoubleSpinBox *z1img;
    QLabel *label_5;
    QLabel *label_2;
    QRadioButton *PiButton;
    QLabel *label_7;
    QDoubleSpinBox *z2img;
    QFrame *line_2;
    QPushButton *pushButton;
    QSpinBox *spinBox_3;
    QLabel *D;
    QLabel *A;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_6;
    QRadioButton *TButton;
    QRadioButton *radioButton;

    void setupUi(QWidget *dialogmat)
    {
        if (dialogmat->objectName().isEmpty())
            dialogmat->setObjectName(QStringLiteral("dialogmat"));
        dialogmat->resize(400, 300);
        B = new QLabel(dialogmat);
        B->setObjectName(QStringLiteral("B"));
        B->setGeometry(QRect(184, 250, 61, 16));
        CustomButton = new QRadioButton(dialogmat);
        CustomButton->setObjectName(QStringLiteral("CustomButton"));
        CustomButton->setGeometry(QRect(290, 150, 81, 17));
        z2real = new QDoubleSpinBox(dialogmat);
        z2real->setObjectName(QStringLiteral("z2real"));
        z2real->setGeometry(QRect(70, 120, 62, 22));
        z2real->setMinimum(-10000);
        z2real->setMaximum(10000);
        z2real->setSingleStep(0.01);
        label_9 = new QLabel(dialogmat);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(330, 200, 31, 16));
        label_8 = new QLabel(dialogmat);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(290, 200, 31, 16));
        z3real = new QDoubleSpinBox(dialogmat);
        z3real->setObjectName(QStringLiteral("z3real"));
        z3real->setGeometry(QRect(70, 160, 62, 22));
        z3real->setMinimum(-10000);
        z3real->setMaximum(10000);
        z3real->setSingleStep(0.01);
        label_4 = new QLabel(dialogmat);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 160, 31, 20));
        C = new QLabel(dialogmat);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(90, 280, 61, 20));
        spinBox_2 = new QSpinBox(dialogmat);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setEnabled(true);
        spinBox_2->setGeometry(QRect(330, 180, 31, 22));
        z3img = new QDoubleSpinBox(dialogmat);
        z3img->setObjectName(QStringLiteral("z3img"));
        z3img->setGeometry(QRect(170, 160, 62, 22));
        z3img->setMinimum(-10000);
        z3img->setMaximum(10000);
        z3img->setSingleStep(0.01);
        z1real = new QDoubleSpinBox(dialogmat);
        z1real->setObjectName(QStringLiteral("z1real"));
        z1real->setGeometry(QRect(70, 80, 62, 22));
        z1real->setMinimum(-10000);
        z1real->setMaximum(10000);
        z1real->setSingleStep(0.01);
        z1img = new QDoubleSpinBox(dialogmat);
        z1img->setObjectName(QStringLiteral("z1img"));
        z1img->setGeometry(QRect(170, 80, 62, 22));
        z1img->setMinimum(-10000);
        z1img->setMaximum(10000);
        z1img->setSingleStep(0.01);
        label_5 = new QLabel(dialogmat);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 120, 31, 16));
        label_2 = new QLabel(dialogmat);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 80, 31, 16));
        PiButton = new QRadioButton(dialogmat);
        PiButton->setObjectName(QStringLiteral("PiButton"));
        PiButton->setGeometry(QRect(290, 120, 82, 17));
        label_7 = new QLabel(dialogmat);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(280, 60, 91, 20));
        z2img = new QDoubleSpinBox(dialogmat);
        z2img->setObjectName(QStringLiteral("z2img"));
        z2img->setGeometry(QRect(170, 120, 62, 22));
        z2img->setMinimum(-10000);
        z2img->setMaximum(10000);
        z2img->setSingleStep(0.01);
        line_2 = new QFrame(dialogmat);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(250, 60, 20, 151));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(dialogmat);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 210, 75, 23));
        spinBox_3 = new QSpinBox(dialogmat);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setEnabled(true);
        spinBox_3->setGeometry(QRect(290, 180, 31, 22));
        D = new QLabel(dialogmat);
        D->setObjectName(QStringLiteral("D"));
        D->setGeometry(QRect(184, 280, 61, 16));
        A = new QLabel(dialogmat);
        A->setObjectName(QStringLiteral("A"));
        A->setGeometry(QRect(90, 250, 61, 20));
        label_3 = new QLabel(dialogmat);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 120, 31, 16));
        label = new QLabel(dialogmat);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 31, 16));
        label_6 = new QLabel(dialogmat);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 160, 31, 16));
        TButton = new QRadioButton(dialogmat);
        TButton->setObjectName(QStringLiteral("TButton"));
        TButton->setGeometry(QRect(290, 90, 82, 17));
        radioButton = new QRadioButton(dialogmat);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(210, 260, 106, 22));

        retranslateUi(dialogmat);

        QMetaObject::connectSlotsByName(dialogmat);
    } // setupUi

    void retranslateUi(QWidget *dialogmat)
    {
        dialogmat->setWindowTitle(QApplication::translate("dialogmat", "Form", Q_NULLPTR));
        B->setText(QString());
        CustomButton->setText(QApplication::translate("dialogmat", "Custom", Q_NULLPTR));
        label_9->setText(QApplication::translate("dialogmat", "Shunt", Q_NULLPTR));
        label_8->setText(QApplication::translate("dialogmat", "Series", Q_NULLPTR));
        label_4->setText(QApplication::translate("dialogmat", " + j", Q_NULLPTR));
        C->setText(QString());
        label_5->setText(QApplication::translate("dialogmat", "z2 =", Q_NULLPTR));
        label_2->setText(QApplication::translate("dialogmat", " + j", Q_NULLPTR));
        PiButton->setText(QApplication::translate("dialogmat", "PI circuit", Q_NULLPTR));
        label_7->setText(QApplication::translate("dialogmat", "Topology:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("dialogmat", "Calculate", Q_NULLPTR));
        D->setText(QString());
        A->setText(QString());
        label_3->setText(QApplication::translate("dialogmat", " + j", Q_NULLPTR));
        label->setText(QApplication::translate("dialogmat", "z1 =", Q_NULLPTR));
        label_6->setText(QApplication::translate("dialogmat", "z3 =", Q_NULLPTR));
        TButton->setText(QApplication::translate("dialogmat", "T circuit", Q_NULLPTR));
        radioButton->setText(QApplication::translate("dialogmat", "RadioButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialogmat: public Ui_dialogmat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMAT_H
