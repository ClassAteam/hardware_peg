#include "hydro_peg.h"

hydro_peg::hydro_peg(QWidget *parent)
    : interfacing(parent)
{
    hydro_peg::setWindowTitle("hydro");
    createSign("ISU");
    //EZR1_34
    createRedButton(&ISU_CONNECT.ezr1_34, "признак запуска 1дв");
    //EZR2_34
    createRedButton(&ISU_CONNECT.ezr2_34, "признак запуска 2дв");
    //EZR3_34
    createRedButton(&ISU_CONNECT.ezr3_34, "признак запуска 3дв");
    //EZR4_34
    createRedButton(&ISU_CONNECT.ezr4_34, "признак запуска 4дв");
    //PBI4M_1
    createRedButton(&ISU_CONNECT.PBI4M_1, "сигнал полного закр створок гр. отс.");

    //Pv_vsu
    createLabelValue(&ISU_CONNECT.Pvvsu, "давл возд от вспмг сил уст");
    createSlider(&ISU_CONNECT.Pvvsu, 0, 100);

    //PRD1dv
    createRedButton(&ISU_CONNECT.prd1dv, "признак раб 1дв");
    //PRD2dv
    createRedButton(&ISU_CONNECT.prd2dv, "признак раб 2дв");
    //PRD3dv
    createRedButton(&ISU_CONNECT.prd3dv, "признак раб 3дв");
    //PRD4dv
    createRedButton(&ISU_CONNECT.prd4dv, "признак раб 4дв");

    newColumn();
    createSign("SIO");
    //s1_2910
    createRedButton(&DEVICE_CONNECT.IN_MAT[35], "ПРИНУД ПОДКЛ Г/НАСОСОВ");
    //s2_2910
    createRedButton(&DEVICE_CONNECT.IN_MAT[756], "КОНТРОЛЬ РАЗГРУЗКИ");
    //s3_2910
    createRedButton(&DEVICE_CONNECT.IN_MAT[753], "ВЫБОР НАСОСА ГС1,2");
    //s4_2910
    createRedButton(&DEVICE_CONNECT.IN_MAT[755], "ВЫБОР НАСОСА ГС3,4");

    //s5_2910
    createRedButton(&DEVICE_CONNECT.IN_MAT[353], "ЭКСТРЕННОЕ ОТКЛ Г/НАСОСОВ ДВ2 И 3");
    //s6_2910
    createRedButton(&DEVICE_CONNECT.IN_MAT[352], "ЭКСТРЕННОЕ ОТКЛ Г/НАСОСОВ ДВ1 И 4");
    //s7_2910
    createRedButton(&DEVICE_CONNECT.IN_MAT[358], "ОТКЛ Г/НАСОСОВ ДВ2");

    //s1_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[45], "ГИДРОПИТАНИЕ СУР ГС1");
    //s2_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[46], "ГИДРОПИТАНИЕ СУР ГС2");
    //s3_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[47], "ГИДРОПИТАНИЕ СУР ГС3");
    //s4_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[48], "ГИДРОПИТАНИЕ СУР ГС4");
    //s5_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[204], "КРАНЫ КОЛЬЦЕВАНИЯ ГС1");
    //s6_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[205], "КРАНЫ КОЛЬЦЕВАНИЯ ГС2");
    //s7_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[206], "КРАНЫ КОЛЬЦЕВАНИЯ ГС3");
    //s8_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[207], "КРАНЫ КОЛЬЦЕВАНИЯ ГС4");

    //s9_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[37], "ТНУ ГС1 ОТКЛ");
    createRedButton(&DEVICE_CONNECT.IN_MAT[38], "ТНУ ГС1 ВКЛ");

    //s10_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[39], "ТНУ ГС2 ОТКЛ");
    createRedButton(&DEVICE_CONNECT.IN_MAT[40], "ТНУ ГС2 ВКЛ");

    //s11_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[41], "ТНУ ГС3 ОТКЛ");
    createRedButton(&DEVICE_CONNECT.IN_MAT[42], "ТНУ ГС3 ВКЛ");

    //s12_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[43], "ТНУ ГС4 ОТКЛ");
    createRedButton(&DEVICE_CONNECT.IN_MAT[44], "ТНУ ГС4 ВКЛ");

    //s13_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[757], "ТНУ СИГНАЛ");
    //s18_2930
    createRedButton(&DEVICE_CONNECT.IN_MAT[761], "проверка ламп");
//    //k24_3230
//    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "обжатие правой опоры");
//    //k26_3230
//    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "обжатие левой опоры");


    newColumn();
    createSign("RMI_PILOT");
    //p0gs1, p0gs2, p0gs3, p0gs4, p0gat
    createRedButton(&RMI_PILOT_CONNECT.balHydroToFull, "зарядить гидро/аккум");
    //
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[1], "отказ гс1");
    //
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[2], "отказ гс2");
    //
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[3], "отказ гс3");
    //
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[4], "отказ гс4");

    newColumn();
    createSign("OUT_D");
    //H1_2910
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][101], "ГИДРОНАСОСЫ ПОДКЛЮЧЕНЫ ГС2");
    //H2_2910
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][100], "ГИДРОНАСОСЫ ПОДКЛЮЧЕНЫ ГС1");
    //H4_2910
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][102], "ГИДРОНАСОСЫ ПОДКЛЮЧЕНЫ ГС3");
    //H5_2910
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][103], "ГИДРОНАСОСЫ ПОДКДЮЧЕНЫ ГС4");
    //H10_2930
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][96], "РЕЗЕРВНЫЙ НАДДУВ ГС1");
    //H11_2930
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][97], "РЕЗЕРВНЫЙ НАДДУВ ГС2");
    //H12_2930
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "РЕЗЕРВНЫЙ НАДДУВ ГС3");
    //H13_2930
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][99], "РЕЗЕРВНЫЙ НАДДУВ ГС4");
    //H1_2935
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][104], "НАСОС ТЖТ");
    //BSS811X2M
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][4], "ГС1 Р МАЛО");
    //BSS811X2N
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][5], "ГС2 Р МАЛО");
    //BSS811X2P
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][6], "ГС3 Р МАЛО");
    //BSS811X2R
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][7], "ГС4 Р МАЛО");
    //BSS811X2d
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][79], "СУР ГС1 ОТКЛ");
    //BSS811X2e
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][80], "СУР ГС2 ОТКЛ");
    //BSS811X2f
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][81], "СУР ГС3 ОТКЛ");
    //BSS811X2g
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][82], "СУР ГС4 ОТКЛ");
    //BSS812X6C
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][74], "ТНУ ГС1 ВКЛ");
    //BSS812X6D
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][75], "ТНУ ГС2 ВКЛ");
    //BSS812X6E
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][76], "ТНУ ГС3 ВКЛ");
    //BSS812X6F
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][77], "ТНУ ГС4 ВКЛ");
    //BSS812X6G
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][73], "ПОДКЛ");
    //BSS824X2e
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][52], "КОЛЬЦЕВАНИЕ");
    //BSS811X2G
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][22], "КОНТУ ТЖТ");

    newColumn();
    posOcupied();
    //pprgs1
    createLabelValue(&DEVICE_CONNECT.OUT_A[0][12], "давление ГС1");
    //pprgs2
    createLabelValue(&DEVICE_CONNECT.OUT_A[0][13], "давление ГС2");
    //pprgs3
    createLabelValue(&DEVICE_CONNECT.OUT_A[0][14], "давление ГС3");
    //pprgs4
    createLabelValue(&DEVICE_CONNECT.OUT_A[0][15], "давление ГС4");

}

void hydro_peg::updateSmth()
{
}
