#include "aircondition_peg.h"

aircondition_peg::aircondition_peg(QWidget *parent)
    : interfacing(parent)
{
    aircondition_peg::setWindowTitle("airconditioning");

    createSign("SIO");
    createLabelValue(&DEVICE_CONNECT.IN_A[1][8], "положение_ручки_темп");
    createSlider(&DEVICE_CONNECT.IN_A[1][8], 0, 50);
    //s1_2110
    createRedButton(&DEVICE_CONNECT.IN_MAT[637], "ОТБОР ДВ1");
    //s2_2110
    createRedButton(&DEVICE_CONNECT.IN_MAT[639], "ОТБОР ДВ2");
    //s3_2110
    createRedButton(&DEVICE_CONNECT.IN_MAT[619], "ОТБОР ДВ3");
    //s4_2110
    createRedButton(&DEVICE_CONNECT.IN_MAT[621], "ОТБОР ДВ4");
    //s7_7322
    createRedButton(&DEVICE_CONNECT.IN_MAT[354], "ГЛАВНЫЙ ВЫКЛЮЧАТЕЛЬ ДВ1");
    //s8_7322
    createRedButton(&DEVICE_CONNECT.IN_MAT[355], "ГЛАВНЫЙ ВЫКЛЮЧАТЕЛЬ ДВ2");
    //s9_7322
    createRedButton(&DEVICE_CONNECT.IN_MAT[356], "ГЛАВНЫЙ ВЫКЛЮЧАТЕЛЬ ДВ3");
    //s10_7322
    createRedButton(&DEVICE_CONNECT.IN_MAT[357], "ГЛАВНЫЙ ВЫКЛЮЧАТЕЛЬ ДВ4");
    //s5_2120
    createRedButton(&DEVICE_CONNECT.IN_MAT[623], "КОЛЬЦЕВАНИЕ ОТБОРОВ");
    //s1_2120
    createRedButton(&DEVICE_CONNECT.IN_MAT[630], "МАГИСТРАЛЬ1");
    //s3_2120
    createRedButton(&DEVICE_CONNECT.IN_MAT[635], "ОТКАЗ МАГИСТРАЛЬ1");
    //s6_2120
    createRedButton(&DEVICE_CONNECT.IN_MAT[631], "КОЛЬЦЕВАНИЕ МАГИСТРАЛИ");
    //s2_2120
    createRedButton(&DEVICE_CONNECT.IN_MAT[614], "МАГИСТРАЛЬ2");
    //s4_2120
    createRedButton(&DEVICE_CONNECT.IN_MAT[616], "ОТКАЗ МАГИСТРАЛЬ2");
    //s???_2120 5 was
    createRedButton(&DEVICE_CONNECT.IN_MAT[625], "КОНТРОЛЬ ФИЛЬТРА");
    //s1_2151
    createRadioButton(&s1_2151, "откл", false);
    createRadioButton(&s1_2151, "холод", false);
    createRadioButton(&s1_2151, "горяч", false);
    createRadioButton(&s1_2151, "автомат", true);
    //s2_2151
    createRedButton(&DEVICE_CONNECT.IN_MAT[289], "КАБИНА ЭКИПАЖА");
    //s3_2151
    createRedButton(&DEVICE_CONNECT.IN_MAT[36], "ВЕНТИЛЯТОР ЛЛ");
    //s4_2151
    createRedButton(&DEVICE_CONNECT.IN_MAT[88], "ВЕНТИЛЯТОР ПЛ");
    //s5_2151
    createRedButton(&DEVICE_CONNECT.IN_MAT[600], "ВЕНТИЛЯТОР ШО");
    //s6_2151
    createRedButton(&DEVICE_CONNECT.IN_MAT[778], "ВЕНТИЛЯТОР ШН");
    //s1_2158
    createRedButton(&DEVICE_CONNECT.IN_MAT[647], "ТО ПЕРЕДНИЙ И НОСОВОЙ");
    //s1_2152
    createRedButton(&DEVICE_CONNECT.IN_MAT[644], "ЗАЩИТНОЕ СНАРЯЖЕНИЕ");
    //s1_2153
    createRedButton(&DEVICE_CONNECT.IN_MAT[608], "ГО ПЕРЕДН");
    //s2_2153
    createRedButton(&DEVICE_CONNECT.IN_MAT[610], "ГО ЗАДНИЙ");
    //s2_2159
    createRedButton(&DEVICE_CONNECT.IN_MAT[628], "ТО ГО ПРАВЫЙ");
    //s1_2159
    createRedButton(&DEVICE_CONNECT.IN_MAT[626], "ТО ГО ЛЕВЫЙ");
    //s1_2112
    createRedButton(&DEVICE_CONNECT.IN_MAT[174], "СТРУЙНАЯ ЗАЩ ДВ ЛЕВ");
    //s4_2112
    createRedButton(&DEVICE_CONNECT.IN_MAT[175], "СТРУЙНАЯ ЗАЩ ДВ ПРАВ");
    //s1_12360
    createRedButton(&DEVICE_CONNECT.IN_MAT[649], "МПУ№ 1 РУЧНОЙ");
    //s2_12360
    createRedButton(&DEVICE_CONNECT.IN_MAT[624], "СКВ ИЗДЕЛИЙ");
    //s3_12360
    createRedButton(&DEVICE_CONNECT.IN_MAT[612], "МПУ№ 2 РУЧНОЙ");

    //uknown
    newColumn();
    posOcupied();
    createRedButton(&ISU_CONNECT.pk70_vkl, "признак включения аппаратуры К70М");
    createRedButton(&ISU_CONNECT.pk70_pgo, "признак исправности БУКВ №1");
    createRedButton(&ISU_CONNECT.pk70_zgo, "признак исправности БУКВ №2");
    createRedButton(&ISU_CONNECT.pk70_kontrt, "признак сигнала Контроль Т");
    createRedButton(&ISU_CONNECT.puvzl, "признак устройства возд. запуска лев.");
    createRedButton(&ISU_CONNECT.puvzp, "признак устройства возд. запуска лев.");
    createLabelValue(&ISU_CONNECT.tnv, "температура наружного воздуха");
    createSlider(&ISU_CONNECT.tnv, 0, 50);

    newColumn();
    createSign("RMI_PILOT");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[53], "Отказ левой магистрали");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[54], "Отказ правой магистрали");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[55], "Отказ регулятора избыточного давления первого двигателя");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[56], "Отказ регулятора избыточного давления второго двигателя");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[57], "Отказ регулятора избыточного давления третьего двигателя");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[58], "Отказ регулятора избыточного давления четвертого двигателя");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[102], "Повышение температуры воздуха за ВВТ1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[103], "Повышение давления воздуха в магистрали 1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[104], "Повышение температуры воздуха за ВВТ2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[105], "Повышение давления воздуха в магистрали 2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[106], "Отказ ТХУ1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[107], "Отказ ТХУ2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[108], "Отказ ТХУ3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[109], "Отказ ТХУ4");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[110], "Перегрев ТО задний");

    newColumn();
    createSign("OUT_D");
    //BSS926X2A
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][85], "ВКЛ защитное снаряжение");
    //BSS926X2F
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][93], "ВКЛ ГО передний");
    //BSS926X2G
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][94], "ВКЛ ГО задний");
    //BSS838X6T
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][103], "ОТКЛ (ТО ГО прав)");
    //BSS838X6S
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][102], "ОТКЛЮЧИ (ТО ГО прав)");
    //BSS926X2B
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][86], "ОТКЛЮЧИ(кабина экипажа)");
    //BSS926X2C
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][87], "ОТКЛ(кабина экипажа)");
    //BSS838X6s
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][99], "ОТКЛ(ТО ГО ЛЕВ)");
    //BSS838X6P
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][98], "ОТКЛЮЧИ(ТО ГО ЛЕВ)");
    //BSS838X6U
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][100], "ПОДАЧИ НЕТ");
    //BSS838X6K
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][91], "ВКЛЮЧИ (МПУ№1 ручной)");
    //BSS838X6L
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][92], "ВКЛ (МПУ№1 ручной)");
    //BSS838X6M
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][95], "ВКЛЮЧИ (МПУ№2 ручной)");
    //BSS838X6N
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][96], "ВКЛ (МПУ№2 ручной)");
    //BSS838X6W
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][97], "ОТКЛ(СКВ изделий)");
    //BSS825X6q
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][50], "ЗАЩИТА ВКЛ(струйная защита ДВ"
                                                  "прав");
    //BSS824X2i
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][49], "ЗАЩИТА ВКЛ(струйная защита ДВ"
                                                  "лев");
    //BSS926X2J
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][105], "ЗАКР(магистраль 1)");
    //BSS926X2E
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][89], "ОТКЛ (ТО передний и носовой)");
    //BSS926X2D
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][88], "ОТКЛЮЧИ (ТО передний и носовой)");
    //BSS838X6J
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][90], "ТХУ ОТКАЗ");
    //BSS926X2K
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][114], "ЗАКР(магистраль 2)");
    //BSS838X6Z
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][110], "ЗАКР(отбор 1дв)");
    //BSS838X6b
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][112], "ЗАКР(отбор 2дв)");
    //BSS838X6d
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][119], "ЗАКР(отбор 3дв)");
    //BSS838X6f
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][121], "ЗАКР(отбор 4дв)");
    //BSS838X6Y
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][109], "ЗАКРОЙ(отбор 1дв)");
    //BSS838X6a
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][111], "ЗАКРОЙ(отбор 2дв)");
    //BSS838X6c
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][118], "ЗАКРОЙ(отбор 3дв)");
    //BSS838X6e
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][120], "ЗАКРОЙ(отбор 4дв)");
    //BSS838X6q
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][108], "ОТБОР ОТКАЗ(лев)");
    //BSS838X6r
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][117], "ОТБОР ОТКАЗ(прав)");
    //BSS926X2L
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][113], "ОТКРЫТ ЛЕВЫЙ");
    //BSS926X2M
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][122], "ОТКРЫТ ПРАВЫЙ");
    //BSS926X2N
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][123], "ВКЛ (кольцевание отборов)");
    //BSS926X2H
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][104], "ВКЛ (кольцевание магистралей)");
    //BSS926X2p
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][106], "ЗАКРОЙ(отказ магистраль1)");
    //BSS926X2s
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][115], "ЗАКРОЙ(отказ магистраль2)");
    //zakr_om1
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][107], "ЗАКР(отказ магистраль1");
    //zakr_om2
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][116], "ЗАКР(отказ магистраль2");
}

void aircondition_peg::updateSmth()
{
    DEVICE_CONNECT.IN_MAT[640] = false;
    DEVICE_CONNECT.IN_MAT[641] = false;
    DEVICE_CONNECT.IN_MAT[642] = false;
    switch(s1_2151)
    {
    case static_cast<int>(s1_2151::avtomat): DEVICE_CONNECT.IN_MAT[640] = true;
    case static_cast<int>(s1_2151::hol): DEVICE_CONNECT.IN_MAT[641] = true;
    case static_cast<int>(s1_2151::gor): DEVICE_CONNECT.IN_MAT[642] = true;
    }
}
