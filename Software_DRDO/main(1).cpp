#include "mainwindow.h"
#include <QApplication>
#include <QVector>
#include "global.h"

QVector<QPointF> points(4);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

