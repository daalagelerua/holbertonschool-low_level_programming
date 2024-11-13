#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* array_range - creates an array of integers
* @min: minimum value
* @max: maximum value
* Return: pointeur to array or NULL
*/

int *array_range(int min, int max)
{
int i, j;
int *array;

if (min > max)
	return (NULL);

i = max - min + 1;

array = malloc(sizeof(* array) * i);
if (array == NULL)
	return (NULL);

for (j = 0; j < i; j++)
	{
	array[j] = min;
	min++;
	}

return (array);
}
