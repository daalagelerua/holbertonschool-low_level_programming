#include <stdio.h>
#include "main.h"

/**
* _strncat - entry
* @dest: at the end of which src will be appended
* @src: will be moved to the end of dest
* @n: make sure src will be at most n bytes
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;

while (*ptr)
ptr++;

while (n > 0 && *src)
{
*ptr++ = *src++;
n--;
}
*ptr = '\0';

return (dest);
}
