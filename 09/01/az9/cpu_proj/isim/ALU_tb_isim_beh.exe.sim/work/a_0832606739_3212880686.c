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
static const char *ng0 = "C:/Users/Anformatic Golestan/Documents/Computer Architecture Lab/09/01/az9/cpu_proj/ALU.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t38[16];
    char t47[16];
    char t49[16];
    char t54[16];
    char t63[16];
    char t65[16];
    char t70[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    int t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;
    int t34;
    char *t35;
    char *t36;
    int t37;
    char *t39;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t48;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    char *t55;
    int t56;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t64;
    char *t66;
    char *t67;
    int t68;
    unsigned int t69;
    char *t71;
    int t72;
    char *t73;
    unsigned int t74;
    unsigned char t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1472U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t4 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:    t1 = (t0 + 3472);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t1 = xsi_get_transient_memory(28U);
    memset(t1, 0, 28U);
    t5 = t1;
    memset(t5, (unsigned char)4, 28U);
    t6 = (t0 + 3552);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 28U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t2 = (t0 + 6208);
    t13 = xsi_mem_cmp(t2, t6, 4U);
    if (t13 == 1)
        goto LAB12;

LAB23:    t8 = (t0 + 6212);
    t14 = xsi_mem_cmp(t8, t6, 4U);
    if (t14 == 1)
        goto LAB13;

LAB24:    t10 = (t0 + 6216);
    t16 = xsi_mem_cmp(t10, t6, 4U);
    if (t16 == 1)
        goto LAB14;

LAB25:    t17 = (t0 + 6220);
    t19 = xsi_mem_cmp(t17, t6, 4U);
    if (t19 == 1)
        goto LAB15;

LAB26:    t20 = (t0 + 6224);
    t22 = xsi_mem_cmp(t20, t6, 4U);
    if (t22 == 1)
        goto LAB16;

LAB27:    t23 = (t0 + 6228);
    t25 = xsi_mem_cmp(t23, t6, 4U);
    if (t25 == 1)
        goto LAB17;

LAB28:    t26 = (t0 + 6232);
    t28 = xsi_mem_cmp(t26, t6, 4U);
    if (t28 == 1)
        goto LAB18;

LAB29:    t29 = (t0 + 6236);
    t31 = xsi_mem_cmp(t29, t6, 4U);
    if (t31 == 1)
        goto LAB19;

LAB30:    t32 = (t0 + 6240);
    t34 = xsi_mem_cmp(t32, t6, 4U);
    if (t34 == 1)
        goto LAB20;

LAB31:    t35 = (t0 + 6244);
    t37 = xsi_mem_cmp(t35, t6, 4U);
    if (t37 == 1)
        goto LAB21;

LAB32:
LAB22:    xsi_set_current_line(116, ng0);

LAB11:    goto LAB6;

LAB8:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB10;

LAB12:    xsi_set_current_line(65, ng0);
    t39 = (t0 + 6248);
    t41 = (t0 + 1032U);
    t42 = *((char **)t41);
    t43 = (27 - 17);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t41 = (t42 + t45);
    t48 = ((IEEE_P_2592010699) + 4024);
    t50 = (t49 + 0U);
    t51 = (t50 + 0U);
    *((int *)t51) = 0;
    t51 = (t50 + 4U);
    *((int *)t51) = 0;
    t51 = (t50 + 8U);
    *((int *)t51) = 1;
    t52 = (0 - 0);
    t53 = (t52 * 1);
    t53 = (t53 + 1);
    t51 = (t50 + 12U);
    *((unsigned int *)t51) = t53;
    t51 = (t54 + 0U);
    t55 = (t51 + 0U);
    *((int *)t55) = 17;
    t55 = (t51 + 4U);
    *((int *)t55) = 9;
    t55 = (t51 + 8U);
    *((int *)t55) = -1;
    t56 = (9 - 17);
    t53 = (t56 * -1);
    t53 = (t53 + 1);
    t55 = (t51 + 12U);
    *((unsigned int *)t55) = t53;
    t46 = xsi_base_array_concat(t46, t47, t48, (char)97, t39, t49, (char)97, t41, t54, (char)101);
    t55 = (t0 + 6249);
    t58 = (t0 + 1032U);
    t59 = *((char **)t58);
    t53 = (27 - 8);
    t60 = (t53 * 1U);
    t61 = (0 + t60);
    t58 = (t59 + t61);
    t64 = ((IEEE_P_2592010699) + 4024);
    t66 = (t65 + 0U);
    t67 = (t66 + 0U);
    *((int *)t67) = 0;
    t67 = (t66 + 4U);
    *((int *)t67) = 0;
    t67 = (t66 + 8U);
    *((int *)t67) = 1;
    t68 = (0 - 0);
    t69 = (t68 * 1);
    t69 = (t69 + 1);
    t67 = (t66 + 12U);
    *((unsigned int *)t67) = t69;
    t67 = (t70 + 0U);
    t71 = (t67 + 0U);
    *((int *)t71) = 8;
    t71 = (t67 + 4U);
    *((int *)t71) = 0;
    t71 = (t67 + 8U);
    *((int *)t71) = -1;
    t72 = (0 - 8);
    t69 = (t72 * -1);
    t69 = (t69 + 1);
    t71 = (t67 + 12U);
    *((unsigned int *)t71) = t69;
    t62 = xsi_base_array_concat(t62, t63, t64, (char)97, t55, t65, (char)97, t58, t70, (char)101);
    t71 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t38, t46, t47, t62, t63);
    t73 = (t38 + 12U);
    t69 = *((unsigned int *)t73);
    t74 = (1U * t69);
    t75 = (10U != t74);
    if (t75 == 1)
        goto LAB34;

