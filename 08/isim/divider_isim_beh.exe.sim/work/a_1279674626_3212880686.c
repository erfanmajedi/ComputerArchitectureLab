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
static const char *ng0 = "C:/Users/Anformatic Golestan/Documents/Computer Architecture Lab/08/divider.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1279674626_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (8 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3816);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 3720);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1279674626_3212880686_p_1(char *t0)
{
    char t12[16];
    char t38[16];
    char t41[16];
    char t43[16];
    char t44[16];
    char t51[16];
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    int t24;
    unsigned char t25;
    int t26;
    unsigned char t27;
    int t28;
    unsigned char t29;
    int t30;
    unsigned char t31;
    int t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    char *t54;

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 == 8);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1472U);
    t18 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t18 == 1)
        goto LAB11;

LAB12:    t4 = (unsigned char)0;

LAB13:    if (t4 != 0)
        goto LAB8;

LAB10:
LAB9:    t1 = (t0 + 3736);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 3880);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 3880);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 1U, 8U, 0LL);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t9 = (7 - 7);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t5 = (t12 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 4;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t3 = (4 - 7);
    t13 = (t3 * -1);
    t13 = (t13 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t13;
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 6316U);
    t4 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t1, t12, t7, t6);
    if (t4 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3944);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(62, ng0);
    t8 = (t0 + 3944);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1832U);
    t6 = *((char **)t2);
    t24 = *((int *)t6);
    t25 = (t24 == 8);
    if (t25 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 1832U);
    t7 = *((char **)t2);
    t26 = *((int *)t7);
    t27 = (t26 == 6);
    t23 = t27;

LAB28:    if (t23 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 1832U);
    t8 = *((char **)t2);
    t28 = *((int *)t8);
    t29 = (t28 == 4);
    t22 = t29;

LAB25:    if (t22 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 1832U);
    t14 = *((char **)t2);
    t30 = *((int *)t14);
    t31 = (t30 == 2);
    t21 = t31;

LAB22:    if (t21 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1832U);
    t15 = *((char **)t2);
    t32 = *((int *)t15);
    t33 = (t32 == 0);
    t20 = t33;

LAB19:    if (t20 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t9 = (t3 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t4 = *((unsigned char *)t1);
    t18 = (t4 == (unsigned char)3);
    if (t18 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t9 = (8 - 7);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t5 = (t12 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 4;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t3 = (4 - 7);
    t13 = (t3 * -1);
    t13 = (t13 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t13;
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 6316U);
    t4 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t1, t12, t7, t6);
    if (t4 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3880);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);

LAB35:
LAB30:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t24 = (t3 - 1);
    t1 = (t0 + 4008);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t24;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB9;

LAB11:    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t3 = *((int *)t5);
    t19 = (t3 > 0);
    t4 = t19;
    goto LAB13;

LAB14:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1992U);
    t16 = *((char **)t2);
    t9 = (8 - 7);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t2 = (t16 + t11);
    t17 = (t0 + 3880);
    t34 = (t17 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t2, 8U);
    xsi_driver_first_trans_delta(t17, 0U, 8U, 0LL);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t24 = (t3 - 1);
    t1 = (t0 + 4008);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t24;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    t20 = (unsigned char)1;
    goto LAB19;

LAB20:    t21 = (unsigned char)1;
    goto LAB22;

LAB23:    t22 = (unsigned char)1;
    goto LAB25;

LAB26:    t23 = (unsigned char)1;
    goto LAB28;

LAB29:    xsi_set_current_line(77, ng0);
    t5 = (t0 + 1992U);
    t6 = *((char **)t5);
    t13 = (8 - 7);
    t39 = (t13 * 1U);
    t40 = (0 + t39);
    t5 = (t6 + t40);
    t7 = (t41 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 4;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t24 = (4 - 7);
    t42 = (t24 * -1);
    t42 = (t42 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t42;
    t8 = (t0 + 1192U);
    t14 = *((char **)t8);
    t8 = (t0 + 6316U);
    t15 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t43, t14, t8);
    t16 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t38, t5, t41, t15, t43);
    t17 = (t0 + 6401);
    t35 = (t44 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = 0;
    t36 = (t35 + 4U);
    *((int *)t36) = 4;
    t36 = (t35 + 8U);
    *((int *)t36) = 1;
    t26 = (4 - 0);
    t42 = (t26 * 1);
    t42 = (t42 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t42;
    t36 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t16, t38, t17, t44);
    t37 = (t12 + 12U);
    t42 = *((unsigned int *)t37);
    t45 = (1U * t42);
    t19 = (5U != t45);
    if (t19 == 1)
        goto LAB32;

LAB33:    t46 = (t0 + 3880);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memcpy(t50, t36, 5U);
    xsi_driver_first_trans_delta(t46, 0U, 5U, 0LL);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 3880);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);
    goto LAB30;

LAB32:    xsi_size_not_matching(5U, t45, 0);
    goto LAB33;

LAB34:    xsi_set_current_line(81, ng0);
    t8 = (t0 + 1992U);
    t14 = *((char **)t8);
    t13 = (8 - 7);
    t39 = (t13 * 1U);
    t40 = (0 + t39);
    t8 = (t14 + t40);
    t15 = (t43 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 7;
    t16 = (t15 + 4U);
    *((int *)t16) = 4;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t24 = (4 - 7);
    t42 = (t24 * -1);
    t42 = (t42 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t42;
    t16 = (t0 + 1192U);
    t17 = *((char **)t16);
    t16 = (t0 + 6316U);
    t34 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t44, t17, t16);
    t35 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t41, t8, t43, t34, t44);
    t36 = (t0 + 6406);
    t46 = (t51 + 0U);
    t47 = (t46 + 0U);
    *((int *)t47) = 0;
    t47 = (t46 + 4U);
    *((int *)t47) = 4;
    t47 = (t46 + 8U);
    *((int *)t47) = 1;
    t26 = (4 - 0);
    t42 = (t26 * 1);
    t42 = (t42 + 1);
    t47 = (t46 + 12U);
    *((unsigned int *)t47) = t42;
    t47 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t38, t35, t41, t36, t51);
    t48 = (t38 + 12U);
    t42 = *((unsigned int *)t48);
    t45 = (1U * t42);
    t18 = (5U != t45);
    if (t18 == 1)
        goto LAB37;

LAB38:    t49 = (t0 + 3880);
    t50 = (t49 + 56U);
    t52 = *((char **)t50);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    memcpy(t54, t47, 5U);
    xsi_driver_first_trans_delta(t49, 0U, 5U, 0LL);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3880);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);
    goto LAB35;

LAB37:    xsi_size_not_matching(5U, t45, 0);
    goto LAB38;

}


extern void work_a_1279674626_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1279674626_3212880686_p_0,(void *)work_a_1279674626_3212880686_p_1};
	xsi_register_didat("work_a_1279674626_3212880686", "isim/divider_isim_beh.exe.sim/work/a_1279674626_3212880686.didat");
	xsi_register_executes(pe);
}
