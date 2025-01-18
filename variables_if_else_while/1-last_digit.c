#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - function that says if a a number is greater or lower
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, a;

srand(time(0)); /* generate a random number based on actual time */
n = rand() - RAND_MAX / 2; /* generate a pseudo random number which is + or - */

	a = n % 10; /* assign the last number of n to a */
	
	if (a > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	if (a == 0)
		printf("Last digit of %d is %d and is 0\n", n, a);
	else if (a < 5)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);

return (0);
}
