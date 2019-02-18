#include "mainwindow.h"
#include <QApplication>
#include <QVector>
#include <QDesktopWidget>
#include "global.h"
#include <QSplashScreen>
#include <QThread>
class I : public QThread
{
public:
static void sleep(unsigned long secs) {
QThread::sleep(secs);
}
};

QVector<QPointF> points(4);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen* splash=new QSplashScreen;
    splash->setPixmap(QPixmap("splash.png"));
    MainWindow w;
    splash->show();
    I::sleep(6);
    w.setFixedSize(1024,700);
    w.showMaximized();
    w.show();
    splash->finish(&w);


    return a.exec();
}

