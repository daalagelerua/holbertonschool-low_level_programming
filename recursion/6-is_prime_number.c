#include <stdio.h>
#include "main.h"

/**
* is_prime_number - identifie a prime number
* @n: number to check
* Return: 1 for prime 0 otherwise
*/

int is_prime_number(int n)
{
int i;

if (n <= 1)
	return (0);

for (i = 2; i * i <= n; i++)
	{
	if (n % i == 0)
		return (0);
	}
return (1);
}
