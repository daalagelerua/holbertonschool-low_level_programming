#include <stdio.h>
#include "main.h"

/**
* print_diagonal - entry
* @n: para
*/

void print_diagonal(int n)
{
int m, l;
if (n < 0)
_putchar('\n');
else
{
for (l = 0; l < n; l++)
{
for (m = 0; m < l; m++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
