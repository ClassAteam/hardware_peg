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
    createRedButton(&DEVICE_CONNECT.IN_MAT[556], "Переключатель ГЕН ВСУ (сеть 27)");
    //s1_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[531], "Переключатель Г1 (сеть 27)");
    //s4_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[535], "Переключатель Г2");
    //s5_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[535], "Переключатель Г3");
    //s8_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[547], "Переключатель Г4");
    //s11_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[529], "Переключатель кнопочный включения РАП1");
    //s2_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[541], "Переключатель кнопочный включения РАП2");
    //s9_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[537], "Переключатель кнопочный"
                                                 " включения аккумулятора №1 АКК1");
    //s14_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[561], "Переключатель кнопочный"
                                                 " включения аккумулятора №2 АКК2");
    //s15_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[549], "Переключатель кнопочный"
                                                 " СОЕД СЕТЕЙ");
    //s7_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[523], "Переключатель ЗЕМЛЯ - ВОЗДУХ");
    //s13_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[546], "Переключатель кнопочный включения"
                                                 " ЧАСТИЧНЫЙ РЕЖИМ (сеть 27В лев)");
    //s10_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[577], "Переключатель вольтметра");
    //s16_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[525], "Переключатель амперметра");
    //s17_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[748], "Сигнал с пульта ПП-73"
                                                 "(пуль запуска и управления ВСУ)");
    //s5-pp73
    createRedButton(&DEVICE_CONNECT.IN_MAT[196], "Выключатель ЭСУД СКУ1");
    //s1_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[197], "Выключатель ЭСУД СКУ2");
    //s2_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[198], "Выключатель ЭСУД СКУ3");
    //s3_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[199], "Выключатель ЭСУД СКУ4");
    //s4_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[520], "Переключатель включения"
                                                 " генератора переменного тока"
                                                 " ГЕН1");
    //s1_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[565], "Переключатель включения"
                                                 " генератора переменного тока"
                                                 " ГЕН2");
    //s5_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[568], "Переключатель включения"
                                                 " генератора переменного тока"
                                                 " ГЕН3");
    //s10_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[575], "Переключатель включения"
                                                 " генератора переменого тока"
                                                 " ГЕН4");
    //s13_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[522], "Переключатель включения"
                                                 " частичного режима левой сети"
                                                 " переменного тока"
                                                 " ЧАСТИЧНЫЙ РЕЖИМ СЕТЬ ЛЕВАЯ");
    //s4_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[567], "Переключатель включения"
                                                 " частичного режима правой"
                                                 " сети переменного тока"
                                                 " ЧАСТИЧНЫЙ РЕЖИМ СЕТЬ ПРАВАЯ");
    //s12_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[549], "Кнопочный переключатель включения"
                                                 " генератора переменного тока"
                                                 " ВСУ ГЕН ВСУ");
    //s8_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[557], "Переключатель СЕТЬ 115/200В"
                                                 " СОЕДИН СЕТЕЙ");
    //s2_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[555], "Переключатель СЕТЬ 115/200В"
                                                 " СОЕДИН СЕТЕЙ");
    //s9_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[592], "Выключатель ПТС ПРЕОБР 1");
    //s15_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[594], "Выключатель преобразователя №3"
                                                 " (ПОС1000)");
    //s21_2420
    newColumn();
    createSign("RMI_PILOT");
    createRedButton(&RMI_PILOT_CONNECT.bRMI_ALL, "PVRAP");//pvrap
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[20], "отказ генератора постоянного тока");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[21], "otkaz_gen_post_toka2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[22], "otkaz_gen_post_toka3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[23], "otkaz_gen_post_toka4");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[24], "peregr_gen_post_toka1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[25], "peregr_gen_post_toka2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[26], "peregr_gen_post_toka3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[27], "peregr_gen_post_toka4");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[10], "paden_davl_mas_PPO_gen1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[11], "paden_davl_mas_PPO_gen2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[12], "paden_davl_mas_PPO_gen3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[13], "paden_davl_mas_PPO_gen4");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[5], "otkaz_gen_per_toka1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[6], "otkaz_gen_per_toka2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[7], "otkaz_gen_per_toka3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[8], "otkaz_gen_per_toka4");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[9], "otkaz_gen_vsu");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[14], "otkaz_preobr_PTS1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[15], "otkaz_preobr_POS");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[16], "peregruzka_gen_per_g1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[17], "peregruzka_gen_per_g2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[18], "peregruzka_gen_per_g3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[19], "peregruzka_gen_per_g4");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[28], "peregrev_akk1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[29], "peregrev_akk2");
//    createRedButton(&DEVICE_CONNECT.IN_MAT[594], "preobr3");//s7_2420
//    createRedButton(&DEVICE_CONNECT.IN_MAT[594], "preobr3");//s17_2420
//    createRedButton(&DEVICE_CONNECT.IN_MAT[594], "preobr3");//s18_2420
//    createRedButton(&DEVICE_CONNECT.IN_MAT[594], "preobr3");//s19_2420
//    createRedButton(&DEVICE_CONNECT.IN_MAT[594], "preobr3");//s20_2420
}

void power::updateSmth()
{
    interfacing::updMmrState();
}
