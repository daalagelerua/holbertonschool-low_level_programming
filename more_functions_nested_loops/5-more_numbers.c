#include <stdio.h>
#include "main.h"

/**
* more_numbers - entry
*/

void more_numbers(void)
{
int n, m;

for (n = 0; n <= 9; n++)
	for (m = 0; m <= 14; m++)
		if (m >= 10)
{
		_putchar('1');
		_putchar(m % 10 + '0');
}
		else
		_putchar(m + '0');
_putchar('\n');
}
