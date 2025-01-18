#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Fonction that says if a number is positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0)); /* generate a random number related to the actual time */
n = rand() - RAND_MAX / 2; /* generate a pseudo-random number which + or - */

  if (n > 0)
    printf("%d is positive\n", n);
  if (n == 0)
    printf("%d is zero\n", n);
  if (n < 0)
    printf("%d is negative\n", n);

return (0);
}
