#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - allocate memory for array
* @nmemb: number of elements
* @size: number of bytes
* Return: pointer to array or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int total, i;
char *ptr;

if (nmemb == 0 || size == 0)
	return (NULL);

total = nmemb * size;

ptr = malloc(total);

if (ptr == NULL)
	return (NULL);

for (i = 0; i < total; i++)
	ptr[i] = 0;

return (ptr);
}
