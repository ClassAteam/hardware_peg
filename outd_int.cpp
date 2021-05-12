#include "outd_int.h"


outD_int::outD_int(QWidget *parent)
    : interfacing(parent)
{
    outD_int::setWindowTitle("aircondition");
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][32], "OUT_D_2_32");
}

void outD_int::updateSmth()
{
}
