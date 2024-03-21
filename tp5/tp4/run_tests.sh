# !/bin/bash

if [ $# > 0 ]
then
    filter=-DFILTER="$1"
else
    filter=
fi

cmake -DTARGETS="run-ex1-qcm;run-ex2-01-phone-number;run-ex2-02-is-valid;run-ex2-03-const-is-valid;run-ex2-04-index;run-ex2-05-index-out;run-ex2-06-const-index;run-ex2-07-multi-inclusions;run-ex2-11-print-out;run-ex2-12-print-any-stream;run-ex2-13-print-concat;run-ex2-21-phone-book-entry;run-ex2-22-accessors;run-ex2-23-return-refs;run-ex2-24-const-accessors;run-ex2-25-equality;run-ex2-26-const-equality;run-ex2-31-phone-book;run-ex2-32-add-entry;run-ex2-33-get-entry;run-ex2-34-valid-entry;run-ex2-35-unique-entry;run-ex2-36-no-desinstanciation;run-ex3-01-types;run-ex3-02-vector" -DBUILD_PATH="/mnt/c/Users/hanai/Desktop/M1/S2/C++/CPP_Exercises/tp5" $filter -P "/mnt/c/Users/hanai/Desktop/M1/S2/C++/CPP_Exercises/tp4/cmake/run_tests.cmake"
