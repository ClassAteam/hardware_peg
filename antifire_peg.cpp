#include "antifire_peg.h"

antifire_peg::antifire_peg(QWidget *parent)
    : interfacing(parent)
{
    antifire_peg::setWindowTitle("antifire");
    createSign("ISU");

    //s3_2610
    createRedButton(&DEVICE_CONNECT.IN_MAT[289], "ДВ1");
    //s4_2610
    createRedButton(&DEVICE_CONNECT.IN_MAT[291], "ДВ2");
    //s7_2610
    createRedButton(&DEVICE_CONNECT.IN_MAT[293], "ДВ3");
    //s8_2610
    createRedButton(&DEVICE_CONNECT.IN_MAT[295], "ДВ4");
    //s5_2610
    createRedButton(&DEVICE_CONNECT.IN_MAT[377], "КРАН ВСУ(Л)");
    //s6_2610
    createRedButton(&DEVICE_CONNECT.IN_MAT[660], "КРАН ВСУ(ШО)");
    //s9_2610
    createRedButton(&DEVICE_CONNECT.IN_MAT[383], "РАБОТА");
    //s1_2610
    createRedButton(&DEVICE_CONNECT.IN_MAT[864], "ВЫБОР ОТСЕКА: ОТКЛ");
    createRedButton(&DEVICE_CONNECT.IN_MAT[865], "ВЫБОР ОТСЕКА: МГ 1ДВ");
    createRedButton(&DEVICE_CONNECT.IN_MAT[866], "ВЫБОР ОТСЕКА: МГ 2ДВ");
    createRedButton(&DEVICE_CONNECT.IN_MAT[867], "ВЫБОР ОТСЕКА: МГ 3ДВ");
    createRedButton(&DEVICE_CONNECT.IN_MAT[868], "ВЫБОР ОТСЕКА: МГ 4ДВ");
    createRedButton(&DEVICE_CONNECT.IN_MAT[869], "ВЫБОР ОТСЕКА: ВСУ");
    //s2_2610
    createRedButton(&DEVICE_CONNECT.IN_MAT[870], "ВЫБОР ДАТЧИКОВ: ОТКЛ");
    createRedButton(&DEVICE_CONNECT.IN_MAT[871], "ВЫБОР ДАТЧИКОВ: ГР1");
    createRedButton(&DEVICE_CONNECT.IN_MAT[872], "ВЫБОР ДАТЧИКОВ: ГР2");
    createRedButton(&DEVICE_CONNECT.IN_MAT[873], "ВЫБОР ДАТЧИКОВ: ГР3");
    createRedButton(&DEVICE_CONNECT.IN_MAT[874], "ВЫБОР ДАТЧИКОВ: ГР4");
    createRedButton(&DEVICE_CONNECT.IN_MAT[875], "ВЫБОР ДАТЧИКОВ: ГР5");
    createRedButton(&DEVICE_CONNECT.IN_MAT[876], "ВЫБОР ДАТЧИКОВ: ГР6");
    createRedButton(&DEVICE_CONNECT.IN_MAT[877], "ВЫБОР ДАТЧИКОВ: ПОЖАР");
    //s10_2610
    createRedButton(&DEVICE_CONNECT.IN_MAT[878], "ОГНЕТУШ");
    //s15_2610
    createRedButton(&DEVICE_CONNECT.IN_MAT[301], "ОЧЕР 1(Л)");
    //s11_2610
    createRedButton(&DEVICE_CONNECT.IN_MAT[299], "ОЧЕР 2(Л)");
    //s13_2610
    createRedButton(&DEVICE_CONNECT.IN_MAT[297], "ОЧЕР 3(Л)");
    //s12_2610
    createRedButton(&DEVICE_CONNECT.IN_MAT[662], "ОЧ 2(ШО)");
    //s14_2610
    createRedButton(&DEVICE_CONNECT.IN_MAT[664], "ОЧ 3(ШО)");
    //F135_2805
    createRedButton(&DEVICE_CONNECT.IN_MAT[337], "СТОП КРАН ЗАКРЫТ 1");
    //F145_2805
    createRedButton(&DEVICE_CONNECT.IN_MAT[339], "СТОП КРАН ЗАКРЫТ 2");
    //F155_2805
    createRedButton(&DEVICE_CONNECT.IN_MAT[341], "СТОП КРАН ЗАКРЫТ 3");
    //F165_2805
    createRedButton(&DEVICE_CONNECT.IN_MAT[343], "СТОП КРАН ЗАКРЫТ 4");

    newColumn();
    createSign("RMI_PILOT");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[30], "Пожар 1ДВ");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[31], "Пожар 2ДВ");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[32], "Пожар 3ДВ");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[33], "Пожар 4ДВ");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[34], "Пожар ВСУ");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[35], "Перегрев 1ДВ");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[36], "Перегрев 2ДВ");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[37], "Перегрев 3ДВ");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[38], "Перегрев 4ДВ");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[39], "Отказ автоматики СПЗ");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[40], "Ложное срабатывание"
                                                  "сигнализации ПЕРЕГРЕВ 1ДВ");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[41], "Ложное срабатывание"
                                                  "сигнализации ПЕРЕГРЕВ 2ДВ");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[42], "Ложное срабатывание"
                                                  "сигнализации ПЕРЕГРЕВ 3ДВ");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[43], "Ложное срабатывание"
                                                  "сигнализации ПЕРЕГРЕВ 4ДВ");
    createRedButton(&RMI_PILOT_CONNECT.balAntifireToFull, "Зарядить баллоны");

    newColumn();
    createSign("OUT_D");
    //BSS811X2U
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "ПОЖАР ДВ1");
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

void antifire_peg::updateSmth()
{
}
