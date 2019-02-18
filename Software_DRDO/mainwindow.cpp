#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "global.h"
#include "dialogmat.h"
#include <QTextStream>
#include <QTableWidget>
#include <QString>
#include <QTableWidgetItem>
#include <fstream>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ui->statusBar->showMessage(" Developed by students of BITS Pilani for DRDO-SSPL");
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_btnReal_clicked()
{
    this->ui->renderArea->setShape( RenderArea::Impedence);
   // this->ui->renderArea->setBackgroundColor(QColor (0,0,255));
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnImaginary_clicked()
{
    this->ui->renderArea->setShape( RenderArea::Admittance);
   // this->ui->renderArea->setBackgroundColor(QColor (0,255,0));
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnSuperimpose_clicked()
{
    this->ui->renderArea->setShape( RenderArea::Superimpose);
   // this->ui->renderArea->setBackgroundColor(Qt::blue);
    this->ui->renderArea->repaint();
}



void MainWindow::on_pushButton_2_clicked()
{
    this->ui->renderArea->setShape( RenderArea::Hide);
    this->ui->renderArea->repaint();
}

void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{

    points[0].setX(arg1);
    this->ui->renderArea->flag[0]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_doubleSpinBox_2_valueChanged(double arg1)
{


    points[0].setY(arg1);
    this->ui->renderArea->flag[0]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_doubleSpinBox_3_valueChanged(double arg1)
{

    points[1].setX(arg1);
    this->ui->renderArea->flag[1]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_doubleSpinBox_4_valueChanged(double arg1)
{

    points[1].setY(arg1);
    this->ui->renderArea->flag[1]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_doubleSpinBox_5_valueChanged(double arg1)
{

    points[2].setX(arg1);
    this->ui->renderArea->flag[2]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_doubleSpinBox_6_valueChanged(double arg1)
{

    points[2].setY(arg1);
    this->ui->renderArea->flag[2]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_doubleSpinBox_7_valueChanged(double arg1)
{

    points[3].setX(arg1);
    this->ui->renderArea->flag[3]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_doubleSpinBox_8_valueChanged(double arg1)
{

    points[3].setY(arg1);
    this->ui->renderArea->flag[3]= true;
    this->ui->renderArea->repaint();


}


void MainWindow::on_rs_valueChanged(double arg1)
{
    this->ui->renderArea->Rs = arg1/50;
}

void MainWindow::on_rp_valueChanged(double arg1)
{
    this->ui->renderArea->Rp = arg1/50;
}

void MainWindow::on_frequency_valueChanged(double arg1)
{
    this->ui->renderArea->f = arg1;
}

void MainWindow::on_pushButton_3_clicked()
{
    dialogmat mat;
     mat.setFixedSize(400,300);
     mat.showMaximized();
     mat.setModal(true);
     mat.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    this->ui->renderArea->flag[4]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_X1L_valueChanged(double arg1)
{
    this->ui->renderArea->flag[5] = true;
    this->ui->renderArea->X1L = arg1;
    this->ui->renderArea->repaint();
    this->ui->renderArea->flag[5] = false;
}

void MainWindow::on_X2L_valueChanged(double arg1)
{
    this->ui->renderArea->flag[5] = true;
    this->ui->renderArea->X2L = arg1;
    this->ui->renderArea->repaint();
    this->ui->renderArea->flag[5] = false;
}

void MainWindow::on_Zinput_valueChanged(double arg1)
{
    this->ui->renderArea->Zin2.setX(arg1/50);
    this->ui->renderArea->flag[6] = true;
    if(this->ui->renderArea->flag[7]) this->ui->renderArea->repaint();
}

void MainWindow::on_ZinputY_valueChanged(double arg1)
{
    this->ui->renderArea->Zin2.setY(arg1/50);
    this->ui->renderArea->flag[7] = true;
    this->ui->renderArea->repaint();

}

void MainWindow::on_frequency2_valueChanged(double arg1)
{
    this->ui->renderArea->w = arg1;//*pow(10, 9);

}

void MainWindow::on_Inductance_valueChanged(double arg1)
{
    this->ui->renderArea->Lin = arg1;
    this->ui->renderArea->Ztemp.setY(((this->ui->renderArea->w)*arg1)/double(50));
    this->ui->renderArea->Ztemp.setX(double(1));
    this->ui->renderArea->flag[8] = true;
    this->ui->renderArea->repaint();

    if(arg1 >= this->ui->renderArea->L) {
        this->ui->renderArea->flag[9] = true;
        QMessageBox::information(0, "Stop", "Desired L value reached!"
                                                                            "Use the C tuner to proceed!");

}
}


void MainWindow::on_Capacitance_valueChanged(double arg1)
{
    if(this->ui->renderArea->flag[9]) {
        this->ui->renderArea->flag[10] = true;
        this->ui->renderArea->Cin = arg1;
        double w = this->ui->renderArea->w;
        double L = this->ui->renderArea->L;
        double y = 50*(((-w*L)/(2500 + w*w*L*L)) + w*arg1);
        this->ui->renderArea->Ytemp.setY(y);
        this->ui->renderArea->repaint();

    }
    else QMessageBox::information(0, "Error!", "Use the Inductance Tuner!");

        if(arg1 >= this->ui->renderArea->C) QMessageBox::information(0, "Stop", "Desired C value reached!");

}

void MainWindow::on_btn_path_clicked()
{
    this->ui->renderArea->flag[12] = true;
    this->ui->renderArea->repaint();
    this->ui->Lvalue->setText( QString::number(this->ui->renderArea->L));
    this->ui->Cvalue->setText( QString::number(this->ui->renderArea->C));
    this->ui->renderArea->flag[12] = false;
}

void MainWindow::on_pathButton_clicked()
{


    this->ui->renderArea->flag[13] = true;
    if(this->ui->renderArea->step_count==0)
        this->ui->tableWidget->clearContents();
    this->ui->renderArea->Val=this->ui->LCvalue->value();
    if(this->ui->s22->isChecked()){
        this->ui->renderArea->flag[18]=true;
    }

    if((!this->ui->editRadioButton->isChecked())&&(this->ui->MaxF->value()!=0 && this->ui->MinF->value()!=0 && this->ui->frequencyLC->value()!=0)){
        this->ui->renderArea->step_count+=1;
        this->ui->renderArea->step_array[(this->ui->renderArea->step_count)-1].Val = this->ui->LCvalue->value();
        QTableWidgetItem *val= new QTableWidgetItem(QString::number(this->ui->LCvalue->value()));
        this->ui->tableWidget->setItem(this->ui->renderArea->step_count-1,1,val);
    }




    this->ui->MinF->setStyleSheet("QDoubleSpinBox {background-color: green; }");
    this->ui->MaxF->setStyleSheet("QDoubleSpinBox {background-color: magenta; }");
    this->ui->frequencyLC->setStyleSheet("QDoubleSpinBox {background-color: red; }");

    this->ui->S1Mag->setStyleSheet("QDoubleSpinBox {background-color: green; }");
    this->ui->S2Mag->setStyleSheet("QDoubleSpinBox {background-color: magenta; }");
    this->ui->S3Mag->setStyleSheet("QDoubleSpinBox {background-color: red; }");

    this->ui->S1angle->setStyleSheet("QDoubleSpinBox {background-color: green; }");
    this->ui->S2angle->setStyleSheet("QDoubleSpinBox {background-color: magenta; }");
    this->ui->S3angle->setStyleSheet("QDoubleSpinBox {background-color: red; }");

    //temp. for testing purpose only
    //QString test="";
    //for(int i=0;i<this->ui->renderArea->step_count;i++)
      //  test+=" "+QString::number(i)+"->"+QString::number(this->ui->renderArea->step_array[i].Val);
        //this->ui->textBrowser->setText(test);

    this->ui->renderArea->w=2*M_PI*(this->ui->frequencyLC->value());
    this->ui->renderArea->wMax=2*M_PI*(this->ui->MaxF->value());
    this->ui->renderArea->wMin=2*M_PI*(this->ui->MinF->value());
     this->ui->renderArea->S1Mag=(this->ui->S2Mag->value());
    this->ui->renderArea->S2Mag=(this->ui->S3Mag->value());
    this->ui->renderArea->S3Mag=(this->ui->S1Mag->value());
    this->ui->renderArea->S1angle=2*M_PI*(this->ui->S2angle->value())/360.0;
    this->ui->renderArea->S2angle=2*M_PI*(this->ui->S3angle->value())/360.0;
    this->ui->renderArea->S3angle=2*M_PI*(this->ui->S1angle->value())/360.0;



    if(this->ui->cSeriesRadioButton->isChecked()){
        if(this->ui->MaxF->value()==0 && this->ui->MinF->value()==0 && this->ui->frequencyLC->value()==0)
            QMessageBox::information(0,"Error","Select Frequency");
        else{
            this->ui->renderArea->setTopology(this->ui->renderArea->Series_Capacitance);
            this->ui->renderArea->step_array[(this->ui->renderArea->step_count)-1].topology = this->ui->renderArea->getTopology();


            QTableWidgetItem *cseries=new QTableWidgetItem("C-Series");
            this->ui->tableWidget->setItem(this->ui->renderArea->step_count-1,0,cseries);
        }
        this->ui->renderArea->repaint();

    }
    else if(this->ui->cShuntRadioButton->isChecked()){
        if(this->ui->MaxF->value()==0 && this->ui->MinF->value()==0 && this->ui->frequencyLC->value()==0)
            QMessageBox::information(0,"Error","Select Frequency");
       else{
            this->ui->renderArea->setTopology(this->ui->renderArea->Shunt_Capacitance);
        this->ui->renderArea->step_array[(this->ui->renderArea->step_count)-1].topology = this->ui->renderArea->getTopology();

        QTableWidgetItem *cshunt=new QTableWidgetItem("C-Shunt");
        this->ui->tableWidget->setItem(this->ui->renderArea->step_count-1,0,cshunt);
        }
        this->ui->renderArea->repaint();
    }
    else if(this->ui->lSeriesRadioButton->isChecked()){
        if(this->ui->MaxF->value()==0 && this->ui->MinF->value()==0 && this->ui->frequencyLC->value()==0)
            QMessageBox::information(0,"Error","Select Frequency");
        else{
            this->ui->renderArea->setTopology(this->ui->renderArea->Series_Inductance);
        this->ui->renderArea->step_array[(this->ui->renderArea->step_count)-1].topology = this->ui->renderArea->getTopology();

        QTableWidgetItem *lseries=new QTableWidgetItem("L-Series");
        this->ui->tableWidget->setItem(this->ui->renderArea->step_count-1,0,lseries);
        }
        this->ui->renderArea->repaint();
    }
    else if(this->ui->lShuntRadioButton->isChecked()){
        if(this->ui->MaxF->value()==0 && this->ui->MinF->value()==0 && this->ui->frequencyLC->value()==0)
            QMessageBox::information(0,"Error","Select Frequency");

        else{
        this->ui->renderArea->setTopology(this->ui->renderArea->Shunt_Inductance);
        this->ui->renderArea->step_array[(this->ui->renderArea->step_count)-1].topology = this->ui->renderArea->getTopology();
        QTableWidgetItem *lshunt=new QTableWidgetItem("L-Shunt");
        this->ui->tableWidget->setItem(this->ui->renderArea->step_count-1,0,lshunt);
        }
        this->ui->renderArea->repaint();


    }
    else if(this->ui->editRadioButton->isChecked()){
        this->ui->renderArea->repaint();
    }
    else{
        QMessageBox::information(0,"Error!","Unselected Arguments");
    this->ui->renderArea->flag[13]=false;
    }

    this->ui->renderArea->updateABCD();
    this->ui->A->setText(this->ui->renderArea->ABCD.val[0][0].display());
    this->ui->B->setText(this->ui->renderArea->ABCD.val[0][1].display());
    this->ui->C->setText(this->ui->renderArea->ABCD.val[1][0].display());
    this->ui->D->setText(this->ui->renderArea->ABCD.val[1][1].display());
}



void MainWindow::on_pathStopButton_clicked()
{
    ofstream savefile;

        QString s1 = QFileDialog::getSaveFileName(this, "Save", "data",
                "Text files (*.txt)");
        std::string filename = s1.toLocal8Bit().constData();
        savefile.open(filename);

        savefile<<"Max-Freq"<<'\t'<<this->ui->MaxF->value()<<endl;
        savefile<<"Mid-Freq"<<'\t'<<this->ui->frequencyLC->value()<<endl;
        savefile<<"Min-Freq"<<'\t'<<this->ui->MinF->value()<<endl;
        if(this->ui->s11->isChecked()){
            savefile<<"S11-Max"<<'\t'<<"MAG:"<<'\t'<<this->ui->S2Mag->value()<<'\t'<<"ANG:"<<'\t'<<this->ui->S2angle->value()<<endl;
            savefile<<"S11-Mid"<<'\t'<<"MAG:"<<'\t'<<this->ui->S3Mag->value()<<'\t'<<"ANG:"<<'\t'<<this->ui->S3angle->value()<<endl;
            savefile<<"S11-Min"<<'\t'<<"MAG:"<<'\t'<<this->ui->S1Mag->value()<<'\t'<<"ANG:"<<'\t'<<this->ui->S1angle->value()<<endl;
        }
        else if(this->ui->s22->isChecked()){
            savefile<<"22-Max"<<'\t'<<"MAG:"<<'\t'<<this->ui->S2Mag->value()<<'\t'<<"ANG:"<<'\t'<<this->ui->S2angle->value()<<endl;
            savefile<<"S22-Mid"<<'\t'<<"MAG:"<<'\t'<<this->ui->S3Mag->value()<<'\t'<<"ANG:"<<'\t'<<this->ui->S3angle->value()<<endl;
            savefile<<"S22-Min"<<'\t'<<"MAG:"<<'\t'<<this->ui->S1Mag->value()<<'\t'<<"ANG:"<<'\t'<<this->ui->S1angle->value()<<endl;

        }
        savefile<<"L/C type"<<'\t'<<"Value(nH/nF)"<<endl;

        for(int i=0;i<this->ui->renderArea->step_count;i++){
            if(this->ui->renderArea->step_array[i].topology==this->ui->renderArea->Series_Capacitance)
                savefile<<"C-series"<<'\t'<<this->ui->renderArea->step_array[i].Val<<endl;
            else if(this->ui->renderArea->step_array[i].topology==this->ui->renderArea->Series_Inductance)
                savefile<<"L-series"<<'\t'<<this->ui->renderArea->step_array[i].Val<<endl;
            else if(this->ui->renderArea->step_array[i].topology==this->ui->renderArea->Shunt_Inductance)
                savefile<<"L-shunt"<<'\t'<<this->ui->renderArea->step_array[i].Val<<endl;
            else if(this->ui->renderArea->step_array[i].topology==this->ui->renderArea->Shunt_Capacitance)
                savefile<<"C-shunt"<<'\t'<<this->ui->renderArea->step_array[i].Val<<endl;
        }



    this->ui->renderArea->rs.setValue(this->ui->rsreal->value(),this->ui->rsimg->value());
    this->ui->renderArea->rl.setValue(this->ui->rlreal->value(),this->ui->rlimg->value());
    this->ui->renderArea->zin=((this->ui->renderArea->ABCD.val[1][1]*this->ui->renderArea->rs)+this->ui->renderArea->ABCD.val[0][1])*(((this->ui->renderArea->ABCD.val[1][0]*this->ui->renderArea->rs)+this->ui->renderArea->ABCD.val[0][0]).inverse());
    this->ui->renderArea->zout=((this->ui->renderArea->ABCD.val[1][1]*this->ui->renderArea->rs)+this->ui->renderArea->ABCD.val[0][1])*(((this->ui->renderArea->ABCD.val[1][0]*this->ui->renderArea->rs)+this->ui->renderArea->ABCD.val[0][0]).inverse());
    this->ui->renderArea->flag[13] = false;
    this->ui->renderArea->flag[19] = true;
    this->ui->zinlabel->setText(this->ui->renderArea->zin.display());
    this->ui->zoutlabel->setText(this->ui->renderArea->zout.display());
    this->ui->label_10->setText(QString::number(this->ui->renderArea->step_array[0].Val));
    this->ui->renderArea->repaint();
    this->ui->A->setText(this->ui->renderArea->ABCD.val[0][0].display());
    this->ui->B->setText(this->ui->renderArea->ABCD.val[0][1].display());
    this->ui->C->setText(this->ui->renderArea->ABCD.val[1][0].display());
    this->ui->D->setText(this->ui->renderArea->ABCD.val[1][1].display());

    this->ui->label_10->setText("Final Point: "+ QString::number(this->ui->renderArea->initial_point.x()) + " + " +
                                QString::number(this->ui->renderArea->initial_point.y()) + "j");

    this->ui->renderArea->step_count = 0;
    this->ui->renderArea->initial_point = QPointF(1, 0);

}

void MainWindow::on_cSeriesRadioButton_clicked()
{
    this->ui->LClabel->setText("Capacitance(nF):");
}

void MainWindow::on_cShuntRadioButton_clicked()
{
    this->ui->LClabel->setText("Capacitance(nF):");
}


void MainWindow::on_lSeriesRadioButton_clicked()
{
    this->ui->LClabel->setText("Inductance(nH):");
}


void MainWindow::on_lShuntRadioButton_clicked()
{
    this->ui->LClabel->setText("Inductance(nH):");
}

void MainWindow::on_label_10_linkActivated(const QString &link)
{

}

void MainWindow::on_LCvalue_valueChanged(double arg1)
{

}

void MainWindow::on_frequencyLC_valueChanged(double arg1)
{

}

void MainWindow::on_label_9_linkActivated(const QString &link)
{

}

void MainWindow::on_LClabel_linkActivated(const QString &link)
{

}

void MainWindow::on_radioButton_2_clicked()
{

}

void MainWindow::on_tableWidget_itemChanged(QTableWidgetItem *item)
{
    if(item->column()==1 && this->ui->editRadioButton->isChecked()){
        this->ui->renderArea->step_array[item->row()].Val=item->text().toDouble();
        this->ui->renderArea->updateABCD();
        this->ui->A->setText(this->ui->renderArea->ABCD.val[0][0].display());
        this->ui->B->setText(this->ui->renderArea->ABCD.val[0][1].display());
        this->ui->C->setText(this->ui->renderArea->ABCD.val[1][0].display());
        this->ui->D->setText(this->ui->renderArea->ABCD.val[1][1].display());
    }
    else
        return;

}
