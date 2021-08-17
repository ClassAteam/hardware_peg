#include "bailout_peg.h"

bailout_peg::bailout_peg(QWidget *parent)
    : interfacing(parent)
{
    bailout_peg::setWindowTitle("bailout");

    createSign("SIO");
    //KVRKLL
    createRedButton(&DEVICE_CONNECT.IN_D[1][104], "Конц выкл ручк кат ЛЛ");
    //KVRKPL
    createRedButton(&DEVICE_CONNECT.IN_D[1][105], "Конц выкл ручк кат ПЛ");
    //KVRKSHO
    createRedButton(&DEVICE_CONNECT.IN_D[1][106], "Конц выкл ручк кат ШО");
    //KVRKSHN
    createRedButton(&DEVICE_CONNECT.IN_D[1][107], "Конц выкл ручк кат ШН");
    //KVZLL
    createRedButton(&DEVICE_CONNECT.IN_D[1][108], "Конц выкл заголовника ЛЛ");
    //KVZPL
    createRedButton(&DEVICE_CONNECT.IN_D[1][109], "Конц выкл заголовника ПЛ");
    //KVZSHO
    createRedButton(&DEVICE_CONNECT.IN_D[1][110], "Конц выкл заголовника ШО");
    //KVZSHN
    createRedButton(&DEVICE_CONNECT.IN_D[1][111], "Конц выкл заголовника ШН");
    //s9_10010
    createRedButton(&DEVICE_CONNECT.IN_MAT[759], "КОНТРОЛЬ(исправность пиропатр)");
    //s10_10010
    createRedButton(&DEVICE_CONNECT.IN_MAT[758], "КОНТРОЛЬ(исправность цепей"
                                                 "кресла)");
    //s13_10010
    createRedButton(&DEVICE_CONNECT.IN_MAT[273], "ПОКИНЬ С-Т ШТУРМАН");
    //s14_10010
    createRedButton(&DEVICE_CONNECT.IN_MAT[272], "ПОКИНЬ С-Т ОПЕРАТОР");
    //s15_10010
    createRedButton(&DEVICE_CONNECT.IN_MAT[276], "БЛОКИРОВКА ПОКИДАНИЯ ЛЛ");
    //s12_10020
    createRedButton(&DEVICE_CONNECT.IN_D[1][100], "ВЫКЛ КРЕСЛА ЛЛ");
    //s13_10020
    createRedButton(&DEVICE_CONNECT.IN_D[1][102], "ВЫКЛ КРЕСЛА ПЛ");

    newColumn();
    createSign("OUT_D");
    //PSPKLL
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][55], "перемещ кресла ЛЛ");
    //PSPKPL
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][56], "перемещ кресла ПЛ");
    //PSRKVLL
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][57], "регулир высоты кресла ЛЛ");
    //PSRKVPL
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][58], "регулир высоты кресла ПЛ");
    //PSRKVSHO
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][59], "регулир высоты кресла ШО");
    //PSRKVSHN
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][60], "регулир высоты кресла ШН");
    //H1_100_10
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][105], "исправность цепей кресла ЛЛ");
    //H2_100_10
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][106], "исправность цепей кресла ПЛ");
    //H3_100_10
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][113], "пиропатроны исправны ЛЛ");
    //H4_100_10
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][110], "пиропатроны исправны ПЛ");
    //H8_100_10
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][109], "исправность цепей кресла ШО");
    //H9_100_10
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][108], "исправность цепей кресла ШН");
    //H10_100_10
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][112], "пиропатроны исправны ШО");
    //H11_100_10
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][111], "пиропатроны исправны ШН");
    //BSS838X7G
    createLabelClue(&DEVICE_CONNECT.OUT_D[2][64], "ПОКИНЬ САМОЛЕТ шо");
    //BSS939X1N
    createLabelClue(&DEVICE_CONNECT.OUT_D[3][42], "ПОКИНЬ САМОЛЕТ шн");
    //BSS811X1R
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][23], "ОПЕРАТОР ПОКИНУЛ");
    //BSS811X1T
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][24], "ШТУРМАН ПОКИНУЛ");
    //BSS824X1d
    createLabelClue(&DEVICE_CONNECT.OUT_D[1][22], "ПРИНУДИТЕЛЬНОЕ ПОКИДАНИЕ");
}

void bailout_peg::updateSmth()
{
}
