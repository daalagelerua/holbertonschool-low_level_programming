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
int i, j;
char *array;
char *n_str;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

for (i = 0; s1[i] != '\0'; i++)

for (j = 0; s2[j] != '\0'; j++)

array = malloc(sizeof(*array) * (i + j + 1));
n_str = array;

while (*s1)
{
*array = *s1;
array++;
s1++;
}
while (*s2)
{
*array = *s2;
array++;
s2++;
}
*array = '\0';
return (n_str);
}
