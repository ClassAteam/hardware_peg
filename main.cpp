#include <QApplication>
#include "power_peg.h"
#include "antifire_peg.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    power_peg power_peg;
    power_peg.show();
    antifire_peg antifire_peg;
    antifire_peg.show();
    return a.exec();
}
