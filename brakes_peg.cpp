#include "brakes_peg.h"

brakes_peg::brakes_peg(QWidget *parent)
    : interfacing(parent)
{
    brakes_peg::setWindowTitle("brakes");
    createSign("ISU");
    //X1_45_7620
    createRedButton(&ISU_CONNECT.X1_45_7620, "пр. сиг. стоп-кран открыт 1дв.");
    //X2_45_7620
    createRedButton(&ISU_CONNECT.X2_45_7620, "пр. сиг. стоп-кран открыт 2дв.");
    //X3_45_7620
    createRedButton(&ISU_CONNECT.X3_45_7620, "пр. сиг. стоп-кран открыт 3дв.");
    //X4_45_7620
    createRedButton(&ISU_CONNECT.X4_45_7620, "пр. сиг. стоп-кран открыт 4дв.");

    newColumn();
    createSign("SIO");
    //s1_3240
    createRedButton(&DEVICE_CONNECT.IN_MAT[12], "ТОРМОЗА - СЛАБО");
    //s1_3240
    createRedButton(&DEVICE_CONNECT.IN_MAT[13], "ТОРМОЗА - ПОНИЖ");
    //s1_3240
    createRedButton(&DEVICE_CONNECT.IN_MAT[14], "ТОРМОЗА - НОРМ");
    //s2_3240
    createRedButton(&DEVICE_CONNECT.IN_MAT[15], "ТОРМОЗА СТОЯН");
    //s3_3240
    createRedButton(&DEVICE_CONNECT.IN_MAT[11], "ТОРМОЗА ФОРСИР");
    //s1_3241
    createRedButton(&DEVICE_CONNECT.IN_MAT[9], "ТОРМОЗА РЕЗЕРВ");
    //s1_9921
    createRedButton(&DEVICE_CONNECT.IN_MAT[26], "ВЫПУСК ПАРАШЮТА ЛЛ");
    //s2_9921
    createRedButton(&DEVICE_CONNECT.IN_MAT[35], "ВЫПУСК ПАРАШЮТА ПЛ");
    //s3_9921
    createRedButton(&DEVICE_CONNECT.IN_MAT[160], "СБРОС ПАРАШЮТА");

    newColumn();
    posOcupied();
    //alpha_rud1dv
    createSlider(&DEVICE_CONNECT.IN_A[0][5], 0, 100);
    //alpha_rud2dv
    createSlider(&DEVICE_CONNECT.IN_A[0][6], 0, 100);
    //alpha_rud3dv
    createSlider(&DEVICE_CONNECT.IN_A[0][7], 0, 100);
    //alpha_rud4dv
    createSlider(&DEVICE_CONNECT.IN_A[0][8], 0, 100);

    //Xped11
    createSlider(&DEVICE_CONNECT.IN_A[0][10], 0, 100);
    //Xped12
    createSlider(&DEVICE_CONNECT.IN_A[0][11], 0, 100);
    //Xped21
    createSlider(&DEVICE_CONNECT.IN_A[0][13], 0, 100);
    //Xped22
    createSlider(&DEVICE_CONNECT.IN_A[0][14], 0, 100);
    //vkx
    createSlider(&ISU_CONNECT.vkx, 0, 100);

    newColumn();
    posOcupied();
    createLabelValue(&DEVICE_CONNECT.IN_A[0][5], "РУД1");
    createLabelValue(&DEVICE_CONNECT.IN_A[0][6], "РУД2");
    createLabelValue(&DEVICE_CONNECT.IN_A[0][7], "РУД3");
    createLabelValue(&DEVICE_CONNECT.IN_A[0][8], "РУД4");
    createLabelValue(&DEVICE_CONNECT.IN_A[0][10], "Лев.пед.Л.Л");
    createLabelValue(&DEVICE_CONNECT.IN_A[0][11], "Прав.пед.Л.Л");
    createLabelValue(&DEVICE_CONNECT.IN_A[0][13], "Лев.пед.П.Л");
    createLabelValue(&DEVICE_CONNECT.IN_A[0][14], "Прав.пед.П.Л");
    createLabelValue(&ISU_CONNECT.vkx, "Скорость_движ_по_ВПП");


    newColumn();
    createSign("RMI_PILOT");
    //
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[82], "отказ осн. сист. торм.");
    //
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[83], "отказ рез. сист. торм.");
    //
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[84], "отказ авт. пер. на р. торм");
    //
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[85], "отказ давл. в 1 паре кол. л.т.");
    //
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[102], "отказ давл. в 1 паре кол. п.т.");

    newColumn();
    createSign("OUT_D");
    //BSS812X6r
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][67], "ВКЛ ФОРСИР");
    //BSS812X6n
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][65], "НАЖМИ РТ");
    //BSS812X6p
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][66], "ВКЛ РТ");
    //BSS812X6W
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][69], "ТОРМОЗ СТОЯН");
    //BSS824X2R
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][5], "ПАРАШЮТ ОТКАЗ");
    //BSS824X2H
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][7], "ПАРАШЮТ ВЫПУЩЕН");
    //BSS824X2G
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][6], "ПАРАШЮТ СБРОШЕН");

}

void brakes_peg::updateSmth()
{
}
