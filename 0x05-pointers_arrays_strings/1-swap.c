#include "main.h"

/**
  * swap_int - swaps the values.
  * @a: an integer.
  * @b: an integer
  * Description: swaps the integers
  */

void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
}
