// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module stitchNeighbors (
        ap_ready,
        Ai_data_V,
        Bi_data_V,
        ap_return_0,
        ap_return_1
);


output   ap_ready;
input  [31:0] Ai_data_V;
input  [31:0] Bi_data_V;
output  [31:0] ap_return_0;
output  [31:0] ap_return_1;

wire   [2:0] trunc_ln_fu_72_p4;
wire   [2:0] trunc_ln1503_1_fu_88_p4;
wire   [2:0] trunc_ln1503_2_fu_104_p4;
wire   [2:0] trunc_ln1503_3_fu_114_p4;
wire   [9:0] trunc_ln214_fu_130_p1;
wire   [9:0] trunc_ln214_1_fu_134_p1;
wire   [10:0] rhs_V_fu_142_p1;
wire   [10:0] lhs_V_fu_138_p1;
wire   [10:0] ret_V_fu_146_p2;
wire   [0:0] tmp_2_fu_152_p3;
wire   [9:0] pegged_cEtSum_V_fu_160_p2;
wire   [9:0] trunc_ln1503_4_fu_180_p4;
wire   [10:0] lhs_V_1_fu_190_p1;
wire   [10:0] ret_V_1_fu_194_p2;
wire   [0:0] tmp_3_fu_200_p3;
wire   [9:0] pegged_tEtSum_V_fu_208_p2;
wire   [9:0] trunc_ln1503_5_fu_222_p4;
wire   [8:0] tmp_fu_238_p4;
wire   [9:0] pegged_tEtSum_V_1_fu_214_p3;
wire   [9:0] pegged_cEtSum_V_1_fu_166_p3;
wire   [5:0] tmp_1_fu_260_p4;
wire   [9:0] tEt_leftOver_V_fu_232_p2;
wire   [10:0] lhs_V_2_fu_284_p1;
wire   [10:0] ret_V_4_fu_288_p2;
wire   [0:0] tmp_4_fu_294_p3;
wire   [9:0] pegged_tEtSum_V_2_fu_302_p2;
wire   [9:0] tEt_leftOver_V_1_fu_316_p2;
wire   [31:0] tmp4_fu_322_p5;
wire   [9:0] pegged_tEtSum_V_3_fu_308_p3;
wire   [0:0] icmp_ln879_1_fu_98_p2;
wire   [0:0] phiStitch_fu_124_p2;
wire   [0:0] and_ln879_fu_354_p2;
wire   [0:0] icmp_ln879_fu_82_p2;
wire   [0:0] and_ln879_1_fu_360_p2;
wire   [0:0] icmp_ln895_fu_174_p2;
wire   [0:0] and_ln895_fu_366_p2;
wire   [31:0] ret_V_2_fu_248_p5;
wire   [0:0] xor_ln895_fu_380_p2;
wire   [0:0] and_ln895_1_fu_386_p2;
wire   [31:0] ret_V_5_fu_334_p2;
wire   [31:0] select_ln895_fu_372_p3;
wire   [31:0] ret_V_3_fu_270_p6;
wire   [31:0] ret_V_6_fu_340_p6;
wire   [31:0] select_ln895_2_fu_400_p3;
wire   [31:0] select_ln895_1_fu_392_p3;
wire   [31:0] select_ln895_3_fu_408_p3;

assign and_ln879_1_fu_360_p2 = (icmp_ln879_fu_82_p2 & and_ln879_fu_354_p2);

assign and_ln879_fu_354_p2 = (phiStitch_fu_124_p2 & icmp_ln879_1_fu_98_p2);

assign and_ln895_1_fu_386_p2 = (xor_ln895_fu_380_p2 & and_ln879_1_fu_360_p2);

assign and_ln895_fu_366_p2 = (icmp_ln895_fu_174_p2 & and_ln879_1_fu_360_p2);

assign ap_ready = 1'b1;

assign ap_return_0 = select_ln895_1_fu_392_p3;

assign ap_return_1 = select_ln895_3_fu_408_p3;

