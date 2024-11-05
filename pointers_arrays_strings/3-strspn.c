#include <stdio.h>
#include "main.h"

/**
* _strspn - get the length of a prefix substring
* @s: string
* @accept: bytes
* Return: length of substring in bytes
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *a;

while (*s)
	{
	for (a = accept; *a; a++)
		{
		if (*s == *a)
			{
			count++;
			break;
			}
		}
		if (!*a)
		{
		break;
	}
	s++;
	}
return (count);
}

