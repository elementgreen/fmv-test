#include <stdlib.h>

#include "fmv-test.h"

#define ARRAY_SIZE    100000


int
main (int argc, char **argv)
{
  double *dArray;

  dArray = malloc (ARRAY_SIZE);

  fmv_test (dArray, ARRAY_SIZE);

  return 0;
}

