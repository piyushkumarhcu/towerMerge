// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "stitchNeighbors.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic stitchNeighbors::ap_const_logic_1 = sc_dt::Log_1;
const bool stitchNeighbors::ap_const_boolean_1 = true;
const sc_lv<32> stitchNeighbors::ap_const_lv32_14 = "10100";
const sc_lv<32> stitchNeighbors::ap_const_lv32_16 = "10110";
const sc_lv<3> stitchNeighbors::ap_const_lv3_4 = "100";
const sc_lv<3> stitchNeighbors::ap_const_lv3_0 = "000";
const sc_lv<32> stitchNeighbors::ap_const_lv32_17 = "10111";
const sc_lv<32> stitchNeighbors::ap_const_lv32_19 = "11001";
const sc_lv<32> stitchNeighbors::ap_const_lv32_A = "1010";
const sc_lv<32> stitchNeighbors::ap_const_lv32_13 = "10011";
const sc_lv<32> stitchNeighbors::ap_const_lv32_1F = "11111";
const sc_lv<10> stitchNeighbors::ap_const_lv10_0 = "0000000000";
const sc_lv<32> stitchNeighbors::ap_const_lv32_400000 = "10000000000000000000000";
const sc_lv<32> stitchNeighbors::ap_const_lv32_4003FF = "10000000000001111111111";
const sc_lv<32> stitchNeighbors::ap_const_lv32_1A = "11010";
const sc_lv<32> stitchNeighbors::ap_const_lv32_3FF = "1111111111";
const sc_lv<1> stitchNeighbors::ap_const_lv1_1 = "1";
const sc_logic stitchNeighbors::ap_const_logic_0 = sc_dt::Log_0;

