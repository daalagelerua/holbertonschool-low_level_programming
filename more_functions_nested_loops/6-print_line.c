#include <stdio.h>
#include "main.h"

/**
* print_line - entry
* @n: para
*
*/

void print_line(int n)
{
if (n > 1)
{
_putchar(n * '_');
_putchar('\n');
}
else if (n <= 0)
_putchar('\n');
}
