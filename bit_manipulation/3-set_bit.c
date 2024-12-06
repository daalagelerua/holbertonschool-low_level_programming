#include "main.h"

/**
* set-bit - sets the value of a bit to 1 at a given index
* @n: pointer to the unsigned long integer whose bit is to be set
* @index: index starting from 0 of the bit you want to set
* Return: 1 if works or -1 if error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 0;
if (index > 63)
 	return (-1);
mask = 1 << index;
*n = *n | mask;
	return (1);
}
