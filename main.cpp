#include <QApplication>
#include "inmat_int.h"
#include "outd_int.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    outD_int out_int;
    out_int.show();
    power power_int;
    power_int.show();
    return a.exec();
}
