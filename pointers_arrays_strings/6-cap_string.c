#include <stdio.h>
#include "main.h"

/**
* cap_string - entry
* @s: string
* Return: s
*/

char *cap_string(char *s)
{
int cap = 1;
char *p = s;

while (*p)
{
if (cap && *p >= 'a' && *p <= 'z')
{
*p = *p - ('a' - 'A');
cap = 0;
}
else if (*p == ' ' || *p == '\t' || *p == '\n' || *p == '}' ||
*p == ',' || *p == ';' || *p == '.' || *p == '!' ||
*p == '?' || *p == '"' || *p == '(' || *p == ')' || *p == '{')
cap = 1;
else if (*p >= 'A' && *p <= 'Z')
cap = 0;
else
cap = 0;
p++;
}
return (s);
}
