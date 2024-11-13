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
char *s_cnct;
int i, j;
int len_i = 0, len_j = 0;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

while (s1[len_i] != '\0')
	len_i++;
while (s2[len_j] != '\0')
	len_j++;

s_cnct = malloc((len_i + len_j + 1) * sizeof(char));

if (s_cnct == NULL)
	return (NULL);

for (i = 0; i < len_i; i++)
	s_cnct[i] = s1[i];

for (j = 0; j < len_j; j++)
	s_cnct[i + j] = s2[j];

s_cnct[i + j] = '\0';

return (s_cnct);
}
