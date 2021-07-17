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
static const char *ng0 = "C:/Users/Anformatic Golestan/Documents/Computer Architecture Lab/08/restoring_division.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1547270861_1035706684(char *, char *, char *, char *, char *, char *);


static void work_a_1054154996_3212880686_p_0(char *t0)
{
    char t11[16];
    char t12[16];
    char t15[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t13;
    unsigned int t14;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    static char *nl0[] = {&&LAB5, &&LAB7, &&LAB4, &&LAB9, &&LAB3, &&LAB6, &&LAB8, &&LAB10, &&LAB11, &&LAB12};

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4360);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 8249);
    t6 = (t0 + 4456);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 8255);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 8271);
    t4 = (t0 + 8287);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t12 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 15;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (15 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t9 = (t15 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 31;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t16 = (31 - 0);
    t14 = (t16 * 1);
    t14 = (t14 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t14;
    t6 = xsi_base_array_concat(t6, t11, t7, (char)97, t1, t12, (char)97, t4, t15, (char)101);
    t14 = (16U + 32U);
    t3 = (48U != t14);
    if (t3 == 1)
        goto LAB13;

LAB14:    t10 = (t0 + 4584);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t6, 48U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 8319);
    t4 = (t0 + 4648);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 4712);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t0 + 8040U);
    t7 = (t0 + 8056U);
    t1 = xsi_base_array_concat(t1, t11, t5, (char)97, t2, t6, (char)97, t4, t7, (char)101);
    t14 = (16U + 32U);
    t3 = (48U != t14);
    if (t3 == 1)
        goto LAB15;

LAB16:    t8 = (t0 + 4584);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 48U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 4712);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t14 = (47 - 46);
    t21 = (t14 * 1U);
    t22 = (0 + t21);
    t1 = (t2 + t22);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t12 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 46;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t13 = (0 - 46);
    t23 = (t13 * -1);
    t23 = (t23 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t23;
    t4 = xsi_base_array_concat(t4, t11, t5, (char)97, t1, t12, (char)99, (unsigned char)2, (char)101);
    t23 = (47U + 1U);
    t3 = (48U != t23);
    if (t3 == 1)
        goto LAB17;

LAB18:    t7 = (t0 + 4584);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    memcpy(t17, t4, 48U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 4712);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t14 = (47 - 47);
    t21 = (t14 * 1U);
    t22 = (0 + t21);
    t1 = (t2 + t22);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t14 = (47 - 31);
    t21 = (t14 * 1U);
    t22 = (0 + t21);
    t1 = (t2 + t22);
    t4 = (t0 + 4648);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 4712);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8040U);
    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t4 = (t0 + 7960U);
    t6 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t11, t2, t1, t5, t4);
    t7 = (t0 + 4520);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    memcpy(t17, t6, 16U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 4712);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t13 = (15 - 15);
    t14 = (t13 * -1);
    t21 = (1U * t14);
    t22 = (0 + t21);
    t1 = (t2 + t22);
    t3 = *((unsigned char *)t1);
    t24 = (t3 == (unsigned char)3);
    if (t24 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 4648);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 31U, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 4712);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);

LAB20:    goto LAB2;

LAB9:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8040U);
    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t4 = (t0 + 7960U);
    t6 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t11, t2, t1, t5, t4);
    t7 = (t0 + 4520);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    memcpy(t17, t6, 16U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 4712);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8072U);
    t4 = (t0 + 8351);
    t6 = (t12 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t13 = (3 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t14;
    t7 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t11, t2, t1, t4, t12);
    t8 = (t0 + 4456);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 6U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 4712);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8355);
    t3 = 1;
    if (6U == 6U)
        goto LAB25;

LAB26:    t3 = 0;

LAB27:    if (t3 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 4712);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB23:    goto LAB2;

LAB12:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 4776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 4840);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB13:    xsi_size_not_matching(48U, t14, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(48U, t14, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(48U, t23, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 4648);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 31U, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 4712);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB22:    xsi_set_current_line(97, ng0);
    t7 = (t0 + 4712);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    *((unsigned char *)t17) = (unsigned char)9;
    xsi_driver_first_trans_fast(t7);
    goto LAB23;

LAB25:    t14 = 0;

LAB28:    if (t14 < 6U)
        goto LAB29;
    else
        goto LAB27;

LAB29:    t5 = (t2 + t14);
    t6 = (t1 + t14);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB26;

LAB30:    t14 = (t14 + 1);
    goto LAB28;

}

static void work_a_1054154996_3212880686_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1632U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4376);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(112, ng0);
    t4 = (t0 + 1992U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 4904);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}


extern void work_a_1054154996_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1054154996_3212880686_p_0,(void *)work_a_1054154996_3212880686_p_1};
	xsi_register_didat("work_a_1054154996_3212880686", "isim/TEST_isim_beh.exe.sim/work/a_1054154996_3212880686.didat");
	xsi_register_executes(pe);
}
