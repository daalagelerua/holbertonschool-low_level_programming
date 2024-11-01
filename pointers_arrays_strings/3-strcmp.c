#include <stdio.h>
#include "main.h"

/**
*_strcmp - entry
*@s1: 1ere string
*@s2: 2eme string
*Return: result
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++;
s2++;
}
return (*s1 - *s2);
}
