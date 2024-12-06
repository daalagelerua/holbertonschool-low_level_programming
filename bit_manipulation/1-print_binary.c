#include "main.h"

/**
* print_binary - prints the binary representaion of a number
* @n: number to be printed in binary
*/

void print_binary(unsigned long int n)
{
int i, start = 0;
/*check for the most significant bit (64th bit) and go down to the 0th*/
for (i = 63; i >= 0; i--)
	{
	if ((n >> i) & 1) /*check if the ith bit is 1*/
		{
		if (!start) /*if we haven't started print first 1*/
			{
			start = 1;
			}
		_putchar('1'); /*print the 1 bit*/
		}
	else
		{
		if (start) /*print the 0 bit if we've already started printing*/
			{
			_putchar('0');
			}
		}
	}
if (!start) /*if number is 0 we print 0*/
	{
	_putchar('0');
	}
}
