#include "main.h"

/**
* get_bit - return the value of a bit at a given index
* @n: value of the bit
* @index: index starting from 0 or the bit you want to get
* Return: the value of the bit at the index or -1 if error
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
	return (-1);

n = n >> index;
return (n & 1);
}
