#include "fake_in.h"

fake_in::fake_in(QWidget *parent)
    : interfacing(parent)
{
    fake_in::setWindowTitle("fake_in");

    createSign("IncomingParameters");

    createLabelValue(&ISU_CONNECT.planePosX, "Plane_Position's_X");
    createSlider(&ISU_CONNECT.planePosX, -15000, 15000);
    createLabelValue(&ISU_CONNECT.planePosY, "Plane_Position's_Y");
    createSlider(&ISU_CONNECT.planePosY, -15000, 15000);
    createLabelValue(&ISU_CONNECT.planePosZ, "Plane_Position's_Z");
    createSlider(&ISU_CONNECT.planePosZ, 0.0, 3000);
    createLabelValue(&ISU_CONNECT.NorthAngle, "NorthAngle");
    createSlider(&ISU_CONNECT.NorthAngle, 0.0, 360);
}

void fake_in::updateSmth()
{

}
