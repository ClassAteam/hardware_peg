#include "power_peg.h"

//#include <QTextCodec>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

// russian characters
QString RUS_String(const char* t)
{
    return QString::fromLocal8Bit(t);
}
power_peg::power_peg(QWidget *parent)
    : interfacing(parent)
{
    power_peg::setWindowTitle("Power");
//    createRedButton(&DEVICE_CONNECT.IN_MAT[538], "IN_MAT_538");
//    createRedButton(&DEVICE_CONNECT.IN_MAT[550], "IN_MAT_550");
    createSign("ISU");
    createLabelValue(&ISU_CONNECT.nvd1, "ДВИГ1");
    createSlider(&ISU_CONNECT.nvd1, 0, 100);
    createLabelValue(&ISU_CONNECT.nvd2, "ДВИГ2");
    createSlider(&ISU_CONNECT.nvd2, 0, 100);
    createLabelValue(&ISU_CONNECT.nvd3, "ДВИГ3");
    createSlider(&ISU_CONNECT.nvd3, 0, 100);
    createLabelValue(&ISU_CONNECT.nvd4, "ДВИГ4");
    createSlider(&ISU_CONNECT.nvd4, 0, 100);
    createLabelValue(&ISU_CONNECT.nvdVsu, "ВСУ");
    createSlider(&ISU_CONNECT.nvdVsu, 0, 100);

    newColumn();
    createSign("SIO");
    //s1_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[556], "ГЕН ВСУ (сеть 27)");
    //s4_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[531], "Г1");
    //s5_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[535], "Г2");
    //s6_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[553], "Разделение сетей");
    //s8_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[543], "Г3");
    //s11_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[547], "Г4");
    //s2_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[529], "РАП1");
    //s9_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[541], "РАП2");
    //s14_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[537], "АКК1");
    //s15_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[539], "АКК2");
    //s7_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[549], "СОЕД СЕТЕЙ");
    //s13_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[524], "ЗЕМЛЯ - ВОЗДУХ");
    //s3_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[533], "ЧАСТИЧНЫЙ РЕЖИМ (сеть 27В лев)");
    //s10_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[545], "ЧАСТИЧНЫЙ РЕЖИМ (сеть 27В прав)");
    //s16_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[576], "Вольтметр: АКК1");
    //s16_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[577], "Вольтметр: АКК2");
    //s16_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[578], "Вольтметр: Сеть АВАР1");
    //s16_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[579], "Вольтметр: Сеть АВАР2");
    //s16_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[580], "Вольтметр: Шина 1 ЛЕВ СЕТЬ");
    //s16_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[581], "Вольтметр: Шина 2 ЛЕВ СЕТЬ");
    //s16_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[582], "Вольтметр: Шина 1 ПРАВ СЕТЬ");
    //s16_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[583], "Вольтметр: Шина 2 ПРАВ СЕТЬ");
    //s17_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[525], "Амперметр: АКК1 РАП1");
    //s17_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[526], "Амперметр: АКК2 РАП2");
    //s17_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[527], "Амперметр: ВСУ ");

    newColumn();
    posOcupied();
    //s5-pp73
    createRedButton(&DEVICE_CONNECT.IN_MAT[748], "Главынй выключатель ВСУ");
    //s1_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[196], "ЭСУД СКУ1");
    //s2_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[197], "ЭСУД СКУ2");
    //s3_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[198], "ЭСУД СКУ3");
    //s4_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[199], "ЭСУД СКУ4");
    //s1_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[520], "ГЕН1");
    //s5_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[565], "ГЕН2");
    //s10_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[568], "ГЕН3");
    //s13_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[575], "ГЕН4");
    //s4_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[522], "ЧАСТИЧНЫЙ РЕЖИМ СЕТЬ ЛЕВАЯ");
    //s12_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[567], "ЧАСТИЧНЫЙ РЕЖИМ СЕТЬ ПРАВАЯ");
    //s8_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[549], "ВСУ ГЕН ВСУ");
    //s2_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[557], "СЕТЬ 115/200В СОЕДИН СЕТЕЙ");
    //s9_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[555], " СЕТЬ 115/200В РАП");
    //s15_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[592], "ПТС ПРЕОБР 1");
    //s21_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[594], "ПОС1000 ПРЕОБР 3");
    //s3_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[561], "ППО1");
    //s6_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[563], "ППО2");
    //s11_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[571], "ППО3");
    //s14_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[573], "ППО4");

    newColumn();
    createSign("RMI_PILOT");
    createRedButton(&RMI_PILOT_CONNECT.bRMI_ALL, "Начальные условия");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[20], "отказ генератора постоянного тока 1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[21], "отказ генератора постоянного тока 2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[22], "отказ генератора постоянного тока 3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[23], "отказ генератора постоянного тока 4");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[24], "Перегрузка генератора 1 постоянного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[25], "Перегрузка генератора 2 постоянного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[26], "Перегрузка генератора 3 постоянного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[27], "Перегрузка генератора 4 постоянного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[10], "Падение давления масла ППО ген 1 переменного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[11], "Падение давления масла ППО ген 2 переменного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[12], "Падение давления масла ППО ген 3 переменного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[13], "Падение давления масла ППО ген 4 переменного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[5], "Отказ генератора 1 переменного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[6], "Отказ генератора 2 переменного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[7], "Отказ генератора 3 переменного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[8], "Отказ генератора 4 переменного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[9], "Отказ генератора ВСУ");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[14], "Отказ преобразователя ПТС1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[15], "Отказ преобразователя ПОС");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[16], "Перегрузка генератора 1 переменного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[17], "Перегрузка генератора 2 переменного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[18], "Перегрузка генератора 3 переменного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[19], "Перегрузка генератора 4 переменного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[28], "Перегрев аккумулятора 1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[29], "Перегрев аккумулятора 2");
    createRedButton(&RMI_PILOT_CONNECT.accChargeToFull, "Аккумуляторы в исх. полож.");
    createRedButton(&RMI_PILOT_CONNECT.rap1PlugIn, "Подключение РАП1 (27В)");
    createRedButton(&RMI_PILOT_CONNECT.rap2PlugIn, "Подключение РАП2 (27В)");
    createRedButton(&RMI_PILOT_CONNECT.rapPlugIn, "Подключение РАП (115.200В)");

    newColumn();
    createSign("OUT_D");
    //BSS837X2P
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][32], "ЛЕВ ОТ АКК");
    //BSS837X2V
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][33], "ПРАВ ОТ АКК");
    //BSS926X2i
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][27], "Соединение сетей пост.тока");
    //BSS926X2g
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][11], "ВКЛ РАП1 сеть лев");
    //BSS926X2m
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][21], "ВКЛ РАП2 сеть лев");
    //BSS926X2h
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][14], "ВКЛ Частичный режим сеть лев");
    //BSS926X2n
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][24], "ВКЛ Частичный режим сеть прав");
    //BSS926X2Z
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][12], "ОТКЛЮЧИ Г1");
    //BSS926X2b
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][15], "ОТКЛЮЧИ Г2");
    //BSS837X2X
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][22], "ОТКЛЮЧИ Г3");
    //BSS837X2T
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][25], "ОТКЛЮЧИ Г4");
    //BSS926X2a
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][13], "ОТКЛ Г1");
    //BSS926X2c
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][16], "ОТКЛ Г2");
    //BSS837X2Y
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][23], "ОТКЛ Г3");
    //BSS837X2U
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][26], "ОТКЛ Г4");
    //BSS926X2j
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][28], "ВКЛ (ГЕН ВСУ)");
    //BSS837X2N
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][30], "ПЕРЕГРУЗ ГЕНЕРАТОРА пост тока 1");
    //BSS837X2R
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][31], "ПЕРЕГРУЗ ГЕНЕРАТОРА пост тока 2");
    //BSS837X2W
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][34], "ПЕРЕГРУЗ ГЕНЕРАТОРА пост тока 3");
    //BSS837X2S
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][35], "ПЕРЕГРУЗ ГЕНЕРАТОРА пост тока 4");
    //BSS926X2d
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][17], "ОТКЛЮЧИ АКК1");
    //BSS837X2Z
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][19], "ОТКЛЮЧИ АКК2");
    //BSS926X2e
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][18], "АКК1");
    //BSS837X2a
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][20], "АКК2");
    //BSS838X6C
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][39], "ОТКЛЮЧИ ППО1");
    //BSS838X6G
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][41], "ОТКЛЮЧИ ППО2");
    //BSS837X2p
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][48], "ОТКЛЮЧИ ППО3");
    //BSS837X2i
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][50], "ОТКЛЮЧИ ППО4");

    newColumn();
    posOcupied();
    //BSS926X2q
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][54], "ВКЛ (РАП СЕТЬ 115/220В)");
    //BSS926X2r
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][55], "СОЕДИН СЕТЕЙ(СЕТЬ 115/200 В)");
    //BSS837X2d
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][56], "ВКЛ (ГЕН ВСУ СЕТЬ 115/200 В)");
    //BSS838X6D
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][40], "ППО1 ОТКЛ");
    //BSS838X6H
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][42], "ППО2 ОТКЛ");
    //BSS837X2q
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][49], "ППО3 ОТКЛ");
    //BSS837X2j
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][51], "ППО4 ОТКЛ");
    //BSS838X6B
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][38], "ОТКЛ (ГЕН1)");
    //BSS838X6F
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][44], "ОТКЛ (ГЕН2)");
    //BSS837X2n
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][47], "ОТКЛ (ГЕН3)");
    //BSS837X2h
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][53], "ОТКЛ (ГЕН4)");
    //BSS838X6A
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][37], "ОТКЛЮЧИ (ГЕН1)");
    //BSS838X6E
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][43], "ОТКЛЮЧИ (ГЕН2)");
    //BSS837X2m
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][46], "ОТКЛЮЧИ (ГЕН3)");
    //BSS837X2g
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][52], "ОТКЛЮЧИ (ГЕН4)");
    //BSS837X2b
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][57], "ПЕРЕГРУЗ (ГЕН1)");
    //BSS837X2c
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][58], "ПЕРЕГРУЗ (ГЕН2)");
    //BSS837X2k
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][59], "ПЕРЕГРУЗ (ГЕН3)");
    //BSS837X2f
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][60], "ПЕРЕГРУЗ (ГЕН4)");
    //BSS926X2P
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][36], "ВКЛ (ЧАСТИЧН РЕЖИМ ЛЕВАЯ СЕТЬ 115/200В");
    //BSS837X2e
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][45], "ВКЛ (ЧАСТИЧН РЕЖИМ ПРАВАЯ СЕТЬ 115/200В");
    //BSS837X2E
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][5], "АВАР ЛЕВАЯ (ШИНА 1 АПШ)");
    //BSS837X2H
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][6], "АВАР ПРАВАЯ (ШИНА 2 АПШ)");
    //BSS837X2G
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][9], "ПРЕОБР 3 ЛЕВАЯ (ШИНА 5 АПШ)");
    //BSS837X2K
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][10], "ПРЕОБР 3 ПРАВАЯ (ШИНА 6 АПШ)");
    //BSS837X2F
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][7], "ПРЕОБР 1 (ШИНА 3 АПШ)");
    //BSS926X3H
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][29], "СЕТИ РАЗДЕЛЕНЫ");
}

void power_peg::updateSmth()
{
    interfacing::updMmrState();
}
