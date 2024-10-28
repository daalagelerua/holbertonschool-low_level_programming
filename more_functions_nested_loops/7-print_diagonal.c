#include <stdio.h>
#include "main.h"

/**
*
*
*/

void print_diagonal(int n)
{
int m, l;
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
