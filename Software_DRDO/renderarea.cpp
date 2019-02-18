#include <iostream>
#include "renderarea.h"
#include <QPaintEvent>
#include <QPainter>
#include "global.h"
#include <QMessageBox>

RenderArea::RenderArea( QWidget *parent) :
    QWidget(parent),
    mBackGroundColor (255, 255, 255),
    mShapeColor (0, 0, 0),
    mMode(Impedence)
{

}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(100, 100);
}

QSize RenderArea::sizeHint() const
{
    return QSize(400, 100);
}

QPointF RenderArea::compute_real(float t)
{

    //std::cout << r;
    float cos_t = cos(t);
    float sin_t = sin(t);
    float x = (r/(1+r)) + (1/(r+1))*pow(cos_t, 1);
    float y = (1/(r+1))*pow(sin_t, 1);


    return QPointF (x, y);

}

QPointF RenderArea::compute_imaginary(float t)
{
    float cos_t = cos(t);
    float sin_t = sin(t);
    float x = 1 + (1/r)*cos_t;
    float y = (1/r) + (1/r)*sin_t;

    return QPointF (x, y);

}


 void RenderArea::paintEvent(QPaintEvent *event)
 {
     center = this->rect().center();
     QPainter painter(this);
     painter.setRenderHint(QPainter::Antialiasing, true);


     painter.setBrush(mBackGroundColor);
     painter.setPen(QPen((mShapeColor,20)));
     painter.drawRect(this->rect());
     painter.drawLine(QPointF (center.x(), -1000+center.y()), QPointF(center.x(), 1000+center.y()) );
     painter.drawLine(QPointF (-1000+center.x(), center.y()), QPointF(1000+center.x(), center.y()) );
     painter.setPen(mShapeColor);
     painter.setPen(Qt::blue);


     float intervalLength = 2*M_PI;
     int stepCount = 2000;

     float step = intervalLength/stepCount;
     QPointF iPoint;
     QPointF iPixel;

     switch(mMode) {

     case Superimpose:
         for (RenderArea::r = -2; RenderArea::r <=2 ; RenderArea::r+=0.2) {

             iPoint = compute_imaginary(0);
             iPixel.setX// mBackGroundColor = Qt::green;
                     (-iPoint.x() * scale + center.x());
             iPixel.setY(iPoint.y() * scale + center.y());

                 for (float t = step; t < intervalLength; t += step) {

                    QPointF point = compute_imaginary(t);
                    //if(pow((pow(point.x(),2) + pow(point.y(),2)),0.5) > 1) continue;
                    QPointF pixel;
                    pixel.setX(-point.x() * scale + center.x());
                    pixel.setY(point.y() * scale + center.y());

                     painter.setPen(Qt::blue);
                     if(pow(point.x(),2)+pow(point.y(),2)<1)      //Restricting the domain of Smith Chart
                     {
                     painter.drawLine(iPixel, pixel);
                     }
                    iPixel = pixel;
                    //painter.drawPoint(pixel);
                }
         }
         painter.setPen(Qt::black);
         for (RenderArea::r = 0; RenderArea::r < 10 ; RenderArea::r+=0.2) {

             iPoint = compute_real(0);
             iPixel.setX(-iPoint.x() * scale + center.x());
             iPixel.setY(iPoint.y() * scale + center.y());

                 for (float t = 0; t < intervalLength; t += step) {

                    QPointF point = compute_real(t);
                    QPointF pixel;
                    pixel.setX(-point.x() * scale + center.x());
                    pixel.setY(point.y() * scale + center.y());
                    painter.drawLine(iPixel, pixel);
                    iPixel = pixel;

                    //painter.drawPoint(pixel);

                }
         }

         for (RenderArea::r = -2; RenderArea::r <=2 ; RenderArea::r+=0.2) {

             iPoint = compute_imaginary(0);
             iPixel.setX// mBackGroundColor = Qt::green;
                     (iPoint.x() * scale + center.x());
             iPixel.setY(-iPoint.y() * scale + center.y());

                 for (float t = step; t < intervalLength; t += step) {

                    QPointF point = compute_imaginary(t);
                    //if(pow((pow(point.x(),2) + pow(point.y(),2)),0.5) > 1) continue;
                    QPointF pixel;
                    pixel.setX(point.x() * scale + center.x());
                    pixel.setY(-point.y() * scale + center.y());

                    if(abs(pow(point.x(),2)+pow(point.y(),2)-1)<0.015)
                                        {
                                        painter.setPen(QPen(Qt::red,2));
                                        QString s1= QString::number(r);
                                        painter.setFont(QFont("Arial", 8));
                                        painter.drawText(point.x() * scale + center.x(),-point.y()*scale+center.y(), s1);
                                        painter.setPen(Qt::blue);
                                        }

                     painter.setPen(Qt::blue);
                     if(pow(point.x(),2)+pow(point.y(),2)<1)      //Restricting the domain of Smith Chart
                     {
                     painter.drawLine(iPixel, pixel);
                     }
                    iPixel = pixel;
                    //painter.drawPoint(pixel);
                }
         }
         for (RenderArea::r = 0; RenderArea::r < 10 ; RenderArea::r+=0.2) {

             iPoint = compute_real(0);
             iPixel.setX(iPoint.x() * scale + center.x());
             iPixel.setY(-iPoint.y() * scale + center.y());

                 for (float t = 0; t < intervalLength; t += step) {

                    QPointF point = compute_real(t);
                    QPointF pixel;
                    pixel.setX(point.x() * scale + center.x());
                    pixel.setY(point.y() * scale + center.y());

                    if(floor(point.y()*scale)==0.0 || ceil(point.y()*scale)==0.0)
                                        {
                                        painter.setPen(QPen(Qt::red,2));
                                        QString s1= QString::number(r);
                                        painter.setFont(QFont("Arial", 8));
                                        painter.drawText(point.x() * scale + center.x(),center.y(), s1);
                                        painter.setPen(Qt::blue);
                                        }


                    painter.drawLine(iPixel, pixel);
                    iPixel = pixel;

                    //painter.drawPoint(pixel);

                }
         }

         break;

     case Admittance:
         for (RenderArea::r = -2; RenderArea::r <=2 ; RenderArea::r+=0.2) {

             iPoint = compute_imaginary(0);
             iPixel.setX// mBackGroundColor = Qt::green;
                     (-iPoint.x() * scale + center.x());
             iPixel.setY(iPoint.y() * scale + center.y());

                 for (float t = step; t < intervalLength; t += step) {

                    QPointF point = compute_imaginary(t);
                    //if(pow((pow(point.x(),2) + pow(point.y(),2)),0.5) > 1) continue;
                    QPointF pixel;
                    pixel.setX(-point.x() * scale + center.x());
                    pixel.setY(point.y() * scale + center.y());

                     painter.setPen(Qt::blue);
                     if(pow(point.x(),2)+pow(point.y(),2)<1)      //Restricting the domain of Smith Chart
                     {
                     painter.drawLine(iPixel, pixel);
                     }
                    iPixel = pixel;
                    //painter.drawPoint(pixel);
                }
         }
         for (RenderArea::r = 0; RenderArea::r < 10 ; RenderArea::r+=0.5) {

             iPoint = compute_real(0);
             iPixel.setX(-iPoint.x() * scale + center.x());
             iPixel.setY(iPoint.y() * scale + center.y());

                 for (float t = 0; t < intervalLength; t += step) {

                    QPointF point = compute_real(t);
                    QPointF pixel;
                    pixel.setX(-point.x() * scale + center.x());
                    pixel.setY(point.y() * scale + center.y());
                    painter.drawLine(iPixel, pixel);
                    iPixel = pixel;

                    //painter.drawPoint(pixel);

                }
         }

         break;

     case Impedence:
         for (RenderArea::r = -2; RenderArea::r <=2 ; RenderArea::r+=0.2) {

             iPoint = compute_imaginary(0);
             iPixel.setX// mBackGroundColor = Qt::green;
                     (iPoint.x() * scale + center.x());
             iPixel.setY(-iPoint.y() * scale + center.y());

                 for (float t = step; t < intervalLength; t += step) {

                    QPointF point = compute_imaginary(t);
                    //if(pow((pow(point.x(),2) + pow(point.y(),2)),0.5) > 1) continue;
                    QPointF pixel;
                    pixel.setX(point.x() * scale + center.x());
                    pixel.setY(-point.y() * scale + center.y());

                    if(abs(pow(point.x(),2)+pow(point.y(),2)-1)<0.015)
                                        {
                                        painter.setPen(QPen(Qt::red,2));
                                        QString s1= QString::number(r);
                                        painter.setFont(QFont("Arial", 8));
                                        painter.drawText(point.x() * scale + center.x(),-point.y()*scale+center.y(), s1);
                                        painter.setPen(Qt::blue);
                                        }



                     painter.setPen(Qt::blue);
                     if(pow(point.x(),2)+pow(point.y(),2)<1)      //Restricting the domain of Smith Chart
                     {
                     painter.drawLine(iPixel, pixel);
                     }
                    iPixel = pixel;
                    //painter.drawPoint(pixel);
                }
         }
         for (RenderArea::r = 0; RenderArea::r < 10 ; RenderArea::r+=0.25) {

             iPoint = compute_real(0);
             iPixel.setX(iPoint.x() * scale + center.x());
             iPixel.setY(-iPoint.y() * scale + center.y());

                 for (float t = 0; t < intervalLength; t += step) {

                    QPointF point = compute_real(t);
                    QPointF pixel;
                    pixel.setX(point.x() * scale + center.x());
                    pixel.setY(point.y() * scale + center.y());

                    if(floor(point.y()*scale)==0.0 || ceil(point.y()*scale)==0.0)
                                        {
                                        painter.setPen(QPen(Qt::red,2));
                                        QString s1= QString::number(r);
                                        painter.setFont(QFont("Arial", 8));
                                        painter.drawText(point.x() * scale + center.x(),center.y(), s1);
                                        painter.setPen(Qt::blue);
                                        }



                    painter.drawLine(iPixel, pixel);
                    iPixel = pixel;

                    //painter.drawPoint(pixel);

                }
         }

         break;
     case Hide:
         break;

     }


     for(int i = 0; i < 5; i++) {

            if(flag[i]) {

            painter.setPen(QPen(Qt::red, 5));
            QVector<QPointF> pixel_array(4);


                    double x = points[i].x();
                    double y = points[i].y();
                    if (x == -1 && y == 0) continue;
                    pixel_array[i].setX((((x-1)*(x+1) + pow(y,2))/((pow(x+1,2)+pow(y,2)))) * scale + center.x());
                    pixel_array[i].setY(-((2*y)/((pow(x+1,2)+pow(y,2))))* scale + center.y());
                    painter.drawPoint(pixel_array[i]);


            }
        }

     if(flag[4]) {
          painter.setPen(QPen(Qt::green, 5));
          if(!flag[5]) {
          X1L= pow((Rs*Rp-Rp*Rp),2);      //tuning
          X2L= Rs*Rp/X1L;
          }//tuning
          if(Rs+X2L != 0) {
          Zin=(Rs*X2L/(Rs+X2L)) + X1L;   //plot Zin and Rp
          L_l=X1L/(2*M_PI*f) *pow(10,6);      //display and tuning
          C_l= 1/(X2L*2*M_PI*f)  *pow(10,9); //display and tuning
          painter.drawPoint(QPointF(((Zin-1)/(Zin+1))*scale + center.x(), center.y()));
          painter.drawPoint(QPointF(((Rp-1)/(Rp+1))*scale + center.x(), center.y()));
          }

     }

    if(flag[6] && flag[7]) {

        painter.setPen(QPen(Qt::red, 5));
        double x = impedence_admittance(Zin2.x(), Zin2.y()).x();
        double y = impedence_admittance(Zin2.x(), Zin2.y()).y();
        // TODO: create a function to convert Impedence to Admittance
        Yin.setX(x);
        Yin.setY(y);
        painter.drawPoint(Y_to_Gamma(x, y));
        // TODO: create a function to convert Admittance to Gamma values and replace the above expression inside QPointF

        double a = Yin.x()/50;
        double b = Yin.y()/50;

        L = pow(((50-(2500*a))/(a*w*w)), 0.5);
        C = (1/w)*(((w*L)/(2500+w*w*L*L))+b);

    }

    if(flag[8] && ( flag [7] && flag[6])) {

        painter.setPen(QPen(Qt::green,5));
        double x = impedence_admittance( Ztemp.x(), Ztemp.y()).x();
        double y;
        if(flag[10]) y = Ytemp.y();
        else y = impedence_admittance( Ztemp.x(), Ztemp.y()).y();
        Ytemp.setX(x);
        painter.drawPoint(Y_to_Gamma(x, y));
    }

    if (flag[12]) {

        if(!flag[11]) Lin = 0;
    for(; Lin <= L; Lin+=(L/100) ) {

        double x = 1;
        double y = (w*Lin)/50;
        painter.setPen(QPen(Qt::black, 2));
        painter.drawPoint(Z_to_Gamma(x, y));

    }
    if (!flag[10]) Cin = 0;

    for(; Cin <= C; Cin+=(C/100)) {

         painter.setPen(QPen(Qt::black, 2));
       double  x = 2500/(2500 + w*w*L*L);
        double y = 50*(((-w*L)/(2500 + w*w*L*L)) + w*Cin);
        painter.drawPoint(Y_to_Gamma(x, y));
    }
}


if(flag[13]) {



        if(flag[18]){
            S1.setX(S1Mag*cos(S1angle));
            S1.setY(S1Mag*sin(S1angle));
            S2.setX(S2Mag*cos(S2angle));
            S2.setY(S2Mag*sin(S2angle));
            S3.setX(S3Mag*cos(S3angle));
            S3.setY(S3Mag*sin(S3angle));
            painter.setPen(QPen(Qt::magenta, 12));
            painter.drawPoint(S1.x()*scale+center.x(),-S1.y()*scale+center.y());
            painter.setPen(QPen(Qt::red, 12));
            painter.drawPoint(S2.x()*scale+center.x(),-S2.y()*scale+center.y());
            painter.setPen(QPen(Qt::green, 12));
            painter.drawPoint(S3.x()*scale+center.x(),-S3.y()*scale+center.y());
        }


        else{
        S1.setX(S1Mag*cos(S1angle));
        S1.setY(S1Mag*sin(S1angle));
        S2.setX(S2Mag*cos(S2angle));
        S2.setY(S2Mag*sin(S2angle));
        S3.setX(S3Mag*cos(S3angle));
        S3.setY(S3Mag*sin(S3angle));
        painter.setPen(QPen(Qt::magenta, 8));
        painter.drawPoint(S1.x()*scale+center.x(),-S1.y()*scale+center.y());
        painter.setPen(QPen(Qt::red, 8));
        painter.drawPoint(S2.x()*scale+center.x(),-S2.y()*scale+center.y());
        painter.setPen(QPen(Qt::green, 8));
        painter.drawPoint(S3.x()*scale+center.x(),-S3.y()*scale+center.y());
        }


        painter.setPen(QPen(Qt::red, 2));

        double initial_y;
        double initial_x;
        double initial_yMin;
        double initial_xMin;
        double initial_yMax;
        double initial_xMax;

        initial_point = QPointF(1, 0);
        initial_pointMin = QPointF(1, 0);
        initial_pointMax = QPointF(1, 0);

        initial_x = initial_point.x();
        initial_y = initial_point.y();
        initial_xMin = initial_pointMin.x();
        initial_yMin = initial_pointMin.y();
        initial_xMax = initial_pointMax.x();
        initial_yMax = initial_pointMax.y();


        for(int i = 0; i <= step_count-1; i++) {

            initial_x = initial_point.x();
            initial_y = initial_point.y();
            initial_xMin = initial_pointMin.x();
            initial_yMin = initial_pointMin.y();
            initial_xMax = initial_pointMax.x();
            initial_yMax = initial_pointMax.y();


            switch(step_array[i].topology) {

                case Series_Inductance:
            {
                double L = 0;

                for(; L <= step_array[i].Val; L +=  step_array[i].Val/10000 )
                {

                    initial_point.setY(initial_y + ((w*L)/50));
                  //  if((i == (step_count-1)) && (L == step_array[i].Val)) painter.setPen(QPen(Qt::green, 10));
                     painter.setPen(QPen(Qt::red, 2));
                    painter.drawPoint(Z_to_Gamma(initial_point.x(), initial_point.y()));

                    initial_pointMin.setY(initial_yMin + ((wMin*L)/50));
                  //  if((i == (step_count-1)) && (L == step_array[i].Val)) painter.setPen(QPen(Qt::green, 10));
                    painter.setPen(QPen(Qt::green, 2));
                    painter.drawPoint(Z_to_Gamma(initial_pointMin.x(), initial_pointMin.y()));

                    initial_pointMax.setY(initial_yMax + ((wMax*L)/50));
                  //  if((i == (step_count-1)) && (L == step_array[i].Val)) painter.setPen(QPen(Qt::green, 10));
                    painter.setPen(QPen(Qt::magenta, 2));
                    painter.drawPoint(Z_to_Gamma(initial_pointMax.x(), initial_pointMax.y()));


                }
                painter.setPen(QPen(Qt::red, 2));


                break;
             }

                case Shunt_Capacitance:

            {
                double C = 0;

                    initial_point = impedence_admittance(initial_point.x(), initial_point.y());
                    initial_y = initial_point.y();
                    double firstx = initial_point.x();
                    double firsty = initial_point.y();

                    initial_pointMin = impedence_admittance(initial_pointMin.x(), initial_pointMin.y());
                    initial_yMin = initial_pointMin.y();
                    double firstxMin = initial_pointMin.x();
                    double firstyMin = initial_pointMin.y();

                    initial_pointMax = impedence_admittance(initial_pointMax.x(), initial_pointMax.y());
                    initial_yMax = initial_pointMax.y();
                    double firstxMax = initial_pointMax.x();
                    double firstyMax = initial_pointMax.y();


                    for(; C <=  step_array[i].Val; C+=( step_array[i].Val/10000)) {

                        initial_point.setY( initial_y + ((w*C)*50));
                   //      if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 10));
                         painter.setPen(QPen(Qt::red, 2));
                        painter.drawPoint(Y_to_Gamma(initial_point.x(), initial_point.y()));
                        painter.drawLine(Y_to_Gamma( firstx,firsty), Y_to_Gamma(initial_point.x(), initial_point.y()));
                        firstx=initial_point.x();
                        firsty=initial_point.y();

                        initial_pointMin.setY( initial_yMin + ((wMin*C)*50));
                   //      if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 10));
                        painter.setPen(QPen(Qt::green, 2));
                        painter.drawPoint(Y_to_Gamma(initial_pointMin.x(), initial_pointMin.y()));
                        painter.drawLine(Y_to_Gamma( firstxMin,firstyMin), Y_to_Gamma(initial_pointMin.x(), initial_pointMin.y()));
                        firstxMin=initial_pointMin.x();
                        firstyMin=initial_pointMin.y();

                        initial_pointMax.setY( initial_yMax + ((wMax*C)*50));
                   //      if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 10));
                         painter.setPen(QPen(Qt::magenta, 2));
                        painter.drawPoint(Y_to_Gamma(initial_pointMax.x(), initial_pointMax.y()));
                        painter.drawLine(Y_to_Gamma( firstxMax,firstyMax), Y_to_Gamma(initial_pointMax.x(), initial_pointMax.y()));
                        firstxMax=initial_pointMax.x();
                        firstyMax=initial_pointMax.y();

                    }
                     painter.setPen(QPen(Qt::red, 2));

                    initial_point = impedence_admittance(initial_point.x(), initial_point.y());
                    initial_pointMin = impedence_admittance(initial_pointMin.x(), initial_pointMin.y());
                    initial_pointMax = impedence_admittance(initial_pointMax.x(), initial_pointMax.y());


                break;
              }

                //Same AS ABOVE

            case Series_Capacitance:
        {
            double delta = 0;

            for(; delta<=  1/(50*wMin*step_array[i].Val); delta +=  1/(50*wMin*step_array[i].Val)/100000)
            {

                initial_pointMin.setY( initial_yMin - (delta));
               //if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                painter.setPen(QPen(Qt::green, 2));
                painter.drawPoint(Z_to_Gamma(initial_pointMin.x(), initial_pointMin.y()));

            }
            delta = 0;

            for(; delta<=  1/(50*w*step_array[i].Val); delta +=  1/(50*w*step_array[i].Val)/100000)
            {

                //if(C == 0)
                //  {
                  //  initial_point.setY(0);
                 //   initial_pointMin.setY(0);
                 //   initial_pointMax.setY(0);
                //   }
                //else

                initial_point.setY( initial_y - (delta));
               //if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                 painter.setPen(QPen(Qt::red, 2));
                painter.drawPoint(Z_to_Gamma(initial_point.x(), initial_point.y()));

                //initial_pointMin.setY( initial_yMin - (50/(wMin*C)));
               //if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                //painter.setPen(QPen(Qt::green, 2));
                //painter.drawPoint(Z_to_Gamma(initial_pointMin.x(), initial_pointMin.y()));

                //initial_pointMax.setY( initial_yMax - (50/(wMax*C)));
               //if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                //painter.setPen(QPen(Qt::magenta, 2));
                //painter.drawPoint(Z_to_Gamma(initial_pointMax.x(), initial_pointMax.y()));

             }


                delta = 0;
                for(; delta<=  1/(50*wMax*step_array[i].Val); delta +=  1/(50*wMax*step_array[i].Val)/100000)
                {

                    initial_pointMax.setY( initial_yMax - delta);
                   //if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                    painter.setPen(QPen(Qt::magenta, 2));
                    painter.drawPoint(Z_to_Gamma(initial_pointMax.x(), initial_pointMax.y()));


                }



            painter.setPen(QPen(Qt::red, 2));

            break;
         }

            case Shunt_Inductance:

        {
            double delta = 0;

                initial_point = impedence_admittance(initial_point.x(), initial_point.y());
                initial_y = initial_point.y();

                initial_pointMin = impedence_admittance(initial_pointMin.x(), initial_pointMin.y());
                initial_yMin = initial_pointMin.y();

                initial_pointMax = impedence_admittance(initial_pointMax.x(), initial_pointMax.y());
                initial_yMax = initial_pointMax.y();

                for(; delta <= 50/(wMin*step_array[i].Val); delta+=50/(wMin*step_array[i].Val)/10000) {

                    initial_pointMin.setY( initial_yMin - delta);

               // if((i == (step_count-1)) && (L == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                    painter.setPen(QPen(Qt::green, 2));
                painter.drawPoint(Y_to_Gamma(initial_pointMin.x(), initial_pointMin.y()));


                }

                delta =0;

                for(; delta <= 50/(w*step_array[i].Val); delta+=50/(w*step_array[i].Val)/10000) {

                    //if(L == 0)
                    //{
                      //  initial_point.setY(0);
                        //initial_pointMin.setY(0);
                        //initial_pointMax.setY(0);
                    //}
                    //else

                        initial_point.setY( initial_y - delta);

                   // if((i == (step_count-1)) && (L == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                         painter.setPen(QPen(Qt::red, 2));
                    painter.drawPoint(Y_to_Gamma(initial_point.x(), initial_point.y()));



                }




                delta=0;
                 for(; delta <= 50/(wMax*step_array[i].Val); delta+=50/(wMax*step_array[i].Val)/10000) {

                     initial_pointMax.setY( initial_yMax - delta);

                // if((i == (step_count-1)) && (L == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                     painter.setPen(QPen(Qt::magenta, 2));
                 painter.drawPoint(Y_to_Gamma(initial_pointMax.x(), initial_pointMax.y()));
                 }
                 painter.setPen(QPen(Qt::red, 2));
                initial_point = impedence_admittance(initial_point.x(), initial_point.y());
                initial_pointMin = impedence_admittance(initial_pointMin.x(), initial_pointMin.y());
                initial_pointMax = impedence_admittance(initial_pointMax.x(), initial_pointMax.y());

            break;
          }
            }


        }
        flag[18]=false;
    }

    if(flag[19]) {

        if(flag[18]){
            S1.setX(S1Mag*cos(S1angle));
            S1.setY(S1Mag*sin(S1angle));
            S2.setX(S2Mag*cos(S2angle));
            S2.setY(S2Mag*sin(S2angle));
            S3.setX(S3Mag*cos(S3angle));
            S3.setY(S3Mag*sin(S3angle));
            painter.setPen(QPen(Qt::magenta, 12));
            painter.drawPoint(S1.x()*scale+center.x(),-S1.y()*scale+center.y());
            painter.setPen(QPen(Qt::red, 12));
            painter.drawPoint(S2.x()*scale+center.x(),-S2.y()*scale+center.y());
            painter.setPen(QPen(Qt::green, 12));
            painter.drawPoint(S3.x()*scale+center.x(),-S3.y()*scale+center.y());
        }


        else{
        S1.setX(S1Mag*cos(S1angle));
        S1.setY(S1Mag*sin(S1angle));
        S2.setX(S2Mag*cos(S2angle));
        S2.setY(S2Mag*sin(S2angle));
        S3.setX(S3Mag*cos(S3angle));
        S3.setY(S3Mag*sin(S3angle));
        painter.setPen(QPen(Qt::magenta, 8));
        painter.drawPoint(S1.x()*scale+center.x(),-S1.y()*scale+center.y());
        painter.setPen(QPen(Qt::red, 8));
        painter.drawPoint(S2.x()*scale+center.x(),-S2.y()*scale+center.y());
        painter.setPen(QPen(Qt::green, 8));
        painter.drawPoint(S3.x()*scale+center.x(),-S3.y()*scale+center.y());
        }


        painter.setPen(QPen(Qt::red, 2));


           double initial_y;
           double initial_x;
           double initial_yMin;
           double initial_xMin;
           double initial_yMax;
           double initial_xMax;

           initial_point = QPointF(1, 0);
           initial_pointMin = QPointF(1, 0);
           initial_pointMax = QPointF(1, 0);

           initial_x = initial_point.x();
           initial_y = initial_point.y();
           initial_xMin = initial_pointMin.x();
           initial_yMin = initial_pointMin.y();
           initial_xMax = initial_pointMax.x();
           initial_yMax = initial_pointMax.y();


           for(int i = 0; i <= step_count-1; i++) {

               initial_x = initial_point.x();
               initial_y = initial_point.y();
               initial_xMin = initial_pointMin.x();
               initial_yMin = initial_pointMin.y();
               initial_xMax = initial_pointMax.x();
               initial_yMax = initial_pointMax.y();


               switch(step_array[i].topology) {

                   case Series_Inductance:
               {
                   double L = 0;

                   for(; L <= step_array[i].Val; L +=  step_array[i].Val/10000 )
                   {

                       initial_point.setY(initial_y + ((w*L)/50));
                     //  if((i == (step_count-1)) && (L == step_array[i].Val)) painter.setPen(QPen(Qt::green, 10));
                        painter.setPen(QPen(Qt::red, 2));
                       painter.drawPoint(Z_to_Gamma(initial_point.x(), initial_point.y()));

                       initial_pointMin.setY(initial_yMin + ((wMin*L)/50));
                     //  if((i == (step_count-1)) && (L == step_array[i].Val)) painter.setPen(QPen(Qt::green, 10));
                       painter.setPen(QPen(Qt::green, 2));
                       painter.drawPoint(Z_to_Gamma(initial_pointMin.x(), initial_pointMin.y()));

                       initial_pointMax.setY(initial_yMax + ((wMax*L)/50));
                     //  if((i == (step_count-1)) && (L == step_array[i].Val)) painter.setPen(QPen(Qt::green, 10));
                       painter.setPen(QPen(Qt::magenta, 2));
                       painter.drawPoint(Z_to_Gamma(initial_pointMax.x(), initial_pointMax.y()));


                   }
                   painter.setPen(QPen(Qt::red, 2));


                   break;
                }

                   case Shunt_Capacitance:

               {
                   double C = 0;

                       initial_point = impedence_admittance(initial_point.x(), initial_point.y());
                       initial_y = initial_point.y();
                       double firstx = initial_point.x();
                       double firsty = initial_point.y();

                       initial_pointMin = impedence_admittance(initial_pointMin.x(), initial_pointMin.y());
                       initial_yMin = initial_pointMin.y();
                       double firstxMin = initial_pointMin.x();
                       double firstyMin = initial_pointMin.y();


                       initial_pointMax = impedence_admittance(initial_pointMax.x(), initial_pointMax.y());
                       initial_yMax = initial_pointMax.y();
                       double firstxMax = initial_pointMax.x();
                       double firstyMax = initial_pointMax.y();



                       for(; C <=  step_array[i].Val; C+=( step_array[i].Val/100000)) {

                           initial_point.setY( initial_y + ((w*C)*50));
                      //      if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 10));
                            painter.setPen(QPen(Qt::red, 2));
                           painter.drawPoint(Y_to_Gamma(initial_point.x(), initial_point.y()));
                           painter.drawLine(Y_to_Gamma(firstx,firsty), Y_to_Gamma(initial_point.x(), initial_point.y()));
                           firstx = initial_point.x();
                           firsty = initial_point.y();

                           initial_pointMin.setY( initial_yMin + ((wMin*C)*50));
                      //      if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 10));
                           painter.setPen(QPen(Qt::green, 2));
                           painter.drawPoint(Y_to_Gamma(initial_pointMin.x(), initial_pointMin.y()));
                           painter.drawLine(Y_to_Gamma(firstxMin,firstyMin), Y_to_Gamma(initial_pointMin.x(), initial_pointMin.y()));
                           firstxMin = initial_pointMin.x();
                           firstyMin = initial_pointMin.y();

                           initial_pointMax.setY( initial_yMax + ((wMax*C)*50));
                      //      if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 10));
                            painter.setPen(QPen(Qt::magenta, 2));
                           painter.drawPoint(Y_to_Gamma(initial_pointMax.x(), initial_pointMax.y()));
                           firstxMax = initial_pointMax.x();
                           firstyMax = initial_pointMax.y();


                       }
                        painter.setPen(QPen(Qt::red, 2));

                       initial_point = impedence_admittance(initial_point.x(), initial_point.y());
                       initial_pointMin = impedence_admittance(initial_pointMin.x(), initial_pointMin.y());
                       initial_pointMax = impedence_admittance(initial_pointMax.x(), initial_pointMax.y());


                   break;
                 }

                   //Same AS ABOVE

               case Series_Capacitance:
           {
               double delta=0;


               for(; delta<=  1/(50*w*step_array[i].Val); delta +=  1/(50*w*step_array[i].Val)/100000 )
               {

                   //if(C == 0)
                   //{
                     //  initial_point.setY(0);
                       //initial_pointMin.setY(0);
                       //initial_pointMax.setY(0);
                   //}
                   //else

                   initial_point.setY( initial_y - delta);
                  //if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                    painter.setPen(QPen(Qt::red, 2));
                   painter.drawPoint(Z_to_Gamma(initial_point.x(), initial_point.y()));



               }

               delta=0;


               for(; delta<=  1/(50*wMin*step_array[i].Val); delta +=  1/(50*wMin*step_array[i].Val)/100000 )
               {

                   initial_pointMin.setY( initial_yMin - delta);
                  //if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                   painter.setPen(QPen(Qt::green, 2));
                   painter.drawPoint(Z_to_Gamma(initial_pointMin.x(), initial_pointMin.y()));

               }

               delta=0;


               for(; delta<=  1/(50*wMax*step_array[i].Val); delta +=  1/(50*wMax*step_array[i].Val)/100000 )
               {

                   initial_pointMax.setY( initial_yMax - delta);
                  //if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                   painter.setPen(QPen(Qt::magenta, 2));
                   painter.drawPoint(Z_to_Gamma(initial_pointMax.x(), initial_pointMax.y()));

               }

               painter.setPen(QPen(Qt::red, 2));

               break;
            }

               case Shunt_Inductance:

           {
               double delta = 0;

                   initial_point = impedence_admittance(initial_point.x(), initial_point.y());
                   initial_y = initial_point.y();

                   initial_pointMin = impedence_admittance(initial_pointMin.x(), initial_pointMin.y());
                   initial_yMin = initial_pointMin.y();

                   initial_pointMax = impedence_admittance(initial_pointMax.x(), initial_pointMax.y());
                   initial_yMax = initial_pointMax.y();

                   for(; delta <= 50/(wMin*step_array[i].Val); delta+=50/(wMin*step_array[i].Val)/10000) {

                       initial_pointMin.setY( initial_yMin - delta);

                  // if((i == (step_count-1)) && (L == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                       painter.setPen(QPen(Qt::green, 2));
                   painter.drawPoint(Y_to_Gamma(initial_pointMin.x(), initial_pointMin.y()));

                   }
                    delta = 0;

                   for(; delta <= 50/(w*step_array[i].Val); delta+=50/(w*step_array[i].Val)/10000) {

                       //if(L == 0)
                       //{
                         //  initial_point.setY(0);
                          // initial_pointMin.setY(0);
                          // initial_pointMax.setY(0);
                       //}
                       //else

                           initial_point.setY( initial_y - delta);

                      // if((i == (step_count-1)) && (L == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                            painter.setPen(QPen(Qt::red, 2));
                       painter.drawPoint(Y_to_Gamma(initial_point.x(), initial_point.y()));

                   }



                   delta = 0;
                   for(; delta <= 50/(wMax*step_array[i].Val); delta+=50/(wMax*step_array[i].Val)/10000) {

                       initial_pointMax.setY( initial_yMax - delta);

                  // if((i == (step_count-1)) && (L == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                       painter.setPen(QPen(Qt::magenta, 2));
                   painter.drawPoint(Y_to_Gamma(initial_pointMax.x(), initial_pointMax.y()));


                   }



                    painter.setPen(QPen(Qt::red, 2));
                   initial_point = impedence_admittance(initial_point.x(), initial_point.y());
                   initial_pointMin = impedence_admittance(initial_pointMin.x(), initial_pointMin.y());
                   initial_pointMax = impedence_admittance(initial_pointMax.x(), initial_pointMax.y());

               break;
             }
               }


           }
           flag[18]=false;



       }



 }

