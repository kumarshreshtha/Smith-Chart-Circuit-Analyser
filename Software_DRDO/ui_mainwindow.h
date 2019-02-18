/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "renderarea.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    RenderArea *renderArea;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_7;
    QVBoxLayout *verticalLayout_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_4;
    QDoubleSpinBox *doubleSpinBox_6;
    QDoubleSpinBox *doubleSpinBox_8;
    QLabel *label_7;
    QPushButton *pushButton_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *frequency;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *rp;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *rs;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *X2L;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QDoubleSpinBox *X1L;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_14;
    QDoubleSpinBox *ZinputY;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QDoubleSpinBox *Zinput;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_15;
    QDoubleSpinBox *frequency2;
    QPushButton *btn_path;
    QLabel *label;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_67;
    QLabel *Lvalue;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_70;
    QLabel *Cvalue;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_69;
    QDoubleSpinBox *Inductance;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_68;
    QDoubleSpinBox *Capacitance;
    QWidget *tabWidgetPage2_2;
    QGroupBox *groupBox_3;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_28;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *s11;
    QRadioButton *s22;
    QHBoxLayout *horizontalLayout_43;
    QLabel *label_24;
    QDoubleSpinBox *S2Mag;
    QLabel *label_21;
    QDoubleSpinBox *S2angle;
    QHBoxLayout *horizontalLayout_44;
    QLabel *label_23;
    QDoubleSpinBox *S3Mag;
    QLabel *label_22;
    QDoubleSpinBox *S3angle;
    QHBoxLayout *horizontalLayout_42;
    QLabel *label_25;
    QDoubleSpinBox *S1Mag;
    QLabel *label_9;
    QDoubleSpinBox *S1angle;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_11;
    QDoubleSpinBox *MaxF;
    QLabel *label_8;
    QDoubleSpinBox *frequencyLC;
    QLabel *label_12;
    QDoubleSpinBox *MinF;
    QFrame *line;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *cSeriesRadioButton;
    QRadioButton *cShuntRadioButton;
    QRadioButton *lSeriesRadioButton;
    QRadioButton *lShuntRadioButton;
    QRadioButton *editRadioButton;
    QFrame *line_5;
    QVBoxLayout *verticalLayout_11;
    QLabel *LClabel;
    QDoubleSpinBox *LCvalue;
    QFrame *line_4;
    QPushButton *pathButton;
    QPushButton *pathStopButton;
    QLabel *label_10;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_4;
    QLabel *A;
    QLabel *B;
    QLabel *D;
    QLabel *C;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_18;
    QDoubleSpinBox *rlreal;
    QLabel *label_19;
    QDoubleSpinBox *rlimg;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_17;
    QDoubleSpinBox *rsreal;
    QLabel *label_20;
    QDoubleSpinBox *rsimg;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QLabel *zinlabel;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_26;
    QLabel *zoutlabel;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *btnReal;
    QPushButton *btnImaginary;
    QPushButton *btnSuperimpose;
    QPushButton *pushButton_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 710);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        renderArea = new RenderArea(centralWidget);
        renderArea->setObjectName(QStringLiteral("renderArea"));
        renderArea->setGeometry(QRect(9, 9, 711, 631));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(730, 10, 291, 681));
        tabWidgetPage1_2 = new QWidget();
        tabWidgetPage1_2->setObjectName(QStringLiteral("tabWidgetPage1_2"));
        layoutWidget = new QWidget(tabWidgetPage1_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 261, 102));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        doubleSpinBox = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setDecimals(5);
        doubleSpinBox->setMinimum(-99);

        verticalLayout_2->addWidget(doubleSpinBox);

        doubleSpinBox_3 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setDecimals(5);
        doubleSpinBox_3->setMinimum(-99);

        verticalLayout_2->addWidget(doubleSpinBox_3);

        doubleSpinBox_5 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));
        doubleSpinBox_5->setDecimals(5);
        doubleSpinBox_5->setMinimum(-99);

        verticalLayout_2->addWidget(doubleSpinBox_5);

        doubleSpinBox_7 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_7->setObjectName(QStringLiteral("doubleSpinBox_7"));
        doubleSpinBox_7->setDecimals(5);
        doubleSpinBox_7->setMinimum(-99);

        verticalLayout_2->addWidget(doubleSpinBox_7);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        doubleSpinBox_2 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setDecimals(5);
        doubleSpinBox_2->setMinimum(-99);

        verticalLayout_3->addWidget(doubleSpinBox_2);

        doubleSpinBox_4 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        doubleSpinBox_4->setDecimals(5);
        doubleSpinBox_4->setMinimum(-99);

        verticalLayout_3->addWidget(doubleSpinBox_4);

        doubleSpinBox_6 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_6->setObjectName(QStringLiteral("doubleSpinBox_6"));
        doubleSpinBox_6->setDecimals(5);
        doubleSpinBox_6->setMinimum(-99);

        verticalLayout_3->addWidget(doubleSpinBox_6);

        doubleSpinBox_8 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_8->setObjectName(QStringLiteral("doubleSpinBox_8"));
        doubleSpinBox_8->setDecimals(5);
        doubleSpinBox_8->setMinimum(-99);

        verticalLayout_3->addWidget(doubleSpinBox_8);


        horizontalLayout->addLayout(verticalLayout_3);

        label_7 = new QLabel(tabWidgetPage1_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 160, 251, 41));
        label_7->setAlignment(Qt::AlignCenter);
        pushButton_4 = new QPushButton(tabWidgetPage1_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 310, 221, 23));
        layoutWidget1 = new QWidget(tabWidgetPage1_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 210, 261, 82));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        frequency = new QDoubleSpinBox(layoutWidget1);
        frequency->setObjectName(QStringLiteral("frequency"));

        horizontalLayout_3->addWidget(frequency);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        rp = new QDoubleSpinBox(layoutWidget1);
        rp->setObjectName(QStringLiteral("rp"));

        horizontalLayout_4->addWidget(rp);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        rs = new QDoubleSpinBox(layoutWidget1);
        rs->setObjectName(QStringLiteral("rs"));

        horizontalLayout_2->addWidget(rs);


        verticalLayout_5->addLayout(horizontalLayout_2);


        horizontalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        X2L = new QDoubleSpinBox(layoutWidget1);
        X2L->setObjectName(QStringLiteral("X2L"));
        X2L->setMinimum(-99);

        horizontalLayout_5->addWidget(X2L);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_6);

        X1L = new QDoubleSpinBox(layoutWidget1);
        X1L->setObjectName(QStringLiteral("X1L"));
        X1L->setMinimum(-99);

        horizontalLayout_6->addWidget(X1L);


        verticalLayout_4->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_4);

        groupBox = new QGroupBox(tabWidgetPage1_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 341, 261, 131));
        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 20, 221, 109));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_10->addWidget(label_14);

        ZinputY = new QDoubleSpinBox(verticalLayoutWidget_2);
        ZinputY->setObjectName(QStringLiteral("ZinputY"));
        ZinputY->setMinimum(-999);
        ZinputY->setMaximum(9999);

        horizontalLayout_10->addWidget(ZinputY);


        verticalLayout_9->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_13 = new QLabel(verticalLayoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_9->addWidget(label_13);

        Zinput = new QDoubleSpinBox(verticalLayoutWidget_2);
        Zinput->setObjectName(QStringLiteral("Zinput"));
        Zinput->setMinimum(-99);
        Zinput->setMaximum(9999);

        horizontalLayout_9->addWidget(Zinput);


        verticalLayout_9->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_15 = new QLabel(verticalLayoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_11->addWidget(label_15);

        frequency2 = new QDoubleSpinBox(verticalLayoutWidget_2);
        frequency2->setObjectName(QStringLiteral("frequency2"));
        frequency2->setMaximum(9999);

        horizontalLayout_11->addWidget(frequency2);


        verticalLayout_9->addLayout(horizontalLayout_11);

        btn_path = new QPushButton(verticalLayoutWidget_2);
        btn_path->setObjectName(QStringLiteral("btn_path"));

        verticalLayout_9->addWidget(btn_path);

        label = new QLabel(tabWidgetPage1_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 261, 41));
        label->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(tabWidgetPage1_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 610, 261, 23));
        groupBox_2 = new QGroupBox(tabWidgetPage1_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 480, 261, 121));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 221, 94));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QStringLiteral("horizontalLayout_38"));
        label_67 = new QLabel(verticalLayoutWidget);
        label_67->setObjectName(QStringLiteral("label_67"));

        horizontalLayout_38->addWidget(label_67);

        Lvalue = new QLabel(verticalLayoutWidget);
        Lvalue->setObjectName(QStringLiteral("Lvalue"));

        horizontalLayout_38->addWidget(Lvalue);


        verticalLayout->addLayout(horizontalLayout_38);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        label_70 = new QLabel(verticalLayoutWidget);
        label_70->setObjectName(QStringLiteral("label_70"));

        horizontalLayout_41->addWidget(label_70);

        Cvalue = new QLabel(verticalLayoutWidget);
        Cvalue->setObjectName(QStringLiteral("Cvalue"));

        horizontalLayout_41->addWidget(Cvalue);


        verticalLayout->addLayout(horizontalLayout_41);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QStringLiteral("horizontalLayout_40"));
        label_69 = new QLabel(verticalLayoutWidget);
        label_69->setObjectName(QStringLiteral("label_69"));

        horizontalLayout_40->addWidget(label_69);

        Inductance = new QDoubleSpinBox(verticalLayoutWidget);
        Inductance->setObjectName(QStringLiteral("Inductance"));
        Inductance->setDecimals(3);
        Inductance->setMinimum(0);
        Inductance->setMaximum(99.99);
        Inductance->setSingleStep(0.1);

        horizontalLayout_40->addWidget(Inductance);


        verticalLayout->addLayout(horizontalLayout_40);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QStringLiteral("horizontalLayout_39"));
        label_68 = new QLabel(verticalLayoutWidget);
        label_68->setObjectName(QStringLiteral("label_68"));

        horizontalLayout_39->addWidget(label_68);

        Capacitance = new QDoubleSpinBox(verticalLayoutWidget);
        Capacitance->setObjectName(QStringLiteral("Capacitance"));
        Capacitance->setDecimals(3);
        Capacitance->setSingleStep(1e-5);

        horizontalLayout_39->addWidget(Capacitance);


        verticalLayout->addLayout(horizontalLayout_39);

        tabWidget->addTab(tabWidgetPage1_2, QString());
        tabWidgetPage2_2 = new QWidget();
        tabWidgetPage2_2->setObjectName(QStringLiteral("tabWidgetPage2_2"));
        groupBox_3 = new QGroupBox(tabWidgetPage2_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 261, 131));
        verticalLayoutWidget_7 = new QWidget(groupBox_3);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(10, 20, 241, 106));
        verticalLayout_28 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setContentsMargins(11, 11, 11, 11);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        s11 = new QRadioButton(verticalLayoutWidget_7);
        s11->setObjectName(QStringLiteral("s11"));

        horizontalLayout_12->addWidget(s11);

        s22 = new QRadioButton(verticalLayoutWidget_7);
        s22->setObjectName(QStringLiteral("s22"));

        horizontalLayout_12->addWidget(s22);


        verticalLayout_28->addLayout(horizontalLayout_12);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setSpacing(6);
        horizontalLayout_43->setObjectName(QStringLiteral("horizontalLayout_43"));
        label_24 = new QLabel(verticalLayoutWidget_7);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_43->addWidget(label_24);

        S2Mag = new QDoubleSpinBox(verticalLayoutWidget_7);
        S2Mag->setObjectName(QStringLiteral("S2Mag"));
        S2Mag->setDecimals(6);
        S2Mag->setSingleStep(0.001);

        horizontalLayout_43->addWidget(S2Mag);

        label_21 = new QLabel(verticalLayoutWidget_7);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_43->addWidget(label_21);

        S2angle = new QDoubleSpinBox(verticalLayoutWidget_7);
        S2angle->setObjectName(QStringLiteral("S2angle"));
        S2angle->setDecimals(6);
        S2angle->setMinimum(-360);
        S2angle->setMaximum(360);
        S2angle->setSingleStep(0.001);

        horizontalLayout_43->addWidget(S2angle);


        verticalLayout_28->addLayout(horizontalLayout_43);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setSpacing(6);
        horizontalLayout_44->setObjectName(QStringLiteral("horizontalLayout_44"));
        label_23 = new QLabel(verticalLayoutWidget_7);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_44->addWidget(label_23);

        S3Mag = new QDoubleSpinBox(verticalLayoutWidget_7);
        S3Mag->setObjectName(QStringLiteral("S3Mag"));
        S3Mag->setDecimals(6);
        S3Mag->setSingleStep(0.001);

        horizontalLayout_44->addWidget(S3Mag);

        label_22 = new QLabel(verticalLayoutWidget_7);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_44->addWidget(label_22);

        S3angle = new QDoubleSpinBox(verticalLayoutWidget_7);
        S3angle->setObjectName(QStringLiteral("S3angle"));
        S3angle->setDecimals(6);
        S3angle->setMinimum(-360);
        S3angle->setMaximum(360);
        S3angle->setSingleStep(0.001);

        horizontalLayout_44->addWidget(S3angle);


        verticalLayout_28->addLayout(horizontalLayout_44);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QStringLiteral("horizontalLayout_42"));
        label_25 = new QLabel(verticalLayoutWidget_7);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_42->addWidget(label_25);

        S1Mag = new QDoubleSpinBox(verticalLayoutWidget_7);
        S1Mag->setObjectName(QStringLiteral("S1Mag"));
        S1Mag->setDecimals(6);
        S1Mag->setSingleStep(0.001);

        horizontalLayout_42->addWidget(S1Mag);

        label_9 = new QLabel(verticalLayoutWidget_7);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_42->addWidget(label_9);

        S1angle = new QDoubleSpinBox(verticalLayoutWidget_7);
        S1angle->setObjectName(QStringLiteral("S1angle"));
        S1angle->setDecimals(6);
        S1angle->setMinimum(-360);
        S1angle->setMaximum(360);
        S1angle->setSingleStep(0.001);

        horizontalLayout_42->addWidget(S1angle);


        verticalLayout_28->addLayout(horizontalLayout_42);

        horizontalLayoutWidget = new QWidget(tabWidgetPage2_2);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 150, 261, 133));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_11 = new QLabel(horizontalLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_10->addWidget(label_11);

        MaxF = new QDoubleSpinBox(horizontalLayoutWidget);
        MaxF->setObjectName(QStringLiteral("MaxF"));
        MaxF->setDecimals(6);
        MaxF->setSingleStep(1);

        verticalLayout_10->addWidget(MaxF);

        label_8 = new QLabel(horizontalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_10->addWidget(label_8);

        frequencyLC = new QDoubleSpinBox(horizontalLayoutWidget);
        frequencyLC->setObjectName(QStringLiteral("frequencyLC"));
        frequencyLC->setDecimals(6);

        verticalLayout_10->addWidget(frequencyLC);

        label_12 = new QLabel(horizontalLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_10->addWidget(label_12);

        MinF = new QDoubleSpinBox(horizontalLayoutWidget);
        MinF->setObjectName(QStringLiteral("MinF"));
        MinF->setDecimals(6);
        MinF->setSingleStep(1);

        verticalLayout_10->addWidget(MinF);


        horizontalLayout_8->addLayout(verticalLayout_10);

        line = new QFrame(horizontalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(line);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        cSeriesRadioButton = new QRadioButton(horizontalLayoutWidget);
        cSeriesRadioButton->setObjectName(QStringLiteral("cSeriesRadioButton"));

        verticalLayout_8->addWidget(cSeriesRadioButton);

        cShuntRadioButton = new QRadioButton(horizontalLayoutWidget);
        cShuntRadioButton->setObjectName(QStringLiteral("cShuntRadioButton"));

        verticalLayout_8->addWidget(cShuntRadioButton);

        lSeriesRadioButton = new QRadioButton(horizontalLayoutWidget);
        lSeriesRadioButton->setObjectName(QStringLiteral("lSeriesRadioButton"));

        verticalLayout_8->addWidget(lSeriesRadioButton);

        lShuntRadioButton = new QRadioButton(horizontalLayoutWidget);
        lShuntRadioButton->setObjectName(QStringLiteral("lShuntRadioButton"));

        verticalLayout_8->addWidget(lShuntRadioButton);

        editRadioButton = new QRadioButton(horizontalLayoutWidget);
        editRadioButton->setObjectName(QStringLiteral("editRadioButton"));

        verticalLayout_8->addWidget(editRadioButton);


        horizontalLayout_8->addLayout(verticalLayout_8);

        line_5 = new QFrame(horizontalLayoutWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(line_5);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        LClabel = new QLabel(horizontalLayoutWidget);
        LClabel->setObjectName(QStringLiteral("LClabel"));

        verticalLayout_11->addWidget(LClabel);

        LCvalue = new QDoubleSpinBox(horizontalLayoutWidget);
        LCvalue->setObjectName(QStringLiteral("LCvalue"));
        LCvalue->setDecimals(6);
        LCvalue->setMaximum(999999);

        verticalLayout_11->addWidget(LCvalue);

        line_4 = new QFrame(horizontalLayoutWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_11->addWidget(line_4);

        pathButton = new QPushButton(horizontalLayoutWidget);
        pathButton->setObjectName(QStringLiteral("pathButton"));

        verticalLayout_11->addWidget(pathButton);

        pathStopButton = new QPushButton(horizontalLayoutWidget);
        pathStopButton->setObjectName(QStringLiteral("pathStopButton"));

        verticalLayout_11->addWidget(pathStopButton);


        horizontalLayout_8->addLayout(verticalLayout_11);

        label_10 = new QLabel(tabWidgetPage2_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 510, 261, 20));
        tableWidget = new QTableWidget(tabWidgetPage2_2);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 20)
            tableWidget->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(16, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(17, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(18, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(19, __qtablewidgetitem21);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 290, 261, 141));
        groupBox_4 = new QGroupBox(tabWidgetPage2_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 440, 261, 61));
        A = new QLabel(groupBox_4);
        A->setObjectName(QStringLiteral("A"));
        A->setGeometry(QRect(0, 20, 131, 16));
        B = new QLabel(groupBox_4);
        B->setObjectName(QStringLiteral("B"));
        B->setGeometry(QRect(130, 20, 131, 16));
        D = new QLabel(groupBox_4);
        D->setObjectName(QStringLiteral("D"));
        D->setGeometry(QRect(130, 40, 131, 16));
        C = new QLabel(groupBox_4);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(0, 40, 131, 16));
        verticalLayoutWidget_3 = new QWidget(tabWidgetPage2_2);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 540, 261, 52));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_18 = new QLabel(verticalLayoutWidget_3);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_15->addWidget(label_18);

        rlreal = new QDoubleSpinBox(verticalLayoutWidget_3);
        rlreal->setObjectName(QStringLiteral("rlreal"));
        rlreal->setDecimals(5);
        rlreal->setValue(50);

        horizontalLayout_15->addWidget(rlreal);

        label_19 = new QLabel(verticalLayoutWidget_3);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_15->addWidget(label_19);

        rlimg = new QDoubleSpinBox(verticalLayoutWidget_3);
        rlimg->setObjectName(QStringLiteral("rlimg"));
        rlimg->setDecimals(5);

        horizontalLayout_15->addWidget(rlimg);


        verticalLayout_6->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_17 = new QLabel(verticalLayoutWidget_3);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_14->addWidget(label_17);

        rsreal = new QDoubleSpinBox(verticalLayoutWidget_3);
        rsreal->setObjectName(QStringLiteral("rsreal"));
        rsreal->setDecimals(5);
        rsreal->setValue(50);

        horizontalLayout_14->addWidget(rsreal);

        label_20 = new QLabel(verticalLayoutWidget_3);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_14->addWidget(label_20);

        rsimg = new QDoubleSpinBox(verticalLayoutWidget_3);
        rsimg->setObjectName(QStringLiteral("rsimg"));
        rsimg->setDecimals(5);

        horizontalLayout_14->addWidget(rsimg);


        verticalLayout_6->addLayout(horizontalLayout_14);

        verticalLayoutWidget_4 = new QWidget(tabWidgetPage2_2);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 600, 261, 41));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_16 = new QLabel(verticalLayoutWidget_4);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_16->addWidget(label_16);

        zinlabel = new QLabel(verticalLayoutWidget_4);
        zinlabel->setObjectName(QStringLiteral("zinlabel"));

        horizontalLayout_16->addWidget(zinlabel);


        verticalLayout_7->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_26 = new QLabel(verticalLayoutWidget_4);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_17->addWidget(label_26);

        zoutlabel = new QLabel(verticalLayoutWidget_4);
        zoutlabel->setObjectName(QStringLiteral("zoutlabel"));

        horizontalLayout_17->addWidget(zoutlabel);


        verticalLayout_7->addLayout(horizontalLayout_17);

        tabWidget->addTab(tabWidgetPage2_2, QString());
        horizontalLayoutWidget_6 = new QWidget(centralWidget);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(10, 650, 711, 25));
        horizontalLayout_13 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        btnReal = new QPushButton(horizontalLayoutWidget_6);
        btnReal->setObjectName(QStringLiteral("btnReal"));

        horizontalLayout_13->addWidget(btnReal);

        btnImaginary = new QPushButton(horizontalLayoutWidget_6);
        btnImaginary->setObjectName(QStringLiteral("btnImaginary"));

        horizontalLayout_13->addWidget(btnImaginary);

        btnSuperimpose = new QPushButton(horizontalLayoutWidget_6);
        btnSuperimpose->setObjectName(QStringLiteral("btnSuperimpose"));

        horizontalLayout_13->addWidget(btnSuperimpose);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_6);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_13->addWidget(pushButton_2);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Circuit Analyser-SC", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Impedence Matching Tuner", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Frequency", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Rp", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Rs", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "X2L", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "X1L", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "2-Element Path Finder", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "w", Q_NULLPTR));
        btn_path->setText(QApplication::translate("MainWindow", "Get Path", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Plot Points  &  Tuner", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "ABCD Matrix", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "L/C Tuner", Q_NULLPTR));
        label_67->setText(QApplication::translate("MainWindow", "L", Q_NULLPTR));
        Lvalue->setText(QString());
        label_70->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        Cvalue->setText(QString());
        label_69->setText(QApplication::translate("MainWindow", "L", Q_NULLPTR));
        label_68->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1_2), QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "S Parameters", Q_NULLPTR));
        s11->setText(QApplication::translate("MainWindow", "S11", Q_NULLPTR));
        s22->setText(QApplication::translate("MainWindow", "S22", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Mag", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Angle", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Mag", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Angle", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Mag", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Angle", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Max Freq (GHz)", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Mid Freq (GHz)", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Min Freq (GHz)", Q_NULLPTR));
        cSeriesRadioButton->setText(QApplication::translate("MainWindow", "C series", Q_NULLPTR));
        cShuntRadioButton->setText(QApplication::translate("MainWindow", "C shunt", Q_NULLPTR));
        lSeriesRadioButton->setText(QApplication::translate("MainWindow", "L series", Q_NULLPTR));
        lShuntRadioButton->setText(QApplication::translate("MainWindow", "L shunt", Q_NULLPTR));
        editRadioButton->setText(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        LClabel->setText(QApplication::translate("MainWindow", "L/C :", Q_NULLPTR));
        pathButton->setText(QApplication::translate("MainWindow", "Get Path", Q_NULLPTR));
        pathStopButton->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Final Point:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "L/C Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Value(nH/nF)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(15);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(16);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(17);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->verticalHeaderItem(18);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->verticalHeaderItem(19);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "20", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "ABCD Matrix", Q_NULLPTR));
        A->setText(QApplication::translate("MainWindow", "         A-total", Q_NULLPTR));
        B->setText(QApplication::translate("MainWindow", "     B-total", Q_NULLPTR));
        D->setText(QApplication::translate("MainWindow", "     D-total", Q_NULLPTR));
        C->setText(QApplication::translate("MainWindow", "         C-total", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Rl", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", " +         j", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Rs", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", " +         j", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Zin :", Q_NULLPTR));
        zinlabel->setText(QString());
        label_26->setText(QApplication::translate("MainWindow", "Zout :", Q_NULLPTR));
        zoutlabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage2_2), QString());
        btnReal->setText(QApplication::translate("MainWindow", "Impedance", Q_NULLPTR));
        btnImaginary->setText(QApplication::translate("MainWindow", "Admittance", Q_NULLPTR));
        btnSuperimpose->setText(QApplication::translate("MainWindow", "Superimpose", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Hide", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
