#include <stdio.h>
#include "main.h"

int prime_helper(int n, int div);

/**
* is_prime_number - identifie a prime number
* @n: number to check
* Return: 1 for prime 0 otherwise
*/

int is_prime_number(int n)
{
if (n <= 1)
	return (0);

return (prime_helper(n, 2));
}

/**
* prime_helper - helper function
* @n: number to check
* @div: divisor to check
* Return: same
*/

int prime_helper(int n, int div)
{
if (div * div > n)
	return (1);

if (n % div == 0)
	return (0);

return (prime_helper(n, div + 1));
}
