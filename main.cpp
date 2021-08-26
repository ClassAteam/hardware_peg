#include <QApplication>
#include "power_peg.h"
#include "antifire_peg.h"
#include "hydro_peg.h"
#include "landinggear_peg.h"
#include "wingsmech_peg.h"
#include "brakes_peg.h"
#include "antiicing_peg.h"
#include "pneumo_peg.h"
#include "presure_peg.h"
#include "cabinlighting_peg.h"
#include "aircondition_peg.h"
#include "sas_peg.h"
#include "bailout_peg.h"
#include "fake_in.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    fake_in fake_in;
    fake_in.show();
    power_peg power;
    power.show();
    power.showMinimized();
    antifire_peg antifire;
    antifire.show();
    antifire.showMinimized();
    hydro_peg hydro;
    hydro.show();
    hydro.showMinimized();
    landinggear_peg landinggear;
    landinggear.show();
    landinggear.showMinimized();
    wingsmech_peg wing;
    wing.show();
    wing.showMinimized();
    brakes_peg brakes;
    brakes.show();
    brakes.showMinimized();
    antiicing_peg antiicing;
    antiicing.show();
    antiicing.showMinimized();
    pneumo_peg pneumo;
    pneumo.showMinimized();
    presure_peg presure;
    presure.showMinimized();
    cabinlighting_peg cabinlighting;
    cabinlighting.showMinimized();
    aircondition_peg aircondition;
    aircondition.showMinimized();
    sas_peg sas;
    sas.showMinimized();
    bailout_peg bailout;
    bailout.showMinimized();

    return a.exec();
}
