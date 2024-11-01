#include <stdio.h>
#include "main.h"

/**
* _strncpy - entry
* @dest: where src will be copied
* @src: string to be copied in dest
* @n: maximum number of char to copy
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;

while (n > 0 && *src)
{
*dest++ = *src++;
n--;
}
while (n > 0)
{
*dest++ = '\0';
n--;
}

return (ptr);
}
