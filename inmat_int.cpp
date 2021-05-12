#include "inmat_int.h"


inmat_int::inmat_int(QWidget *parent)
    : interfacing(parent)
{
    inmat_int::setWindowTitle("aircondition");
    createRedButton(&DEVICE_CONNECT.IN_MAT[538], "IN_MAT_538");
    createRedButton(&DEVICE_CONNECT.IN_MAT[550], "IN_MAT_550");
}

void inmat_int::updateSmth()
{
    interfacing::updMmrState();
}
