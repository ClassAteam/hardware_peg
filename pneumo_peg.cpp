#include "pneumo_peg.h"

pneumo_peg::pneumo_peg(QWidget *parent)
    : interfacing(parent)
{
    pneumo_peg::setWindowTitle("pneumo");

    createSign("SIO");
    //du_o
    createRedButton(&DEVICE_CONNECT.IN_MAT[1035], "ДУ-Р8");
    //s1_2830
    createRedButton(&DEVICE_CONNECT.IN_MAT[278], "АВАР СЛИВ ТОПЛИВА БАКИ"
                                                 " ПЕРЕДНИЕ");
    //s2_2830
    createRedButton(&DEVICE_CONNECT.IN_MAT[279], "АВАР СЛИВ ТОПЛИВА БАКИ"
                                                 " ЗАДНИЕ");
    //s1_3650
    createRedButton(&DEVICE_CONNECT.IN_MAT[598], "НАДДУВ БЛОКОВ ПЕРЕДН");
    //s2_3650
    createRedButton(&DEVICE_CONNECT.IN_MAT[599], "НАДДУВ БЛОКОВ ЗАДН");

    newColumn();
    createSign("OUT_D");
    //PSDZH_DUO
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][4], "ДУ-Р8 ШО ЖЕЛТЫЙ");
    //PSDZ_DUO
    createLabelClue(&DEVICE_CONNECT.OUT_D[4][5], "ДУ-Р8 ШО ЗЕЛЕНЫЙ");
    //BSS811X2c
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][12], "ГЕРМЛЮК ОТКАЗ (лев)");
    //BSS824X2E
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][12], "ГЕРМЛЮК ОТКАЗ (прав)");
    //BSS837X2M
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][62], "Р МАЛО ЗАДН (наддув блоков)");
    //BSS837X2L
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][61], "Р МАЛО ПЕРЕДН (наддув блоков)");
    //BSS824X2B
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][18], "СЛИВ ТОПЛИВА");
    //BSS811X2S
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][116], "КЛАПАН ОТКРЫТ БАКИ ПРЕДНИЕ");
    //BSS811X2T
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][117], "КЛАПАН ОТКРЫТ БАКИ ЗАДНИЕ");

    newColumn();
    createSign("RMI");
    //balPneuToFull
    createRedButton(&RMI_PILOT_CONNECT.balPneuToFull, "Зарядить пневмобаллоны");
}

void pneumo_peg::updateSmth()
{
}
