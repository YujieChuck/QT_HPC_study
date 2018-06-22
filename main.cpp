#include "qt_hpc_study.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QT_HPC_study w;
    w.show();

    return a.exec();
}
