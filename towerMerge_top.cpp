#include "towerMerge_top.h"
#include "towerMerge.h"
#include <algorithm>
#include <utility>

using namespace std;
using namespace algo;

void processOutputData(hls::stream<axiword> &link, ap_uint<576> bigdataword) {
#pragma HLS INTERFACE axis port=link
#pragma HLS PIPELINE II=6
#pragma HLS INLINE
  algo::axiword r;
  r.user = 0;
  r.last = 1;
  r.data = bigdataword;
  link.write(r);
}

void processInputData(hls::stream<axiword> &link, TowerUnite &tower) {
#pragma HLS INTERFACE axis port=link
#pragma HLS PIPELINE II=6
#pragma HLS INLINE
#ifndef __SYNTHESIS__
  // Avoid simulation warnings
  if (link.empty()) return;
#endif
  ap_uint<576> bigdataword = link.read().data;
  tower = TowerUnite(bigdataword);
  return;
}

void stitchInPhi(TowerUnite towersx[2], TowerUnite towersy[2]){
#pragma HLS ARRAY_PARTITION variable=towersx
#pragma HLS ARRAY_PARTITION variable=towersy
#pragma HLS PIPELINE II=6
  stitchNeighbors(towersx[0].tower[0], towersx[1].tower[0], towersy[0].tower[0], towersy[1].tower[0]);
  stitchNeighbors(towersx[0].tower[1], towersx[1].tower[1], towersy[0].tower[1], towersy[1].tower[1]);
  stitchNeighbors(towersx[0].tower[2], towersx[1].tower[2], towersy[0].tower[2], towersy[1].tower[2]);
  stitchNeighbors(towersx[0].tower[3], towersx[1].tower[3], towersy[0].tower[3], towersy[1].tower[3]);
  stitchNeighbors(towersx[0].tower[4], towersx[1].tower[4], towersy[0].tower[4], towersy[1].tower[4]);
  stitchNeighbors(towersx[0].tower[5], towersx[1].tower[5], towersy[0].tower[5], towersy[1].tower[5]);
  stitchNeighbors(towersx[0].tower[6], towersx[1].tower[6], towersy[0].tower[6], towersy[1].tower[6]);
  stitchNeighbors(towersx[0].tower[7], towersx[1].tower[7], towersy[0].tower[7], towersy[1].tower[7]);
  stitchNeighbors(towersx[0].tower[8], towersx[1].tower[8], towersy[0].tower[8], towersy[1].tower[8]);
  stitchNeighbors(towersx[0].tower[9], towersx[1].tower[9], towersy[0].tower[9], towersy[1].tower[9]);
  stitchNeighbors(towersx[0].tower[10], towersx[1].tower[10], towersy[0].tower[10], towersy[1].tower[10]);
  stitchNeighbors(towersx[0].tower[11], towersx[1].tower[11], towersy[0].tower[11], towersy[1].tower[11]);
  stitchNeighbors(towersx[0].tower[12], towersx[1].tower[12], towersy[0].tower[12], towersy[1].tower[12]);
  stitchNeighbors(towersx[0].tower[13], towersx[1].tower[13], towersy[0].tower[13], towersy[1].tower[13]);
  stitchNeighbors(towersx[0].tower[14], towersx[1].tower[14], towersy[0].tower[14], towersy[1].tower[14]);
  stitchNeighbors(towersx[0].tower[15], towersx[1].tower[15], towersy[0].tower[15], towersy[1].tower[15]);
  stitchNeighbors(towersx[0].tower[16], towersx[1].tower[16], towersy[0].tower[16], towersy[1].tower[16]);
}

void towerMerge_top(hls::stream<axiword> link_in[N_INPUT_LINKS], hls::stream<axiword> link_out[N_OUTPUT_LINKS]){
#pragma HLS INTERFACE axis port=link_in
#pragma HLS INTERFACE axis port=link_out
#pragma HLS PIPELINE II=6

TowerUnite towersx[2];
#pragma HLS ARRAY_PARTITION variable=towersx

makeTowerloop: for(size_t iLink = 0; iLink < 2; iLink++){
#pragma HLS UNROLL
	processInputData(link_in[iLink+1], towersx[iLink]);
}

TowerUnite towersy[2];
#pragma HLS ARRAY_PARTITION variable=towersy

stitchInPhi(towersx, towersy);

// Step Last: Pack and write the output

  ap_uint<576> bigdataword;

  bigdataword = link_in[0].read().data;
  processOutputData(link_out[0], bigdataword);

  size_t start = 0;
 link1OutputLoop: for (size_t tower = 0; tower < TOWERS_IN_ETA; tower++) {
#pragma HLS UNROLL
    size_t end = start + 31;
    bigdataword.range(end, start) = towersy[0].tower[tower];
    start += 32;
  }
  processOutputData(link_out[1], bigdataword);

  start = 0;
 link2OutputLoop: for (size_t tower = 0; tower < TOWERS_IN_ETA; tower++) {
#pragma HLS UNROLL
    size_t end = start + 31;
    bigdataword.range(end, start) = towersy[1].tower[tower];
    start += 32;
  }
  processOutputData(link_out[2], bigdataword);

  bigdataword = link_in[3].read().data;
  processOutputData(link_out[3], bigdataword);

}


