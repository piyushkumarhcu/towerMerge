// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _stitchNeighbors_HH_
#define _stitchNeighbors_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct stitchNeighbors : public sc_module {
    // Port declarations 5
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > Ai_data_V;
    sc_in< sc_lv<32> > Bi_data_V;
    sc_out< sc_lv<32> > ap_return_0;
    sc_out< sc_lv<32> > ap_return_1;


    // Module declarations
    stitchNeighbors(sc_module_name name);
    SC_HAS_PROCESS(stitchNeighbors);

    ~stitchNeighbors();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<3> > trunc_ln_fu_72_p4;
    sc_signal< sc_lv<3> > trunc_ln1503_1_fu_88_p4;
    sc_signal< sc_lv<3> > trunc_ln1503_2_fu_104_p4;
    sc_signal< sc_lv<3> > trunc_ln1503_3_fu_114_p4;
    sc_signal< sc_lv<10> > trunc_ln214_fu_130_p1;
    sc_signal< sc_lv<10> > trunc_ln214_1_fu_134_p1;
    sc_signal< sc_lv<11> > rhs_V_fu_142_p1;
    sc_signal< sc_lv<11> > lhs_V_fu_138_p1;
    sc_signal< sc_lv<11> > ret_V_fu_146_p2;
    sc_signal< sc_lv<1> > tmp_2_fu_152_p3;
    sc_signal< sc_lv<10> > pegged_cEtSum_V_fu_160_p2;
    sc_signal< sc_lv<10> > trunc_ln1503_4_fu_180_p4;
    sc_signal< sc_lv<11> > lhs_V_1_fu_190_p1;
    sc_signal< sc_lv<11> > ret_V_1_fu_194_p2;
    sc_signal< sc_lv<1> > tmp_3_fu_200_p3;
    sc_signal< sc_lv<10> > pegged_tEtSum_V_fu_208_p2;
    sc_signal< sc_lv<10> > trunc_ln1503_5_fu_222_p4;
    sc_signal< sc_lv<9> > tmp_fu_238_p4;
    sc_signal< sc_lv<10> > pegged_tEtSum_V_1_fu_214_p3;
    sc_signal< sc_lv<10> > pegged_cEtSum_V_1_fu_166_p3;
    sc_signal< sc_lv<6> > tmp_1_fu_260_p4;
    sc_signal< sc_lv<10> > tEt_leftOver_V_fu_232_p2;
    sc_signal< sc_lv<11> > lhs_V_2_fu_284_p1;
    sc_signal< sc_lv<11> > ret_V_4_fu_288_p2;
    sc_signal< sc_lv<1> > tmp_4_fu_294_p3;
    sc_signal< sc_lv<10> > pegged_tEtSum_V_2_fu_302_p2;
    sc_signal< sc_lv<10> > tEt_leftOver_V_1_fu_316_p2;
    sc_signal< sc_lv<32> > tmp4_fu_322_p5;
    sc_signal< sc_lv<10> > pegged_tEtSum_V_3_fu_308_p3;
    sc_signal< sc_lv<1> > icmp_ln879_1_fu_98_p2;
    sc_signal< sc_lv<1> > phiStitch_fu_124_p2;
    sc_signal< sc_lv<1> > and_ln879_fu_354_p2;
    sc_signal< sc_lv<1> > icmp_ln879_fu_82_p2;
    sc_signal< sc_lv<1> > and_ln879_1_fu_360_p2;
    sc_signal< sc_lv<1> > icmp_ln895_fu_174_p2;
    sc_signal< sc_lv<1> > and_ln895_fu_366_p2;
    sc_signal< sc_lv<32> > ret_V_2_fu_248_p5;
    sc_signal< sc_lv<1> > xor_ln895_fu_380_p2;
    sc_signal< sc_lv<1> > and_ln895_1_fu_386_p2;
    sc_signal< sc_lv<32> > ret_V_5_fu_334_p2;
    sc_signal< sc_lv<32> > select_ln895_fu_372_p3;
    sc_signal< sc_lv<32> > ret_V_3_fu_270_p6;
    sc_signal< sc_lv<32> > ret_V_6_fu_340_p6;
    sc_signal< sc_lv<32> > select_ln895_2_fu_400_p3;
    sc_signal< sc_lv<32> > select_ln895_1_fu_392_p3;
    sc_signal< sc_lv<32> > select_ln895_3_fu_408_p3;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<10> ap_const_lv10_3FF;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_400000;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_and_ln879_1_fu_360_p2();
    void thread_and_ln879_fu_354_p2();
    void thread_and_ln895_1_fu_386_p2();
    void thread_and_ln895_fu_366_p2();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_icmp_ln879_1_fu_98_p2();
    void thread_icmp_ln879_fu_82_p2();
    void thread_icmp_ln895_fu_174_p2();
    void thread_lhs_V_1_fu_190_p1();
    void thread_lhs_V_2_fu_284_p1();
    void thread_lhs_V_fu_138_p1();
    void thread_pegged_cEtSum_V_1_fu_166_p3();
    void thread_pegged_cEtSum_V_fu_160_p2();
    void thread_pegged_tEtSum_V_1_fu_214_p3();
    void thread_pegged_tEtSum_V_2_fu_302_p2();
    void thread_pegged_tEtSum_V_3_fu_308_p3();
    void thread_pegged_tEtSum_V_fu_208_p2();
    void thread_phiStitch_fu_124_p2();
    void thread_ret_V_1_fu_194_p2();
    void thread_ret_V_2_fu_248_p5();
    void thread_ret_V_3_fu_270_p6();
    void thread_ret_V_4_fu_288_p2();
    void thread_ret_V_5_fu_334_p2();
    void thread_ret_V_6_fu_340_p6();
    void thread_ret_V_fu_146_p2();
    void thread_rhs_V_fu_142_p1();
    void thread_select_ln895_1_fu_392_p3();
    void thread_select_ln895_2_fu_400_p3();
    void thread_select_ln895_3_fu_408_p3();
    void thread_select_ln895_fu_372_p3();
    void thread_tEt_leftOver_V_1_fu_316_p2();
    void thread_tEt_leftOver_V_fu_232_p2();
    void thread_tmp4_fu_322_p5();
    void thread_tmp_1_fu_260_p4();
    void thread_tmp_2_fu_152_p3();
    void thread_tmp_3_fu_200_p3();
    void thread_tmp_4_fu_294_p3();
    void thread_tmp_fu_238_p4();
    void thread_trunc_ln1503_1_fu_88_p4();
    void thread_trunc_ln1503_2_fu_104_p4();
    void thread_trunc_ln1503_3_fu_114_p4();
    void thread_trunc_ln1503_4_fu_180_p4();
    void thread_trunc_ln1503_5_fu_222_p4();
    void thread_trunc_ln214_1_fu_134_p1();
    void thread_trunc_ln214_fu_130_p1();
    void thread_trunc_ln_fu_72_p4();
    void thread_xor_ln895_fu_380_p2();
};

}

using namespace ap_rtl;

#endif
