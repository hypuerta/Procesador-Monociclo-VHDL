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
static const char *ng0 = "E:/mono/MonoCiclo/branc_Unit.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1392511928_3212880686_p_0(char *t0)
{
    char t36[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t32;
    char *t33;
    int t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned char t47;
    unsigned char t48;
    unsigned char t49;
    unsigned char t50;
    unsigned int t51;
    unsigned char t52;
    unsigned char t53;
    unsigned char t54;

LAB0:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2276);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1052U);
    t5 = *((char **)t1);
    t1 = (t0 + 2320);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 22U);
    xsi_driver_first_trans_delta(t1, 10U, 22U, 0LL);
    xsi_set_current_line(26, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    t5 = (t0 + 1052U);
    t6 = *((char **)t5);
    t10 = (21 - 21);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t5 = (t6 + t13);
    t3 = *((unsigned char *)t5);
    if (-1 == -1)
        goto LAB5;

LAB6:    t14 = 22;

LAB7:    t15 = (t14 - 31);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t7 = (t2 + t17);
    t18 = (22 - 31);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t20 = (1U * t19);
    memset(t7, t3, t20);
    t8 = (t0 + 2320);
    t9 = (t8 + 32U);
    t21 = *((char **)t9);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    memcpy(t23, t1, 10U);
    xsi_driver_first_trans_delta(t8, 0U, 10U, 0LL);
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 4145);
    t10 = xsi_mem_cmp(t1, t2, 4U);
    if (t10 == 1)
        goto LAB9;

LAB18:    t6 = (t0 + 4149);
    t15 = xsi_mem_cmp(t6, t2, 4U);
    if (t15 == 1)
        goto LAB10;

LAB19:    t8 = (t0 + 4153);
    t18 = xsi_mem_cmp(t8, t2, 4U);
    if (t18 == 1)
        goto LAB11;

LAB20:    t21 = (t0 + 4157);
    t24 = xsi_mem_cmp(t21, t2, 4U);
    if (t24 == 1)
        goto LAB12;

LAB21:    t23 = (t0 + 4161);
    t26 = xsi_mem_cmp(t23, t2, 4U);
    if (t26 == 1)
        goto LAB13;

LAB22:    t27 = (t0 + 4165);
    t29 = xsi_mem_cmp(t27, t2, 4U);
    if (t29 == 1)
        goto LAB14;

LAB23:    t30 = (t0 + 4169);
    t32 = xsi_mem_cmp(t30, t2, 4U);
    if (t32 == 1)
        goto LAB15;

LAB24:    t33 = (t0 + 4173);
    t35 = xsi_mem_cmp(t33, t2, 4U);
    if (t35 == 1)
        goto LAB16;

LAB25:
LAB17:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 4177);
    t5 = (t0 + 2356);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast_port(t5);

LAB8:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB54;

LAB56:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t10 = (0 - 3);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t47 = *((unsigned char *)t1);
    t48 = (t47 == (unsigned char)2);
    if (t48 == 1)
        goto LAB63;

LAB64:    t4 = (unsigned char)0;

LAB65:    if (t4 == 1)
        goto LAB60;

LAB61:    t3 = (unsigned char)0;

LAB62:    if (t3 != 0)
        goto LAB57;

LAB59:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 2428);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast_port(t1);

LAB58:
LAB55:    goto LAB3;

LAB5:    t14 = 31;
    goto LAB7;

