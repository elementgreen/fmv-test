#ifndef __FMV_TEST_H__
#define __FMV_TEST_H__

#define SIMD_CLONE              __attribute__ ((__target_clones__ ("avx2","avx","sse4.1","sse2","default")))

double fmv_test (double *dArray, int size) SIMD_CLONE;

#endif

