#include <stdio.h>
#include "main.h"

/**
* puts2 - entry
* @str: ptr str
*/

void puts2(char *str)
{
	int charcount = 0;

	while (str[charcount] != '\0')
	{
		if (charcount % 2 == 0)
			_putchar(str[charcount]);
		charcount++;
	}
	_putchar('\n');
}
