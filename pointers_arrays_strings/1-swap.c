#include <stdio.h>
#include "main.h"

/**
* swap_int - entry
* @a: ptr a
* @b: ptr b
* description: swap value
*/

void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
