#ifndef __TOWERMERGE_TOP_H__
#define __TOWERMERGE_TOP_H__

#include <stdint.h>
#include <ap_axi_sdata.h>
#include <ap_int.h>
#include <hls_stream.h>

#define TOWERS_IN_ETA 17
#define TOWERS_IN_PHI 4

#define N_INPUT_LINKS 4
#define N_OUTPUT_LINKS 4

template<int D, int U>
struct ap_axiu <D, U, 0, 0>{
	ap_uint<D>       data;
	ap_uint<U>       user;
	ap_uint<1>       last;
};

namespace algo {
	typedef ap_axiu<576, 8, 0, 0> axiword;
}

void towerMerge_top(
	hls::stream<algo::axiword> link_in[N_INPUT_LINKS],
	hls::stream<algo::axiword> link_out[N_OUTPUT_LINKS]
);

#endif
