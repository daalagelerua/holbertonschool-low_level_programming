#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;

	for (a = 'a'; a <= 'z'; a++) /* iterate through each letter */
	{
		putchar(a); /* print every letter */
	}
	
	putchar('\n'); /* once finished return to the next line */

return (0);
}
