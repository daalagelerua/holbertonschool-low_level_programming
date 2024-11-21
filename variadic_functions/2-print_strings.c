#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - prints strings followed by new line
* @separator: coma to be printed between strings
* @n: number of strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arg;
char *str;

if (n == 0)
	{
	printf("\n");
	return;
	}
va_start(arg, n);

for (i = 0; i < n; i++)
	{
	str = va_arg(arg, char *);
		{
		if (str == NULL)
		printf("(nil)");
		else
		printf("%s", str);
		}

	if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
va_end(arg);
printf("\n");
}
