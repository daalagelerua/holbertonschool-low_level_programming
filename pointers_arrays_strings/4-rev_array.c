#include <stdio.h>
#include "main.h"

/**
*reverse_array - entry
*@a: array
*@n: content of array
*@start: ptr to beginning of array
*@end: ptr to end of array
*/

void reverse_array(int *a, int n)
{
int *start = a;
int *end = a + n - 1;
int tmp;

while (start < end)
{
tmp = *start;
*start = *end;
*end = tmp;
start++;
end++;
}
}
