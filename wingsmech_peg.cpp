#include "wingsmech_peg.h"

wingsmech_peg::wingsmech_peg(QWidget *parent)
    : interfacing(parent)
{
    wingsmech_peg::setWindowTitle("wingsmech");

    createSign("SIO");
    //s1_2750
    createRedButton(&DEVICE_CONNECT.IN_MAT[367], "колпачек "
                                                "РЕЗЕРВНОЕ УПРАВЛЕНИЕ ЗАКРЫЛКИ");
    //s2_2750
    createRedButton(&DEVICE_CONNECT.IN_MAT[382], "выключатель РЕЗЕРВНОЕ "
                                                "УПРАВЛЕНИЕ ЗАКРЫЛКАМИ");
    //s13_2750
    createRedButton(&DEVICE_CONNECT.IN_MAT[303], " ЗАКРЫЛКИ ПРЕДКРЫЛКИ "
                                                "СЛЕДЯЩИЙ");
    //s1_2780
    createRedButton(&DEVICE_CONNECT.IN_MAT[366], "Колпачек РЕЗЕРВНОЕ УПРАВЛЕНИЕ "
                                                "ПРЕДКРЫЛКАМИ");
    //s2_2780
    createRedButton(&DEVICE_CONNECT.IN_MAT[380], "РЕЗЕРВНОЕ "
                                                "УПРАВЛЕНИЕ ПРЕДКРЫЛКИ "
                                                 "ВЫПУСК ");
    createRedButton(&DEVICE_CONNECT.IN_MAT[379], " РЕЗЕРВНОЕ "
                                                "УПРАВЛЕНИЕ ПРЕДКРЫЛКИ "
                                                 "УБОРКА");
    //s1_2790
    createRedButton(&DEVICE_CONNECT.IN_MAT[365], "колпачек РЕЗЕРВН УПРАВЛ "
                                                "СТРЕЛОВ КРЫЛА");
    //s2_2790
    createRedButton(&DEVICE_CONNECT.IN_MAT[375], "РЕЗЕРВН УПРАВЛ СТРЕЛОВ КРЫЛА "
                                                 "МЕНЬШЕ");
    createRedButton(&DEVICE_CONNECT.IN_MAT[376], "РЕЗЕРВН УПРАВЛ СТРЕЛОВ КРЫЛА "
                                                 "БОЛЬШЕ");
    //dela_ruz
    createLabelValue(&DEVICE_CONNECT.IN_A[1][26],"Входное_положение_ручки"
                                                  "_управления_закрылками");
    //dela_ruk
    createLabelValue(&DEVICE_CONNECT.IN_A[1][27],"Входное_положение_ручки"
                                                  "_управления_стреловидностью"
                                                  "_крыла");
    createSlider(&DEVICE_CONNECT.IN_A[1][26], 0, 100);

    createSlider(&DEVICE_CONNECT.IN_A[1][27], 0, 100);



    newColumn();
    createSign("RMI_PILOT");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[61], "отказ 1 канала"
                                                  "управления закрылками");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[62], "отказ 2 канала"
                                                  "управления закрылками");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[63], "отказ основного режима"
                                                  "управления закрылками 1"
                                                  "канала");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[64], "отказ основного режима"
                                                  "управления закрылками 2"
                                                  "канала");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[65], "закрылки рассогласование");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[66], "отказ основного режима"
                                                  "управления предкрылками 1"
                                                  "канала");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[67], "отказ основного режима"
                                                  "управления предкрылками 2"
                                                  "канала");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[68], "предкрылки рассогласование");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[69], "отказ основного режима"
                                                  "управления ПЧК 1 канала СПК");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[70], "отказ основного режима"
                                                  "управления ПЧК 2 канала СПК");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[71], "ПЧК рассинхронизация");

    newColumn();
    createSign("OUT_D");
    //BSS824X2f
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][66], "25 град закрылки");
    //BSS824X2h
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][67], "40 град закрылки");
    //BSS825X6E
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][65], "ПРЕДКР ВЫПУЩЕНЫ");
    //BSS913X2h
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][114], "20 град крыло");
    //BSS913X2i
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][115], "30 град крыло");

}

void wingsmech_peg::updateSmth()
{
}
