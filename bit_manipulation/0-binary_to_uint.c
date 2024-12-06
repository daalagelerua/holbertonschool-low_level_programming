#include "main.h"

/**
* binary_to_uint - convert binary to unsigned int
* @b: pointer to binary string
* Return: converted number or NULL if b is NULL or if there is something else
* than 0 and 1 in the string
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0; /*hold the converted value*/
int i = 0; /*index to iterate over the string*/

if (b == NULL) /*if the string is NULL*/
	return (0);

while (b[i] != '\0') /*loop through the string*/
	{
	if (b[i] != '0' && b[i] != '1') /*if the char is neither '0' nor '1'*/
		return (0);
/*shift result to the left to make room for the new bit*/
	result = result << 1;
/*add the current bit ('0' or '1') to the result*/
	result = result | (b[i] - '0');

	i++; /*move to the next char*/
	}
return (result);
}
