#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /afs/cern.ch/user/p/piyush/work/towerMerge/towerMerge/InitiationInterval6/.autopilot/db/a.g.bc ${1+"$@"}
