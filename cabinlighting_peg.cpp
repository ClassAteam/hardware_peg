#include "cabinlighting_peg.h"

cabinlighting_peg::cabinlighting_peg(QWidget *parent)
    : interfacing(parent)
{
    cabinlighting_peg::setWindowTitle("cabinlighting");

    createSign("SIO");
    //s1_3340
    createRedButton(&DEVICE_CONNECT.IN_MAT[289], "УБОРКА - ВЫПУСК");
    //s6_3340
    createRadioButton(&s6_3340, "взлет-посадка", false);
    createRadioButton(&s6_3340, "руление", false);
    createRadioButton(&s6_3340, "откл", true);
    //s1_3341
    createRadioButton(&s1_3341, "АНО 10%", false);
    createRadioButton(&s1_3341, "АНО 30%", false);
    createRadioButton(&s1_3341, "АНО 100%", false);
    createRadioButton(&s1_3341, "МИГАНИЕ", true);
    //s1_2860
    createRedButton(&DEVICE_CONNECT.IN_MAT[144], "Питание штанги заправки");
    //s2_3340
    createRedButton(&DEVICE_CONNECT.IN_MAT[137], "СВЕТ ЛЕВ");
    //s3_3340
    createRadioButton(&s3_3340, "ВЫПУСК ЛЕВ", false);
    createRadioButton(&s3_3340, "УБОРКА ЛЕВ", false);
    createRadioButton(&s3_3340, "ОТКЛ", true);
    //s5_3340
    createRedButton(&DEVICE_CONNECT.IN_MAT[142], "СВЕТ ПРАВ");
    //s4_3340
    createRadioButton(&s4_3340, "ВЫПУСК ПРАВ", false);
    createRadioButton(&s4_3340, "УБОРКА ПРАВ", false);
    createRadioButton(&s4_3340, "ОТКЛ", true);
    //s1_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[0], "МФИ1 ЛЛ");
    //s2_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[1], "МФИ2 ЛЛ");
    //s3_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[212], "МФИ4 ПЛ");
    //s4_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[215], "МФИ5 ПЛ");
    //s5_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[2], "МФИ3 ЛЛ");
    //s6_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[211], "МФИ3 ПЛ");
    //s7_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[595], "СОИ 1Л ШО");
    //s8_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[774], "СОИ 1Л ШН");
    //s11_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[768], "ЦВС 1Л");
    //s12_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[769], "ЦВС 2Л");
    //s13_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[770], "ЦВС 1Пр");
    //s14_11710
    createRedButton(&DEVICE_CONNECT.IN_MAT[771], "ЦВС 2Пр");
    //bgs1
    createRedButton(&DEVICE_CONNECT.IN_MAT[772], "БГС1");
    //bgs2
    createRedButton(&DEVICE_CONNECT.IN_MAT[773], "БГС2");
    //s2_3341
    createRadioButton(&s2_3341, "МАЯК100%", false);
    createRadioButton(&s2_3341, "ПОНИЖ", true);
    createSlider(&ISU_CONNECT.Vpr, 0, 150);
    createLabelValue(&ISU_CONNECT.Vpr, "Скорость_приборная");

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
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][92], "ПК1ПБЛЛЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][93], "ПК2ПБЛЛЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][94], "ПК1ПБПЛЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][95], "ПК2ПБПЛЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][96], "ПК1ЛСПДЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][97], "ПК2ЛСПДЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][98], "ПК1ППДЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][99], "ПК2ППДЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][100], "ПК1СПЛЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][101], "ПК2СПЛЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][102], "ПК1ПДШОЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][103], "ПК2ПДШОЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][104], "ПК1ЛБШОЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][105], "ПК2ЛБШОЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][106], "ПК1ПДШНЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][107], "ПК2ПДШНЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][108], "ПК1ПБШНЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][109], "ПК2ПБШНЗО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][90], "ПССД37РКЛ");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][91], "ПССД37РКШ");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][110], "ПССД42Л");
    createLabelClue(&DEVICE_CONNECT.OUT_D[5][111], "ПССД42П");
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][61], "ПК31ПДШОВО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][62], "ПК31ПДШОВО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][63], "ПК31ПДШОВО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][94], "ПК31ПДШНВО");
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][95], "ПК31ПДШНВО");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВФЛ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВФП");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПФПРЛР");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПФПРПР");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПФПРЛП");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПФПРПП");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПФСВ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПФСВ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПФСВ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПФСВ");
//    createLabelValue(&DEVICE_CONNECT.OUT_D[5][-1], "αФСВ");
//    createLabelValue(&DEVICE_CONNECT.OUT_D[5][-1], "αФСВ");
//    createLabelValue(&DEVICE_CONNECT.OUT_D[5][-1], "αФАЗЛ");
//    createLabelValue(&DEVICE_CONNECT.OUT_D[5][-1], "αФАЗП");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПФСВ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПФСВ");
    //BSS825X5V
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][36], "фары заправки выпущены");
    //BSS824X1E
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][34], "фары выпущ");
//    //BSS824X1A
//    createLabelClue(&DEVICE_CONNECT.OUT_D[1][35], "свет посадоч");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВ_ОСН_ХВ_10");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВ_ОСН_ХВ_30");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВ_ОСН_ХВ_100");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВ_ОСН_ХВ_МИГ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВ_ДОП");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВМВ10");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВМН10");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВМВ100");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВМН100");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПОВШ_Л");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПОВШ_П");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПОВШ_ПЕР");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОЛСПД");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОППД");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОСП");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОЛБЛ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОПБЛ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОЛСПДАВ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОППДАВ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОСПАВ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОЛБЛАВ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОПБЛАВ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОПДШО");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОЛБШ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОПДШН");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОПБШ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОПДШОАВ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОЛБШАВ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОПДШНАВ");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВВОПБШАВ");
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][34], "ПВПМФИ1");
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][35], "ПВПМФИ2");
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][41], "ПВПМФИ3");
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][37], "ПВПМФИ4");
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][38], "ПВПМФИ5");
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][54], "ПВПМФИ6");
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][56], "ПВПМФИ7");
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][55], "ПВПМФИ8");
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][46], "ПВПМФИ9");
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][48], "ПВПМФИ10");
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][47], "ПВПМФИ11");
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][42], "ПВПМФПУ1");
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][57], "ПВПМФПУ2");
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][45], "ПВПМФПУ3");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВППУИ1");
//    createLabelClue(&DEVICE_CONNECT.OUT_D[5][-1], "ПВППУИ2");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][118], "ПВВОМФИ1");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][119], "ПВВОМФИ2");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][92], "ПВВОМФИ3");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][120], "ПВВОМФИ4");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][121], "ПВВОМФИ5");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][122], "ПВВОМФИ6");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][123], "ПВВОМФИ7");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][124], "ПВВОМФИ8");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][125], "ПВВОМФИ9");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][126], "ПВВОМФИ10");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][127], "ПВВОМФИ11");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][63], "ПВВОПУИ1");
    createLabelClue(&DEVICE_CONNECT.OUT_D[3][39], "ПВВОПУИ2");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][93], "ПВВОМФПУ1");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][94], "ПВВОМФПУ2");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][95], "ПВВОМФПУ3");
}

