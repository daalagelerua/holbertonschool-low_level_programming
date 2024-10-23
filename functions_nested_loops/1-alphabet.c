#include <stdio.h>
#include "main.h"
/**
* print_alphabet - print
* main - entry
* Return: 0
*/

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
