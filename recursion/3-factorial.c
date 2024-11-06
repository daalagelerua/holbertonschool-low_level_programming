#include <stdio.h>
#include "main.h"

/**
* factorial - return n!
* @n: given number
* Return: result
*
*/

int factorial(int n)
{
if (n < 0)
	return (-1);

else if (n == 0)
	return (1);

else
	return (n * factorial(n - 1));
}
