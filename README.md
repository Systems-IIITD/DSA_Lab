An example to demonstrate tail-call optimization.

search1.c implements an iterative algorithm to search
the input value in an input array.

search2.c implements a recursive algorithm to search
the input value in an input array.

Run ``make'' to compile search1.c and search2.c with
maximum optimization level.

Run ``make search2_notail'' to compile search2.c with 
all optimizations except the tail call optimization.

Run,

time ./search1

time ./search2

time ./search2_notail

to obtain the runtime of the iterative, recursive, and
recursive without tail optimization algorithms.
