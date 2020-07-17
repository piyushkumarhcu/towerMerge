#include "towerMerge_top.h"
#include "towerMerge.h"

void stitchNeighbors(Tower Ai, Tower Bi, Tower &Ao, Tower &Bo) {
#pragma HLS PIPELINE II=6
  // Check that the clusters are neigbhors in eta or phi

  bool phiStitch = (Ai.peak_phi() == 4 && Bi.peak_phi() == 0 && Ai.peak_eta() == Bi.peak_eta());

  if(phiStitch){
    ap_uint<12> cluster_et = Ai.cluster_et() + Bi.cluster_et();
    if(Ai.cluster_et() > Bi.cluster_et()){
      // Merge 2 in to 1
      if (cluster_et > 0x3FF) {
	Ao = Tower(0x3FF, Ai.tower_et(), Ai.peak_phi(), Ai.peak_eta(), Ai.peak_time(), Ai.hOe());
      }
      else {
	Ao = Tower(cluster_et, Ai.tower_et(), Ai.peak_phi(), Ai.peak_eta(), Ai.peak_time(), Ai.hOe());
      }
      Bo = Tower(0, Bi.tower_et(), Bi.peak_phi(), Bi.peak_eta(), Bi.peak_time(), Bi.hOe());
    }
    else{
      // Merge 1 in to 2, and set 1 to remnant energy centered in tower
      Ao = Tower(0, Ai.tower_et(), Ai.peak_phi(), Ai.peak_eta(), Ai.peak_time(), Ai.hOe());
      if (cluster_et > 0x3FF) {
	Bo = Tower(0x3FF, Bi.tower_et(), Bi.peak_phi(), Bi.peak_eta(), Bi.peak_time(), Bi.hOe());
      }
      else {
	Bo = Tower(cluster_et, Bi.tower_et(), Bi.peak_phi(), Bi.peak_eta(), Bi.peak_time(), Bi.hOe());
      }
    }
  }
  else{
    Ao = Tower(Ai.cluster_et(), Ai.tower_et(), Ai.peak_phi(), Ai.peak_eta(), Ai.peak_time(), Ai.hOe());
    Bo = Tower(Bi.cluster_et(), Bi.tower_et(), Bi.peak_phi(), Bi.peak_eta(), Bi.peak_time(), Bi.hOe());
  }
}
