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
static const char *ng0 = "C:/Users/Anformatic Golestan/Documents/Computer Architecture Lab/09/02/az9_2/CPU/control_unit.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );


static void work_a_3853510154_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(43, ng0);
    t1 = xsi_get_transient_memory(22U);
    memset(t1, 0, 22U);
    t2 = t1;
    memset(t2, (unsigned char)2, 22U);
    t3 = (t0 + 3552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 22U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = (0 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t12 = *((unsigned char *)t1);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t13 = (4 - 15);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t3 = (t4 + t16);
    t17 = *((unsigned char *)t3);
    t18 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t12, t17);
    t19 = (t18 == (unsigned char)3);
    if (t19 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = (0 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t12 = *((unsigned char *)t1);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t13 = (5 - 15);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t3 = (t4 + t16);
    t17 = *((unsigned char *)t3);
    t18 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t12, t17);
    t19 = (t18 == (unsigned char)3);
    if (t19 != 0)
        goto LAB7;

LAB8:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = (1 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t12 = *((unsigned char *)t1);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t13 = (4 - 15);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t3 = (t4 + t16);
    t17 = *((unsigned char *)t3);
    t18 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t12, t17);
    t19 = (t18 == (unsigned char)3);
    if (t19 != 0)
        goto LAB9;

LAB10:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = (1 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t12 = *((unsigned char *)t1);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t13 = (5 - 15);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t3 = (t4 + t16);
    t17 = *((unsigned char *)t3);
    t18 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t12, t17);
    t19 = (t18 == (unsigned char)3);
    if (t19 != 0)
        goto LAB13;

LAB14:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = (2 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t12 = *((unsigned char *)t1);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t13 = (4 - 15);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t3 = (t4 + t16);
    t17 = *((unsigned char *)t3);
    t18 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t12, t17);
    t19 = (t18 == (unsigned char)3);
    if (t19 != 0)
        goto LAB15;

LAB16:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = (2 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t12 = *((unsigned char *)t1);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t13 = (5 - 15);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t3 = (t4 + t16);
    t17 = *((unsigned char *)t3);
    t18 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t12, t17);
    t19 = (t18 == (unsigned char)3);
    if (t19 != 0)
        goto LAB19;

LAB20:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = (3 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t12 = *((unsigned char *)t1);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t13 = (4 - 15);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t3 = (t4 + t16);
    t17 = *((unsigned char *)t3);
    t18 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t12, t17);
    t19 = (t18 == (unsigned char)3);
    if (t19 != 0)
        goto LAB23;

LAB24:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = (4 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t12 = *((unsigned char *)t1);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t13 = (4 - 15);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t3 = (t4 + t16);
    t17 = *((unsigned char *)t3);
    t18 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t12, t17);
    t19 = (t18 == (unsigned char)3);
    if (t19 != 0)
        goto LAB27;

LAB28:    xsi_set_current_line(76, ng0);

LAB3:    t1 = (t0 + 3472);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t5 = (t0 + 6654);
    t20 = (3U != 3U);
    if (t20 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 3552);
    t21 = (t7 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t5, 3U);
    xsi_driver_first_trans_delta(t7, 0U, 3U, 0LL);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 3552);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3552);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 11U, 1, 0LL);
    goto LAB3;

LAB5:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);
    t5 = (t0 + 3552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t21 = (t7 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)3;
    xsi_driver_first_trans_delta(t5, 14U, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB9:    xsi_set_current_line(54, ng0);
    t5 = (t0 + 6657);
    t20 = (3U != 3U);
    if (t20 == 1)
        goto LAB11;

LAB12:    t7 = (t0 + 3552);
    t21 = (t7 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t5, 3U);
    xsi_driver_first_trans_delta(t7, 0U, 3U, 0LL);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 3552);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 3552);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 11U, 1, 0LL);
    goto LAB3;

LAB11:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(58, ng0);
    t5 = (t0 + 3552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t21 = (t7 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)3;
    xsi_driver_first_trans_delta(t5, 14U, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB15:    xsi_set_current_line(61, ng0);
    t5 = (t0 + 6660);
    t20 = (3U != 3U);
    if (t20 == 1)
        goto LAB17;

LAB18:    t7 = (t0 + 3552);
    t21 = (t7 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t5, 3U);
    xsi_driver_first_trans_delta(t7, 0U, 3U, 0LL);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 3552);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3552);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 11U, 1, 0LL);
    goto LAB3;

LAB17:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(65, ng0);
    t5 = (t0 + 6663);
    t20 = (3U != 3U);
    if (t20 == 1)
        goto LAB21;

LAB22:    t7 = (t0 + 3552);
    t21 = (t7 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t5, 3U);
    xsi_driver_first_trans_delta(t7, 0U, 3U, 0LL);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 3552);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 14U, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB21:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB22;

LAB23:    xsi_set_current_line(69, ng0);
    t5 = (t0 + 6666);
    t20 = (3U != 3U);
    if (t20 == 1)
        goto LAB25;

LAB26:    t7 = (t0 + 3552);
    t21 = (t7 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t5, 3U);
    xsi_driver_first_trans_delta(t7, 0U, 3U, 0LL);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 3552);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB25:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB26;

LAB27:    xsi_set_current_line(73, ng0);
    t5 = (t0 + 6669);
    t20 = (3U != 3U);
    if (t20 == 1)
        goto LAB29;

LAB30:    t7 = (t0 + 3552);
    t21 = (t7 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t5, 3U);
    xsi_driver_first_trans_delta(t7, 0U, 3U, 0LL);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 3552);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB29:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB30;

}


extern void work_a_3853510154_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3853510154_3212880686_p_0};
	xsi_register_didat("work_a_3853510154_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_3853510154_3212880686.didat");
	xsi_register_executes(pe);
}
