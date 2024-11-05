#include <stdio.h>
#include "main.h"

/**
* print_diagsums - print the sum of two diagonals
* @a: array
* @size: size of array
*
*/

void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int i;

for (i = 0; i < size; i++)
	{
	sum1 += *(a + (i * size + i));
	sum2 += *(a + (i * size + (size - 1 - i)));
	}
printf("%d, %d\n", sum1, sum2);
}
