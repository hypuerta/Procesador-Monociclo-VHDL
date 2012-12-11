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
static const char *ng0 = "E:/mono/MonoCiclo/instruction.vhd";



static void work_a_4274463553_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    unsigned char t23;

LAB0:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 31);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 4805);
    t8 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t8 = 0;

LAB7:    if (t8 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 31);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 4807);
    t8 = 1;
    if (2U == 2U)
        goto LAB14;

LAB15:    t8 = 0;

LAB16:    if (t8 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 31);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 4809);
    t8 = 1;
    if (2U == 2U)
        goto LAB23;

LAB24:    t8 = 0;

LAB25:    if (t8 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 31);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 4811);
    t8 = 1;
    if (2U == 2U)
        goto LAB35;

LAB36:    t8 = 0;

LAB37:    if (t8 != 0)
        goto LAB32;

LAB34:
LAB33:    t1 = (t0 + 2552);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(25, ng0);
    t12 = (t0 + 592U);
    t13 = *((char **)t12);
    t14 = (31 - 31);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t12 = (t13 + t16);
    t17 = (t0 + 2596);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 2U);
    xsi_driver_first_trans_fast_port(t17);
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 29);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2632);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 30U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    t9 = 0;

LAB8:    if (t9 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t10 = (t1 + t9);
    t11 = (t6 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB6;

LAB10:    t9 = (t9 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(29, ng0);
    t12 = (t0 + 592U);
    t13 = *((char **)t12);
    t14 = (31 - 31);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t12 = (t13 + t16);
    t17 = (t0 + 2596);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 2U);
    xsi_driver_first_trans_fast_port(t17);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t22 = (29 - 31);
    t3 = (t22 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t8 = *((unsigned char *)t1);
    t6 = (t0 + 2668);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t8;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 28);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2704);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 24);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2740);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 3U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 21);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2776);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 22U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB12;

LAB14:    t9 = 0;

LAB17:    if (t9 < 2U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t10 = (t1 + t9);
    t11 = (t6 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB15;

LAB19:    t9 = (t9 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(36, ng0);
    t12 = (t0 + 592U);
    t13 = *((char **)t12);
    t14 = (31 - 31);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t12 = (t13 + t16);
    t17 = (t0 + 2596);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 2U);
    xsi_driver_first_trans_fast_port(t17);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 29);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2812);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 5U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 24);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2848);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 18);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2884);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 5U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t22 = (13 - 31);
    t3 = (t22 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t8 = *((unsigned char *)t1);
    t6 = (t0 + 2920);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t8;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t22 = (13 - 31);
    t3 = (t22 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t8 = *((unsigned char *)t1);
    t23 = (t8 == (unsigned char)2);
    if (t23 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 12);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2992);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 13U);
    xsi_driver_first_trans_fast_port(t6);

LAB30:    goto LAB21;

LAB23:    t9 = 0;

LAB26:    if (t9 < 2U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t10 = (t1 + t9);
    t11 = (t6 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB24;

LAB28:    t9 = (t9 + 1);
    goto LAB26;

LAB29:    xsi_set_current_line(42, ng0);
    t6 = (t0 + 592U);
    t7 = *((char **)t6);
    t9 = (31 - 4);
    t14 = (t9 * 1U);
    t15 = (0 + t14);
    t6 = (t7 + t15);
    t10 = (t0 + 2956);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t17 = *((char **)t13);
    memcpy(t17, t6, 5U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB30;

LAB32:    xsi_set_current_line(48, ng0);
    t12 = (t0 + 592U);
    t13 = *((char **)t12);
    t14 = (31 - 31);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t12 = (t13 + t16);
    t17 = (t0 + 2596);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 2U);
    xsi_driver_first_trans_fast_port(t17);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 29);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2812);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 5U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 24);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2848);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 18);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2884);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 5U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t22 = (13 - 31);
    t3 = (t22 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t8 = *((unsigned char *)t1);
    t6 = (t0 + 2920);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t8;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t22 = (13 - 31);
    t3 = (t22 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t8 = *((unsigned char *)t1);
    t23 = (t8 == (unsigned char)2);
    if (t23 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (31 - 12);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2992);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 13U);
    xsi_driver_first_trans_fast_port(t6);

LAB42:    goto LAB33;

LAB35:    t9 = 0;

LAB38:    if (t9 < 2U)
        goto LAB39;
    else
        goto LAB37;

LAB39:    t10 = (t1 + t9);
    t11 = (t6 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB36;

LAB40:    t9 = (t9 + 1);
    goto LAB38;

LAB41:    xsi_set_current_line(54, ng0);
    t6 = (t0 + 592U);
    t7 = *((char **)t6);
    t9 = (31 - 4);
    t14 = (t9 * 1U);
    t15 = (0 + t14);
    t6 = (t7 + t15);
    t10 = (t0 + 2956);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t17 = *((char **)t13);
    memcpy(t17, t6, 5U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB42;

}


extern void work_a_4274463553_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4274463553_3212880686_p_0};
	xsi_register_didat("work_a_4274463553_3212880686", "isim/tb_processor_isim_beh.exe.sim/work/a_4274463553_3212880686.didat");
	xsi_register_executes(pe);
}