void cabinlighting_peg::updateSmth()
{
    DEVICE_CONNECT.IN_MAT[133] = false;
    DEVICE_CONNECT.IN_MAT[134] = false;
    DEVICE_CONNECT.IN_MAT[135] = false;
    DEVICE_CONNECT.IN_MAT[136] = false;
    switch(s1_3341)
    {
    case static_cast<int>(s1_3341::ANO10): DEVICE_CONNECT.IN_MAT[133] = true;
        break;
    case static_cast<int>(s1_3341::ANO30): DEVICE_CONNECT.IN_MAT[134] = true;
        break;
    case static_cast<int>(s1_3341::ANO100): DEVICE_CONNECT.IN_MAT[135] = true;
        break;
    case static_cast<int>(s1_3341::MIGANIE): DEVICE_CONNECT.IN_MAT[136] = true;
        break;
    }

    DEVICE_CONNECT.IN_MAT[138] = false;
    DEVICE_CONNECT.IN_MAT[139] = false;
    switch(s3_3340)
    {
    case static_cast<int>(s3_3340::vipusk): DEVICE_CONNECT.IN_MAT[138] = true;
        break;
    case static_cast<int>(s3_3340::uborka): DEVICE_CONNECT.IN_MAT[139] = true;
        break;

    }

    DEVICE_CONNECT.IN_MAT[140] = false;
    DEVICE_CONNECT.IN_MAT[141] = false;
    switch(s4_3340)
    {
    case static_cast<int>(s4_3340::vipusk): DEVICE_CONNECT.IN_MAT[140] = true;
        break;
    case static_cast<int>(s4_3340::uborka): DEVICE_CONNECT.IN_MAT[141] = true;
        break;
    }

    DEVICE_CONNECT.IN_MAT[131] = false;
    DEVICE_CONNECT.IN_MAT[132] = false;
    switch(s2_3341)
    {
    case static_cast<int>(s2_3341::mayak100): DEVICE_CONNECT.IN_MAT[131] = true;
        break;
    case static_cast<int>(s2_3341::ponizh): DEVICE_CONNECT.IN_MAT[132] = true;
        break;
    }

    DEVICE_CONNECT.IN_MAT[129] = false;
    DEVICE_CONNECT.IN_MAT[130] = false;
    switch(s6_3340)
    {
    case static_cast<int>(s6_3340::vzlpos): DEVICE_CONNECT.IN_MAT[129] = true;
        break;
    case static_cast<int>(s6_3340::otkl): DEVICE_CONNECT.IN_MAT[130] = true;
        break;
    }
}
