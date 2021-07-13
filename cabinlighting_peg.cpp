#include "cabinlighting_peg.h"

cabinlighting_peg::cabinlighting_peg(QWidget *parent)
    : interfacing(parent)
{
    cabinlighting_peg::setWindowTitle("cabinlighting");

    createSign("SIO");
    //s1_3340
    createRedButton(&DEVICE_CONNECT.IN_MAT[289], "УБОРКА - ВЫПУСК");
    //s6_3340
    createRedButton(&DEVICE_CONNECT.IN_MAT[129], "ВЗЛЕТ - ПОСАДКА");
    //s1_3341
    createRadioButton(&s1_3341, "АНО 10%", false);
    createRadioButton(&s1_3341, "АНО 30%", false);
    createRadioButton(&s1_3341, "АНО 100%", false);
    createRadioButton(&s1_3341, "МИГАНИЕ", true);
    //s2_3340
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "СВЕТ ЛЕВ");
    //s3_3340
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "ВЫПУСК-УБОРКА ЛЕВ");
    //s4_3340
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "ВЫПУСК-УБОРКА ПРАВ");
    //s5_3340
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "СВЕТ ПРАВ");
    //s1_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "МФИ1 ЛЛ");
    //s2_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "МФИ2 ЛЛ");
    //s3_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "МФИ4 ПЛ");
    //s4_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "МФИ5 ПЛ");
    //s5_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "МФИ3 ЛЛ");
    //s6_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "МФИ3 ПЛ");
    //s7_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "СОИ 1Л ШО");
    //s8_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "СОИ 1Л ШН");
    //s11_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "ЦВС 1Л");
    //s12_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "ЦВС 2Л");
    //s13_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "ЦВС 1Пр");
    //s14_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "ЦВС 2Пр");
    //bgs1
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "БГС1");
    //bgs2
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "БГС2");
    //s2_3341
    createRadioButton(&s2_3341, "МАЯК100%", false);
    createRadioButton(&s2_3341, "ПОНИЖ", true);

    newColumn();
    createSign("RMI_PILOT");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[86], "Отказ канала 1  БУСТО-4 №1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[87], "Отказ канала 2  БУСТО-4 №1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[88], "Отказ канала 1  БУСТО-4 №2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[89], "Отказ канала 2  БУСТО-4 №2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[90], "Отказ канала 1  БУСТО-4 №3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[91], "Отказ канала 2  БУСТО-4 №3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[92], "Отказ канала 1  БУСТО-4 №4");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[93], "Отказ канала 2  БУСТО-4 №4");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[94], "Отказ канала 1  БУСТО-3 №1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[95], "Отказ канала 2  БУСТО-3 №1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[96], "Отказ канала 1  БУСТО-3 №2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[97], "Отказ канала 2  БУСТО-3 №2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[98], "Отказ канала 1  БУСТО-3 №3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[99], "Отказ канала 2  БУСТО-3 №3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[100], "Отказ канала 1  БУСТО-3 №4");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[101], "Отказ канала 2  БУСТО-3 №4");

    newColumn();
    createSign("OUT_D");
    //pk1pbllzo
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][96], "ПОЖАР ДВ1");
    //BSS811X2W
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][99], "ПОЖАР ДВ2");
    //BSS812X6S
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][100], "ПОЖАР ДВ3");
    //BSS812X6U
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][101], "ПОЖАР ДВ4");
    //BSS811X2Z
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][106], "ДВ1");
    //BSS811X2a
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][107], "ДВ2");
    //BSS913X2j
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][108], "ДВ3");
    //BSS913X2k
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][109], "ДВ4");
    //BSS913X2m
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][112], "ОЧЕР1");
    //BSS913X2n
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][111], "ОЧЕР2");
    //BSS913X2p
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][110], "ОЧЕР3");
    //BSS811X2Y
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][97], "ВКЛЮЧИ");
    //BSS811X2V
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][102], "ПЕРЕГРЕВ ДВ1");
    //BSS811X2X
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][103], "ПЕРЕГРЕВ ДВ2");
    //BSS812X6T
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][104], "ПЕРЕГРЕВ ДВ3");
    //BSS812X6V
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][105], "ПЕРЕГРЕВ ДВ4");
    //BSS811X2b
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][96], "КРАН ВСУ ЛЕТЧ");
    //BSS811X2D
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][19], "ВСУ ПОЖАР ЛЕТЧ");
    //BSS838X6p
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][69], "ВСУ ПОЖАР ОПЕР");
    //BSS838X6i
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][79], "КРАН ВСУ ОПЕР");
    //BSS926X2R
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][80], "ОЧ1");
    //BSS926X2S
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][81], "ОЧ2");
    //BSS926X2T
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][82], "ОЧ3");
}

void cabinlighting_peg::updateSmth()
{
}
