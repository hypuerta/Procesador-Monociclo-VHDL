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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *IEEE_P_1242562249;
char *IEEE_P_0774719531;
char *STD_TEXTIO;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_0774719531_init();
    ieee_p_3620187407_init();
    std_textio_init();
    ieee_p_1242562249_init();
    work_a_1991350011_3640945453_init();
    work_a_0123541133_0078505345_init();
    work_a_4274463553_3212880686_init();
    work_a_0558449649_3212880686_init();
    work_a_2615964831_2781234708_init();
    work_a_0832606739_1499595665_init();
    work_a_3875023161_3212880686_init();
    work_a_2779910944_0608041911_init();
    work_a_3853510154_3212880686_init();
    work_a_1392511928_3212880686_init();
    work_a_3772210882_1700230207_init();
    work_a_1824764833_2110273606_init();
    work_a_2999631696_3212880686_init();
    work_a_1974907117_3212880686_init();
    work_a_3261551314_3212880686_init();
    work_a_0831512757_3212880686_init();
    work_a_2732317604_3212880686_init();
    work_a_1640669797_3829563078_init();
    work_a_2905102280_2372691052_init();


    xsi_register_tops("work_a_2905102280_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");

    return xsi_run_simulation(argc, argv);

}
