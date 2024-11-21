#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - print numbers followed by new line
* @separator: string to be printed between numbers
* @n: number of integers passed in the function
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i;
int num;

if (n == 0)
	{
	printf("\n");
	return;
	}

va_start(arg, n);

for (i = 0; i < n; i++)
	{
	num = va_arg(arg, int);
	printf("%d", num);

	if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
va_end(arg);
printf("\n");
}
