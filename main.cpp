#include <QApplication>
#include "power_peg.h"
#include "antifire_peg.h"
#include "hydro_peg.h"
#include "landinggear_peg.h"
#include "wingsmech_peg.h"
#include "brakes_peg.h"
#include "antiicing_peg.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    power_peg power;
    power.show();
    antifire_peg antifire;
    antifire.show();
    hydro_peg hydro;
    hydro.show();
    landinggear_peg landinggear;
    landinggear.show();
    wingsmech_peg wing;
    wing.show();
    brakes_peg brakes;
    brakes.show();
    antiicing_peg antiicing;
    antiicing.show();

    return a.exec();
}
