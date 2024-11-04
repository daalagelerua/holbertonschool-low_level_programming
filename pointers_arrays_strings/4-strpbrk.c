#include <stdio.h>
#include "main.h"

/**
* _ strpbrk - searches a string for any of a set of bytes
* @s: string
* @accept: second string
* Return: matches
*/

char *_strpbrk(char *s, char *accept)
{
while (*s)
	{
	char *a = accept;
	while (*a)
		{
		if (*s == *a)
		{
		return (s);
		}
		a++;
	}
	s++;
}
return ('\0');
}