LAB9:    xsi_set_current_line(28, ng0);
    t37 = (t0 + 684U);
    t38 = *((char **)t37);
    t37 = (t0 + 3944U);
    t39 = (t0 + 1420U);
    t40 = *((char **)t39);
    t39 = (t0 + 4024U);
    t41 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t36, t38, t37, t40, t39);
    t42 = (t0 + 2356);
    t43 = (t42 + 32U);
    t44 = *((char **)t43);
    t45 = (t44 + 40U);
    t46 = *((char **)t45);
    memcpy(t46, t41, 32U);
    xsi_driver_first_trans_fast_port(t42);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB10:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t10 = (2 - 3);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 3944U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t36, t2, t1, 1);
    t6 = (t0 + 2356);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t21 = *((char **)t9);
    memcpy(t21, t5, 32U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB28:    goto LAB8;

LAB11:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t10 = (2 - 3);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB30;

LAB32:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 3944U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t36, t2, t1, 1);
    t6 = (t0 + 2356);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t21 = *((char **)t9);
    memcpy(t21, t5, 32U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB31:    goto LAB8;

LAB12:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t10 = (3 - 3);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t4 = *((unsigned char *)t1);
    t47 = (t4 == (unsigned char)2);
    if (t47 == 1)
        goto LAB36;

LAB37:    t3 = (unsigned char)0;

LAB38:    if (t3 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 3944U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t36, t2, t1, 1);
    t6 = (t0 + 2356);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t21 = *((char **)t9);
    memcpy(t21, t5, 32U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB34:    goto LAB8;

LAB13:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t10 = (3 - 3);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB39;

LAB41:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 3944U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t36, t2, t1, 1);
    t6 = (t0 + 2356);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t21 = *((char **)t9);
    memcpy(t21, t5, 32U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB40:    goto LAB8;

LAB14:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t10 = (3 - 3);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB42;

LAB44:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 3944U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t36, t2, t1, 1);
    t6 = (t0 + 2356);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t21 = *((char **)t9);
    memcpy(t21, t5, 32U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB43:    goto LAB8;

LAB15:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t10 = (3 - 3);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t4 = *((unsigned char *)t1);
    t47 = (t4 == (unsigned char)3);
    if (t47 == 1)
        goto LAB48;

LAB49:    t5 = (t0 + 960U);
    t6 = *((char **)t5);
    t15 = (2 - 3);
    t14 = (t15 * -1);
    t16 = (1U * t14);
    t17 = (0 + t16);
    t5 = (t6 + t17);
    t48 = *((unsigned char *)t5);
    t49 = (t48 == (unsigned char)3);
    t3 = t49;

LAB50:    if (t3 != 0)
        goto LAB45;

LAB47:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 3944U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t36, t2, t1, 1);
    t6 = (t0 + 2356);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t21 = *((char **)t9);
    memcpy(t21, t5, 32U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB46:    goto LAB8;

LAB16:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t10 = (2 - 3);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB51;

LAB53:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 3944U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t36, t2, t1, 1);
    t6 = (t0 + 2356);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t21 = *((char **)t9);
    memcpy(t21, t5, 32U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB52:    goto LAB8;

LAB26:;
LAB27:    xsi_set_current_line(31, ng0);
    t5 = (t0 + 684U);
    t6 = *((char **)t5);
    t5 = (t0 + 3944U);
    t7 = (t0 + 1420U);
    t8 = *((char **)t7);
    t7 = (t0 + 4024U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t36, t6, t5, t8, t7);
    t21 = (t0 + 2356);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t25 = (t23 + 40U);
    t27 = *((char **)t25);
    memcpy(t27, t9, 32U);
    xsi_driver_first_trans_fast_port(t21);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB28;

LAB30:    xsi_set_current_line(38, ng0);
    t5 = (t0 + 684U);
    t6 = *((char **)t5);
    t5 = (t0 + 3944U);
    t7 = (t0 + 1420U);
    t8 = *((char **)t7);
    t7 = (t0 + 4024U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t36, t6, t5, t8, t7);
    t21 = (t0 + 2356);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t25 = (t23 + 40U);
    t27 = *((char **)t25);
    memcpy(t27, t9, 32U);
    xsi_driver_first_trans_fast_port(t21);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB33:    xsi_set_current_line(45, ng0);
    t7 = (t0 + 684U);
    t8 = *((char **)t7);
    t7 = (t0 + 3944U);
    t9 = (t0 + 1420U);
    t21 = *((char **)t9);
    t9 = (t0 + 4024U);
    t22 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t36, t8, t7, t21, t9);
    t23 = (t0 + 2356);
    t25 = (t23 + 32U);
    t27 = *((char **)t25);
    t28 = (t27 + 40U);
    t30 = *((char **)t28);
    memcpy(t30, t22, 32U);
    xsi_driver_first_trans_fast_port(t23);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB34;

LAB36:    t5 = (t0 + 960U);
    t6 = *((char **)t5);
    t15 = (2 - 3);
    t14 = (t15 * -1);
    t16 = (1U * t14);
    t17 = (0 + t16);
    t5 = (t6 + t17);
    t48 = *((unsigned char *)t5);
    t49 = (t48 == (unsigned char)2);
    t3 = t49;
    goto LAB38;

LAB39:    xsi_set_current_line(52, ng0);
    t5 = (t0 + 684U);
    t6 = *((char **)t5);
    t5 = (t0 + 3944U);
    t7 = (t0 + 1420U);
    t8 = *((char **)t7);
    t7 = (t0 + 4024U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t36, t6, t5, t8, t7);
    t21 = (t0 + 2356);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t25 = (t23 + 40U);
    t27 = *((char **)t25);
    memcpy(t27, t9, 32U);
    xsi_driver_first_trans_fast_port(t21);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB40;

LAB42:    xsi_set_current_line(59, ng0);
    t5 = (t0 + 684U);
    t6 = *((char **)t5);
    t5 = (t0 + 3944U);
    t7 = (t0 + 1420U);
    t8 = *((char **)t7);
    t7 = (t0 + 4024U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t36, t6, t5, t8, t7);
    t21 = (t0 + 2356);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t25 = (t23 + 40U);
    t27 = *((char **)t25);
    memcpy(t27, t9, 32U);
    xsi_driver_first_trans_fast_port(t21);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB43;

LAB45:    xsi_set_current_line(66, ng0);
    t7 = (t0 + 684U);
    t8 = *((char **)t7);
    t7 = (t0 + 3944U);
    t9 = (t0 + 1420U);
    t21 = *((char **)t9);
    t9 = (t0 + 4024U);
    t22 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t36, t8, t7, t21, t9);
    t23 = (t0 + 2356);
    t25 = (t23 + 32U);
    t27 = *((char **)t25);
    t28 = (t27 + 40U);
    t30 = *((char **)t28);
    memcpy(t30, t22, 32U);
    xsi_driver_first_trans_fast_port(t23);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB46;

