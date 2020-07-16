#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst_n", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("link_out_0_TREADY", 1, hls_in, 20, "axis", "out_acc", 1),
	Port_Property("link_out_1_TREADY", 1, hls_in, 21, "axis", "out_acc", 1),
	Port_Property("link_out_2_TREADY", 1, hls_in, 22, "axis", "out_acc", 1),
	Port_Property("link_out_3_TREADY", 1, hls_in, 23, "axis", "out_acc", 1),
	Port_Property("link_in_0_TDATA", 576, hls_in, 0, "axis", "in_data", 1),
	Port_Property("link_in_0_TVALID", 1, hls_in, 8, "axis", "in_vld", 1),
	Port_Property("link_in_0_TREADY", 1, hls_out, 8, "axis", "in_acc", 1),
	Port_Property("link_in_1_TDATA", 576, hls_in, 1, "axis", "in_data", 1),
	Port_Property("link_in_1_TVALID", 1, hls_in, 9, "axis", "in_vld", 1),
	Port_Property("link_in_1_TREADY", 1, hls_out, 9, "axis", "in_acc", 1),
	Port_Property("link_in_2_TDATA", 576, hls_in, 2, "axis", "in_data", 1),
	Port_Property("link_in_2_TVALID", 1, hls_in, 10, "axis", "in_vld", 1),
	Port_Property("link_in_2_TREADY", 1, hls_out, 10, "axis", "in_acc", 1),
	Port_Property("link_in_3_TDATA", 576, hls_in, 3, "axis", "in_data", 1),
	Port_Property("link_in_3_TVALID", 1, hls_in, 11, "axis", "in_vld", 1),
	Port_Property("link_in_3_TREADY", 1, hls_out, 11, "axis", "in_acc", 1),
	Port_Property("link_in_0_TUSER", 8, hls_in, 4, "axis", "in_data", 1),
	Port_Property("link_in_1_TUSER", 8, hls_in, 5, "axis", "in_data", 1),
	Port_Property("link_in_2_TUSER", 8, hls_in, 6, "axis", "in_data", 1),
	Port_Property("link_in_3_TUSER", 8, hls_in, 7, "axis", "in_data", 1),
	Port_Property("link_in_0_TLAST", 1, hls_in, 8, "axis", "in_data", 1),
	Port_Property("link_in_1_TLAST", 1, hls_in, 9, "axis", "in_data", 1),
	Port_Property("link_in_2_TLAST", 1, hls_in, 10, "axis", "in_data", 1),
	Port_Property("link_in_3_TLAST", 1, hls_in, 11, "axis", "in_data", 1),
	Port_Property("link_out_0_TDATA", 576, hls_out, 12, "axis", "out_data", 1),
	Port_Property("link_out_0_TVALID", 1, hls_out, 20, "axis", "out_vld", 1),
	Port_Property("link_out_1_TDATA", 576, hls_out, 13, "axis", "out_data", 1),
	Port_Property("link_out_1_TVALID", 1, hls_out, 21, "axis", "out_vld", 1),
	Port_Property("link_out_2_TDATA", 576, hls_out, 14, "axis", "out_data", 1),
	Port_Property("link_out_2_TVALID", 1, hls_out, 22, "axis", "out_vld", 1),
	Port_Property("link_out_3_TDATA", 576, hls_out, 15, "axis", "out_data", 1),
	Port_Property("link_out_3_TVALID", 1, hls_out, 23, "axis", "out_vld", 1),
	Port_Property("link_out_0_TUSER", 8, hls_out, 16, "axis", "out_data", 1),
	Port_Property("link_out_1_TUSER", 8, hls_out, 17, "axis", "out_data", 1),
	Port_Property("link_out_2_TUSER", 8, hls_out, 18, "axis", "out_data", 1),
	Port_Property("link_out_3_TUSER", 8, hls_out, 19, "axis", "out_data", 1),
	Port_Property("link_out_0_TLAST", 1, hls_out, 20, "axis", "out_data", 1),
	Port_Property("link_out_1_TLAST", 1, hls_out, 21, "axis", "out_data", 1),
	Port_Property("link_out_2_TLAST", 1, hls_out, 22, "axis", "out_data", 1),
	Port_Property("link_out_3_TLAST", 1, hls_out, 23, "axis", "out_data", 1),
};
const char* HLS_Design_Meta::dut_name = "towerMerge_top";
