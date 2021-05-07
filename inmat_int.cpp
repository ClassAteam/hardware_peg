#include "inmat_int.h"


inmat_int::inmat_int(QWidget *parent)
    : interfacing(parent)
{
    inmat_int::setWindowTitle("aircondition");
    createRedButton(&DEVICE_CONNECT.IN_MAT[538], "IN_MAT_538");
}

void inmat_int::updateSmth()
{
    interfacing::updMmrState();
}
