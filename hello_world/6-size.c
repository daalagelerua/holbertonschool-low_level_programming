#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
char b;
float c;
printf("Size of char : %ld byte(s)\n", sizeof(b));
printf("Size of int : %ld byte(s)\n", sizeof(a));
printf("Size of long int : %lu byte(s)\n", sizeof(long int));
printf("size of long long int : %lu byte(s)\n", sizeof(long long int));
printf("Size of float : %ld byte(s)\n", sizeof(c));
return (0);
}
