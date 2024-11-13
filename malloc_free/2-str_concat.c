#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concatenates 2 strings with dynamic memory allocation
* @s1: string 1
* @s2: string 2
* Return: pointer to new memory space containing both strings or NULL
*/

char *str_concat(char *s1, char *s2)
{
unsigned int i, j;
unsigned int len_i, len_j;
char *array;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

for (len_i = 0; s1[len_i] != '\0'; len_i++)

for (len_j = 0; s2[len_j] != '\0'; len_j++)

array = malloc(sizeof(*array) * (len_i + len_j + 1));
if (array == NULL)
	return (NULL);

for (i = 0; i < len_i; i++)
	array[i] = s1[i];

for (j = 0; j < len_j; j++)
	array[i + j] = s2[j];

array[i + j] = '\0';

return (array);
}
