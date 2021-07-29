#include "sas_peg.h"

sas_peg::sas_peg(QWidget *parent)
    : interfacing(parent)
{
    sas_peg::setWindowTitle("SAS");

    createSign("SIO");
    //s5_3364
    createRedButton(&DEVICE_CONNECT.IN_MAT[107], "ЛЛ КОНТРОЛЬ");
    //s6_3364
    createRedButton(&DEVICE_CONNECT.IN_MAT[108], "ПЛ КОНТРОЛЬ");
    //s7_3364
    createRedButton(&DEVICE_CONNECT.IN_MAT[767], "ШО КОНТРОЛЬ");
    //s8_3364
    createRedButton(&DEVICE_CONNECT.IN_MAT[912], "ШН КОНТРОЛЬ");
    posOcupied();
    //s1_3364
    createRedButton(&DEVICE_CONNECT.IN_MAT[98], "ЦСО ЛЛ");
    //s2_3364
    createRedButton(&DEVICE_CONNECT.IN_MAT[185], "ЦСО ПЛ");
    //s3_3364
    createRedButton(&DEVICE_CONNECT.IN_MAT[670], "ЦСО ШО");
    //s4_3364
    createRedButton(&DEVICE_CONNECT.IN_MAT[807], "ЦСО ШН");


    newColumn();
    createSign("OUT_D");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][55], "ЦСО ЛЛ КРАСНЫЙ");
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][56], "ЦСО ЛЛ ЖЕЛТЫЙ");
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][24], "ЦСО ПЛ КРАСНЫЙ");
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][25], "ЦСО ПЛ ЖЕЛТЫЙ");
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][67], "ЦСО ШО КРАСНЫЙ");
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][68], "ЦСО ШО ЖЕЛТЫЙ");
    createLabelClue(&DEVICE_CONNECT.OUT_D[3][44], "ЦСО ШН КРАСНЫЙ");
    createLabelClue(&DEVICE_CONNECT.OUT_D[3][45], "ЦСО ШН ЖЕЛТЫЙ");
}
void sas_peg::updateSmth()
{
}

