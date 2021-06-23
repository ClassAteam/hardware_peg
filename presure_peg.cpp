#include "presure_peg.h"

presure_peg::presure_peg(QWidget *parent)
    : interfacing(parent)
{
    presure_peg::setWindowTitle("presure");

    createSign("IDP");
    //H
    createLabelValue(&ISU_CONNECT.H_, "Высота_полета");
    //Ph
    createLabelValue(&ISU_CONNECT.Ph_,"Атмосферное_давление_на_данной_высоте" );

    newColumn();
    posOcupied();
    createSlider(&ISU_CONNECT.H_, 0, 20000);
    createSlider(&ISU_CONNECT.Ph_, 0, 800);
    ISU_CONNECT.Ph_ = 760.0;

    newColumn();
    createSign("SIO");
    //s1_2131
    createRadioButton(&s1_2131, "НЕЙТРАЛЬ", false);
    createRadioButton(&s1_2131, "ПОНИЖ ПЕРЕПАД", false);
    createRadioButton(&s1_2131, "АВАР РАГЗЕРМ", true);

    //s2_2131
    createRedButton(&DEVICE_CONNECT.IN_MAT[12], "МАЛЫЕ Н ГЕРМЕТ");

    newColumn();
    createSign("RMI_PILOT");
    //
    createRedButton(&RMI_PILOT_CONNECT.pnu_presure, "Признак начальных условий");
    createRedButton(&RMI_PILOT_CONNECT.LK, "Люки загерметизированы");
    createRedButton(&RMI_PILOT_CONNECT.prthu1, "Признак работы ТХУ1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[59], "Перенаддув");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[60], "Разгерметизация");

    newColumn();
    createSign("OUT_D");
    //BSS838X6g
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][83], "Р КАБИНА МАЛО ШО");
    //BSS824X2D
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][1], "Р КАБИНА МАЛО ПЛ");
    //BSS811X2C
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][12], "Р КАБИНА МАЛО ЛЛ");
    //BSS838X6h
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][84], "Р КАБИНА ВЕЛИКО");
}

void presure_peg::updateSmth()
{
    DEVICE_CONNECT.IN_MAT[656] = false;
    DEVICE_CONNECT.IN_MAT[657] = false;
    switch(s1_2131)
    {
    case 1: DEVICE_CONNECT.IN_MAT[656] = true;
        break;
    case 2: DEVICE_CONNECT.IN_MAT[657] = true;
        break;
    }
}
