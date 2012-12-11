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
static const char *ng0 = "E:/mono/MonoCiclo/sign_extension.vhd";



static void work_a_3875023161_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(15, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 1584);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 13U);
    xsi_driver_first_trans_delta(t1, 19U, 13U, 0LL);
    xsi_set_current_line(16, ng0);
    t1 = xsi_get_transient_memory(19U);
    memset(t1, 0, 19U);
    t2 = t1;
    t3 = (t0 + 592U);
    t4 = *((char **)t3);
    t7 = (12 - 12);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t3 = (t4 + t10);
    t11 = *((unsigned char *)t3);
    if (-1 == -1)
        goto LAB2;

LAB3:    t12 = 13;

LAB4:    t13 = (t12 - 31);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t5 = (t2 + t15);
    t16 = (13 - 31);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t18 = (1U * t17);
    memset(t5, t11, t18);
    t6 = (t0 + 1584);
    t19 = (t6 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 19U);
    xsi_driver_first_trans_delta(t6, 0U, 19U, 0LL);
    t1 = (t0 + 1540);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t12 = 31;
    goto LAB4;

}


extern void work_a_3875023161_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3875023161_3212880686_p_0};
	xsi_register_didat("work_a_3875023161_3212880686", "isim/tb_processor_isim_beh.exe.sim/work/a_3875023161_3212880686.didat");
	xsi_register_executes(pe);
}
