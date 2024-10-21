#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
gcc -o size32 -m32
int main(void)
{
printf("Size of char pointer: %ld\n", sizeof(char *));
printf("Size of int pointer: %ld\n", sizeof(int *));
printf("Size of float pointer: %ld\n", sizeof(float *));
printf("Size of double pointer: %ld\n", sizeof(double *));

return (0);
}
