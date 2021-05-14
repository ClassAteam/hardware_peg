#include <QApplication>
#include "inmat_int.h"
#include "outd_int.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    power power_int;
    power_int.show();
    return a.exec();
}
