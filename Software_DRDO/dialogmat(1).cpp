#include "dialogmat.h"
#include "ui_dialogmat.h"
#include <iostream>
#include <QString>
#include <QMessageBox>
#include <cmath>
#include <cstdbool>
using namespace std;
class complex{
private:
     float real,imag;
public:
    complex(){

    }
    complex(float a,float b){
        real=a;
        imag=b;
    }
    complex operator + (complex a){
        complex b;
        b.real=real+a.real;
        b.imag=imag+a.imag;
        return b;
    }
    complex operator * (complex a){
        complex b;
        b.real=real*a.real-imag*a.imag;
        b.imag=imag*a.real+real*a.imag;
        return b;
    }
    complex operator /(complex a){
        complex b;
        b.real=(real*a.real+imag*a.imag)/(pow(a.real,2)+pow(a.imag,2));
        b.imag=(imag*a.real-real*a.imag)/(pow(a.real,2)+pow(a.imag,2));
        return b;
    }
    void operator =(int a){
        real=a;
        imag=0;
    }
    void operator =(float a){
        real=a;
        imag=0;
    }
    void operator =(complex a){
        real=a.real;
        imag=a.imag;
    }

  bool operator ==(complex a){
    if(a.real==real && a.imag==imag)
        return true;
    else
        return false;
  }
  bool operator ==(int a){
    if(real==a && imag==0)
        return true;
    else
        return false;
  }
  bool operator ==(float a){
    if(real==a && imag==0)
        return true;
    else
        return false;
  }


    void setValue(float a,float b){
        real=a;
        imag=b;
    }

    QString display(){
        QString r=QString::number(real);
        QString x=QString::number(abs(imag));
        QString num;
        if(imag>=0)
            num=r+" + j"+x;
        else
            num=r+" - j"+x;

        return num;
    }

};

class matrix{

private:
    int rows,cols;
public:
    complex** val;
    matrix(){
        rows=2;
        cols=2;
        val=(complex**)malloc(sizeof(complex*)*rows);
        for(int i=0;i<rows;i++){
            val[i]=(complex*)malloc(sizeof(complex)*cols);
        }
    }
    matrix(int r,int c){
        rows=r;
        cols=c;
        val=(complex**)malloc(sizeof(complex)*rows);
        for(int i=0;i<rows;i++){
            val[i]=(complex*)malloc(sizeof(complex)*cols);
        }

    }

    matrix operator +(matrix b){
            matrix c(rows,cols);
            for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++)
                    c.val[i][j]=val[i][j]+b.val[i][j];
            }
         return c;
    }


    matrix operator *(matrix b){
            matrix c(rows,b.cols);
            complex zero(0,0);
            for(int i=0;i<c.rows;i++){
                for (int j=0;j<c.cols;j++)
                    c.val[i][j]=zero;
            }
            for(int i=0;i<rows;i++){
                for (int j=0;j<b.cols;j++){
                    for(int k=0;k<cols;k++){
                        c.val[i][j]=c.val[i][j]+val[i][k]*b.val[k][j];
                    }
                }
            }
        return c;
    }


};
matrix setSeries(complex);
matrix setShunt(complex);

dialogmat::dialogmat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogmat)
{
    ui->setupUi(this);
    if(ui->CustomButton->isChecked()){
        ui->spinBox_2->setEnabled(true);
        ui->spinBox_3->setEnabled(true);
    }
}

dialogmat::~dialogmat()
{
    delete ui;
}

complex one(1,0),zero(0,0);
matrix error_mat;
void dialogmat::on_pushButton_clicked()
{
    complex z1,z2,z3;
    matrix m1,m2,m3,ans;


    z1.setValue(this->ui->z1real->value(),this->ui->z1img->value());
    z2.setValue(this->ui->z2real->value(),this->ui->z2img->value());
    z3.setValue(this->ui->z3real->value(),this->ui->z3img->value());

    if(this->ui->TButton->isChecked()){
        m1=setSeries(z1);
        m2=setShunt(z3);
        m3=setSeries(z2);
    }
    else if (this->ui->PiButton->isChecked()){
        m1=setShunt(z1);
        m2=setSeries(z2);
        m3=setShunt(z3);
    }
    else if(this->ui->CustomButton->isChecked()){
        QMessageBox::information(0,"Error!","Under Development");
    }
    else{
        QMessageBox::information(0,"Error!","Select Topology");
    }
    ans=m1*m2*m3;
    this->ui->A->setText(ans.val[0][0].display());
    this->ui->B->setText(ans.val[0][1].display());
    this->ui->C->setText(ans.val[1][0].display());
    this->ui->D->setText(ans.val[1][1].display());

    free(m1.val);free(m2.val);free(m3.val);free(ans.val);
}

matrix setSeries(complex z){
    matrix m;
    m.val[0][0]=1;m.val[0][1]=z;m.val[1][0]=0;m.val[1][1]=1;
    return m;
}
matrix setShunt(complex z){
    matrix m;
    if(z==0){
        QMessageBox::information(0,"Error!","Shunt Impedance cannot be ZERO!");
    }
    m.val[0][0]=1;m.val[0][1]=0;m.val[1][0]=one/z;m.val[1][1]=1;
    return m;
}
