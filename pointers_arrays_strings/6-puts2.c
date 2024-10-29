#include <stdio.h>
#include "main.h"

/**
* puts2 - entry
* @str: ptr str
*/

void puts2(char *str)
{
int i;
while (str[i] != '\0')
	if (i % 2 == 0)
{
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}
