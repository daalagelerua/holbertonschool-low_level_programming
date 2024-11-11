#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - duplicate a string by allocating memory
* @str: string to duplicate
* Return: pointer to dup str / NULL if fails or str is NULL
*
*/

char *_strdup(char *str)
{
int i;
char *array;
char *start;

if (str == NULL)
	return (NULL);

for (i = 0; str[i] != '\0'; i++)

array = malloc(sizeof *array * (i + 1));

if (array == NULL)
	return (NULL);

start = array;

while (*str)
{
*array = *str;
array++;
str++;
}
*array = '\0';
return (start);
}
