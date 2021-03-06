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
static const char *ng0 = "C:/Users/Victor Espinoza/Desktop/CECS 440/Lab 4 - Single Cycle MIPS Processor With Sorting Code/Lab_4_Single_Cycle_MIPS_With_Sorting_Code/src/SingleCycle_tb.v";
static const char *ng1 = "InstrMem";
static const char *ng2 = "DataMem";
static const char *ng3 = "outputFileMessages";
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};
static const char *ng6 = "PC = %h  ";
static const char *ng7 = "Reg = %h Value = %h";
static const char *ng8 = " ";
static const char *ng9 = "Wr_addr being changed = %h Wr_data being changed= %h";
static int ng10[] = {2, 0};
static unsigned int ng11[] = {208U, 0U};
static const char *ng12 = " 32 Largest Values sum: %h";
static unsigned int ng13[] = {256U, 0U};
static const char *ng14 = "32 Smallest Values sum: %h";
static unsigned int ng15[] = {257U, 0U};
static const char *ng16 = "    AND Every Location: %h";
static unsigned int ng17[] = {258U, 0U};
static const char *ng18 = "    AND Every Location:%h";
static const char *ng19 = "     OR Every Location: %h";
static unsigned int ng20[] = {259U, 0U};
static const char *ng21 = "              Checksum: %h";
static unsigned int ng22[] = {260U, 0U};



static void Always_43_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1288);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_45_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(45, ng0);

LAB2:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 5464);
    t2 = *((char **)t1);
    xsi_vlogfile_readmemh(ng1, 0, ((char*)(t2)), 0, 0, 0, 0);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 5488);
    t2 = *((char **)t1);
    xsi_vlogfile_readmemh(ng2, 0, ((char*)(t2)), 0, 0, 0, 0);

LAB1:    return;
}

static void Initial_50_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 3024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);

LAB4:    xsi_set_current_line(52, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname(ng3);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2832);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3592);
    *((int *)t2) = 1;
    t4 = (t0 + 3056);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(60, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 1448);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    goto LAB1;

}

static void Always_64_3(char *t0)
{
    char t21[8];
    char t23[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;

LAB0:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3608);
    *((int *)t2) = 1;
    t3 = (t0 + 3304);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5504);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 56U);
    t10 = *((char **)t9);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng6, 2, t0, (char)118, t10, 32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5528);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng8, 1, t0);

LAB8:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5616);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 5752);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng11)));
    memset(t21, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t37 = (t14 ^ t15);
    t38 = (t13 | t37);
    t39 = *((unsigned int *)t7);
    t40 = *((unsigned int *)t8);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB16;

LAB13:    if (t41 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t21) = 1;

LAB16:    t10 = (t21 + 4);
    t44 = *((unsigned int *)t10);
    t45 = (~(t44));
    t46 = *((unsigned int *)t21);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB17;

LAB18:
LAB19:    goto LAB2;

LAB6:    xsi_set_current_line(67, ng0);
    t6 = (t0 + 1608);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 5560);
    t10 = *((char **)t9);
    t16 = ((((char*)(t10))) + 40U);
    t17 = *((char **)t16);
    t16 = (t0 + 5592);
    t18 = *((char **)t16);
    t19 = ((((char*)(t18))) + 40U);
    t20 = *((char **)t19);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 1, 0, 0, ng7, 3, t0, (char)118, t17, 5, (char)118, t20, 32);
    goto LAB8;

LAB9:    xsi_set_current_line(71, ng0);

LAB12:    xsi_set_current_line(72, ng0);
    t6 = (t0 + 1608);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 5640);
    t10 = *((char **)t9);
    t16 = ((((char*)(t10))) + 40U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng10)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_rshift(t21, 32, t17, 32, t16, 32);
    t18 = (t0 + 5664);
    t19 = *((char **)t18);
    t20 = ((((char*)(t19))) + 56U);
    t22 = *((char **)t20);
    t24 = (t0 + 5688);
    t25 = *((char **)t24);
    t26 = ((((char*)(t25))) + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 5712);
    t29 = *((char **)t28);
    t30 = ((((char*)(t29))) + 64U);
    t31 = *((char **)t30);
    t32 = (t0 + 5736);
    t33 = *((char **)t32);
    t34 = ((((char*)(t33))) + 40U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng10)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_rshift(t36, 32, t35, 32, t34, 32);
    xsi_vlog_generic_get_array_select_value(t23, 32, t22, t27, t31, 2, 1, t36, 32, 2);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 1, 0, 0, ng9, 3, t0, (char)118, t21, 32, (char)118, t23, 32);
    goto LAB11;

LAB15:    t9 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(76, ng0);

