# !/bin/bash

if [ $# > 0 ]
then
    filter=-DFILTER="$1"
else
    filter=
fi

cmake -DTARGETS="run-ex2-01-ptr-alias;run-ex2-10-pair;run-ex2-11-stable;run-ex2-12-destr1;run-ex2-13-destr2;run-ex2-14-copy;run-ex3-01-base;run-ex3-02-derived;run-ex3-03-inherit;run-ex3-04-print;run-ex3-05-type;run-ex3-06-equality" -DBUILD_PATH="/mnt/c/Users/hanai/Desktop/M1/S2/C++/CPP_Exercises/tp5" $filter -P "/mnt/c/Users/hanai/Desktop/M1/S2/C++/CPP_Exercises/tp8/cmake/run_tests.cmake"