stitchNeighbors::stitchNeighbors(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_add_ln209_fu_222_p2);
    sensitive << ( trunc_ln214_fu_132_p1 );
    sensitive << ( trunc_ln214_1_fu_146_p1 );

    SC_METHOD(thread_and_ln879_1_fu_298_p2);
    sensitive << ( and_ln879_fu_292_p2 );
    sensitive << ( icmp_ln879_fu_84_p2 );

    SC_METHOD(thread_and_ln879_fu_292_p2);
    sensitive << ( icmp_ln879_1_fu_100_p2 );
    sensitive << ( phiStitch_fu_126_p2 );

    SC_METHOD(thread_and_ln895_1_fu_324_p2);
    sensitive << ( tmp_fu_180_p3 );
    sensitive << ( xor_ln895_fu_318_p2 );

    SC_METHOD(thread_and_ln895_2_fu_330_p2);
    sensitive << ( and_ln879_1_fu_298_p2 );
    sensitive << ( and_ln895_1_fu_324_p2 );

    SC_METHOD(thread_and_ln895_fu_304_p2);
    sensitive << ( and_ln879_1_fu_298_p2 );
    sensitive << ( icmp_ln895_fu_174_p2 );

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return_0);
    sensitive << ( select_ln879_fu_344_p3 );

    SC_METHOD(thread_ap_return_1);
    sensitive << ( select_ln879_1_fu_368_p3 );

    SC_METHOD(thread_icmp_ln879_1_fu_100_p2);
    sensitive << ( trunc_ln1503_1_fu_90_p4 );

    SC_METHOD(thread_icmp_ln879_fu_84_p2);
    sensitive << ( trunc_ln_fu_74_p4 );

    SC_METHOD(thread_icmp_ln895_fu_174_p2);
    sensitive << ( trunc_ln214_fu_132_p1 );
    sensitive << ( trunc_ln214_1_fu_146_p1 );

    SC_METHOD(thread_lhs_V_fu_160_p1);
    sensitive << ( trunc_ln214_fu_132_p1 );

    SC_METHOD(thread_or_ln1356_2_fu_198_p5);
    sensitive << ( tmp_2_fu_188_p4 );
    sensitive << ( trunc_ln1503_4_fu_136_p4 );

    SC_METHOD(thread_phiStitch_fu_126_p2);
    sensitive << ( trunc_ln1503_2_fu_106_p4 );
    sensitive << ( trunc_ln1503_3_fu_116_p4 );

    SC_METHOD(thread_ret_V_1_fu_210_p2);
    sensitive << ( or_ln1356_2_fu_198_p5 );

    SC_METHOD(thread_ret_V_2_fu_216_p2);
    sensitive << ( or_ln1356_2_fu_198_p5 );

    SC_METHOD(thread_ret_V_3_fu_228_p5);
    sensitive << ( tmp_2_fu_188_p4 );
    sensitive << ( trunc_ln1503_4_fu_136_p4 );
    sensitive << ( add_ln209_fu_222_p2 );

    SC_METHOD(thread_ret_V_4_fu_264_p2);
    sensitive << ( ret_V_6_fu_250_p6 );

    SC_METHOD(thread_ret_V_5_fu_270_p6);
    sensitive << ( trunc_ln1503_2_fu_106_p4 );
    sensitive << ( add_ln209_fu_222_p2 );
    sensitive << ( tmp_5_fu_240_p4 );
    sensitive << ( trunc_ln1503_8_fu_150_p4 );

    SC_METHOD(thread_ret_V_6_fu_250_p6);
    sensitive << ( trunc_ln1503_2_fu_106_p4 );
    sensitive << ( tmp_5_fu_240_p4 );
    sensitive << ( trunc_ln1503_8_fu_150_p4 );

    SC_METHOD(thread_ret_V_fu_168_p2);
    sensitive << ( lhs_V_fu_160_p1 );
    sensitive << ( rhs_V_fu_164_p1 );

    SC_METHOD(thread_rhs_V_fu_164_p1);
    sensitive << ( trunc_ln214_1_fu_146_p1 );

    SC_METHOD(thread_select_ln879_1_fu_368_p3);
    sensitive << ( Bi_data_V );
    sensitive << ( and_ln879_1_fu_298_p2 );
    sensitive << ( select_ln895_4_fu_360_p3 );

    SC_METHOD(thread_select_ln879_fu_344_p3);
    sensitive << ( Ai_data_V );
    sensitive << ( and_ln879_1_fu_298_p2 );
    sensitive << ( select_ln895_2_fu_336_p3 );

    SC_METHOD(thread_select_ln895_1_fu_310_p3);
    sensitive << ( and_ln895_fu_304_p2 );
    sensitive << ( select_ln895_fu_284_p3 );
    sensitive << ( ret_V_1_fu_210_p2 );

    SC_METHOD(thread_select_ln895_2_fu_336_p3);
    sensitive << ( ret_V_1_fu_210_p2 );
    sensitive << ( and_ln895_2_fu_330_p2 );
    sensitive << ( select_ln895_1_fu_310_p3 );

    SC_METHOD(thread_select_ln895_3_fu_352_p3);
    sensitive << ( ret_V_6_fu_250_p6 );
    sensitive << ( and_ln895_fu_304_p2 );
    sensitive << ( ret_V_5_fu_270_p6 );

    SC_METHOD(thread_select_ln895_4_fu_360_p3);
    sensitive << ( and_ln895_2_fu_330_p2 );
    sensitive << ( ret_V_4_fu_264_p2 );
    sensitive << ( select_ln895_3_fu_352_p3 );

    SC_METHOD(thread_select_ln895_fu_284_p3);
    sensitive << ( tmp_fu_180_p3 );
    sensitive << ( ret_V_2_fu_216_p2 );
    sensitive << ( ret_V_3_fu_228_p5 );

    SC_METHOD(thread_tmp_2_fu_188_p4);
    sensitive << ( Ai_data_V );

    SC_METHOD(thread_tmp_5_fu_240_p4);
    sensitive << ( Bi_data_V );

    SC_METHOD(thread_tmp_fu_180_p3);
    sensitive << ( ret_V_fu_168_p2 );

    SC_METHOD(thread_trunc_ln1503_1_fu_90_p4);
    sensitive << ( Bi_data_V );

    SC_METHOD(thread_trunc_ln1503_2_fu_106_p4);
    sensitive << ( Ai_data_V );

    SC_METHOD(thread_trunc_ln1503_3_fu_116_p4);
    sensitive << ( Bi_data_V );

    SC_METHOD(thread_trunc_ln1503_4_fu_136_p4);
    sensitive << ( Ai_data_V );

    SC_METHOD(thread_trunc_ln1503_8_fu_150_p4);
    sensitive << ( Bi_data_V );

    SC_METHOD(thread_trunc_ln214_1_fu_146_p1);
    sensitive << ( Bi_data_V );

    SC_METHOD(thread_trunc_ln214_fu_132_p1);
    sensitive << ( Ai_data_V );

    SC_METHOD(thread_trunc_ln_fu_74_p4);
    sensitive << ( Ai_data_V );

    SC_METHOD(thread_xor_ln895_fu_318_p2);
    sensitive << ( icmp_ln895_fu_174_p2 );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "stitchNeighbors_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, Ai_data_V, "(port)Ai_data_V");
    sc_trace(mVcdFile, Bi_data_V, "(port)Bi_data_V");
    sc_trace(mVcdFile, ap_return_0, "(port)ap_return_0");
    sc_trace(mVcdFile, ap_return_1, "(port)ap_return_1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, trunc_ln_fu_74_p4, "trunc_ln_fu_74_p4");
    sc_trace(mVcdFile, trunc_ln1503_1_fu_90_p4, "trunc_ln1503_1_fu_90_p4");
    sc_trace(mVcdFile, trunc_ln1503_2_fu_106_p4, "trunc_ln1503_2_fu_106_p4");
    sc_trace(mVcdFile, trunc_ln1503_3_fu_116_p4, "trunc_ln1503_3_fu_116_p4");
    sc_trace(mVcdFile, trunc_ln214_fu_132_p1, "trunc_ln214_fu_132_p1");
    sc_trace(mVcdFile, trunc_ln214_1_fu_146_p1, "trunc_ln214_1_fu_146_p1");
    sc_trace(mVcdFile, lhs_V_fu_160_p1, "lhs_V_fu_160_p1");
    sc_trace(mVcdFile, rhs_V_fu_164_p1, "rhs_V_fu_164_p1");
    sc_trace(mVcdFile, ret_V_fu_168_p2, "ret_V_fu_168_p2");
    sc_trace(mVcdFile, tmp_2_fu_188_p4, "tmp_2_fu_188_p4");
    sc_trace(mVcdFile, trunc_ln1503_4_fu_136_p4, "trunc_ln1503_4_fu_136_p4");
    sc_trace(mVcdFile, or_ln1356_2_fu_198_p5, "or_ln1356_2_fu_198_p5");
    sc_trace(mVcdFile, add_ln209_fu_222_p2, "add_ln209_fu_222_p2");
    sc_trace(mVcdFile, tmp_5_fu_240_p4, "tmp_5_fu_240_p4");
    sc_trace(mVcdFile, trunc_ln1503_8_fu_150_p4, "trunc_ln1503_8_fu_150_p4");
    sc_trace(mVcdFile, ret_V_6_fu_250_p6, "ret_V_6_fu_250_p6");
    sc_trace(mVcdFile, tmp_fu_180_p3, "tmp_fu_180_p3");
    sc_trace(mVcdFile, ret_V_2_fu_216_p2, "ret_V_2_fu_216_p2");
    sc_trace(mVcdFile, ret_V_3_fu_228_p5, "ret_V_3_fu_228_p5");
    sc_trace(mVcdFile, icmp_ln879_1_fu_100_p2, "icmp_ln879_1_fu_100_p2");
    sc_trace(mVcdFile, phiStitch_fu_126_p2, "phiStitch_fu_126_p2");
    sc_trace(mVcdFile, and_ln879_fu_292_p2, "and_ln879_fu_292_p2");
    sc_trace(mVcdFile, icmp_ln879_fu_84_p2, "icmp_ln879_fu_84_p2");
    sc_trace(mVcdFile, and_ln879_1_fu_298_p2, "and_ln879_1_fu_298_p2");
    sc_trace(mVcdFile, icmp_ln895_fu_174_p2, "icmp_ln895_fu_174_p2");
    sc_trace(mVcdFile, and_ln895_fu_304_p2, "and_ln895_fu_304_p2");
    sc_trace(mVcdFile, select_ln895_fu_284_p3, "select_ln895_fu_284_p3");
    sc_trace(mVcdFile, ret_V_1_fu_210_p2, "ret_V_1_fu_210_p2");
    sc_trace(mVcdFile, xor_ln895_fu_318_p2, "xor_ln895_fu_318_p2");
    sc_trace(mVcdFile, and_ln895_1_fu_324_p2, "and_ln895_1_fu_324_p2");
    sc_trace(mVcdFile, and_ln895_2_fu_330_p2, "and_ln895_2_fu_330_p2");
    sc_trace(mVcdFile, select_ln895_1_fu_310_p3, "select_ln895_1_fu_310_p3");
    sc_trace(mVcdFile, select_ln895_2_fu_336_p3, "select_ln895_2_fu_336_p3");
    sc_trace(mVcdFile, ret_V_5_fu_270_p6, "ret_V_5_fu_270_p6");
    sc_trace(mVcdFile, ret_V_4_fu_264_p2, "ret_V_4_fu_264_p2");
    sc_trace(mVcdFile, select_ln895_3_fu_352_p3, "select_ln895_3_fu_352_p3");
    sc_trace(mVcdFile, select_ln895_4_fu_360_p3, "select_ln895_4_fu_360_p3");
    sc_trace(mVcdFile, select_ln879_fu_344_p3, "select_ln879_fu_344_p3");
    sc_trace(mVcdFile, select_ln879_1_fu_368_p3, "select_ln879_1_fu_368_p3");
#endif

    }
}

