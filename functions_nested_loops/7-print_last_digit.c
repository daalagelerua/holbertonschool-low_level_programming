#include <stdio.h>
#include "main.h"

/**
* print_last_digit - entry
* @n: parameter
* Return: last digit
**/

int print_last_digit(int n)
{
int ld;

ld = n % 10;
	if (ld < 0)
		ld = -ld;
	_putchar(ld +'0');
	return (ld);
}
