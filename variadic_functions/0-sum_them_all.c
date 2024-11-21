#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - returns sum of all parameters
* @n: number of arguments passed
*
* Return: the sum of the arguments or 0
*/

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list arg;

if (n == 0)
	return (0);

va_start(arg, n);

for (i = 0; i < n; i++)
	sum += va_arg(arg, int);

va_end(arg);

return (sum);
}