stitchNeighbors::~stitchNeighbors() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void stitchNeighbors::thread_add_ln209_fu_222_p2() {
    add_ln209_fu_222_p2 = (!trunc_ln214_1_fu_146_p1.read().is_01() || !trunc_ln214_fu_132_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln214_1_fu_146_p1.read()) + sc_biguint<10>(trunc_ln214_fu_132_p1.read()));
}

void stitchNeighbors::thread_and_ln879_1_fu_298_p2() {
    and_ln879_1_fu_298_p2 = (and_ln879_fu_292_p2.read() & icmp_ln879_fu_84_p2.read());
}

void stitchNeighbors::thread_and_ln879_fu_292_p2() {
    and_ln879_fu_292_p2 = (icmp_ln879_1_fu_100_p2.read() & phiStitch_fu_126_p2.read());
}

void stitchNeighbors::thread_and_ln895_1_fu_324_p2() {
    and_ln895_1_fu_324_p2 = (tmp_fu_180_p3.read() & xor_ln895_fu_318_p2.read());
}

void stitchNeighbors::thread_and_ln895_2_fu_330_p2() {
    and_ln895_2_fu_330_p2 = (and_ln895_1_fu_324_p2.read() & and_ln879_1_fu_298_p2.read());
}

void stitchNeighbors::thread_and_ln895_fu_304_p2() {
    and_ln895_fu_304_p2 = (and_ln879_1_fu_298_p2.read() & icmp_ln895_fu_174_p2.read());
}

