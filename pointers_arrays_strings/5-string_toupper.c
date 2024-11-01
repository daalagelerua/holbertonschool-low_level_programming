#include <stdio.h>
#include "main.h"

/**
* string_toupper - entry
*Return: p
*@s: para
*/

char *string_toupper(char *s)
{
char *p = s;

while (*s)
{
if (*s >= 'a' && *s <= 'z')
*s -= 32;

s++;
}
return (p);
}
