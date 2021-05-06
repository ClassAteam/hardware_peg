#include "anothersystem_int.h"


anothersystem_int::anothersystem_int(QWidget *parent)
    : interfacing(parent)
{
    anothersystem_int::setWindowTitle("aircondition");
    createRedButton(&DEVICE_CONNECT.IN_D[0][1], "TEST BUTTON2");
}

void anothersystem_int::updateSmth()
{
}
