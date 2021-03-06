// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "stitchInPhi.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic stitchInPhi::ap_const_logic_1 = sc_dt::Log_1;
const bool stitchInPhi::ap_const_boolean_1 = true;
const sc_logic stitchInPhi::ap_const_logic_0 = sc_dt::Log_0;

stitchInPhi::stitchInPhi(sc_module_name name) : sc_module(name), mVcdFile(0) {
    call_ret1_stitchNeighbors_fu_288 = new stitchNeighbors("call_ret1_stitchNeighbors_fu_288");
    call_ret1_stitchNeighbors_fu_288->ap_ready(call_ret1_stitchNeighbors_fu_288_ap_ready);
    call_ret1_stitchNeighbors_fu_288->Ai_data_V(p_read);
    call_ret1_stitchNeighbors_fu_288->Bi_data_V(p_read17);
    call_ret1_stitchNeighbors_fu_288->ap_return_0(call_ret1_stitchNeighbors_fu_288_ap_return_0);
    call_ret1_stitchNeighbors_fu_288->ap_return_1(call_ret1_stitchNeighbors_fu_288_ap_return_1);
    call_ret2_stitchNeighbors_fu_296 = new stitchNeighbors("call_ret2_stitchNeighbors_fu_296");
    call_ret2_stitchNeighbors_fu_296->ap_ready(call_ret2_stitchNeighbors_fu_296_ap_ready);
    call_ret2_stitchNeighbors_fu_296->Ai_data_V(p_read1);
    call_ret2_stitchNeighbors_fu_296->Bi_data_V(p_read18);
    call_ret2_stitchNeighbors_fu_296->ap_return_0(call_ret2_stitchNeighbors_fu_296_ap_return_0);
    call_ret2_stitchNeighbors_fu_296->ap_return_1(call_ret2_stitchNeighbors_fu_296_ap_return_1);
    call_ret3_stitchNeighbors_fu_304 = new stitchNeighbors("call_ret3_stitchNeighbors_fu_304");
    call_ret3_stitchNeighbors_fu_304->ap_ready(call_ret3_stitchNeighbors_fu_304_ap_ready);
    call_ret3_stitchNeighbors_fu_304->Ai_data_V(p_read2);
    call_ret3_stitchNeighbors_fu_304->Bi_data_V(p_read19);
    call_ret3_stitchNeighbors_fu_304->ap_return_0(call_ret3_stitchNeighbors_fu_304_ap_return_0);
    call_ret3_stitchNeighbors_fu_304->ap_return_1(call_ret3_stitchNeighbors_fu_304_ap_return_1);
    call_ret4_stitchNeighbors_fu_312 = new stitchNeighbors("call_ret4_stitchNeighbors_fu_312");
    call_ret4_stitchNeighbors_fu_312->ap_ready(call_ret4_stitchNeighbors_fu_312_ap_ready);
    call_ret4_stitchNeighbors_fu_312->Ai_data_V(p_read3);
    call_ret4_stitchNeighbors_fu_312->Bi_data_V(p_read20);
    call_ret4_stitchNeighbors_fu_312->ap_return_0(call_ret4_stitchNeighbors_fu_312_ap_return_0);
    call_ret4_stitchNeighbors_fu_312->ap_return_1(call_ret4_stitchNeighbors_fu_312_ap_return_1);
    call_ret5_stitchNeighbors_fu_320 = new stitchNeighbors("call_ret5_stitchNeighbors_fu_320");
    call_ret5_stitchNeighbors_fu_320->ap_ready(call_ret5_stitchNeighbors_fu_320_ap_ready);
    call_ret5_stitchNeighbors_fu_320->Ai_data_V(p_read4);
    call_ret5_stitchNeighbors_fu_320->Bi_data_V(p_read21);
    call_ret5_stitchNeighbors_fu_320->ap_return_0(call_ret5_stitchNeighbors_fu_320_ap_return_0);
    call_ret5_stitchNeighbors_fu_320->ap_return_1(call_ret5_stitchNeighbors_fu_320_ap_return_1);
    call_ret6_stitchNeighbors_fu_328 = new stitchNeighbors("call_ret6_stitchNeighbors_fu_328");
    call_ret6_stitchNeighbors_fu_328->ap_ready(call_ret6_stitchNeighbors_fu_328_ap_ready);
    call_ret6_stitchNeighbors_fu_328->Ai_data_V(p_read5);
    call_ret6_stitchNeighbors_fu_328->Bi_data_V(p_read22);
    call_ret6_stitchNeighbors_fu_328->ap_return_0(call_ret6_stitchNeighbors_fu_328_ap_return_0);
    call_ret6_stitchNeighbors_fu_328->ap_return_1(call_ret6_stitchNeighbors_fu_328_ap_return_1);
    call_ret7_stitchNeighbors_fu_336 = new stitchNeighbors("call_ret7_stitchNeighbors_fu_336");
    call_ret7_stitchNeighbors_fu_336->ap_ready(call_ret7_stitchNeighbors_fu_336_ap_ready);
    call_ret7_stitchNeighbors_fu_336->Ai_data_V(p_read6);
    call_ret7_stitchNeighbors_fu_336->Bi_data_V(p_read23);
    call_ret7_stitchNeighbors_fu_336->ap_return_0(call_ret7_stitchNeighbors_fu_336_ap_return_0);
    call_ret7_stitchNeighbors_fu_336->ap_return_1(call_ret7_stitchNeighbors_fu_336_ap_return_1);
    call_ret8_stitchNeighbors_fu_344 = new stitchNeighbors("call_ret8_stitchNeighbors_fu_344");
    call_ret8_stitchNeighbors_fu_344->ap_ready(call_ret8_stitchNeighbors_fu_344_ap_ready);
    call_ret8_stitchNeighbors_fu_344->Ai_data_V(p_read7);
    call_ret8_stitchNeighbors_fu_344->Bi_data_V(p_read24);
    call_ret8_stitchNeighbors_fu_344->ap_return_0(call_ret8_stitchNeighbors_fu_344_ap_return_0);
    call_ret8_stitchNeighbors_fu_344->ap_return_1(call_ret8_stitchNeighbors_fu_344_ap_return_1);
    call_ret9_stitchNeighbors_fu_352 = new stitchNeighbors("call_ret9_stitchNeighbors_fu_352");
    call_ret9_stitchNeighbors_fu_352->ap_ready(call_ret9_stitchNeighbors_fu_352_ap_ready);
    call_ret9_stitchNeighbors_fu_352->Ai_data_V(p_read8);
    call_ret9_stitchNeighbors_fu_352->Bi_data_V(p_read25);
    call_ret9_stitchNeighbors_fu_352->ap_return_0(call_ret9_stitchNeighbors_fu_352_ap_return_0);
    call_ret9_stitchNeighbors_fu_352->ap_return_1(call_ret9_stitchNeighbors_fu_352_ap_return_1);
    call_ret10_stitchNeighbors_fu_360 = new stitchNeighbors("call_ret10_stitchNeighbors_fu_360");
    call_ret10_stitchNeighbors_fu_360->ap_ready(call_ret10_stitchNeighbors_fu_360_ap_ready);
    call_ret10_stitchNeighbors_fu_360->Ai_data_V(p_read9);
    call_ret10_stitchNeighbors_fu_360->Bi_data_V(p_read26);
    call_ret10_stitchNeighbors_fu_360->ap_return_0(call_ret10_stitchNeighbors_fu_360_ap_return_0);
    call_ret10_stitchNeighbors_fu_360->ap_return_1(call_ret10_stitchNeighbors_fu_360_ap_return_1);
    call_ret11_stitchNeighbors_fu_368 = new stitchNeighbors("call_ret11_stitchNeighbors_fu_368");
    call_ret11_stitchNeighbors_fu_368->ap_ready(call_ret11_stitchNeighbors_fu_368_ap_ready);
    call_ret11_stitchNeighbors_fu_368->Ai_data_V(p_read10);
    call_ret11_stitchNeighbors_fu_368->Bi_data_V(p_read27);
    call_ret11_stitchNeighbors_fu_368->ap_return_0(call_ret11_stitchNeighbors_fu_368_ap_return_0);
    call_ret11_stitchNeighbors_fu_368->ap_return_1(call_ret11_stitchNeighbors_fu_368_ap_return_1);
    call_ret12_stitchNeighbors_fu_376 = new stitchNeighbors("call_ret12_stitchNeighbors_fu_376");
    call_ret12_stitchNeighbors_fu_376->ap_ready(call_ret12_stitchNeighbors_fu_376_ap_ready);
    call_ret12_stitchNeighbors_fu_376->Ai_data_V(p_read11);
    call_ret12_stitchNeighbors_fu_376->Bi_data_V(p_read28);
    call_ret12_stitchNeighbors_fu_376->ap_return_0(call_ret12_stitchNeighbors_fu_376_ap_return_0);
    call_ret12_stitchNeighbors_fu_376->ap_return_1(call_ret12_stitchNeighbors_fu_376_ap_return_1);
    call_ret13_stitchNeighbors_fu_384 = new stitchNeighbors("call_ret13_stitchNeighbors_fu_384");
    call_ret13_stitchNeighbors_fu_384->ap_ready(call_ret13_stitchNeighbors_fu_384_ap_ready);
    call_ret13_stitchNeighbors_fu_384->Ai_data_V(p_read12);
    call_ret13_stitchNeighbors_fu_384->Bi_data_V(p_read29);
    call_ret13_stitchNeighbors_fu_384->ap_return_0(call_ret13_stitchNeighbors_fu_384_ap_return_0);
    call_ret13_stitchNeighbors_fu_384->ap_return_1(call_ret13_stitchNeighbors_fu_384_ap_return_1);
    call_ret14_stitchNeighbors_fu_392 = new stitchNeighbors("call_ret14_stitchNeighbors_fu_392");
    call_ret14_stitchNeighbors_fu_392->ap_ready(call_ret14_stitchNeighbors_fu_392_ap_ready);
    call_ret14_stitchNeighbors_fu_392->Ai_data_V(p_read13);
    call_ret14_stitchNeighbors_fu_392->Bi_data_V(p_read30);
    call_ret14_stitchNeighbors_fu_392->ap_return_0(call_ret14_stitchNeighbors_fu_392_ap_return_0);
    call_ret14_stitchNeighbors_fu_392->ap_return_1(call_ret14_stitchNeighbors_fu_392_ap_return_1);
    call_ret15_stitchNeighbors_fu_400 = new stitchNeighbors("call_ret15_stitchNeighbors_fu_400");
    call_ret15_stitchNeighbors_fu_400->ap_ready(call_ret15_stitchNeighbors_fu_400_ap_ready);
    call_ret15_stitchNeighbors_fu_400->Ai_data_V(p_read14);
    call_ret15_stitchNeighbors_fu_400->Bi_data_V(p_read31);
    call_ret15_stitchNeighbors_fu_400->ap_return_0(call_ret15_stitchNeighbors_fu_400_ap_return_0);
    call_ret15_stitchNeighbors_fu_400->ap_return_1(call_ret15_stitchNeighbors_fu_400_ap_return_1);
    call_ret16_stitchNeighbors_fu_408 = new stitchNeighbors("call_ret16_stitchNeighbors_fu_408");
    call_ret16_stitchNeighbors_fu_408->ap_ready(call_ret16_stitchNeighbors_fu_408_ap_ready);
    call_ret16_stitchNeighbors_fu_408->Ai_data_V(p_read15);
    call_ret16_stitchNeighbors_fu_408->Bi_data_V(p_read32);
    call_ret16_stitchNeighbors_fu_408->ap_return_0(call_ret16_stitchNeighbors_fu_408_ap_return_0);
    call_ret16_stitchNeighbors_fu_408->ap_return_1(call_ret16_stitchNeighbors_fu_408_ap_return_1);
    call_ret_stitchNeighbors_fu_416 = new stitchNeighbors("call_ret_stitchNeighbors_fu_416");
    call_ret_stitchNeighbors_fu_416->ap_ready(call_ret_stitchNeighbors_fu_416_ap_ready);
    call_ret_stitchNeighbors_fu_416->Ai_data_V(p_read16);
    call_ret_stitchNeighbors_fu_416->Bi_data_V(p_read33);
    call_ret_stitchNeighbors_fu_416->ap_return_0(call_ret_stitchNeighbors_fu_416_ap_return_0);
    call_ret_stitchNeighbors_fu_416->ap_return_1(call_ret_stitchNeighbors_fu_416_ap_return_1);

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return_0);
    sensitive << ( call_ret1_stitchNeighbors_fu_288_ap_return_0 );

    SC_METHOD(thread_ap_return_1);
    sensitive << ( call_ret2_stitchNeighbors_fu_296_ap_return_0 );

    SC_METHOD(thread_ap_return_10);
    sensitive << ( call_ret11_stitchNeighbors_fu_368_ap_return_0 );

    SC_METHOD(thread_ap_return_11);
    sensitive << ( call_ret12_stitchNeighbors_fu_376_ap_return_0 );

    SC_METHOD(thread_ap_return_12);
    sensitive << ( call_ret13_stitchNeighbors_fu_384_ap_return_0 );

    SC_METHOD(thread_ap_return_13);
    sensitive << ( call_ret14_stitchNeighbors_fu_392_ap_return_0 );

    SC_METHOD(thread_ap_return_14);
    sensitive << ( call_ret15_stitchNeighbors_fu_400_ap_return_0 );

    SC_METHOD(thread_ap_return_15);
    sensitive << ( call_ret16_stitchNeighbors_fu_408_ap_return_0 );

    SC_METHOD(thread_ap_return_16);
    sensitive << ( call_ret_stitchNeighbors_fu_416_ap_return_0 );

    SC_METHOD(thread_ap_return_17);
    sensitive << ( call_ret1_stitchNeighbors_fu_288_ap_return_1 );

    SC_METHOD(thread_ap_return_18);
    sensitive << ( call_ret2_stitchNeighbors_fu_296_ap_return_1 );

    SC_METHOD(thread_ap_return_19);
    sensitive << ( call_ret3_stitchNeighbors_fu_304_ap_return_1 );

    SC_METHOD(thread_ap_return_2);
    sensitive << ( call_ret3_stitchNeighbors_fu_304_ap_return_0 );

    SC_METHOD(thread_ap_return_20);
    sensitive << ( call_ret4_stitchNeighbors_fu_312_ap_return_1 );

    SC_METHOD(thread_ap_return_21);
    sensitive << ( call_ret5_stitchNeighbors_fu_320_ap_return_1 );

    SC_METHOD(thread_ap_return_22);
    sensitive << ( call_ret6_stitchNeighbors_fu_328_ap_return_1 );

    SC_METHOD(thread_ap_return_23);
    sensitive << ( call_ret7_stitchNeighbors_fu_336_ap_return_1 );

    SC_METHOD(thread_ap_return_24);
    sensitive << ( call_ret8_stitchNeighbors_fu_344_ap_return_1 );

    SC_METHOD(thread_ap_return_25);
    sensitive << ( call_ret9_stitchNeighbors_fu_352_ap_return_1 );

    SC_METHOD(thread_ap_return_26);
    sensitive << ( call_ret10_stitchNeighbors_fu_360_ap_return_1 );

    SC_METHOD(thread_ap_return_27);
    sensitive << ( call_ret11_stitchNeighbors_fu_368_ap_return_1 );

    SC_METHOD(thread_ap_return_28);
    sensitive << ( call_ret12_stitchNeighbors_fu_376_ap_return_1 );

    SC_METHOD(thread_ap_return_29);
    sensitive << ( call_ret13_stitchNeighbors_fu_384_ap_return_1 );

    SC_METHOD(thread_ap_return_3);
    sensitive << ( call_ret4_stitchNeighbors_fu_312_ap_return_0 );

    SC_METHOD(thread_ap_return_30);
    sensitive << ( call_ret14_stitchNeighbors_fu_392_ap_return_1 );

    SC_METHOD(thread_ap_return_31);
    sensitive << ( call_ret15_stitchNeighbors_fu_400_ap_return_1 );

    SC_METHOD(thread_ap_return_32);
    sensitive << ( call_ret16_stitchNeighbors_fu_408_ap_return_1 );

    SC_METHOD(thread_ap_return_33);
    sensitive << ( call_ret_stitchNeighbors_fu_416_ap_return_1 );

    SC_METHOD(thread_ap_return_4);
    sensitive << ( call_ret5_stitchNeighbors_fu_320_ap_return_0 );

    SC_METHOD(thread_ap_return_5);
    sensitive << ( call_ret6_stitchNeighbors_fu_328_ap_return_0 );

    SC_METHOD(thread_ap_return_6);
    sensitive << ( call_ret7_stitchNeighbors_fu_336_ap_return_0 );

    SC_METHOD(thread_ap_return_7);
    sensitive << ( call_ret8_stitchNeighbors_fu_344_ap_return_0 );

    SC_METHOD(thread_ap_return_8);
    sensitive << ( call_ret9_stitchNeighbors_fu_352_ap_return_0 );

    SC_METHOD(thread_ap_return_9);
    sensitive << ( call_ret10_stitchNeighbors_fu_360_ap_return_0 );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "stitchInPhi_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, p_read, "(port)p_read");
    sc_trace(mVcdFile, p_read1, "(port)p_read1");
    sc_trace(mVcdFile, p_read2, "(port)p_read2");
    sc_trace(mVcdFile, p_read3, "(port)p_read3");
    sc_trace(mVcdFile, p_read4, "(port)p_read4");
    sc_trace(mVcdFile, p_read5, "(port)p_read5");
    sc_trace(mVcdFile, p_read6, "(port)p_read6");
    sc_trace(mVcdFile, p_read7, "(port)p_read7");
    sc_trace(mVcdFile, p_read8, "(port)p_read8");
    sc_trace(mVcdFile, p_read9, "(port)p_read9");
    sc_trace(mVcdFile, p_read10, "(port)p_read10");
    sc_trace(mVcdFile, p_read11, "(port)p_read11");
    sc_trace(mVcdFile, p_read12, "(port)p_read12");
    sc_trace(mVcdFile, p_read13, "(port)p_read13");
    sc_trace(mVcdFile, p_read14, "(port)p_read14");
    sc_trace(mVcdFile, p_read15, "(port)p_read15");
    sc_trace(mVcdFile, p_read16, "(port)p_read16");
    sc_trace(mVcdFile, p_read17, "(port)p_read17");
    sc_trace(mVcdFile, p_read18, "(port)p_read18");
    sc_trace(mVcdFile, p_read19, "(port)p_read19");
    sc_trace(mVcdFile, p_read20, "(port)p_read20");
    sc_trace(mVcdFile, p_read21, "(port)p_read21");
    sc_trace(mVcdFile, p_read22, "(port)p_read22");
    sc_trace(mVcdFile, p_read23, "(port)p_read23");
    sc_trace(mVcdFile, p_read24, "(port)p_read24");
    sc_trace(mVcdFile, p_read25, "(port)p_read25");
    sc_trace(mVcdFile, p_read26, "(port)p_read26");
    sc_trace(mVcdFile, p_read27, "(port)p_read27");
    sc_trace(mVcdFile, p_read28, "(port)p_read28");
    sc_trace(mVcdFile, p_read29, "(port)p_read29");
    sc_trace(mVcdFile, p_read30, "(port)p_read30");
    sc_trace(mVcdFile, p_read31, "(port)p_read31");
    sc_trace(mVcdFile, p_read32, "(port)p_read32");
    sc_trace(mVcdFile, p_read33, "(port)p_read33");
    sc_trace(mVcdFile, ap_return_0, "(port)ap_return_0");
    sc_trace(mVcdFile, ap_return_1, "(port)ap_return_1");
    sc_trace(mVcdFile, ap_return_2, "(port)ap_return_2");
    sc_trace(mVcdFile, ap_return_3, "(port)ap_return_3");
    sc_trace(mVcdFile, ap_return_4, "(port)ap_return_4");
    sc_trace(mVcdFile, ap_return_5, "(port)ap_return_5");
    sc_trace(mVcdFile, ap_return_6, "(port)ap_return_6");
    sc_trace(mVcdFile, ap_return_7, "(port)ap_return_7");
    sc_trace(mVcdFile, ap_return_8, "(port)ap_return_8");
    sc_trace(mVcdFile, ap_return_9, "(port)ap_return_9");
    sc_trace(mVcdFile, ap_return_10, "(port)ap_return_10");
    sc_trace(mVcdFile, ap_return_11, "(port)ap_return_11");
    sc_trace(mVcdFile, ap_return_12, "(port)ap_return_12");
    sc_trace(mVcdFile, ap_return_13, "(port)ap_return_13");
    sc_trace(mVcdFile, ap_return_14, "(port)ap_return_14");
    sc_trace(mVcdFile, ap_return_15, "(port)ap_return_15");
    sc_trace(mVcdFile, ap_return_16, "(port)ap_return_16");
    sc_trace(mVcdFile, ap_return_17, "(port)ap_return_17");
    sc_trace(mVcdFile, ap_return_18, "(port)ap_return_18");
    sc_trace(mVcdFile, ap_return_19, "(port)ap_return_19");
    sc_trace(mVcdFile, ap_return_20, "(port)ap_return_20");
    sc_trace(mVcdFile, ap_return_21, "(port)ap_return_21");
    sc_trace(mVcdFile, ap_return_22, "(port)ap_return_22");
    sc_trace(mVcdFile, ap_return_23, "(port)ap_return_23");
    sc_trace(mVcdFile, ap_return_24, "(port)ap_return_24");
    sc_trace(mVcdFile, ap_return_25, "(port)ap_return_25");
    sc_trace(mVcdFile, ap_return_26, "(port)ap_return_26");
    sc_trace(mVcdFile, ap_return_27, "(port)ap_return_27");
    sc_trace(mVcdFile, ap_return_28, "(port)ap_return_28");
    sc_trace(mVcdFile, ap_return_29, "(port)ap_return_29");
    sc_trace(mVcdFile, ap_return_30, "(port)ap_return_30");
    sc_trace(mVcdFile, ap_return_31, "(port)ap_return_31");
    sc_trace(mVcdFile, ap_return_32, "(port)ap_return_32");
    sc_trace(mVcdFile, ap_return_33, "(port)ap_return_33");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, call_ret1_stitchNeighbors_fu_288_ap_ready, "call_ret1_stitchNeighbors_fu_288_ap_ready");
    sc_trace(mVcdFile, call_ret1_stitchNeighbors_fu_288_ap_return_0, "call_ret1_stitchNeighbors_fu_288_ap_return_0");
    sc_trace(mVcdFile, call_ret1_stitchNeighbors_fu_288_ap_return_1, "call_ret1_stitchNeighbors_fu_288_ap_return_1");
    sc_trace(mVcdFile, call_ret2_stitchNeighbors_fu_296_ap_ready, "call_ret2_stitchNeighbors_fu_296_ap_ready");
    sc_trace(mVcdFile, call_ret2_stitchNeighbors_fu_296_ap_return_0, "call_ret2_stitchNeighbors_fu_296_ap_return_0");
    sc_trace(mVcdFile, call_ret2_stitchNeighbors_fu_296_ap_return_1, "call_ret2_stitchNeighbors_fu_296_ap_return_1");
    sc_trace(mVcdFile, call_ret3_stitchNeighbors_fu_304_ap_ready, "call_ret3_stitchNeighbors_fu_304_ap_ready");
    sc_trace(mVcdFile, call_ret3_stitchNeighbors_fu_304_ap_return_0, "call_ret3_stitchNeighbors_fu_304_ap_return_0");
    sc_trace(mVcdFile, call_ret3_stitchNeighbors_fu_304_ap_return_1, "call_ret3_stitchNeighbors_fu_304_ap_return_1");
    sc_trace(mVcdFile, call_ret4_stitchNeighbors_fu_312_ap_ready, "call_ret4_stitchNeighbors_fu_312_ap_ready");
    sc_trace(mVcdFile, call_ret4_stitchNeighbors_fu_312_ap_return_0, "call_ret4_stitchNeighbors_fu_312_ap_return_0");
    sc_trace(mVcdFile, call_ret4_stitchNeighbors_fu_312_ap_return_1, "call_ret4_stitchNeighbors_fu_312_ap_return_1");
    sc_trace(mVcdFile, call_ret5_stitchNeighbors_fu_320_ap_ready, "call_ret5_stitchNeighbors_fu_320_ap_ready");
    sc_trace(mVcdFile, call_ret5_stitchNeighbors_fu_320_ap_return_0, "call_ret5_stitchNeighbors_fu_320_ap_return_0");
    sc_trace(mVcdFile, call_ret5_stitchNeighbors_fu_320_ap_return_1, "call_ret5_stitchNeighbors_fu_320_ap_return_1");
    sc_trace(mVcdFile, call_ret6_stitchNeighbors_fu_328_ap_ready, "call_ret6_stitchNeighbors_fu_328_ap_ready");
    sc_trace(mVcdFile, call_ret6_stitchNeighbors_fu_328_ap_return_0, "call_ret6_stitchNeighbors_fu_328_ap_return_0");
    sc_trace(mVcdFile, call_ret6_stitchNeighbors_fu_328_ap_return_1, "call_ret6_stitchNeighbors_fu_328_ap_return_1");
    sc_trace(mVcdFile, call_ret7_stitchNeighbors_fu_336_ap_ready, "call_ret7_stitchNeighbors_fu_336_ap_ready");
    sc_trace(mVcdFile, call_ret7_stitchNeighbors_fu_336_ap_return_0, "call_ret7_stitchNeighbors_fu_336_ap_return_0");
    sc_trace(mVcdFile, call_ret7_stitchNeighbors_fu_336_ap_return_1, "call_ret7_stitchNeighbors_fu_336_ap_return_1");
    sc_trace(mVcdFile, call_ret8_stitchNeighbors_fu_344_ap_ready, "call_ret8_stitchNeighbors_fu_344_ap_ready");
    sc_trace(mVcdFile, call_ret8_stitchNeighbors_fu_344_ap_return_0, "call_ret8_stitchNeighbors_fu_344_ap_return_0");
    sc_trace(mVcdFile, call_ret8_stitchNeighbors_fu_344_ap_return_1, "call_ret8_stitchNeighbors_fu_344_ap_return_1");
    sc_trace(mVcdFile, call_ret9_stitchNeighbors_fu_352_ap_ready, "call_ret9_stitchNeighbors_fu_352_ap_ready");
    sc_trace(mVcdFile, call_ret9_stitchNeighbors_fu_352_ap_return_0, "call_ret9_stitchNeighbors_fu_352_ap_return_0");
    sc_trace(mVcdFile, call_ret9_stitchNeighbors_fu_352_ap_return_1, "call_ret9_stitchNeighbors_fu_352_ap_return_1");
    sc_trace(mVcdFile, call_ret10_stitchNeighbors_fu_360_ap_ready, "call_ret10_stitchNeighbors_fu_360_ap_ready");
    sc_trace(mVcdFile, call_ret10_stitchNeighbors_fu_360_ap_return_0, "call_ret10_stitchNeighbors_fu_360_ap_return_0");
    sc_trace(mVcdFile, call_ret10_stitchNeighbors_fu_360_ap_return_1, "call_ret10_stitchNeighbors_fu_360_ap_return_1");
    sc_trace(mVcdFile, call_ret11_stitchNeighbors_fu_368_ap_ready, "call_ret11_stitchNeighbors_fu_368_ap_ready");
    sc_trace(mVcdFile, call_ret11_stitchNeighbors_fu_368_ap_return_0, "call_ret11_stitchNeighbors_fu_368_ap_return_0");
    sc_trace(mVcdFile, call_ret11_stitchNeighbors_fu_368_ap_return_1, "call_ret11_stitchNeighbors_fu_368_ap_return_1");
    sc_trace(mVcdFile, call_ret12_stitchNeighbors_fu_376_ap_ready, "call_ret12_stitchNeighbors_fu_376_ap_ready");
    sc_trace(mVcdFile, call_ret12_stitchNeighbors_fu_376_ap_return_0, "call_ret12_stitchNeighbors_fu_376_ap_return_0");
    sc_trace(mVcdFile, call_ret12_stitchNeighbors_fu_376_ap_return_1, "call_ret12_stitchNeighbors_fu_376_ap_return_1");
    sc_trace(mVcdFile, call_ret13_stitchNeighbors_fu_384_ap_ready, "call_ret13_stitchNeighbors_fu_384_ap_ready");
    sc_trace(mVcdFile, call_ret13_stitchNeighbors_fu_384_ap_return_0, "call_ret13_stitchNeighbors_fu_384_ap_return_0");
    sc_trace(mVcdFile, call_ret13_stitchNeighbors_fu_384_ap_return_1, "call_ret13_stitchNeighbors_fu_384_ap_return_1");
    sc_trace(mVcdFile, call_ret14_stitchNeighbors_fu_392_ap_ready, "call_ret14_stitchNeighbors_fu_392_ap_ready");
    sc_trace(mVcdFile, call_ret14_stitchNeighbors_fu_392_ap_return_0, "call_ret14_stitchNeighbors_fu_392_ap_return_0");
    sc_trace(mVcdFile, call_ret14_stitchNeighbors_fu_392_ap_return_1, "call_ret14_stitchNeighbors_fu_392_ap_return_1");
    sc_trace(mVcdFile, call_ret15_stitchNeighbors_fu_400_ap_ready, "call_ret15_stitchNeighbors_fu_400_ap_ready");
    sc_trace(mVcdFile, call_ret15_stitchNeighbors_fu_400_ap_return_0, "call_ret15_stitchNeighbors_fu_400_ap_return_0");
    sc_trace(mVcdFile, call_ret15_stitchNeighbors_fu_400_ap_return_1, "call_ret15_stitchNeighbors_fu_400_ap_return_1");
    sc_trace(mVcdFile, call_ret16_stitchNeighbors_fu_408_ap_ready, "call_ret16_stitchNeighbors_fu_408_ap_ready");
    sc_trace(mVcdFile, call_ret16_stitchNeighbors_fu_408_ap_return_0, "call_ret16_stitchNeighbors_fu_408_ap_return_0");
    sc_trace(mVcdFile, call_ret16_stitchNeighbors_fu_408_ap_return_1, "call_ret16_stitchNeighbors_fu_408_ap_return_1");
    sc_trace(mVcdFile, call_ret_stitchNeighbors_fu_416_ap_ready, "call_ret_stitchNeighbors_fu_416_ap_ready");
    sc_trace(mVcdFile, call_ret_stitchNeighbors_fu_416_ap_return_0, "call_ret_stitchNeighbors_fu_416_ap_return_0");
    sc_trace(mVcdFile, call_ret_stitchNeighbors_fu_416_ap_return_1, "call_ret_stitchNeighbors_fu_416_ap_return_1");