assign icmp_ln879_1_fu_98_p2 = ((trunc_ln1503_1_fu_88_p4 == 3'd0) ? 1'b1 : 1'b0);

assign icmp_ln879_fu_82_p2 = ((trunc_ln_fu_72_p4 == 3'd4) ? 1'b1 : 1'b0);

assign icmp_ln895_fu_174_p2 = ((trunc_ln214_fu_130_p1 > trunc_ln214_1_fu_134_p1) ? 1'b1 : 1'b0);

assign lhs_V_1_fu_190_p1 = trunc_ln1503_4_fu_180_p4;

assign lhs_V_2_fu_284_p1 = trunc_ln1503_5_fu_222_p4;

assign lhs_V_fu_138_p1 = trunc_ln214_fu_130_p1;

assign pegged_cEtSum_V_1_fu_166_p3 = ((tmp_2_fu_152_p3[0:0] === 1'b1) ? 10'd1023 : pegged_cEtSum_V_fu_160_p2);

assign pegged_cEtSum_V_fu_160_p2 = (trunc_ln214_fu_130_p1 + trunc_ln214_1_fu_134_p1);

assign pegged_tEtSum_V_1_fu_214_p3 = ((tmp_3_fu_200_p3[0:0] === 1'b1) ? 10'd1023 : pegged_tEtSum_V_fu_208_p2);

assign pegged_tEtSum_V_2_fu_302_p2 = (trunc_ln214_fu_130_p1 + trunc_ln1503_5_fu_222_p4);

assign pegged_tEtSum_V_3_fu_308_p3 = ((tmp_4_fu_294_p3[0:0] === 1'b1) ? 10'd1023 : pegged_tEtSum_V_2_fu_302_p2);

assign pegged_tEtSum_V_fu_208_p2 = (trunc_ln214_1_fu_134_p1 + trunc_ln1503_4_fu_180_p4);

assign phiStitch_fu_124_p2 = ((trunc_ln1503_2_fu_104_p4 == trunc_ln1503_3_fu_114_p4) ? 1'b1 : 1'b0);

assign ret_V_1_fu_194_p2 = (lhs_V_1_fu_190_p1 + rhs_V_fu_142_p1);

assign ret_V_2_fu_248_p5 = {{{{tmp_fu_238_p4}, {3'd4}}, {pegged_tEtSum_V_1_fu_214_p3}}, {pegged_cEtSum_V_1_fu_166_p3}};

assign ret_V_3_fu_270_p6 = {{{{{tmp_1_fu_260_p4}, {trunc_ln1503_2_fu_104_p4}}, {3'd0}}, {tEt_leftOver_V_fu_232_p2}}, {10'd0}};

assign ret_V_4_fu_288_p2 = (lhs_V_2_fu_284_p1 + lhs_V_fu_138_p1);

assign ret_V_5_fu_334_p2 = (tmp4_fu_322_p5 | 32'd4194304);

assign ret_V_6_fu_340_p6 = {{{{{tmp_1_fu_260_p4}, {trunc_ln1503_2_fu_104_p4}}, {3'd0}}, {pegged_tEtSum_V_3_fu_308_p3}}, {pegged_cEtSum_V_1_fu_166_p3}};

assign ret_V_fu_146_p2 = (rhs_V_fu_142_p1 + lhs_V_fu_138_p1);

assign rhs_V_fu_142_p1 = trunc_ln214_1_fu_134_p1;

assign select_ln895_1_fu_392_p3 = ((and_ln895_1_fu_386_p2[0:0] === 1'b1) ? ret_V_5_fu_334_p2 : select_ln895_fu_372_p3);

assign select_ln895_2_fu_400_p3 = ((and_ln895_fu_366_p2[0:0] === 1'b1) ? ret_V_3_fu_270_p6 : Bi_data_V);

assign select_ln895_3_fu_408_p3 = ((and_ln895_1_fu_386_p2[0:0] === 1'b1) ? ret_V_6_fu_340_p6 : select_ln895_2_fu_400_p3);

assign select_ln895_fu_372_p3 = ((and_ln895_fu_366_p2[0:0] === 1'b1) ? ret_V_2_fu_248_p5 : Ai_data_V);

assign tEt_leftOver_V_1_fu_316_p2 = (trunc_ln1503_4_fu_180_p4 - trunc_ln214_fu_130_p1);

assign tEt_leftOver_V_fu_232_p2 = (trunc_ln1503_5_fu_222_p4 - trunc_ln214_1_fu_134_p1);

assign tmp4_fu_322_p5 = {{{{tmp_fu_238_p4}, {3'd0}}, {tEt_leftOver_V_1_fu_316_p2}}, {10'd0}};

assign tmp_1_fu_260_p4 = {{Bi_data_V[31:26]}};

assign tmp_2_fu_152_p3 = ret_V_fu_146_p2[32'd10];

assign tmp_3_fu_200_p3 = ret_V_1_fu_194_p2[32'd10];

assign tmp_4_fu_294_p3 = ret_V_4_fu_288_p2[32'd10];

assign tmp_fu_238_p4 = {{Ai_data_V[31:23]}};

assign trunc_ln1503_1_fu_88_p4 = {{Bi_data_V[22:20]}};

assign trunc_ln1503_2_fu_104_p4 = {{Ai_data_V[25:23]}};

assign trunc_ln1503_3_fu_114_p4 = {{Bi_data_V[25:23]}};

assign trunc_ln1503_4_fu_180_p4 = {{Ai_data_V[19:10]}};

assign trunc_ln1503_5_fu_222_p4 = {{Bi_data_V[19:10]}};

assign trunc_ln214_1_fu_134_p1 = Bi_data_V[9:0];

assign trunc_ln214_fu_130_p1 = Ai_data_V[9:0];

assign trunc_ln_fu_72_p4 = {{Ai_data_V[22:20]}};

assign xor_ln895_fu_380_p2 = (icmp_ln895_fu_174_p2 ^ 1'd1);

endmodule //stitchNeighbors