void stitchNeighbors::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void stitchNeighbors::thread_ap_return_0() {
    ap_return_0 = select_ln879_fu_344_p3.read();
}

void stitchNeighbors::thread_ap_return_1() {
    ap_return_1 = select_ln879_1_fu_368_p3.read();
}

void stitchNeighbors::thread_icmp_ln879_1_fu_100_p2() {
    icmp_ln879_1_fu_100_p2 = (!trunc_ln1503_1_fu_90_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln1503_1_fu_90_p4.read() == ap_const_lv3_0);
}

void stitchNeighbors::thread_icmp_ln879_fu_84_p2() {
    icmp_ln879_fu_84_p2 = (!trunc_ln_fu_74_p4.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln_fu_74_p4.read() == ap_const_lv3_4);
}

void stitchNeighbors::thread_icmp_ln895_fu_174_p2() {
    icmp_ln895_fu_174_p2 = (!trunc_ln214_fu_132_p1.read().is_01() || !trunc_ln214_1_fu_146_p1.read().is_01())? sc_lv<1>(): (sc_biguint<10>(trunc_ln214_fu_132_p1.read()) > sc_biguint<10>(trunc_ln214_1_fu_146_p1.read()));
}

void stitchNeighbors::thread_lhs_V_fu_160_p1() {
    lhs_V_fu_160_p1 = esl_zext<11,10>(trunc_ln214_fu_132_p1.read());
}

