#include <stdio.h>
#include "main.h"

/**
* jack_bauer - time of a day
* description: 00:00 to 23:59
*
*/

void jack_bauer(void)
{
int hh = 0;
int mm = 0;

	for (hh = 0; hh < 24; hh++)
{
		for (mm = 0; mm < 60; mm++)
{
			_putchar(hh / 10 + '0');
			_putchar(hh % 10 + '0');
			_putchar(':');
			_putchar(mm / 10 + '0');
			_putchar(mm % 10 + '0');
			_putchar('\n');
}
}
}
