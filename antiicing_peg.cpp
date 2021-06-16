#include "antiicing_peg.h"

antiicing_peg::antiicing_peg(QWidget *parent)
    : interfacing(parent)
{
    antiicing_peg::setWindowTitle("antiicing");

    createSign("SIO");
    //s1_3020
    createRedButton(&DEVICE_CONNECT.IN_MAT[169], "Т наруж возд 0 -6");
    createRedButton(&DEVICE_CONNECT.IN_MAT[170], "Т наруж возд -6 -15");
    createRedButton(&DEVICE_CONNECT.IN_MAT[171], "Т наруж возд ниже -15");
    //s4_3040
    createRedButton(&DEVICE_CONNECT.IN_MAT[162], "ОБОГРЕВ СТЕКЛО ЛОБОВОЕ");
    //s6_3040
    createRedButton(&DEVICE_CONNECT.IN_MAT[163], "ОБОГРЕВ СТЕКЛО ПРАВОЕ");
    //s2_3020
    createRedButton(&DEVICE_CONNECT.IN_MAT[843], "ОТКЛ ОБОГР ВОЗДУХОЗАБОРНИКОВ 1");
    //s3_3020
    createRedButton(&DEVICE_CONNECT.IN_MAT[844], "ОТКЛ ОБОГР ВОЗДУХОЗАБОРНИКОВ 2");
    //s4_3020
    createRedButton(&DEVICE_CONNECT.IN_MAT[845], "ОТКЛ ОБОГР ВОЗДУХОЗАБОРНИКОВ 3");
    //s5_3020
    createRedButton(&DEVICE_CONNECT.IN_MAT[846], "ОТКЛ ОБОГР ВОЗДУХОЗАБОРНИКОВ 4");
    //s6_3020
    createRedButton(&DEVICE_CONNECT.IN_MAT[853], "ОБОГРЕВ В/З ПОДКЛ НА ЗЕМЛЕ");
    //s7_3040
    createRedButton(&DEVICE_CONNECT.IN_MAT[849], "ОБОГРЕВ СТЕКОЛ ОТКЛ");
    createRedButton(&DEVICE_CONNECT.IN_MAT[850], "ОБОГРЕВ СТЕКОЛ ЛЕВ");
    createRedButton(&DEVICE_CONNECT.IN_MAT[851], "ОБОГРЕВ СТЕКОЛ ЛОБ");
    createRedButton(&DEVICE_CONNECT.IN_MAT[852], "ОБОГРЕВ СТЕКОЛ ПРАВ");
    //s1_3030
    createRedButton(&DEVICE_CONNECT.IN_MAT[760], "КОНТРОЛЬ ППД");
    //s2_3030
    createRedButton(&DEVICE_CONNECT.IN_MAT[52], "ОБОГРЕВ ППД");
    //s2_3040
    createRedButton(&DEVICE_CONNECT.IN_MAT[50], "ОБОГРЕВ СТЕКЛО ЛЕВОЕ");
    //s8_3040
    createRedButton(&DEVICE_CONNECT.IN_MAT[848], "ОБОГРЕВ СТЕКОЛ КОНТРОЛЬ");
    //s1_3080
    createRedButton(&DEVICE_CONNECT.IN_MAT[189], "СИГНАЛ ОБЛЕД ЛЕВЫЙ");
    //s2_3080
    createRedButton(&DEVICE_CONNECT.IN_MAT[190], "СИГНАЛ ОБЛЕД ПРАВЫЙ");
    //s3_3080
    createRedButton(&DEVICE_CONNECT.IN_MAT[191], "СО-121ВМ КОТР");
    //s4_3080
    createRedButton(&DEVICE_CONNECT.IN_MAT[191], "ОБОГРЕВ ВНА1");
    //s5_3080
    createRedButton(&DEVICE_CONNECT.IN_MAT[191], "ОБОГРЕВ ВНА2");
    //s6_3080
    createRedButton(&DEVICE_CONNECT.IN_MAT[191], "ОБОГРЕВ ВНА3");
    //s7_3080
    createRedButton(&DEVICE_CONNECT.IN_MAT[191], "ОБОГРЕВ ВНА4");

    newColumn();
    createSign("RMI_PILOT");
    //
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[44], "Отказ ПОС воздухозаборников");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[45], "Отказ ПОС первого двигателя");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[46], "Отказ ПОС первого двигателя");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[47], "Отказ ПОС третьего двигателя");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[48], "Отказ ПОС четвертого двигателя");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[49], "Отказ левого канала СО-121");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[50], "Отказ правого канала СО-121");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[51], "Л сраб лев канала СО-121");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[52], " Л сраб прав канала СО-121");

    newColumn();
    createSign("OUT_D");
    //BSS824X2a
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][45], "В/ЗАБ1 НЕИСПР");
    //BSS824X2b
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][46], "В/ЗАБ2 НЕИСПР");
    //BSS824X2C
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][47], "В/ЗАБ3 НЕИСПР");
    //BSS824X2D
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][48], "В/ЗАБ4 НЕИСПР");
    //BSS825_PROG
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][44], "ПРОГРАММА");
    //BSS811X2L
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][78], "ППД ВКЛЮЧИ");
    //BSS824X2J
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][4], "ОБЛЕД");
    //BSS825X6f
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][53], "ОБЛЕД ЛЕВ ИСПР");
    //BSS825X6g
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][54], "ОБЛЕД ПРАВ ИСПР");
    //H1_3040
    createLabelClue(&DEVICE_CONNECT.OUT_D[3][68], "ОБОГРЕВ СТЕКОЛ ИСПРАВЕН");
    //H1_3030
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][114], "ОБОГРЕВ ППД1 ИСПРАВЕН");
    //H2_3030
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][115], "ОБОГРЕВ ППД2 ИСПРАВЕН");
    //H3_3030
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][113], "ОБОГРЕВ ППД3 ИСПРАВЕН");

    newColumn();
    createSign("IDP");
    createSlider(&ISU_CONNECT.M, 0, 200);
    newColumn();
    posOcupied();
    createLabelValue(&ISU_CONNECT.M, "Число_Маха_0_2");
}

void antiicing_peg::updateSmth()
{
}
