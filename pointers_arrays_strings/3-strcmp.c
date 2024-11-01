#include <stdio.h>
#include "main.h"

/**
*_strcmp - entry
*@s1: 1ere string
*@s2: 2eme string
*Return: 0 -1 1
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
return (*s1 < *s2) ? -1 : 1;
s1++;
s2++;
}
if (*s1 && *s2)
return (0);
else if (*s1)
return (-1);
else
return (1);
}
