#include "fmv-test.h"

static void
internal_func (double *dArray, int size) SIMD_CLONE;


double
fmv_test (double *dArray, int size)
{
  double result;
  int i;

  internal_func (dArray, size);

  for (i = 0; i < size; i++)
    result += dArray[i];

  return result;
}

static void
internal_func (double *dArray, int size)
{
  int i;

  for (i = 0; i < size; i++)
    dArray[i] += 1.0;
}