LAB48:    t3 = (unsigned char)1;
    goto LAB50;

LAB51:    xsi_set_current_line(73, ng0);
    t5 = (t0 + 684U);
    t6 = *((char **)t5);
    t5 = (t0 + 3944U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t36, t6, t5, 1);
    t8 = (t0 + 2356);
    t9 = (t8 + 32U);
    t21 = *((char **)t9);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    memcpy(t23, t7, 32U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB52;

LAB54:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2428);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB55;

LAB57:    xsi_set_current_line(86, ng0);
    t9 = (t0 + 1328U);
    t21 = *((char **)t9);
    t54 = *((unsigned char *)t21);
    t9 = (t0 + 2428);
    t22 = (t9 + 32U);
    t23 = *((char **)t22);
    t25 = (t23 + 40U);
    t27 = *((char **)t25);
    *((unsigned char *)t27) = t54;
    xsi_driver_first_trans_fast_port(t9);
    goto LAB58;

LAB60:    t7 = (t0 + 868U);
    t8 = *((char **)t7);
    t18 = (2 - 3);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t51 = (0 + t20);
    t7 = (t8 + t51);
    t52 = *((unsigned char *)t7);
    t53 = (t52 == (unsigned char)2);
    t3 = t53;
    goto LAB62;

LAB63:    t5 = (t0 + 868U);
    t6 = *((char **)t5);
    t15 = (1 - 3);
    t14 = (t15 * -1);
    t16 = (1U * t14);
    t17 = (0 + t16);
    t5 = (t6 + t17);
    t49 = *((unsigned char *)t5);
    t50 = (t49 == (unsigned char)2);
    t4 = t50;
    goto LAB65;

}


extern void work_a_1392511928_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1392511928_3212880686_p_0};
	xsi_register_didat("work_a_1392511928_3212880686", "isim/tb_processor_isim_beh.exe.sim/work/a_1392511928_3212880686.didat");
	xsi_register_executes(pe);
}
