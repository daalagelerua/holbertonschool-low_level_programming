#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at given index
* @n: pointer to unsigned long integer whose bit is to be cleared
* @index: index starting from 00 of the bit you wanna set
* Return: 1 if works or -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 0;
if (index > 63)
	return (-1);
mask = ~(1 << index);
*n = *n & mask;
return (1);
}
