#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars, init with specific char
* @size: size of array
* @c: char to init array with
* Return: pointer to the array / NULL if fails or 0
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

if (size == 0)
	return (NULL);

array = malloc(sizeof(*array) * size);

if (array == NULL)
	return (NULL);

for (i = 0; i < size; i++)
	array[i] = c;

return (array);
}
