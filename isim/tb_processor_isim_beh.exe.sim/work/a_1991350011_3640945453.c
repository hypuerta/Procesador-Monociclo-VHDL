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

/* This file is designed for use with ISim build 0xcb73ee62 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/mono/MonoCiclo/PC.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_0774719531;

char *ieee_p_0774719531_sub_767632659_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767668596_2162500114(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1991350011_3640945453_p_0(char *t0)
{
    char t17[16];
    char t22[16];
    char t32[16];
    char t33[16];
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
    int t11;
    int t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 936U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 2368);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 4014);
    t6 = (t0 + 2412);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1236U);
    t5 = *((char **)t2);
    t2 = (t0 + 4046);
    t11 = xsi_mem_cmp(t2, t5, 2U);
    if (t11 == 1)
        goto LAB9;

LAB14:    t7 = (t0 + 4048);
    t12 = xsi_mem_cmp(t7, t5, 2U);
    if (t12 == 1)
        goto LAB10;

LAB15:    t9 = (t0 + 4050);
    t13 = xsi_mem_cmp(t9, t5, 2U);
    if (t13 == 1)
        goto LAB11;

LAB16:    t14 = (t0 + 4052);
    t16 = xsi_mem_cmp(t14, t5, 2U);
    if (t16 == 1)
        goto LAB12;

LAB17:
LAB13:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 4086);
    t5 = (t0 + 2412);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast_port(t5);

LAB8:    goto LAB6;

LAB9:    xsi_set_current_line(30, ng0);
    t18 = (t0 + 592U);
    t19 = *((char **)t18);
    t18 = (t0 + 3728U);
    t20 = (t0 + 4054);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 0;
    t24 = (t23 + 4U);
    *((int *)t24) = 31;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t25 = (31 - 0);
    t26 = (t25 * 1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t24 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t17, t19, t18, t20, t22);
    t27 = (t0 + 2448);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    memcpy(t31, t24, 32U);
    xsi_driver_first_trans_fast(t27);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 2412);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB10:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 2448);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 2412);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB11:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 2448);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 2412);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB12:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 3776U);
    t5 = (t0 + 1144U);
    t6 = *((char **)t5);
    t5 = (t0 + 3776U);
    t7 = ieee_p_0774719531_sub_767632659_2162500114(IEEE_P_0774719531, t33, t2, t1, t6, t5);
    t8 = (t0 + 1144U);
    t9 = *((char **)t8);
    t8 = (t0 + 3776U);
    t10 = ieee_p_0774719531_sub_767632659_2162500114(IEEE_P_0774719531, t32, t7, t33, t9, t8);
    t14 = (t0 + 1144U);
    t15 = *((char **)t14);
    t14 = (t0 + 3776U);
    t18 = ieee_p_0774719531_sub_767632659_2162500114(IEEE_P_0774719531, t22, t10, t32, t15, t14);
    t19 = (t0 + 1420U);
    t20 = *((char **)t19);
    t19 = (t0 + 3824U);
    t21 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t17, t18, t22, t20, t19);
    t23 = (t0 + 2448);
    t24 = (t23 + 32U);
    t27 = *((char **)t24);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    memcpy(t29, t21, 32U);
    xsi_driver_first_trans_fast(t23);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 2412);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB18:;
}


extern void work_a_1991350011_3640945453_init()
{
	static char *pe[] = {(void *)work_a_1991350011_3640945453_p_0};
	xsi_register_didat("work_a_1991350011_3640945453", "isim/tb_processor_isim_beh.exe.sim/work/a_1991350011_3640945453.didat");
	xsi_register_executes(pe);
}
