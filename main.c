#include <stdlib.h>
#include <string.h>

#include "fmv-test.h"

#define ARRAY_SIZE    100000


int
main (int argc, char **argv)
{
  double *dArray;

  dArray = malloc (ARRAY_SIZE * sizeof (double));
  memset (dArray, 0, ARRAY_SIZE * sizeof (double));

  fmv_test (dArray, ARRAY_SIZE);

  return 0;
}

