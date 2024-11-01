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
   int temp, i;
    for (i = 0; i < n / 2; i++)
{
         temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
}
}


/**
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
*/
