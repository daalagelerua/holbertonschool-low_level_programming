#include <stdio.h>
#include "main.h"

/**
* _sqrt_recursion - return the natural sqrt
* @n: number to find sqrt from
*
* _sqrt_helper - helper to find sqrt recursively
* @guess: current guess of sqrt
*
* Return: natural sqrt of n or -1 if no sqrt
*/

int _sqrt_helper(int n, int guess);

int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);

return (_sqrt_helper(n, 0));
/* 0 is the initial guessfor the sqrt*/
}

int _sqrt_helper(int n, int guess)
{
if (guess * guess > n)
	return (-1);
/* it doesn't find a natural sqrt*/
if (guess * guess == n)
	return (guess);
/* that guess is the natural sqrt */
return _sqrt_helper(n, guess + 1);
/* try the next number */
}
