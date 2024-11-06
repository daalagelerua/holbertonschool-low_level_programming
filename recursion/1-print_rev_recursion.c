#include <stdio.h>
#include "main.h"

/**
* _print_rev_recursion - print string in reverse
* @s: string
* Return: if you reach end of line
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
	return;

_print_rev_recursion(s + 1);
	_putchar(*s);
}
