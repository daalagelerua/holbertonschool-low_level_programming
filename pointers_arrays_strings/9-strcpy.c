#include <stdio.h>
#include "main.h"

/**
* *_strcpy - entry
* @dest: ?
* @src: ??
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (original_dest);
}
