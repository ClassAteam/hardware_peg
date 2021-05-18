#include "inmat_int.h"

#include <QTextCodec>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

// russian characters
QString RUS_String(const char* t)
{
 return QString::fromLocal8Bit(t);
}
power::power(QWidget *parent)
    : interfacing(parent)
{
    power::setWindowTitle("Power");
//    createRedButton(&DEVICE_CONNECT.IN_MAT[538], "IN_MAT_538");
//    createRedButton(&DEVICE_CONNECT.IN_MAT[550], "IN_MAT_550");
    createSign("SIO");
    createRedButton(&DEVICE_CONNECT.IN_MAT[556], "ГЕН ВСУ (сеть 27)");
    //s1_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[531], "Г1 (сеть 27)");
    //s4_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[535], "Г2");
    //s5_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[535], "Г3");
    //s8_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[547], "Г4");
    //s11_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[529], "РАП1");
    //s2_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[541], "РАП2");
    //s9_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[537], "АКК1");
    //s14_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[561], "АКК2");
    //s15_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[549], "СОЕД СЕТЕЙ");
    //s7_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[523], "ЗЕМЛЯ - ВОЗДУХ");
    //s13_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[546], "ЧАСТИЧНЫЙ РЕЖИМ (сеть 27В лев)");
    //s10_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[577], "Переключатель вольтметра");
    //s16_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[525], "Переключатель амперметра");
    //s17_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[748], "Главынй выключатель ВСУ");
    //s5-pp73
    createRedButton(&DEVICE_CONNECT.IN_MAT[196], "ЭСУД СКУ1");
    //s1_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[197], "ЭСУД СКУ2");
    //s2_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[198], "ЭСУД СКУ3");
    //s3_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[199], "ЭСУД СКУ4");
    //s4_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[520], "ГЕН1");
    //s1_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[565], "ГЕН2");
    //s5_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[568], "ГЕН3");
    //s10_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[575], "ГЕН4");
    //s13_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[522], "ЧАСТИЧНЫЙ РЕЖИМ СЕТЬ ЛЕВАЯ");
    //s4_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[567], "ЧАСТИЧНЫЙ РЕЖИМ СЕТЬ ПРАВАЯ");
    //s12_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[549], "ВСУ ГЕН ВСУ");
    //s8_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[557], "СЕТЬ 115/200В СОЕДИН СЕТЕЙ");
    //s2_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[555], " СЕТЬ 115/200В РАП");
    //s9_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[592], "ПТС ПРЕОБР 1");
    //s15_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[594], "ПОС1000");
    //s21_2420
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
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][46], "ВКЛ РАП2 сеть лев");
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
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][13], "ОТК Г1");
    //BSS926X2c
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][22], "ОТК Г2");
    //BSS837X2Y
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][23], "ОТК Г3");
    //BSS837X2U
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][26], "ОТК Г4");
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
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][32], "ОТКЛЮЧИ ППО3");
    //BSS837X2i
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][50], "ОТКЛЮЧИ ППО4");
    //BSS926X2q
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][54], "ВКЛ (РАП СЕТЬ 115/220В)");
    //BSS926X2r
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][55], "СОЕДИН СЕТЕЙ(СЕТЬ 115/200 В)");
    //BSS837X2d
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][56], "ВКЛ (ГЕН ВСУ СЕТЬ 115/200 В)");
    //BSS838X6D
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][40], "ОТКЛЮЧИ ППО1");
    //BSS838X6H
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][42], "ОТКЛЮЧИ ППО2");
    //BSS837X2q
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][22], "ОТКЛЮЧИ ППО3");
    //BSS837X2j
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][51], "ОТКЛЮЧИ ППО4");
    //BSS838X6B
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][38], "ОТКЛ (ГЕН1)");
    //BSS838X6F
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][44], "ОТКЛ (ГЕН2)");
    //BSS837X2n
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][22], "ОТКЛ (ГЕН3)");
    //BSS837X2h
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][53], "ОТКЛ (ГЕН4)");
    //BSS838X6A
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][37], "ОТКЛЮЧИ (ГЕН1)");
    //BSS838X6E
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][43], "ОТКЛЮЧИ (ГЕН2)");
    //BSS837X2m
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][22], "ОТКЛЮЧИ (ГЕН3)");
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
    //BSS926X2p
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
}

void power::updateSmth()
{
    interfacing::updMmrState();
}
