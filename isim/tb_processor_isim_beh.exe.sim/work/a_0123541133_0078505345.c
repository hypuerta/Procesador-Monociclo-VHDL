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
extern char *STD_TEXTIO;
static const char *ng1 = "ramfile";
static const char *ng2 = "E:/mono/MonoCiclo/InstructionMemory.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


char *work_a_0123541133_0078505345_sub_370326582_2853816798(char *t1, char *t2, char *t3)
{
    char t4[120];
    char t5[16];
    char t17[32];
    char t26[1024];
    char t40[16];
    char *t0;
    char *t6;
    char *t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    int t35;
    int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t41;

LAB0:    t6 = ((STD_TEXTIO) + 2032);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t9 = (t4 + 4U);
    t10 = xsi_create_file_variable_in_buffer(0, ng1, t6, t2, t8, 1);
    *((char **)t9) = t10;
    t11 = (t4 + 8U);
    t12 = ((STD_TEXTIO) + 1944);
    t13 = (t11 + 32U);
    *((char **)t13) = t12;
    t14 = (t11 + 24U);
    *((char **)t14) = 0;
    t15 = (t11 + 36U);
    *((int *)t15) = 1;
    t16 = (t11 + 28U);
    *((char **)t16) = 0;
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 31;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (31 - 0);
    t21 = (t20 * 1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t17 + 16U);
    t22 = (t19 + 0U);
    *((int *)t22) = 31;
    t22 = (t19 + 4U);
    *((int *)t22) = 0;
    t22 = (t19 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 31);
    t21 = (t23 * -1);
    t21 = (t21 + 1);
    t22 = (t19 + 12U);
    *((unsigned int *)t22) = t21;
    t22 = (t4 + 48U);
    t24 = (t1 + 2076);
    t25 = (t22 + 52U);
    *((char **)t25) = t24;
    t27 = (t22 + 36U);
    *((char **)t27) = t26;
    xsi_type_set_default_value(t24, t26, 0);
    t28 = (t22 + 40U);
    t29 = (t24 + 44U);
    t30 = *((char **)t29);
    *((char **)t28) = t30;
    t31 = (t22 + 48U);
    *((unsigned int *)t31) = 1024U;
    t32 = (t5 + 4U);
    t33 = (t2 != 0);
    if (t33 == 1)
        goto LAB3;

LAB2:    t34 = (t5 + 8U);
    *((char **)t34) = t3;
    t35 = 0;
    t36 = 31;

LAB4:    if (t35 <= t36)
        goto LAB5;

LAB7:    t6 = (t22 + 36U);
    t7 = *((char **)t6);
    t33 = (1024U != 1024U);
    if (t33 == 1)
        goto LAB10;

LAB11:    t0 = xsi_get_transient_memory(1024U);
    memcpy(t0, t7, 1024U);

LAB1:    xsi_access_variable_delete(t11);
    t6 = (t4 + 4U);
    t7 = *((char **)t6);
    xsi_delete_file_variable(t7);
    return t0;
LAB3:    *((char **)t32) = t2;
    goto LAB2;

LAB5:    t37 = (t4 + 4U);
    t38 = *((char **)t37);
    std_textio_readline(STD_TEXTIO, (char *)0, t38, t11);
    t6 = (t4 + 4U);
    t7 = *((char **)t6);
    t33 = std_textio_endfile(t7);
    if (t33 != 0)
        goto LAB7;

LAB8:    t6 = (t22 + 36U);
    t7 = *((char **)t6);
    t20 = (t35 - 0);
    t8 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t35);
    t21 = (32U * t8);
    t39 = (0 + t21);
    t6 = (t7 + t39);
    t9 = (t40 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 31;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t23 = (0 - 31);
    t41 = (t23 * -1);
    t41 = (t41 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t41;
    std_textio_read4(STD_TEXTIO, (char *)0, t11, t6, t40);

LAB6:    if (t35 == t36)
        goto LAB7;

LAB9:    t20 = (t35 + 1);
    t35 = t20;
    goto LAB4;

LAB10:    xsi_size_not_matching(1024U, 1024U, 0);
    goto LAB11;

LAB12:;
}

static void work_a_0123541133_0078505345_p_0(char *t0)
{
    char t12[16];
    char t18[16];
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
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(32, ng2);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(35, ng2);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3300U);
    t11 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t3 = (t11 > 0);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 1816);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(33, ng2);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t5 = t1;
    memset(t5, (unsigned char)2, 32U);
    t6 = (t0 + 1860);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(36, ng2);
    t5 = (t0 + 960U);
    t6 = *((char **)t5);
    t5 = (t0 + 592U);
    t7 = *((char **)t5);
    t5 = (t0 + 3300U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t7, t5);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t13);
    t16 = (32U * t15);
    t17 = (0 + t16);
    t8 = (t6 + t17);
    t9 = (t18 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 31;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t19 = (0 - 31);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t20;
    t10 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t12, t8, t18);
    t21 = (t0 + 1860);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    memcpy(t25, t10, 32U);
    xsi_driver_first_trans_fast_port(t21);
    goto LAB6;

}


extern void work_a_0123541133_0078505345_init()
{
	static char *pe[] = {(void *)work_a_0123541133_0078505345_p_0};
	static char *se[] = {(void *)work_a_0123541133_0078505345_sub_370326582_2853816798};
	xsi_register_didat("work_a_0123541133_0078505345", "isim/tb_processor_isim_beh.exe.sim/work/a_0123541133_0078505345.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
