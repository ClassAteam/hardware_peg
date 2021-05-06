#include "aircondition_int.h"


aircondition_int::aircondition_int(QWidget *parent)
    : interfacing(parent)
{
    aircondition_int::setWindowTitle("aircondition");
    createRedButton(&DEVICE_CONNECT.IN_D[0][1], "TEST BUTTON");
}

void aircondition_int::updateSmth()
{
}