LAB20:    xsi_set_current_line(77, ng0);
    t16 = (t0 + 5776);
    t17 = *((char **)t16);
    t18 = ((((char*)(t17))) + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 5800);
    t22 = *((char **)t20);
    t24 = ((((char*)(t22))) + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 5824);
    t27 = *((char **)t26);
    t28 = ((((char*)(t27))) + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng13)));
    xsi_vlog_generic_get_array_select_value(t23, 32, t19, t25, t29, 2, 1, t30, 10, 2);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t0, (char)118, t23, 32);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5848);
    t6 = *((char **)t5);
    t7 = ((((char*)(t6))) + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 5872);
    t10 = *((char **)t9);
    t16 = ((((char*)(t10))) + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 5896);
    t19 = *((char **)t18);
    t20 = ((((char*)(t19))) + 64U);
    t22 = *((char **)t20);
    t24 = ((char*)((ng13)));
    xsi_vlog_generic_get_array_select_value(t21, 32, t8, t17, t22, 2, 1, t24, 10, 2);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng12, 2, t0, (char)118, t21, 32);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 5920);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 5944);
    t7 = *((char **)t6);
    t8 = ((((char*)(t7))) + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 5968);
    t16 = *((char **)t10);
    t17 = ((((char*)(t16))) + 64U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t21, 32, t5, t9, t18, 2, 1, t19, 10, 2);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t21, 32);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5992);
    t6 = *((char **)t5);
    t7 = ((((char*)(t6))) + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 6016);
    t10 = *((char **)t9);
    t16 = ((((char*)(t10))) + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 6040);
    t19 = *((char **)t18);
    t20 = ((((char*)(t19))) + 64U);
    t22 = *((char **)t20);
    t24 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t21, 32, t8, t17, t22, 2, 1, t24, 10, 2);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng14, 2, t0, (char)118, t21, 32);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 6064);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 6088);
    t7 = *((char **)t6);
    t8 = ((((char*)(t7))) + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 6112);
    t16 = *((char **)t10);
    t17 = ((((char*)(t16))) + 64U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t21, 32, t5, t9, t18, 2, 1, t19, 10, 2);
    xsi_vlogfile_write(1, 0, 0, ng16, 2, t0, (char)118, t21, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6136);
    t6 = *((char **)t5);
    t7 = ((((char*)(t6))) + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 6160);
    t10 = *((char **)t9);
    t16 = ((((char*)(t10))) + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 6184);
    t19 = *((char **)t18);
    t20 = ((((char*)(t19))) + 64U);
    t22 = *((char **)t20);
    t24 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t21, 32, t8, t17, t22, 2, 1, t24, 10, 2);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng18, 2, t0, (char)118, t21, 32);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 6208);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 6232);
    t7 = *((char **)t6);
    t8 = ((((char*)(t7))) + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 6256);
    t16 = *((char **)t10);
    t17 = ((((char*)(t16))) + 64U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng20)));
    xsi_vlog_generic_get_array_select_value(t21, 32, t5, t9, t18, 2, 1, t19, 10, 2);
    xsi_vlogfile_write(1, 0, 0, ng19, 2, t0, (char)118, t21, 32);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6280);
    t6 = *((char **)t5);
    t7 = ((((char*)(t6))) + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 6304);
    t10 = *((char **)t9);
    t16 = ((((char*)(t10))) + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 6328);
    t19 = *((char **)t18);
    t20 = ((((char*)(t19))) + 64U);
    t22 = *((char **)t20);
    t24 = ((char*)((ng20)));
    xsi_vlog_generic_get_array_select_value(t21, 32, t8, t17, t22, 2, 1, t24, 10, 2);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng19, 2, t0, (char)118, t21, 32);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 6352);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 6376);
    t7 = *((char **)t6);
    t8 = ((((char*)(t7))) + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 6400);
    t16 = *((char **)t10);
    t17 = ((((char*)(t16))) + 64U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng22)));
    xsi_vlog_generic_get_array_select_value(t21, 32, t5, t9, t18, 2, 1, t19, 10, 2);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t0, (char)118, t21, 32);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6424);
    t6 = *((char **)t5);
    t7 = ((((char*)(t6))) + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 6448);
    t10 = *((char **)t9);
    t16 = ((((char*)(t10))) + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 6472);
    t19 = *((char **)t18);
    t20 = ((((char*)(t19))) + 64U);
    t22 = *((char **)t20);
    t24 = ((char*)((ng22)));
    xsi_vlog_generic_get_array_select_value(t21, 32, t8, t17, t22, 2, 1, t24, 10, 2);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng21, 2, t0, (char)118, t21, 32);
    xsi_set_current_line(87, ng0);
    xsi_vlog_stop(1);
    goto LAB19;

}


extern void work_m_00000000001531900952_4085453500_init()
{
	static char *pe[] = {(void *)Always_43_0,(void *)Initial_45_1,(void *)Initial_50_2,(void *)Always_64_3};
	xsi_register_didat("work_m_00000000001531900952_4085453500", "isim/SingleCycle_tb_isim_beh.exe.sim/work/m_00000000001531900952_4085453500.didat");
	xsi_register_executes(pe);
}
