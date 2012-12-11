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
static const char *ng0 = "E:/mono/MonoCiclo/Register_File.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_2615964831_2781234708_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    int t24;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 4196U);
    t8 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t3 = (t8 < 8);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 592U);
    t6 = *((char **)t1);
    t1 = (t0 + 4196U);
    t8 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t6, t1);
    t7 = (t0 + 960U);
    t10 = *((char **)t7);
    t7 = (t0 + 4228U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t10, t7);
    t14 = (16 * t13);
    t23 = (t8 + t14);
    t24 = (t23 - 0);
    t15 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 520, 1, t23);
    t16 = (32U * t15);
    t17 = (0 + t16);
    t11 = (t2 + t17);
    t12 = (t0 + 2448);
    t18 = (t12 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 32U);
    xsi_driver_first_trans_fast_port(t12);

LAB12:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 4212U);
    t8 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t3 = (t8 < 8);
    if (t3 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 684U);
    t6 = *((char **)t1);
    t1 = (t0 + 4212U);
    t8 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t6, t1);
    t7 = (t0 + 960U);
    t10 = *((char **)t7);
    t7 = (t0 + 4228U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t10, t7);
    t14 = (16 * t13);
    t23 = (t8 + t14);
    t24 = (t23 - 0);
    t15 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 520, 1, t23);
    t16 = (32U * t15);
    t17 = (0 + t16);
    t11 = (t2 + t17);
    t12 = (t0 + 2484);
    t18 = (t12 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 32U);
    xsi_driver_first_trans_fast_port(t12);

LAB15:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 4244U);
    t8 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t3 = (t8 < 8);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 1052U);
    t6 = *((char **)t1);
    t1 = (t0 + 4244U);
    t8 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t6, t1);
    t7 = (t0 + 960U);
    t10 = *((char **)t7);
    t7 = (t0 + 4228U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t10, t7);
    t14 = (16 * t13);
    t23 = (t8 + t14);
    t24 = (t23 - 0);
    t15 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 520, 1, t23);
    t16 = (32U * t15);
    t17 = (0 + t16);
    t11 = (t2 + t17);
    t12 = (t0 + 2520);
    t18 = (t12 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 32U);
    xsi_driver_first_trans_fast_port(t12);

LAB18:    t1 = (t0 + 2368);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 752U);
    t5 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(50, ng0);
    t6 = (t0 + 1052U);
    t7 = *((char **)t6);
    t6 = (t0 + 4244U);
    t8 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t7, t6);
    t9 = (t8 < 8);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 1052U);
    t6 = *((char **)t1);
    t1 = (t0 + 4244U);
    t8 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t6, t1);
    t7 = (t0 + 960U);
    t10 = *((char **)t7);
    t7 = (t0 + 4228U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t10, t7);
    t14 = (16 * t13);
    t23 = (t8 + t14);
    t24 = (t23 - 0);
    t15 = (t24 * 1);
    t16 = (32U * t15);
    t17 = (0U + t16);
    t11 = (t0 + 2412);
    t12 = (t11 + 32U);
    t18 = *((char **)t12);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t2, 32U);
    xsi_driver_first_trans_delta(t11, t17, 32U, 0LL);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(51, ng0);
    t10 = (t0 + 1144U);
    t11 = *((char **)t10);
    t10 = (t0 + 1052U);
    t12 = *((char **)t10);
    t10 = (t0 + 4244U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t12, t10);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    t16 = (32U * t15);
    t17 = (0U + t16);
    t18 = (t0 + 2412);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t11, 32U);
    xsi_driver_first_trans_delta(t18, t17, 32U, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(59, ng0);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t6 = (t0 + 592U);
    t10 = *((char **)t6);
    t6 = (t0 + 4196U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t10, t6);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 520, 1, t13);
    t16 = (32U * t15);
    t17 = (0 + t16);
    t11 = (t7 + t17);
    t12 = (t0 + 2448);
    t18 = (t12 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB12;

LAB14:    xsi_set_current_line(64, ng0);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t6 = (t0 + 684U);
    t10 = *((char **)t6);
    t6 = (t0 + 4212U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t10, t6);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 520, 1, t13);
    t16 = (32U * t15);
    t17 = (0 + t16);
    t11 = (t7 + t17);
    t12 = (t0 + 2484);
    t18 = (t12 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB15;

LAB17:    xsi_set_current_line(69, ng0);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t6 = (t0 + 1052U);
    t10 = *((char **)t6);
    t6 = (t0 + 4244U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t10, t6);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 520, 1, t13);
    t16 = (32U * t15);
    t17 = (0 + t16);
    t11 = (t7 + t17);
    t12 = (t0 + 2520);
    t18 = (t12 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB18;

}


extern void work_a_2615964831_2781234708_init()
{
	static char *pe[] = {(void *)work_a_2615964831_2781234708_p_0};
	xsi_register_didat("work_a_2615964831_2781234708", "isim/tb_processor_isim_beh.exe.sim/work/a_2615964831_2781234708.didat");
	xsi_register_executes(pe);
}
