############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project towerMerge
set_top towerMerge_top
add_files towerMerge.cpp
add_files towerMerge_top.cpp
open_solution "fullpipeline"
set_part {xcvu9p-flgc2104-1-e} -tool vivado
create_clock -period 240MHz -name default
set_clock_uncertainty 30%
#source "./towerMerge/fullpipeline/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog
