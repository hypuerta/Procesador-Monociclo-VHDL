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
static const char *ng0 = "E:/mono/MonoCiclo/control_Unit.vhd";



static void work_a_3853510154_3212880686_p_0(char *t0)
{
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
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    unsigned int t26;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    unsigned char t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 4966);
    t11 = xsi_mem_cmp(t1, t2, 2U);
    if (t11 == 1)
        goto LAB6;

LAB11:    t6 = (t0 + 4968);
    t12 = xsi_mem_cmp(t6, t2, 2U);
    if (t12 == 1)
        goto LAB7;

LAB12:    t8 = (t0 + 4970);
    t13 = xsi_mem_cmp(t8, t2, 2U);
    if (t13 == 1)
        goto LAB8;

LAB13:    t10 = (t0 + 4972);
    t15 = xsi_mem_cmp(t10, t2, 2U);
    if (t15 == 1)
        goto LAB9;

LAB14:
LAB10:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 5044);
    t5 = (t0 + 2780);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB5:
LAB3:    t1 = (t0 + 2736);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 4964);
    t6 = (t0 + 2780);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB6:    xsi_set_current_line(32, ng0);
    t16 = (t0 + 4974);
    t18 = (t0 + 2780);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t16, 2U);
    xsi_driver_first_trans_fast_port(t18);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 4976);
    t5 = (t0 + 2816);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 2852);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 2924);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB7:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 4978);
    t5 = (t0 + 2780);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2960);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2996);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2924);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB8:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 4980);
    t3 = 1;
    if (6U == 6U)
        goto LAB19;

LAB20:    t3 = 0;

LAB21:    if (t3 != 0)
        goto LAB16;

LAB18:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 4990);
    t3 = 1;
    if (6U == 6U)
        goto LAB27;

LAB28:    t3 = 0;

LAB29:    if (t3 != 0)
        goto LAB25;

LAB26:
LAB17:    goto LAB5;

LAB9:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 4998);
    t24 = 1;
    if (6U == 6U)
        goto LAB42;

LAB43:    t24 = 0;

LAB44:    if (t24 == 1)
        goto LAB39;

LAB40:    t8 = (t0 + 776U);
    t9 = *((char **)t8);
    t8 = (t0 + 5004);
    t25 = 1;
    if (6U == 6U)
        goto LAB48;

LAB49:    t25 = 0;

LAB50:    t4 = t25;

LAB41:    if (t4 == 1)
        goto LAB36;

LAB37:    t17 = (t0 + 776U);
    t18 = *((char **)t17);
    t17 = (t0 + 5010);
    t27 = 1;
    if (6U == 6U)
        goto LAB54;

LAB55:    t27 = 0;

LAB56:    t3 = t27;

LAB38:    if (t3 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2924);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 5040);
    t5 = (t0 + 2780);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2852);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 5042);
    t5 = (t0 + 2816);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 3032);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t11 = (4 - 5);
    t23 = (t11 * -1);
    t26 = (1U * t23);
    t28 = (0 + t26);
    t1 = (t2 + t28);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB87;

LAB89:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2996);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB88:
LAB34:    goto LAB5;

LAB15:;
LAB16:    xsi_set_current_line(42, ng0);
    t8 = (t0 + 4986);
    t10 = (t0 + 2780);
    t14 = (t10 + 32U);
    t16 = *((char **)t14);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 2U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 3032);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2852);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 3068);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 3104);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 4988);
    t5 = (t0 + 2816);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2924);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB17;

LAB19:    t23 = 0;

LAB22:    if (t23 < 6U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t6 = (t2 + t23);
    t7 = (t1 + t23);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB20;

LAB24:    t23 = (t23 + 1);
    goto LAB22;

LAB25:    xsi_set_current_line(51, ng0);
    t8 = (t0 + 4996);
    t10 = (t0 + 2780);
    t14 = (t10 + 32U);
    t16 = *((char **)t14);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 2U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 3032);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2852);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 3068);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 3104);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2924);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB17;

LAB27:    t23 = 0;

LAB30:    if (t23 < 6U)
        goto LAB31;
    else
        goto LAB29;

LAB31:    t6 = (t2 + t23);
    t7 = (t1 + t23);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB28;