LAB35:    t76 = (t0 + 3616);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memcpy(t80, t71, 10U);
    xsi_driver_first_trans_fast(t76);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t13 = (9 - 9);
    t43 = (t13 * -1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 3680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 3552);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 10U);
    xsi_driver_first_trans_delta(t1, 0U, 10U, 0LL);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t43 = (27 - 17);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t5 = (t0 + 3552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 18U);
    xsi_driver_first_trans_delta(t5, 10U, 18U, 0LL);
    goto LAB11;

LAB13:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 6250);
    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t43 = (27 - 17);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t5 = (t6 + t45);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t49 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t13 = (0 - 0);
    t53 = (t13 * 1);
    t53 = (t53 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t53;
    t10 = (t54 + 0U);
    t15 = (t10 + 0U);
    *((int *)t15) = 17;
    t15 = (t10 + 4U);
    *((int *)t15) = 9;
    t15 = (t10 + 8U);
    *((int *)t15) = -1;
    t14 = (9 - 17);
    t53 = (t14 * -1);
    t53 = (t53 + 1);
    t15 = (t10 + 12U);
    *((unsigned int *)t15) = t53;
    t7 = xsi_base_array_concat(t7, t47, t8, (char)97, t1, t49, (char)97, t5, t54, (char)101);
    t15 = (t0 + 6251);
    t18 = (t0 + 1032U);
    t20 = *((char **)t18);
    t53 = (27 - 8);
    t60 = (t53 * 1U);
    t61 = (0 + t60);
    t18 = (t20 + t61);
    t23 = ((IEEE_P_2592010699) + 4024);
    t24 = (t65 + 0U);
    t26 = (t24 + 0U);
    *((int *)t26) = 0;
    t26 = (t24 + 4U);
    *((int *)t26) = 0;
    t26 = (t24 + 8U);
    *((int *)t26) = 1;
    t16 = (0 - 0);
    t69 = (t16 * 1);
    t69 = (t69 + 1);
    t26 = (t24 + 12U);
    *((unsigned int *)t26) = t69;
    t26 = (t70 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 8;
    t27 = (t26 + 4U);
    *((int *)t27) = 0;
    t27 = (t26 + 8U);
    *((int *)t27) = -1;
    t19 = (0 - 8);
    t69 = (t19 * -1);
    t69 = (t69 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t69;
    t21 = xsi_base_array_concat(t21, t63, t23, (char)97, t15, t65, (char)97, t18, t70, (char)101);
    t27 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t38, t7, t47, t21, t63);
    t29 = (t38 + 12U);
    t69 = *((unsigned int *)t29);
    t74 = (1U * t69);
    t3 = (10U != t74);
    if (t3 == 1)
        goto LAB36;

LAB37:    t30 = (t0 + 3616);
    t32 = (t30 + 56U);
    t33 = *((char **)t32);
    t35 = (t33 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t27, 10U);
    xsi_driver_first_trans_fast(t30);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t13 = (9 - 9);
    t43 = (t13 * -1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 3680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 3552);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 10U);
    xsi_driver_first_trans_delta(t1, 0U, 10U, 0LL);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t43 = (27 - 17);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t5 = (t0 + 3552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 18U);
    xsi_driver_first_trans_delta(t5, 10U, 18U, 0LL);
    goto LAB11;

LAB14:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t43 = (27 - 9);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t5 = (t38 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 9;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t13 = (0 - 9);
    t53 = (t13 * -1);
    t53 = (t53 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t53;
    t14 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t1, t38);
    t6 = (t0 + 6252);
    *((int *)t6) = 0;
    t7 = (t0 + 6256);
    *((int *)t7) = t14;
    t16 = 0;
    t19 = t14;

LAB38:    if (t16 <= t19)
        goto LAB39;

LAB41:    goto LAB11;

LAB15:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t43 = (27 - 9);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t5 = (t38 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 9;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t13 = (0 - 9);
    t53 = (t13 * -1);
    t53 = (t53 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t53;
    t14 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t1, t38);
    t6 = (t0 + 6260);
    *((int *)t6) = 0;
    t7 = (t0 + 6264);
    *((int *)t7) = t14;
    t16 = 0;
    t19 = t14;

LAB43:    if (t16 <= t19)
        goto LAB44;

LAB46:    goto LAB11;

LAB16:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t43 = (27 - 17);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t5 = (t47 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 17;
    t6 = (t5 + 4U);
    *((int *)t6) = 9;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t13 = (9 - 17);
    t53 = (t13 * -1);
    t53 = (t53 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t53;
    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t53 = (27 - 8);
    t60 = (t53 * 1U);
    t61 = (0 + t60);
    t6 = (t7 + t61);
    t8 = (t49 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 8;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t14 = (0 - 8);
    t69 = (t14 * -1);
    t69 = (t69 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t69;
    t9 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t38, t1, t47, t6, t49);
    t10 = (t38 + 12U);
    t69 = *((unsigned int *)t10);
    t74 = (1U * t69);
    t3 = (9U != t74);
    if (t3 == 1)
        goto LAB48;

LAB49:    t15 = (t0 + 3552);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 9U);
    xsi_driver_first_trans_delta(t15, 1U, 9U, 0LL);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 3552);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB11;

LAB17:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t43 = (27 - 17);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t5 = (t47 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 17;
    t6 = (t5 + 4U);
    *((int *)t6) = 9;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t13 = (9 - 17);
    t53 = (t13 * -1);
    t53 = (t53 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t53;
    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t53 = (27 - 8);
    t60 = (t53 * 1U);
    t61 = (0 + t60);
    t6 = (t7 + t61);
    t8 = (t49 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 8;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t14 = (0 - 8);
    t69 = (t14 * -1);
    t69 = (t69 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t69;
    t9 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t38, t1, t47, t6, t49);
    t10 = (t38 + 12U);
    t69 = *((unsigned int *)t10);
    t74 = (1U * t69);
    t3 = (9U != t74);
    if (t3 == 1)
        goto LAB50;

LAB51:    t15 = (t0 + 3552);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 9U);
    xsi_driver_first_trans_delta(t15, 1U, 9U, 0LL);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 3552);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB11;

LAB18:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t43 = (27 - 17);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t5 = (t47 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 17;
    t6 = (t5 + 4U);
    *((int *)t6) = 9;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t13 = (9 - 17);
    t53 = (t13 * -1);
    t53 = (t53 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t53;
    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t53 = (27 - 8);
    t60 = (t53 * 1U);
    t61 = (0 + t60);
    t6 = (t7 + t61);
    t8 = (t49 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 8;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t14 = (0 - 8);
    t69 = (t14 * -1);
    t69 = (t69 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t69;
    t9 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t38, t1, t47, t6, t49);
    t10 = (t38 + 12U);
    t69 = *((unsigned int *)t10);
    t74 = (1U * t69);
    t3 = (9U != t74);
    if (t3 == 1)
        goto LAB52;

LAB53:    t15 = (t0 + 3552);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 9U);
    xsi_driver_first_trans_delta(t15, 1U, 9U, 0LL);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 3552);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB11;

LAB19:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t43 = (27 - 13);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t5 = (t47 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 13;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t13 = (0 - 13);
    t53 = (t13 * -1);
    t53 = (t53 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t53;
    t6 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t38, t1, t47);
    t7 = (t38 + 12U);
    t53 = *((unsigned int *)t7);
    t60 = (1U * t53);
    t3 = (14U != t60);
    if (t3 == 1)
        goto LAB54;

LAB55:    t8 = (t0 + 3552);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t15 = (t10 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t6, 14U);
    xsi_driver_first_trans_delta(t8, 0U, 14U, 0LL);
    goto LAB11;

LAB20:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t43 = (27 - 9);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t5 = (t38 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 9;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t13 = (0 - 9);
    t53 = (t13 * -1);
    t53 = (t53 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t53;
    t14 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t1, t38);
    t6 = (t0 + 6268);
    *((int *)t6) = 0;
    t7 = (t0 + 6272);
    *((int *)t7) = t14;
    t16 = 0;
    t19 = t14;

LAB56:    if (t16 <= t19)
        goto LAB57;

LAB59:    goto LAB11;

LAB21:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t43 = (27 - 9);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t5 = (t38 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 9;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t13 = (0 - 9);
    t53 = (t13 * -1);
    t53 = (t53 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t53;
    t14 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t1, t38);
    t6 = (t0 + 6276);
    *((int *)t6) = 0;
    t7 = (t0 + 6280);
    *((int *)t7) = t14;
    t16 = 0;
    t19 = t14;

LAB61:    if (t16 <= t19)
        goto LAB62;

LAB64:    goto LAB11;

LAB33:;
LAB34:    xsi_size_not_matching(10U, t74, 0);
    goto LAB35;

LAB36:    xsi_size_not_matching(10U, t74, 0);
    goto LAB37;

LAB39:    xsi_set_current_line(76, ng0);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t53 = (27 - 18);
    t60 = (t53 * 1U);
    t61 = (0 + t60);
    t8 = (t9 + t61);
    t10 = (t0 + 3552);
    t15 = (t10 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t8, 8U);
    xsi_driver_first_trans_delta(t10, 1U, 8U, 0LL);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (10 - 27);
    t43 = (t13 * -1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 3552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);

LAB40:    t1 = (t0 + 6252);
    t16 = *((int *)t1);
    t2 = (t0 + 6256);
    t19 = *((int *)t2);
    if (t16 == t19)
        goto LAB41;

LAB42:    t13 = (t16 + 1);
    t16 = t13;
    t5 = (t0 + 6252);
    *((int *)t5) = t16;
    goto LAB38;

LAB44:    xsi_set_current_line(82, ng0);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t53 = (27 - 17);
    t60 = (t53 * 1U);
    t61 = (0 + t60);
    t8 = (t9 + t61);
    t10 = (t0 + 3552);
    t15 = (t10 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t8, 8U);
    xsi_driver_first_trans_delta(t10, 0U, 8U, 0LL);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (18 - 27);
    t43 = (t13 * -1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 3552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_delta(t5, 8U, 1, 0LL);

LAB45:    t1 = (t0 + 6260);
    t16 = *((int *)t1);
    t2 = (t0 + 6264);
    t19 = *((int *)t2);
    if (t16 == t19)
        goto LAB46;

LAB47:    t13 = (t16 + 1);
    t16 = t13;
    t5 = (t0 + 6260);
    *((int *)t5) = t16;
    goto LAB43;

LAB48:    xsi_size_not_matching(9U, t74, 0);
    goto LAB49;

LAB50:    xsi_size_not_matching(9U, t74, 0);
    goto LAB51;

LAB52:    xsi_size_not_matching(9U, t74, 0);
    goto LAB53;

LAB54:    xsi_size_not_matching(14U, t60, 0);
    goto LAB55;

LAB57:    xsi_set_current_line(105, ng0);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t53 = (27 - 18);
    t60 = (t53 * 1U);
    t61 = (0 + t60);
    t8 = (t9 + t61);
    t10 = (t0 + 3552);
    t15 = (t10 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t8, 8U);
    xsi_driver_first_trans_delta(t10, 1U, 8U, 0LL);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 3552);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB58:    t1 = (t0 + 6268);
    t16 = *((int *)t1);
    t2 = (t0 + 6272);
    t19 = *((int *)t2);
    if (t16 == t19)
        goto LAB59;

LAB60:    t13 = (t16 + 1);
    t16 = t13;
    t5 = (t0 + 6268);
    *((int *)t5) = t16;
    goto LAB56;

LAB62:    xsi_set_current_line(111, ng0);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t53 = (27 - 17);
    t60 = (t53 * 1U);
    t61 = (0 + t60);
    t8 = (t9 + t61);
    t10 = (t0 + 3552);
    t15 = (t10 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t8, 8U);
    xsi_driver_first_trans_delta(t10, 0U, 8U, 0LL);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3552);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);

LAB63:    t1 = (t0 + 6276);
    t16 = *((int *)t1);
    t2 = (t0 + 6280);
    t19 = *((int *)t2);
    if (t16 == t19)
        goto LAB64;

LAB65:    t13 = (t16 + 1);
    t16 = t13;
    t5 = (t0 + 6276);
    *((int *)t5) = t16;
    goto LAB61;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/ALU_tb_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
