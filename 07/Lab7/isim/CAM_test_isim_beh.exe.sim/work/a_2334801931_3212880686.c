/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Anformatic Golestan/Documents/Computer Architecture Lab/07/Lab7/CAM.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2334801931_3212880686_p_0(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    int t7;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;

LAB0:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1472U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB10;

LAB11:
LAB3:    t1 = (t0 + 3952);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 11348);
    *((int *)t1) = 0;
    t5 = (t0 + 11352);
    *((int *)t5) = 255;
    t6 = 0;
    t7 = 255;

LAB5:    if (t6 <= t7)
        goto LAB6;

LAB8:    goto LAB3;

LAB6:    xsi_set_current_line(46, ng0);
    t9 = (t0 + 11348);
    t10 = (0 - 15);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t12 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, *((int *)t9), ((t11)));
    t13 = (t0 + 11348);
    t14 = *((int *)t13);
    t15 = (t14 - 0);
    t16 = (t15 * 1);
    t17 = (16U * t16);
    t18 = (0U + t17);
    t19 = (t0 + 4032);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t12, 16U);
    xsi_driver_first_trans_delta(t19, t18, 16U, 0LL);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 11356);
    t5 = (t0 + 4096);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memcpy(t19, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 4160);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(49, ng0);
    t10 = (-(1));
    t1 = (t0 + 4224);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((int *)t12) = t10;
    xsi_driver_first_trans_fast(t1);

LAB7:    t1 = (t0 + 11348);
    t6 = *((int *)t1);
    t2 = (t0 + 11352);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB8;

LAB9:    t10 = (t6 + 1);
    t6 = t10;
    t5 = (t0 + 11348);
    *((int *)t5) = t6;
    goto LAB5;

LAB10:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t24 = (t4 == (unsigned char)3);
    if (t24 != 0)
        goto LAB12;

LAB14:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB38;

LAB39:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 11388);
    t5 = (t0 + 4096);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memcpy(t19, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 4160);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB13:    goto LAB3;

LAB12:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4288);
    t9 = (t2 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 11364);
    *((int *)t1) = 0;
    t2 = (t0 + 11368);
    *((int *)t2) = 255;
    t6 = 0;
    t7 = 255;

LAB15:    if (t6 <= t7)
        goto LAB16;

LAB18:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB13;

LAB16:    xsi_set_current_line(56, ng0);
    t5 = (t0 + 2152U);
    t9 = *((char **)t5);
    t5 = (t0 + 11364);
    t10 = *((int *)t5);
    t14 = (t10 - 0);
    t11 = (t14 * 1);
    t16 = (16U * t11);
    t17 = (0 + t16);
    t12 = (t9 + t17);
    t13 = (t0 + 1032U);
    t19 = *((char **)t13);
    t3 = 1;
    if (16U == 16U)
        goto LAB22;

LAB23:    t3 = 0;

LAB24:    if (t3 != 0)
        goto LAB19;

LAB21:
LAB20:
LAB17:    t1 = (t0 + 11364);
    t6 = *((int *)t1);
    t2 = (t0 + 11368);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB18;

LAB31:    t10 = (t6 + 1);
    t6 = t10;
    t5 = (t0 + 11364);
    *((int *)t5) = t6;
    goto LAB15;

LAB19:    xsi_set_current_line(57, ng0);
    t21 = (t0 + 2312U);
    t22 = *((char **)t21);
    t4 = *((unsigned char *)t22);
    t24 = (t4 == (unsigned char)2);
    if (t24 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB20;

LAB22:    t18 = 0;

LAB25:    if (t18 < 16U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t13 = (t12 + t18);
    t20 = (t19 + t18);
    if (*((unsigned char *)t13) != *((unsigned char *)t20))
        goto LAB23;

LAB27:    t18 = (t18 + 1);
    goto LAB25;

LAB28:    xsi_set_current_line(58, ng0);
    t21 = (t0 + 11364);
    t23 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, *((int *)t21), 8);
    t25 = (t0 + 4096);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t23, 8U);
    xsi_driver_first_trans_fast_port(t25);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 4160);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 4288);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB29;

LAB32:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t24 = (t6 == 255);
    if (t24 != 0)
        goto LAB35;

LAB37:
LAB36:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t7 = (t6 + 1);
    t1 = (t0 + 4224);
    t5 = (t1 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    *((int *)t13) = t7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t7 = (t6 - 0);
    t11 = (t7 * 1);
    t16 = (16U * t11);
    t17 = (0U + t16);
    t1 = (t0 + 4032);
    t9 = (t1 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memcpy(t19, t2, 16U);
    xsi_driver_first_trans_delta(t1, t17, 16U, 0LL);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, t6, 8);
    t5 = (t0 + 4096);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memcpy(t19, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 4160);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB33;

LAB35:    xsi_set_current_line(66, ng0);
    t7 = (-(1));
    t1 = (t0 + 4224);
    t9 = (t1 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    *((int *)t19) = t7;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB38:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 4160);
    t5 = (t1 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 11372);
    t5 = (t0 + 4096);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memcpy(t19, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 4288);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 11380);
    *((int *)t1) = 0;
    t2 = (t0 + 11384);
    *((int *)t2) = 255;
    t6 = 0;
    t7 = 255;

LAB40:    if (t6 <= t7)
        goto LAB41;

LAB43:    goto LAB13;

LAB41:    xsi_set_current_line(78, ng0);
    t5 = (t0 + 2152U);
    t9 = *((char **)t5);
    t5 = (t0 + 11380);
    t10 = *((int *)t5);
    t14 = (t10 - 0);
    t11 = (t14 * 1);
    t16 = (16U * t11);
    t17 = (0 + t16);
    t12 = (t9 + t17);
    t13 = (t0 + 1032U);
    t19 = *((char **)t13);
    t4 = 1;
    if (16U == 16U)
        goto LAB50;

LAB51:    t4 = 0;

LAB52:    if (t4 == 1)
        goto LAB47;

LAB48:    t3 = (unsigned char)0;

LAB49:    if (t3 != 0)
        goto LAB44;

LAB46:
LAB45:
LAB42:    t1 = (t0 + 11380);
    t6 = *((int *)t1);
    t2 = (t0 + 11384);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB43;

LAB56:    t10 = (t6 + 1);
    t6 = t10;
    t5 = (t0 + 11380);
    *((int *)t5) = t6;
    goto LAB40;

LAB44:    xsi_set_current_line(79, ng0);
    t21 = (t0 + 11380);
    t23 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, *((int *)t21), 8);
    t25 = (t0 + 4096);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t23, 8U);
    xsi_driver_first_trans_fast_port(t25);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 4160);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 4288);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB45;

LAB47:    t21 = (t0 + 2312U);
    t22 = *((char **)t21);
    t24 = *((unsigned char *)t22);
    t30 = (t24 == (unsigned char)2);
    t3 = t30;
    goto LAB49;

LAB50:    t18 = 0;

LAB53:    if (t18 < 16U)
        goto LAB54;
    else
        goto LAB52;

LAB54:    t13 = (t12 + t18);
    t20 = (t19 + t18);
    if (*((unsigned char *)t13) != *((unsigned char *)t20))
        goto LAB51;

LAB55:    t18 = (t18 + 1);
    goto LAB53;

}


extern void work_a_2334801931_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2334801931_3212880686_p_0};
	xsi_register_didat("work_a_2334801931_3212880686", "isim/CAM_test_isim_beh.exe.sim/work/a_2334801931_3212880686.didat");
	xsi_register_executes(pe);
}
