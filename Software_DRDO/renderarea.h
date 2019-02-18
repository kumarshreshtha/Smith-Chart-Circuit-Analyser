#ifndef RENDERAREA_H
#define RENDERAREA_H
#include <QWidget>
#include <QColor>
#include <QVector>
#include <QMessageBox>
using namespace std;
class RenderArea : public QWidget
{
    Q_OBJECT
public:
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
        complex operator - (complex a){
            complex b;
            b.real=real-a.real;
            b.imag=imag-a.imag;
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
        complex inverse(){
            complex b;
            b.real=(real)/(pow(real,2)+pow(imag,2));
            b.imag=(-imag)/(pow(real,2)+pow(imag,2));
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
            //r= r.left(5);
            //x=x.left(5)

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

    RenderArea( QWidget *parent = nullptr);
    bool flag[20] = {false};
    int step_count = 0;
    double f, Rs, Rp;
    double X1L,X2L,Zin,L_l,C_l;
    double Zn = 50;
    double w,wMax,wMin;
    double S1Mag,S2Mag,S3Mag,S1angle,S2angle,S3angle;
    QPointF Zin2, Yin, Ztemp, Ytemp;
    QPointF S1,S2,S3;
    double Cin, Lin,L, C;
    double Val;
    matrix ABCD;
    complex zin,zout,rl,rs;
    QPointF initial_point;
    QPointF initial_pointMax;
    QPointF initial_pointMin;
    enum Topology { Shunt_Capacitance, Shunt_Inductance, Series_Capacitance, Series_Inductance };

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
        m.val[0][0]=1;m.val[0][1]=0;m.val[1][0]=z.inverse();m.val[1][1]=1;
        return m;
    }

    updateABCD(){
        ABCD.val[0][0]=1;ABCD.val[1][0]=0;ABCD.val[0][1]=0;ABCD.val[1][1]=1;
        matrix abcd;
        for(int i=0;i<step_count;i++){
            complex z;
            if(step_array[i].topology==Shunt_Capacitance||step_array[i].topology==Series_Capacitance)
                z.setValue(0,-1/(w*step_array[i].Val));
            else
                z.setValue(0,w*step_array[i].Val);
            if(step_array[i].topology==Shunt_Capacitance||step_array[i].topology==Shunt_Inductance)
                abcd=setShunt(z);
            else
                abcd=setSeries(z);

            ABCD=ABCD*abcd;
        }
    }

    struct Step
    {
        Topology topology;
        double Val;
    };

    Step step_array[20];




    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;


    enum Mode { Impedence, Admittance,Superimpose, Hide};



    void setBackgroundColor(QColor color) { mBackGroundColor = color; } //setter
    QColor backgroundColor() { return mBackGroundColor; } //getter

    void setShape( Mode mode ) { mMode = mode; } //setter
    Mode getShape() const { return mMode; }  //getter

    void setTopology ( Topology topology ) { mTopology = topology; }
    Topology getTopology() const { return mTopology; }

    QPointF Z_to_Gamma(double x, double y) { return  QPointF((((x-1)*(x+1) + pow(y,2))/((pow(x+1,2)+pow(y,2)))) * scale + center.x(),-((2*y)/((pow(x+1,2)+pow(y,2))))* scale + center.y());}
    QPointF impedence_admittance(double x, double y) { return QPointF(x/((x*x) + (y*y)), -y/((x*x) + (y*y)) ); }
    QPointF Y_to_Gamma(double x, double y) { return QPointF(-(((x-1)*(x+1) + pow(y,2))/((pow(x+1,2)+pow(y,2)))) * scale + center.x(),((2*y)/((pow(x+1,2)+pow(y,2))))* scale + center.y());}






protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

signals:

public slots:

private:


    float r;
    float scale = 300;
    QPointF center;
    QColor mBackGroundColor;
    QColor mShapeColor;
    Mode mMode;
    float mScale;
    QPointF compute_real(float t);
    QPointF compute_imaginary(float r);
    QPointF compute(float t);
    Topology mTopology;






};

#endif // RENDERAREA_H
