#include "main.h"

/**
* flip_bits - returns the number of bits you need to flip
* @n: first number
* @m: second number
*/


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flip = n ^ m; /*XOR operation to find differing bits*/
unsigned int count = 0;

while (flip) /*counts number of 1 in flip*/
	{
	count += flip & 1; /*check if the rightmost bit is 1*/
	flip >>= 1; /*shift right to check the next bit*/
	}
return (count);
}
