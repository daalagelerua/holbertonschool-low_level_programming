#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concat 2 string un to n bytes of s2
* @s1: first string
* @s2: second string
* @n: max number of bytes
* Return: pointer to concat string or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
unsigned int len_i, len_j;
char *concat;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

for (len_i = 0; s1[len_i] != '\0'; len_i++)
;
for (len_j = 0; s2[len_j] != '\0'; len_j++)
;

if (n >= len_j)
	n = len_j;

concat = malloc(sizeof(*concat) * (len_i + n + 1));
if (concat == NULL)
	return (NULL);

for (i = 0; i < len_i; i++)
	concat[i] = s1[i];

for (j = 0; j < n; j++)
	concat[i + j] = s2[j];

concat[i + j] = '\0';

return (concat);
}

