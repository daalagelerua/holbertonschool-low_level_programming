#include <stdio.h>
#include "main.h"

/**
* leet - entry
* @str: string
* Return: str
*/

char *leet(char *str)
{
char leet_map[128] = {0};
int i;
leet_map['a'] = '4';
leet_map['A'] = '4';
leet_map['e'] = '3';
leet_map['E'] = '3';
leet_map['o'] = '0';
leet_map['O'] = '0';
leet_map['t'] = '7';
leet_map['T'] = '7';
leet_map['l'] = '1';
leet_map['L'] = '1';
leet_map['s'] = '5';
leet_map['S'] = '5';

for (i = 0; str[i] != '\0'; i++)
{
if (leet_map[(int)str[i]] != 0)
{
str[i] = leet_map[(int)str[i]];
}
}
return (str);
}

