#include <stdio.h>
#include "main.h"

/**
* _pow_recursion - return x pow y
* @x: base value
* @y: power value
* Return: result
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);

if (y == 0)
	return (1);

return (x * _pow_recursion(x, y - 1));
}
