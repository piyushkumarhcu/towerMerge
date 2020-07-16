set moduleName towerMerge_top
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {towerMerge_top}
set C_modelType { void 0 }
set C_modelArgList {
	{ link_in_0_V_data_V int 576 regular {axi_s 0 volatile  { link_in_0 Data } }  }
	{ link_in_1_V_data_V int 576 regular {axi_s 0 volatile  { link_in_1 Data } }  }
	{ link_in_2_V_data_V int 576 regular {axi_s 0 volatile  { link_in_2 Data } }  }
	{ link_in_3_V_data_V int 576 regular {axi_s 0 volatile  { link_in_3 Data } }  }
	{ link_in_0_V_user_V int 8 regular {axi_s 0 volatile  { link_in_0 User } }  }
	{ link_in_1_V_user_V int 8 regular {axi_s 0 volatile  { link_in_1 User } }  }
	{ link_in_2_V_user_V int 8 regular {axi_s 0 volatile  { link_in_2 User } }  }
	{ link_in_3_V_user_V int 8 regular {axi_s 0 volatile  { link_in_3 User } }  }
	{ link_in_0_V_last_V int 1 regular {axi_s 0 volatile  { link_in_0 Last } }  }
	{ link_in_1_V_last_V int 1 regular {axi_s 0 volatile  { link_in_1 Last } }  }
	{ link_in_2_V_last_V int 1 regular {axi_s 0 volatile  { link_in_2 Last } }  }
	{ link_in_3_V_last_V int 1 regular {axi_s 0 volatile  { link_in_3 Last } }  }
	{ link_out_0_V_data_V int 576 regular {axi_s 1 volatile  { link_out_0 Data } }  }
	{ link_out_1_V_data_V int 576 regular {axi_s 1 volatile  { link_out_1 Data } }  }
	{ link_out_2_V_data_V int 576 regular {axi_s 1 volatile  { link_out_2 Data } }  }
	{ link_out_3_V_data_V int 576 regular {axi_s 1 volatile  { link_out_3 Data } }  }
	{ link_out_0_V_user_V int 8 regular {axi_s 1 volatile  { link_out_0 User } }  }
	{ link_out_1_V_user_V int 8 regular {axi_s 1 volatile  { link_out_1 User } }  }
	{ link_out_2_V_user_V int 8 regular {axi_s 1 volatile  { link_out_2 User } }  }
	{ link_out_3_V_user_V int 8 regular {axi_s 1 volatile  { link_out_3 User } }  }
	{ link_out_0_V_last_V int 1 regular {axi_s 1 volatile  { link_out_0 Last } }  }
	{ link_out_1_V_last_V int 1 regular {axi_s 1 volatile  { link_out_1 Last } }  }
	{ link_out_2_V_last_V int 1 regular {axi_s 1 volatile  { link_out_2 Last } }  }
	{ link_out_3_V_last_V int 1 regular {axi_s 1 volatile  { link_out_3 Last } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "link_in_0_V_data_V", "interface" : "axis", "bitwidth" : 576, "direction" : "READONLY", "bitSlice":[{"low":0,"up":575,"cElement": [{"cName": "link_in.V.data.V","cData": "uint576","bit_use": { "low": 0,"up": 575},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "link_in_1_V_data_V", "interface" : "axis", "bitwidth" : 576, "direction" : "READONLY", "bitSlice":[{"low":0,"up":575,"cElement": [{"cName": "link_in.V.data.V","cData": "uint576","bit_use": { "low": 0,"up": 575},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "link_in_2_V_data_V", "interface" : "axis", "bitwidth" : 576, "direction" : "READONLY", "bitSlice":[{"low":0,"up":575,"cElement": [{"cName": "link_in.V.data.V","cData": "uint576","bit_use": { "low": 0,"up": 575},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "link_in_3_V_data_V", "interface" : "axis", "bitwidth" : 576, "direction" : "READONLY", "bitSlice":[{"low":0,"up":575,"cElement": [{"cName": "link_in.V.data.V","cData": "uint576","bit_use": { "low": 0,"up": 575},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "link_in_0_V_user_V", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "link_in.V.user.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "link_in_1_V_user_V", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "link_in.V.user.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "link_in_2_V_user_V", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "link_in.V.user.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "link_in_3_V_user_V", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "link_in.V.user.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "link_in_0_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "link_in.V.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "link_in_1_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "link_in.V.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "link_in_2_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "link_in.V.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "link_in_3_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "link_in.V.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "link_out_0_V_data_V", "interface" : "axis", "bitwidth" : 576, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":575,"cElement": [{"cName": "link_out.V.data.V","cData": "uint576","bit_use": { "low": 0,"up": 575},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "link_out_1_V_data_V", "interface" : "axis", "bitwidth" : 576, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":575,"cElement": [{"cName": "link_out.V.data.V","cData": "uint576","bit_use": { "low": 0,"up": 575},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "link_out_2_V_data_V", "interface" : "axis", "bitwidth" : 576, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":575,"cElement": [{"cName": "link_out.V.data.V","cData": "uint576","bit_use": { "low": 0,"up": 575},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "link_out_3_V_data_V", "interface" : "axis", "bitwidth" : 576, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":575,"cElement": [{"cName": "link_out.V.data.V","cData": "uint576","bit_use": { "low": 0,"up": 575},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "link_out_0_V_user_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "link_out.V.user.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "link_out_1_V_user_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "link_out.V.user.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "link_out_2_V_user_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "link_out.V.user.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "link_out_3_V_user_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "link_out.V.user.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "link_out_0_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "link_out.V.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "link_out_1_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "link_out.V.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "link_out_2_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "link_out.V.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "link_out_3_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "link_out.V.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} ]}
# RTL Port declarations: 
set portNum 46
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ link_out_0_TREADY sc_in sc_logic 1 outacc 20 } 
	{ link_out_1_TREADY sc_in sc_logic 1 outacc 21 } 
	{ link_out_2_TREADY sc_in sc_logic 1 outacc 22 } 
	{ link_out_3_TREADY sc_in sc_logic 1 outacc 23 } 
	{ link_in_0_TDATA sc_in sc_lv 576 signal 0 } 
	{ link_in_0_TVALID sc_in sc_logic 1 invld 8 } 
	{ link_in_0_TREADY sc_out sc_logic 1 inacc 8 } 
	{ link_in_1_TDATA sc_in sc_lv 576 signal 1 } 
	{ link_in_1_TVALID sc_in sc_logic 1 invld 9 } 
	{ link_in_1_TREADY sc_out sc_logic 1 inacc 9 } 
	{ link_in_2_TDATA sc_in sc_lv 576 signal 2 } 
	{ link_in_2_TVALID sc_in sc_logic 1 invld 10 } 
	{ link_in_2_TREADY sc_out sc_logic 1 inacc 10 } 
	{ link_in_3_TDATA sc_in sc_lv 576 signal 3 } 
	{ link_in_3_TVALID sc_in sc_logic 1 invld 11 } 
	{ link_in_3_TREADY sc_out sc_logic 1 inacc 11 } 
	{ link_in_0_TUSER sc_in sc_lv 8 signal 4 } 
	{ link_in_1_TUSER sc_in sc_lv 8 signal 5 } 
	{ link_in_2_TUSER sc_in sc_lv 8 signal 6 } 
	{ link_in_3_TUSER sc_in sc_lv 8 signal 7 } 
	{ link_in_0_TLAST sc_in sc_lv 1 signal 8 } 
	{ link_in_1_TLAST sc_in sc_lv 1 signal 9 } 
	{ link_in_2_TLAST sc_in sc_lv 1 signal 10 } 
	{ link_in_3_TLAST sc_in sc_lv 1 signal 11 } 
	{ link_out_0_TDATA sc_out sc_lv 576 signal 12 } 
	{ link_out_0_TVALID sc_out sc_logic 1 outvld 20 } 
	{ link_out_1_TDATA sc_out sc_lv 576 signal 13 } 
	{ link_out_1_TVALID sc_out sc_logic 1 outvld 21 } 
	{ link_out_2_TDATA sc_out sc_lv 576 signal 14 } 
	{ link_out_2_TVALID sc_out sc_logic 1 outvld 22 } 
	{ link_out_3_TDATA sc_out sc_lv 576 signal 15 } 
	{ link_out_3_TVALID sc_out sc_logic 1 outvld 23 } 
	{ link_out_0_TUSER sc_out sc_lv 8 signal 16 } 
	{ link_out_1_TUSER sc_out sc_lv 8 signal 17 } 
	{ link_out_2_TUSER sc_out sc_lv 8 signal 18 } 
	{ link_out_3_TUSER sc_out sc_lv 8 signal 19 } 
	{ link_out_0_TLAST sc_out sc_lv 1 signal 20 } 
	{ link_out_1_TLAST sc_out sc_lv 1 signal 21 } 
	{ link_out_2_TLAST sc_out sc_lv 1 signal 22 } 
	{ link_out_3_TLAST sc_out sc_lv 1 signal 23 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "link_out_0_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "link_out_0_V_last_V", "role": "default" }} , 
 	{ "name": "link_out_1_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "link_out_1_V_last_V", "role": "default" }} , 
 	{ "name": "link_out_2_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "link_out_2_V_last_V", "role": "default" }} , 
 	{ "name": "link_out_3_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "link_out_3_V_last_V", "role": "default" }} , 
 	{ "name": "link_in_0_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":576, "type": "signal", "bundle":{"name": "link_in_0_V_data_V", "role": "default" }} , 
 	{ "name": "link_in_0_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "link_in_0_V_last_V", "role": "default" }} , 
 	{ "name": "link_in_0_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "link_in_0_V_last_V", "role": "default" }} , 
 	{ "name": "link_in_1_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":576, "type": "signal", "bundle":{"name": "link_in_1_V_data_V", "role": "default" }} , 
 	{ "name": "link_in_1_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "link_in_1_V_last_V", "role": "default" }} , 
 	{ "name": "link_in_1_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "link_in_1_V_last_V", "role": "default" }} , 
 	{ "name": "link_in_2_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":576, "type": "signal", "bundle":{"name": "link_in_2_V_data_V", "role": "default" }} , 
 	{ "name": "link_in_2_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "link_in_2_V_last_V", "role": "default" }} , 
 	{ "name": "link_in_2_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "link_in_2_V_last_V", "role": "default" }} , 
 	{ "name": "link_in_3_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":576, "type": "signal", "bundle":{"name": "link_in_3_V_data_V", "role": "default" }} , 
 	{ "name": "link_in_3_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "link_in_3_V_last_V", "role": "default" }} , 
 	{ "name": "link_in_3_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "link_in_3_V_last_V", "role": "default" }} , 
 	{ "name": "link_in_0_TUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "link_in_0_V_user_V", "role": "default" }} , 
 	{ "name": "link_in_1_TUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "link_in_1_V_user_V", "role": "default" }} , 
 	{ "name": "link_in_2_TUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "link_in_2_V_user_V", "role": "default" }} , 
 	{ "name": "link_in_3_TUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "link_in_3_V_user_V", "role": "default" }} , 
 	{ "name": "link_in_0_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "link_in_0_V_last_V", "role": "default" }} , 
 	{ "name": "link_in_1_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "link_in_1_V_last_V", "role": "default" }} , 
 	{ "name": "link_in_2_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "link_in_2_V_last_V", "role": "default" }} , 
 	{ "name": "link_in_3_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "link_in_3_V_last_V", "role": "default" }} , 
 	{ "name": "link_out_0_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":576, "type": "signal", "bundle":{"name": "link_out_0_V_data_V", "role": "default" }} , 
 	{ "name": "link_out_0_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "link_out_0_V_last_V", "role": "default" }} , 
 	{ "name": "link_out_1_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":576, "type": "signal", "bundle":{"name": "link_out_1_V_data_V", "role": "default" }} , 
 	{ "name": "link_out_1_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "link_out_1_V_last_V", "role": "default" }} , 
 	{ "name": "link_out_2_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":576, "type": "signal", "bundle":{"name": "link_out_2_V_data_V", "role": "default" }} , 
 	{ "name": "link_out_2_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "link_out_2_V_last_V", "role": "default" }} , 
 	{ "name": "link_out_3_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":576, "type": "signal", "bundle":{"name": "link_out_3_V_data_V", "role": "default" }} , 
 	{ "name": "link_out_3_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "link_out_3_V_last_V", "role": "default" }} , 
 	{ "name": "link_out_0_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "link_out_0_V_user_V", "role": "default" }} , 
 	{ "name": "link_out_1_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "link_out_1_V_user_V", "role": "default" }} , 
 	{ "name": "link_out_2_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "link_out_2_V_user_V", "role": "default" }} , 
 	{ "name": "link_out_3_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "link_out_3_V_user_V", "role": "default" }} , 
 	{ "name": "link_out_0_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "link_out_0_V_last_V", "role": "default" }} , 
 	{ "name": "link_out_1_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "link_out_1_V_last_V", "role": "default" }} , 
 	{ "name": "link_out_2_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "link_out_2_V_last_V", "role": "default" }} , 
 	{ "name": "link_out_3_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "link_out_3_V_last_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "towerMerge_top",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "link_in_0_V_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "link_in_0_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "link_in_1_V_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "link_in_1_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "link_in_2_V_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "link_in_2_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "link_in_3_V_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "link_in_3_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "link_in_0_V_user_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "link_in_1_V_user_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "link_in_2_V_user_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "link_in_3_V_user_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "link_in_0_V_last_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "link_in_1_V_last_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "link_in_2_V_last_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "link_in_3_V_last_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "link_out_0_V_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "link_out_0_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "link_out_1_V_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "link_out_1_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "link_out_2_V_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "link_out_2_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "link_out_3_V_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "link_out_3_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "link_out_0_V_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "link_out_1_V_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "link_out_2_V_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "link_out_3_V_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "link_out_0_V_last_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "link_out_1_V_last_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "link_out_2_V_last_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "link_out_3_V_last_V", "Type" : "Axis", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18"],
		"CDFG" : "stitchInPhi",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret1_stitchNeighbors_fu_288", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret2_stitchNeighbors_fu_296", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret3_stitchNeighbors_fu_304", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret4_stitchNeighbors_fu_312", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret5_stitchNeighbors_fu_320", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret6_stitchNeighbors_fu_328", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret7_stitchNeighbors_fu_336", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret8_stitchNeighbors_fu_344", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret9_stitchNeighbors_fu_352", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret10_stitchNeighbors_fu_360", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret11_stitchNeighbors_fu_368", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret12_stitchNeighbors_fu_376", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret13_stitchNeighbors_fu_384", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret14_stitchNeighbors_fu_392", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret15_stitchNeighbors_fu_400", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret16_stitchNeighbors_fu_408", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_stitchInPhi_fu_250.call_ret_stitchNeighbors_fu_416", "Parent" : "1",
		"CDFG" : "stitchNeighbors",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "Ai_data_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "Bi_data_V", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	towerMerge_top {
		link_in_0_V_data_V {Type I LastRead 0 FirstWrite -1}
		link_in_1_V_data_V {Type I LastRead 0 FirstWrite -1}
		link_in_2_V_data_V {Type I LastRead 0 FirstWrite -1}
		link_in_3_V_data_V {Type I LastRead 0 FirstWrite -1}
		link_in_0_V_user_V {Type I LastRead 0 FirstWrite -1}
		link_in_1_V_user_V {Type I LastRead 0 FirstWrite -1}
		link_in_2_V_user_V {Type I LastRead 0 FirstWrite -1}
		link_in_3_V_user_V {Type I LastRead 0 FirstWrite -1}
		link_in_0_V_last_V {Type I LastRead 0 FirstWrite -1}
		link_in_1_V_last_V {Type I LastRead 0 FirstWrite -1}
		link_in_2_V_last_V {Type I LastRead 0 FirstWrite -1}
		link_in_3_V_last_V {Type I LastRead 0 FirstWrite -1}
		link_out_0_V_data_V {Type O LastRead -1 FirstWrite 0}
		link_out_1_V_data_V {Type O LastRead -1 FirstWrite 0}
		link_out_2_V_data_V {Type O LastRead -1 FirstWrite 0}
		link_out_3_V_data_V {Type O LastRead -1 FirstWrite 0}
		link_out_0_V_user_V {Type O LastRead -1 FirstWrite 0}
		link_out_1_V_user_V {Type O LastRead -1 FirstWrite 0}
		link_out_2_V_user_V {Type O LastRead -1 FirstWrite 0}
		link_out_3_V_user_V {Type O LastRead -1 FirstWrite 0}
		link_out_0_V_last_V {Type O LastRead -1 FirstWrite 0}
		link_out_1_V_last_V {Type O LastRead -1 FirstWrite 0}
		link_out_2_V_last_V {Type O LastRead -1 FirstWrite 0}
		link_out_3_V_last_V {Type O LastRead -1 FirstWrite 0}}
	stitchInPhi {
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		p_read10 {Type I LastRead 0 FirstWrite -1}
		p_read11 {Type I LastRead 0 FirstWrite -1}
		p_read12 {Type I LastRead 0 FirstWrite -1}
		p_read13 {Type I LastRead 0 FirstWrite -1}
		p_read14 {Type I LastRead 0 FirstWrite -1}
		p_read15 {Type I LastRead 0 FirstWrite -1}
		p_read16 {Type I LastRead 0 FirstWrite -1}
		p_read17 {Type I LastRead 0 FirstWrite -1}
		p_read18 {Type I LastRead 0 FirstWrite -1}
		p_read19 {Type I LastRead 0 FirstWrite -1}
		p_read20 {Type I LastRead 0 FirstWrite -1}
		p_read21 {Type I LastRead 0 FirstWrite -1}
		p_read22 {Type I LastRead 0 FirstWrite -1}
		p_read23 {Type I LastRead 0 FirstWrite -1}
		p_read24 {Type I LastRead 0 FirstWrite -1}
		p_read25 {Type I LastRead 0 FirstWrite -1}
		p_read26 {Type I LastRead 0 FirstWrite -1}
		p_read27 {Type I LastRead 0 FirstWrite -1}
		p_read28 {Type I LastRead 0 FirstWrite -1}
		p_read29 {Type I LastRead 0 FirstWrite -1}
		p_read30 {Type I LastRead 0 FirstWrite -1}
		p_read31 {Type I LastRead 0 FirstWrite -1}
		p_read32 {Type I LastRead 0 FirstWrite -1}
		p_read33 {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}
	stitchNeighbors {
		Ai_data_V {Type I LastRead 0 FirstWrite -1}
		Bi_data_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "1"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	link_in_0_V_data_V { axis {  { link_in_0_TDATA in_data 0 576 } } }
	link_in_1_V_data_V { axis {  { link_in_1_TDATA in_data 0 576 } } }
	link_in_2_V_data_V { axis {  { link_in_2_TDATA in_data 0 576 } } }
	link_in_3_V_data_V { axis {  { link_in_3_TDATA in_data 0 576 } } }
	link_in_0_V_user_V { axis {  { link_in_0_TUSER in_data 0 8 } } }
	link_in_1_V_user_V { axis {  { link_in_1_TUSER in_data 0 8 } } }
	link_in_2_V_user_V { axis {  { link_in_2_TUSER in_data 0 8 } } }
	link_in_3_V_user_V { axis {  { link_in_3_TUSER in_data 0 8 } } }
	link_in_0_V_last_V { axis {  { link_in_0_TVALID in_vld 0 1 }  { link_in_0_TREADY in_acc 1 1 }  { link_in_0_TLAST in_data 0 1 } } }
	link_in_1_V_last_V { axis {  { link_in_1_TVALID in_vld 0 1 }  { link_in_1_TREADY in_acc 1 1 }  { link_in_1_TLAST in_data 0 1 } } }
	link_in_2_V_last_V { axis {  { link_in_2_TVALID in_vld 0 1 }  { link_in_2_TREADY in_acc 1 1 }  { link_in_2_TLAST in_data 0 1 } } }
	link_in_3_V_last_V { axis {  { link_in_3_TVALID in_vld 0 1 }  { link_in_3_TREADY in_acc 1 1 }  { link_in_3_TLAST in_data 0 1 } } }
	link_out_0_V_data_V { axis {  { link_out_0_TDATA out_data 1 576 } } }
	link_out_1_V_data_V { axis {  { link_out_1_TDATA out_data 1 576 } } }
	link_out_2_V_data_V { axis {  { link_out_2_TDATA out_data 1 576 } } }
	link_out_3_V_data_V { axis {  { link_out_3_TDATA out_data 1 576 } } }
	link_out_0_V_user_V { axis {  { link_out_0_TUSER out_data 1 8 } } }
	link_out_1_V_user_V { axis {  { link_out_1_TUSER out_data 1 8 } } }
	link_out_2_V_user_V { axis {  { link_out_2_TUSER out_data 1 8 } } }
	link_out_3_V_user_V { axis {  { link_out_3_TUSER out_data 1 8 } } }
	link_out_0_V_last_V { axis {  { link_out_0_TREADY out_acc 0 1 }  { link_out_0_TVALID out_vld 1 1 }  { link_out_0_TLAST out_data 1 1 } } }
	link_out_1_V_last_V { axis {  { link_out_1_TREADY out_acc 0 1 }  { link_out_1_TVALID out_vld 1 1 }  { link_out_1_TLAST out_data 1 1 } } }
	link_out_2_V_last_V { axis {  { link_out_2_TREADY out_acc 0 1 }  { link_out_2_TVALID out_vld 1 1 }  { link_out_2_TLAST out_data 1 1 } } }
	link_out_3_V_last_V { axis {  { link_out_3_TREADY out_acc 0 1 }  { link_out_3_TVALID out_vld 1 1 }  { link_out_3_TLAST out_data 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
