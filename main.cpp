#include <QApplication>
#include "power_peg.h"
#include "antifire_peg.h"
#include "hydro_peg.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    power_peg power;
    power.show();
    antifire_peg antifire;
    antifire.show();
    hydro_peg hydro;
    hydro.show();
    return a.exec();
}
