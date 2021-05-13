#include "inmat_int.h"


power::power(QWidget *parent)
    : interfacing(parent)
{
    power::setWindowTitle("Power");
//    createRedButton(&DEVICE_CONNECT.IN_MAT[538], "IN_MAT_538");
//    createRedButton(&DEVICE_CONNECT.IN_MAT[550], "IN_MAT_550");
    createSign("SIO");
    createRedButton(&DEVICE_CONNECT.IN_MAT[556], "GEN_VSU_10");//s1_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[531], "G1_OTKL_11");//s4_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[535], "G2_OTKL_11");//s5_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[535], "G3_OTKL_12");//s8_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[547], "G4_OTKL_12");//s11_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[529], "rap1_11");//s2_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[541], "rap2_12");//s9_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[537], "akk1_otkl11");//s14_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[561], "akk2_otkl11");//s15_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[549], "soed_setey_10");//s7_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[523], "vozduh");//s13_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[546], "chastich_rezhim_12");//s10_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[577], "akk2");//s16_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[525], "akk1");//s17_2430
    createRedButton(&DEVICE_CONNECT.IN_MAT[748], "pp-73_glav_vikl");//s5-pp73
    createRedButton(&DEVICE_CONNECT.IN_MAT[196], "sku1");//s1_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[197], "sku2");//s2_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[198], "sku3");//s3_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[199], "sku4");//s4_7710
    createRedButton(&DEVICE_CONNECT.IN_MAT[520], "gen1_otkl");//s1_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[565], "gen2_otkl");//s5_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[568], "gen3_otkl");//s10_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[575], "gen4_otkl");//s13_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[522], "chastich_rezhim_21");//s4_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[567], "chastich_rezhim_22");//s12_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[549], "gen_vsu_20");//s8_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[557], "soed_setey_20");//s2_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[555], "rap20");//s9_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[592], "preobr1");//s15_2420
    createRedButton(&DEVICE_CONNECT.IN_MAT[594], "preobr3");//s21_2420
    newColumn();
    createSign("RMI_PILOT");
    createRedButton(&RMI_PILOT_CONNECT.bRMI_ALL, "PVRAP");//pvrap
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[20], "otkaz_gen_post_toka1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[21], "otkaz_gen_post_toka2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[22], "otkaz_gen_post_toka3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[23], "otkaz_gen_post_toka4");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[24], "peregr_gen_post_toka1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[25], "peregr_gen_post_toka2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[26], "peregr_gen_post_toka3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[27], "peregr_gen_post_toka4");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[10], "paden_davl_mas_PPO_gen1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[11], "paden_davl_mas_PPO_gen2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[12], "paden_davl_mas_PPO_gen3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[13], "paden_davl_mas_PPO_gen4");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[5], "otkaz_gen_per_toka1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[6], "otkaz_gen_per_toka2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[7], "otkaz_gen_per_toka3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[8], "otkaz_gen_per_toka4");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[9], "otkaz_gen_vsu");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[14], "otkaz_preobr_PTS1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[15], "otkaz_preobr_POS");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[16], "peregruzka_gen_per_g1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[17], "peregruzka_gen_per_g2");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[18], "peregruzka_gen_per_g3");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[19], "peregruzka_gen_per_g4");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[28], "peregrev_akk1");
    createRedButton(&RMI_PILOT_CONNECT.Otkaz[29], "peregrev_akk2");
//    createRedButton(&DEVICE_CONNECT.IN_MAT[594], "preobr3");//s7_2420
//    createRedButton(&DEVICE_CONNECT.IN_MAT[594], "preobr3");//s17_2420
//    createRedButton(&DEVICE_CONNECT.IN_MAT[594], "preobr3");//s18_2420
//    createRedButton(&DEVICE_CONNECT.IN_MAT[594], "preobr3");//s19_2420
//    createRedButton(&DEVICE_CONNECT.IN_MAT[594], "preobr3");//s20_2420
}

void power::updateSmth()
{
    interfacing::updMmrState();
}
