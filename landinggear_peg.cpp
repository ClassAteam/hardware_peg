#include "landinggear_peg.h"


landinggear_peg::landinggear_peg(QWidget *parent)
    : interfacing(parent)
{
    landinggear_peg::setWindowTitle("landinggear");
    createSign("ISU");

    //wrapping
    createRedButton(&ISU_CONNECT.wrapsign, "Признак обжатия Л и П");
    //Xped
    createLabelValue(&DEVICE_CONNECT.IN_A[0][12], "Положение_педалей НК");
    createSlider(&DEVICE_CONNECT.IN_A[0][12], 0, 100);

    newColumn();
    posOcupied();
    //s1_3230
    createRedButton(&DEVICE_CONNECT.IN_MAT[157], "ОТКЛЮЧЕНИЕ ОСНОВН УПРАВЛ ШАССИ");
    //s2_3230
    createRadioButton(&s2_3230, "ШАССИ ВЫПУСК", false);
    createRadioButton(&s2_3230, "ШАССИ УБОРКА", true);
    //s3_3230
    createRedButton(&DEVICE_CONNECT.IN_MAT[762], "ОСНОВН УПРАВЛ СИГНАЛ ДАВЛ");
    //s30_3230
    createRedButton(&DEVICE_CONNECT.IN_MAT[469], "АВАРИЙНЫЙ ВЫПУСК ШАССИ");
    //s1_3250
    createRedButton(&DEVICE_CONNECT.IN_MAT[5], "ПОВОРОТ КОЛЕС ПИТАНИЕ");
    //s4_3250
    createRedButton(&DEVICE_CONNECT.IN_MAT[7], "ПОВОРОТ КОЛЕС РУЛЕНИЕ");
    //s31_3230
    createRedButton(&DEVICE_CONNECT.IN_MAT[763], "ШАССИ ОТКЛ-ОПОРА ПЕРЕДН-ОПОРА ЛЕВ"
                                                 "-ОПОРА ПРАВ");
    //s55_3230
    createRedButton(&DEVICE_CONNECT.IN_MAT[857], "ИМИТАЦИЯ ШАССИ НЕ ОБЖАТО ОПОРА Л1");
    //s56_3230
    createRedButton(&DEVICE_CONNECT.IN_MAT[861], "ИМИТАЦИЯ ШАССИ НЕ ОБЖАТО ОПОРА П1");
    //s57_3230
    createRedButton(&DEVICE_CONNECT.IN_MAT[859], "ИМИТАЦИЯ ШАССИ НЕ ОБЖАТО ОПОРА Л2");
    //s58_3230
    createRedButton(&DEVICE_CONNECT.IN_MAT[863], "ИМИТАЦИЯ ШАССИ НЕ ОБЖАТО ОПОРА Л2");

    newColumn();
    createSign("RMI_PILOT");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[72], "Недовыпущенные осн опоры шасси");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[76], "Невыпуск левой опоры шасси");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[78], "Невыпуск передней опоры шасси");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[77], "Невыпуск правой опоры шасси");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[73], "Неполная уборка передней опоры");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[74], "Неполная уборка левой опоры");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[75], "Неполная уборка правой опоры");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[79], "Невыключение автоматики после"
                                                  "выпуска");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[80], "Отказ 1 канала сист повор "
                                                  "перед опоры");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[81], "Отказ 2 канала сист повор "
                                                  "перед опоры");

    newColumn();
    createSign("OUT_D");
    //BSS825X6Y
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][28], "[1][28]");
    //BSS825X6Z
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][30], "[1][30]");
    //BSS825X6a
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][32], "[1][32]");
    //BSS824X2X
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][27], "Р ШАССИ НЕ ОТКЛ");
    //BSS824X2Y
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][26], "ШАССИ ВЫПУСТИ");
    //BSS824X2U
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][29], "[1][29]");
    //BSS824X2W
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][33], "[1][33]");
    //BSS824X2V
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][31], "[1][31]");
    //BSS812X6Y
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][64], "Руление");
}

void landinggear_peg::updateSmth()
{
    DEVICE_CONNECT.IN_MAT[156] = false;
    switch(s2_3230)
    {
    case static_cast<int>(s2_3230::vipusk):DEVICE_CONNECT.IN_MAT[156] = false;
        break;
    case static_cast<int>(s2_3230::uborka):DEVICE_CONNECT.IN_MAT[156] = true;
        break;
    }
}
