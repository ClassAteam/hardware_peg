#include "outd_int.h"


outD_int::outD_int(QWidget *parent)
    : interfacing(parent)
{
    outD_int::setWindowTitle("aircondition");
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][32], "OUT_D_1_32");
}

void outD_int::updateSmth()
{
}