LAB32:    t23 = (t23 + 1);
    goto LAB30;

LAB33:    xsi_set_current_line(61, ng0);
    t22 = (t0 + 776U);
    t29 = *((char **)t22);
    t22 = (t0 + 5016);
    t31 = 1;
    if (6U == 6U)
        goto LAB63;

LAB64:    t31 = 0;

LAB65:    if (t31 != 0)
        goto LAB60;

LAB62:
LAB61:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 5024);
    t3 = 1;
    if (6U == 6U)
        goto LAB72;

LAB73:    t3 = 0;

LAB74:    if (t3 != 0)
        goto LAB69;

LAB71:
LAB70:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 5032);
    t3 = 1;
    if (6U == 6U)
        goto LAB81;

LAB82:    t3 = 0;

LAB83:    if (t3 != 0)
        goto LAB78;

LAB80:
LAB79:    goto LAB34;

LAB36:    t3 = (unsigned char)1;
    goto LAB38;

LAB39:    t4 = (unsigned char)1;
    goto LAB41;

LAB42:    t23 = 0;

LAB45:    if (t23 < 6U)
        goto LAB46;
    else
        goto LAB44;

LAB46:    t6 = (t2 + t23);
    t7 = (t1 + t23);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB43;

LAB47:    t23 = (t23 + 1);
    goto LAB45;

LAB48:    t26 = 0;

LAB51:    if (t26 < 6U)
        goto LAB52;
    else
        goto LAB50;

LAB52:    t14 = (t9 + t26);
    t16 = (t8 + t26);
    if (*((unsigned char *)t14) != *((unsigned char *)t16))
        goto LAB49;

LAB53:    t26 = (t26 + 1);
    goto LAB51;

LAB54:    t28 = 0;

LAB57:    if (t28 < 6U)
        goto LAB58;
    else
        goto LAB56;

LAB58:    t20 = (t18 + t28);
    t21 = (t17 + t28);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB55;

LAB59:    t28 = (t28 + 1);
    goto LAB57;

LAB60:    xsi_set_current_line(62, ng0);
    t35 = (t0 + 2924);
    t36 = (t35 + 32U);
    t37 = *((char **)t36);
    t38 = (t37 + 40U);
    t39 = *((char **)t38);
    *((unsigned char *)t39) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t35);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 5022);
    t5 = (t0 + 2780);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3140);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB61;

LAB63:    t32 = 0;

LAB66:    if (t32 < 6U)
        goto LAB67;
    else
        goto LAB65;

LAB67:    t33 = (t29 + t32);
    t34 = (t22 + t32);
    if (*((unsigned char *)t33) != *((unsigned char *)t34))
        goto LAB64;

LAB68:    t32 = (t32 + 1);
    goto LAB66;

LAB69:    xsi_set_current_line(67, ng0);
    t8 = (t0 + 2924);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t14 = (t10 + 40U);
    t16 = *((char **)t14);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 5030);
    t5 = (t0 + 2780);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 3140);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB70;

LAB72:    t23 = 0;

LAB75:    if (t23 < 6U)
        goto LAB76;
    else
        goto LAB74;

LAB76:    t6 = (t2 + t23);
    t7 = (t1 + t23);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB73;

LAB77:    t23 = (t23 + 1);
    goto LAB75;

LAB78:    xsi_set_current_line(72, ng0);
    t8 = (t0 + 5038);
    t10 = (t0 + 2780);
    t14 = (t10 + 32U);
    t16 = *((char **)t14);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 2U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2852);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 3032);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2924);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB79;

LAB81:    t23 = 0;

LAB84:    if (t23 < 6U)
        goto LAB85;
    else
        goto LAB83;

LAB85:    t6 = (t2 + t23);
    t7 = (t1 + t23);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB82;

LAB86:    t23 = (t23 + 1);
    goto LAB84;

LAB87:    xsi_set_current_line(85, ng0);
    t5 = (t0 + 2996);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB88;

}


extern void work_a_3853510154_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3853510154_3212880686_p_0};
	xsi_register_didat("work_a_3853510154_3212880686", "isim/tb_processor_isim_beh.exe.sim/work/a_3853510154_3212880686.didat");
	xsi_register_executes(pe);
}
