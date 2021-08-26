#include "fake_in.h"

fake_in::fake_in(QWidget *parent)
    : interfacing(parent)
{
    fake_in::setWindowTitle("fake_in");

    createSign("IncomingParameters");

    createLabelValue(&ISU_CONNECT.planePosX, "Plane Position's X");
    createSlider(&ISU_CONNECT.planePosX, -3000, 3000);
    createLabelValue(&ISU_CONNECT.planePosY, "Plane Position's Y");
    createSlider(&ISU_CONNECT.planePosY, -3000, 3000);
}

void fake_in::updateSmth()
{

}
