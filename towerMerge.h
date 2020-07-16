#ifndef __TOWERMERGE_H__
#define __TOWERMERGE_H__

#include "towerMerge_top.h"
#include <algorithm>
#include <utility>

class Tower {

 public:
 Tower() : data(0) {;}
  
  Tower(ap_uint<10> cluster_et, ap_uint<10> tower_et, ap_uint<3> peak_phi, ap_uint<3> peak_eta, ap_uint<3> peak_time, ap_uint<3> hOe) {
    data = (cluster_et) | 
      (((ap_uint<32>) tower_et) << 10) | 
      (((ap_uint<32>) peak_phi) << 20) | 
      (((ap_uint<32>) peak_eta) << 23) | 
      (((ap_uint<32>) peak_time) << 26) | 
      (((ap_uint<32>) hOe) << 29);
  }
  
  Tower(uint32_t i) {data = i;}
  
  Tower& operator=(const Tower& rhs) {
    data = rhs.data;
    return *this;
  }
    
  ap_uint<10> cluster_et() {return (data & 0x3FF);}
  ap_uint<10> tower_et() {return ((data >> 10) & 0x3FF);}
  ap_uint<3> peak_phi() {return((data >> 20) & 0x7);}
  ap_uint<3> peak_eta() {return((data >> 23) & 0x7);}
  ap_uint<3> peak_time() {return((data >> 26) & 0x7);}
  ap_uint<3> hOe() {return((data >> 29) & 0x7);}

  friend bool operator >(Tower& c1, Tower& c2) {
    if (c1.cluster_et() > c2.cluster_et()) return true;
    else return false;
  }
  
  operator uint32_t() {return (uint32_t) data;}
  
#ifndef __SYNTHESIS__
  string toString() {
    return "Tower [" + 
      to_string(this->cluster_et()) + ", (" + 
      to_string(this->peak_eta()) + ", " + 
      to_string(this->peak_phi()) + "), " + 
      to_string(this->peak_time()) + ", " + 
      to_string(this->hOe()) + ", " + 
      to_string(this->tower_et()) + "] ";
  }
#endif
  
  ap_uint<32> data;
  
};

class TowerUnite {

    public:

    Tower tower[TOWERS_IN_ETA];

    TowerUnite() {;}

    TowerUnite(ap_uint<576> data) {
#pragma HLS ARRAY_PARTITION variable=tower complete dim=0
    for (size_t i = 0, start = 0, end = 31; i < TOWERS_IN_ETA; i++, start += 32, end += 32) {
#pragma LOOP UNROLL
      this->tower[i] = Tower(data.range(end, start));
    }
  }

};

void stitchNeighbors(Tower Ai, Tower Bi, Tower &Ao, Tower &Bo);

#endif
