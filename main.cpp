#include <QApplication>
#include "inmat_int.h"
#include "outd_int.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    inmat_int aircondition;
    aircondition.show();
    outD_int anothersystem;
    anothersystem.show();
    return a.exec();
}