void stitchNeighbors::thread_or_ln1356_2_fu_198_p5() {
    or_ln1356_2_fu_198_p5 = esl_concat<22,10>(esl_concat<12,10>(esl_concat<9,3>(tmp_2_fu_188_p4.read(), ap_const_lv3_0), trunc_ln1503_4_fu_136_p4.read()), ap_const_lv10_0);
}

void stitchNeighbors::thread_phiStitch_fu_126_p2() {
    phiStitch_fu_126_p2 = (!trunc_ln1503_2_fu_106_p4.read().is_01() || !trunc_ln1503_3_fu_116_p4.read().is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln1503_2_fu_106_p4.read() == trunc_ln1503_3_fu_116_p4.read());
}

void stitchNeighbors::thread_ret_V_1_fu_210_p2() {
    ret_V_1_fu_210_p2 = (or_ln1356_2_fu_198_p5.read() | ap_const_lv32_400000);
}

void stitchNeighbors::thread_ret_V_2_fu_216_p2() {
    ret_V_2_fu_216_p2 = (or_ln1356_2_fu_198_p5.read() | ap_const_lv32_4003FF);
}

void stitchNeighbors::thread_ret_V_3_fu_228_p5() {
    ret_V_3_fu_228_p5 = esl_concat<22,10>(esl_concat<12,10>(esl_concat<9,3>(tmp_2_fu_188_p4.read(), ap_const_lv3_4), trunc_ln1503_4_fu_136_p4.read()), add_ln209_fu_222_p2.read());
}

void stitchNeighbors::thread_ret_V_4_fu_264_p2() {
    ret_V_4_fu_264_p2 = (ret_V_6_fu_250_p6.read() | ap_const_lv32_3FF);
}

void stitchNeighbors::thread_ret_V_5_fu_270_p6() {
    ret_V_5_fu_270_p6 = esl_concat<22,10>(esl_concat<12,10>(esl_concat<9,3>(esl_concat<6,3>(tmp_5_fu_240_p4.read(), trunc_ln1503_2_fu_106_p4.read()), ap_const_lv3_0), trunc_ln1503_8_fu_150_p4.read()), add_ln209_fu_222_p2.read());
}

void stitchNeighbors::thread_ret_V_6_fu_250_p6() {
    ret_V_6_fu_250_p6 = esl_concat<22,10>(esl_concat<12,10>(esl_concat<9,3>(esl_concat<6,3>(tmp_5_fu_240_p4.read(), trunc_ln1503_2_fu_106_p4.read()), ap_const_lv3_0), trunc_ln1503_8_fu_150_p4.read()), ap_const_lv10_0);
}

void stitchNeighbors::thread_ret_V_fu_168_p2() {
    ret_V_fu_168_p2 = (!lhs_V_fu_160_p1.read().is_01() || !rhs_V_fu_164_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(lhs_V_fu_160_p1.read()) + sc_biguint<11>(rhs_V_fu_164_p1.read()));
}

void stitchNeighbors::thread_rhs_V_fu_164_p1() {
    rhs_V_fu_164_p1 = esl_zext<11,10>(trunc_ln214_1_fu_146_p1.read());
}

void stitchNeighbors::thread_select_ln879_1_fu_368_p3() {
    select_ln879_1_fu_368_p3 = (!and_ln879_1_fu_298_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln879_1_fu_298_p2.read()[0].to_bool())? select_ln895_4_fu_360_p3.read(): Bi_data_V.read());
}

