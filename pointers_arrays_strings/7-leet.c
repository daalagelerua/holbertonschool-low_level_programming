#include <stdio.h>
#include "main.h"

/**
* leet - entry
* @str: string
* Return: str
*/

char *leet(char *str)
{
char leet_chars[] = "43071";
char normal_chars[] = "aeotlAEOTL";
int i, j;

	for (i = 0; str[i] != '\0'; i++)
{
	for (j = 0; j < 10; j++)
{
	if (str[i] == normal_chars[j])
{
		str[i] = leet_chars[j / 2];
	break;
}
}
}
return (str);
}