#endif

    }
}

stitchInPhi::~stitchInPhi() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete call_ret1_stitchNeighbors_fu_288;
    delete call_ret2_stitchNeighbors_fu_296;
    delete call_ret3_stitchNeighbors_fu_304;
    delete call_ret4_stitchNeighbors_fu_312;
    delete call_ret5_stitchNeighbors_fu_320;
    delete call_ret6_stitchNeighbors_fu_328;
    delete call_ret7_stitchNeighbors_fu_336;
    delete call_ret8_stitchNeighbors_fu_344;
    delete call_ret9_stitchNeighbors_fu_352;
    delete call_ret10_stitchNeighbors_fu_360;
    delete call_ret11_stitchNeighbors_fu_368;
    delete call_ret12_stitchNeighbors_fu_376;
    delete call_ret13_stitchNeighbors_fu_384;
    delete call_ret14_stitchNeighbors_fu_392;
    delete call_ret15_stitchNeighbors_fu_400;
    delete call_ret16_stitchNeighbors_fu_408;
    delete call_ret_stitchNeighbors_fu_416;
}

void stitchInPhi::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void stitchInPhi::thread_ap_return_0() {
    ap_return_0 = call_ret1_stitchNeighbors_fu_288_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_1() {
    ap_return_1 = call_ret2_stitchNeighbors_fu_296_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_10() {
    ap_return_10 = call_ret11_stitchNeighbors_fu_368_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_11() {
    ap_return_11 = call_ret12_stitchNeighbors_fu_376_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_12() {
    ap_return_12 = call_ret13_stitchNeighbors_fu_384_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_13() {
    ap_return_13 = call_ret14_stitchNeighbors_fu_392_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_14() {
    ap_return_14 = call_ret15_stitchNeighbors_fu_400_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_15() {
    ap_return_15 = call_ret16_stitchNeighbors_fu_408_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_16() {
    ap_return_16 = call_ret_stitchNeighbors_fu_416_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_17() {
    ap_return_17 = call_ret1_stitchNeighbors_fu_288_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_18() {
    ap_return_18 = call_ret2_stitchNeighbors_fu_296_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_19() {
    ap_return_19 = call_ret3_stitchNeighbors_fu_304_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_2() {
    ap_return_2 = call_ret3_stitchNeighbors_fu_304_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_20() {
    ap_return_20 = call_ret4_stitchNeighbors_fu_312_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_21() {
    ap_return_21 = call_ret5_stitchNeighbors_fu_320_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_22() {
    ap_return_22 = call_ret6_stitchNeighbors_fu_328_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_23() {
    ap_return_23 = call_ret7_stitchNeighbors_fu_336_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_24() {
    ap_return_24 = call_ret8_stitchNeighbors_fu_344_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_25() {
    ap_return_25 = call_ret9_stitchNeighbors_fu_352_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_26() {
    ap_return_26 = call_ret10_stitchNeighbors_fu_360_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_27() {
    ap_return_27 = call_ret11_stitchNeighbors_fu_368_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_28() {
    ap_return_28 = call_ret12_stitchNeighbors_fu_376_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_29() {
    ap_return_29 = call_ret13_stitchNeighbors_fu_384_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_3() {
    ap_return_3 = call_ret4_stitchNeighbors_fu_312_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_30() {
    ap_return_30 = call_ret14_stitchNeighbors_fu_392_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_31() {
    ap_return_31 = call_ret15_stitchNeighbors_fu_400_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_32() {
    ap_return_32 = call_ret16_stitchNeighbors_fu_408_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_33() {
    ap_return_33 = call_ret_stitchNeighbors_fu_416_ap_return_1.read();
}

void stitchInPhi::thread_ap_return_4() {
    ap_return_4 = call_ret5_stitchNeighbors_fu_320_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_5() {
    ap_return_5 = call_ret6_stitchNeighbors_fu_328_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_6() {
    ap_return_6 = call_ret7_stitchNeighbors_fu_336_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_7() {
    ap_return_7 = call_ret8_stitchNeighbors_fu_344_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_8() {
    ap_return_8 = call_ret9_stitchNeighbors_fu_352_ap_return_0.read();
}

void stitchInPhi::thread_ap_return_9() {
    ap_return_9 = call_ret10_stitchNeighbors_fu_360_ap_return_0.read();
}

}

