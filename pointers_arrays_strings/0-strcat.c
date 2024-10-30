#include <stdio.h>
#include "main.h"

/**
**_strcat - entry
* @dest: destination string
* @src: string that will be append at the end of dest
*/

char *_strcat(char *dest, char *src)
{
char *ptr = dest;
while (*ptr)
ptr++;

while (*src)
*ptr++ = *src++;

*ptr = '\0';
return (dest);
}
