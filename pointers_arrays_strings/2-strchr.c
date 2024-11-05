#include <stdio.h>
#include "main.h"

/**
*_strchr - locate a character in a string
* @s: string
* @c: character to find
* Return: NULL
*/

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
return ('\0');
}