void stitchNeighbors::thread_select_ln879_fu_344_p3() {
    select_ln879_fu_344_p3 = (!and_ln879_1_fu_298_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln879_1_fu_298_p2.read()[0].to_bool())? select_ln895_2_fu_336_p3.read(): Ai_data_V.read());
}

void stitchNeighbors::thread_select_ln895_1_fu_310_p3() {
    select_ln895_1_fu_310_p3 = (!and_ln895_fu_304_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln895_fu_304_p2.read()[0].to_bool())? select_ln895_fu_284_p3.read(): ret_V_1_fu_210_p2.read());
}

void stitchNeighbors::thread_select_ln895_2_fu_336_p3() {
    select_ln895_2_fu_336_p3 = (!and_ln895_2_fu_330_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln895_2_fu_330_p2.read()[0].to_bool())? ret_V_1_fu_210_p2.read(): select_ln895_1_fu_310_p3.read());
}

void stitchNeighbors::thread_select_ln895_3_fu_352_p3() {
    select_ln895_3_fu_352_p3 = (!and_ln895_fu_304_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln895_fu_304_p2.read()[0].to_bool())? ret_V_6_fu_250_p6.read(): ret_V_5_fu_270_p6.read());
}

void stitchNeighbors::thread_select_ln895_4_fu_360_p3() {
    select_ln895_4_fu_360_p3 = (!and_ln895_2_fu_330_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln895_2_fu_330_p2.read()[0].to_bool())? ret_V_4_fu_264_p2.read(): select_ln895_3_fu_352_p3.read());
}

void stitchNeighbors::thread_select_ln895_fu_284_p3() {
    select_ln895_fu_284_p3 = (!tmp_fu_180_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_fu_180_p3.read()[0].to_bool())? ret_V_2_fu_216_p2.read(): ret_V_3_fu_228_p5.read());
}

void stitchNeighbors::thread_tmp_2_fu_188_p4() {
    tmp_2_fu_188_p4 = Ai_data_V.read().range(31, 23);
}

void stitchNeighbors::thread_tmp_5_fu_240_p4() {
    tmp_5_fu_240_p4 = Bi_data_V.read().range(31, 26);
}

void stitchNeighbors::thread_tmp_fu_180_p3() {
    tmp_fu_180_p3 = ret_V_fu_168_p2.read().range(10, 10);
}

void stitchNeighbors::thread_trunc_ln1503_1_fu_90_p4() {
    trunc_ln1503_1_fu_90_p4 = Bi_data_V.read().range(22, 20);
}

void stitchNeighbors::thread_trunc_ln1503_2_fu_106_p4() {
    trunc_ln1503_2_fu_106_p4 = Ai_data_V.read().range(25, 23);
}

void stitchNeighbors::thread_trunc_ln1503_3_fu_116_p4() {
    trunc_ln1503_3_fu_116_p4 = Bi_data_V.read().range(25, 23);
}

void stitchNeighbors::thread_trunc_ln1503_4_fu_136_p4() {
    trunc_ln1503_4_fu_136_p4 = Ai_data_V.read().range(19, 10);
}

void stitchNeighbors::thread_trunc_ln1503_8_fu_150_p4() {
    trunc_ln1503_8_fu_150_p4 = Bi_data_V.read().range(19, 10);
}

void stitchNeighbors::thread_trunc_ln214_1_fu_146_p1() {
    trunc_ln214_1_fu_146_p1 = Bi_data_V.read().range(10-1, 0);
}

void stitchNeighbors::thread_trunc_ln214_fu_132_p1() {
    trunc_ln214_fu_132_p1 = Ai_data_V.read().range(10-1, 0);
}

void stitchNeighbors::thread_trunc_ln_fu_74_p4() {
    trunc_ln_fu_74_p4 = Ai_data_V.read().range(22, 20);
}

void stitchNeighbors::thread_xor_ln895_fu_318_p2() {
    xor_ln895_fu_318_p2 = (icmp_ln895_fu_174_p2.read() ^ ap_const_lv1_1);
}

}
