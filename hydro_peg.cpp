#include "hydro_peg.h"

hydro_peg::hydro_peg(QWidget *parent)
    : interfacing(parent)
{
    hydro_peg::setWindowTitle("hydro");
    createSign("ISU");

    //s1_2910
    createRedButton(&DEVICE_CONNECT.IN_MAT[35], "������ ����� �/�������");
    //s2_2910
    createRedButton(&DEVICE_CONNECT.IN_MAT[756], "�������� ���������");
    //s3_2910
    createRedButton(&DEVICE_CONNECT.IN_MAT[753], "����� ������ ��1,2");
    //s4_2910
    createRedButton(&DEVICE_CONNECT.IN_MAT[755], "����� ������ ��3,4");

    //s5_2910
    createRedButton(&DEVICE_CONNECT.IN_MAT[353], "���������� ���� �/������� ��2 � 3");
    //s6_2910
    createRedButton(&DEVICE_CONNECT.IN_MAT[352], "���������� ���� �/������� ��1 � 4");
    //s7_2910
    createRedButton(&DEVICE_CONNECT.IN_MAT[358], "���� �/������� ��2");

    //s1_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[45], "������������ ��� ��1");
    //s2_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[46], "������������ ��� ��2");
    //s3_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[47], "������������ ��� ��3");
    //s4_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[48], "������������ ��� ��4");
    //s5_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[204], "����� ����������� ��1");
    //s6_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[205], "����� ����������� ��2");
    //s7_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[206], "����� ����������� ��3");
    //s8_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[207], "����� ����������� ��4");

    //s9_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[37], "��� ��1 ����");
    createRedButton(&DEVICE_CONNECT.IN_MAT[38], "��� ��1 ���");

    //s10_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[39], "��� ��2 ����");
    createRedButton(&DEVICE_CONNECT.IN_MAT[40], "��� ��2 ���");

    //s11_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[41], "��� ��3 ����");
    createRedButton(&DEVICE_CONNECT.IN_MAT[42], "��� ��3 ���");

    //s12_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[43], "��� ��4 ����");
    createRedButton(&DEVICE_CONNECT.IN_MAT[44], "��� ��4 ���");

    //s13_2920
    createRedButton(&DEVICE_CONNECT.IN_MAT[757], "��� ������");
    //s18_2930
    createRedButton(&DEVICE_CONNECT.IN_MAT[761], "�������� ����");
    //k24_3230
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "������� ������ �����");
    //k26_3230
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "������� ����� �����");

    //EZR1_34
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "������� ������� 1��");
    //EZR2_34
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "������� ������� 2��");
    //EZR3_34
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "������� ������� 3��");
    //EZR4_34
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "������� ������� 4��");
    //Pv_vsu
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "���� ���� �� ����� ��� ���");
    //PRD1dv
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "������� ��� 1��");
    //PRD2dv
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "������� ��� 2��");
    //PRD3dv
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "������� ��� 3��");
    //PRD4dv
    createRedButton(&DEVICE_CONNECT.IN_MAT[-1], "������� ��� 4��");

    newColumn();
    createSign("RMI_PILOT");
    //p0gs1, p0gs2, p0gs3, p0gs4, p0gat
    createRedButton(&RMI_PILOT_CONNECT.balHydroToFull, "�������� �����/�����");
    //
    createRedButton(&RMI_PILOT_CONNECT.balHydroToFull, "����� ��1");
    //
    createRedButton(&RMI_PILOT_CONNECT.balHydroToFull, "����� ��2");
    //
    createRedButton(&RMI_PILOT_CONNECT.balHydroToFull, "����� ��3");
    //
    createRedButton(&RMI_PILOT_CONNECT.balHydroToFull, "����� ��4");

    newColumn();
    createSign("OUT_D");
    //H1_2910
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "����������� ���������� ��2");
    //H2_2910
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "����������� ���������� ��2");
    //H4_2910
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "����������� ���������� ��3");
    //H5_2910
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "����������� ���������� ��4");
    //H10_2930
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��������� ������ ��1");
    //H11_2930
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��������� ������ ��2");
    //H12_2930
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��������� ������ ��3");
    //H13_2930
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��������� ������ ��4");
    //H1_2935
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "����� ���");
    //BSS811X2M
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��1 � ����");
    //BSS811X2N
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��2 � ����");
    //BSS811X2P
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��3 � ����");
    //BSS811X2R
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��4 � ����");
    //BSS811X2d
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��� ��1 ����");
    //BSS811X2e
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��� ��2 ����");
    //BSS811X2f
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��� ��3 ����");
    //BSS811X2g
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��� ��4 ����");
    //BSS812X6C
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��� ��1 ���");
    //BSS812X6D
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��� ��2 ���");
    //BSS812X6E
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��� ��3 ���");
    //BSS812X6F
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "��� ��4 ���");
    //BSS812X6G
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "�����");
    //BSS824X2e
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "�����������");
    //BSS811X2G
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "����� ���");

    //pprgs1
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "�������� ��1");
    //pprgs2
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "�������� ��2");
    //pprgs3
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "�������� ��3");
    //pprgs4
    createLabelClue(&DEVICE_CONNECT.OUT_D[0][98], "�������� ��4");
}

void hydro_peg::updateSmth()
{
}
