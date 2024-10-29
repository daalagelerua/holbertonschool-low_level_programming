#include <stdio.h>
#include "main.h"

/**
* puts_half - entry
* @str: ptr
*/

void puts_half(char *str)
{
int len = 0;
int s, i;

while (str[len] != '\0')
len++;
s = (len % 2 == 0) ? len / 2 : (len / 2) + 1;
for (i = s; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
