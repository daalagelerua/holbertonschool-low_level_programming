#include <stdio.h>
#include "main.h"

char *_strstr(char *haystack, char *needle)
{
if (*needle =='\0')
	return (haystack);

while (*haystack)
	{
	char *n = needle;
	char *h = haystack;

	while (*n && (*h == *n))
		{
		h++;
		n++;
		}
	if (*n == '\0')
		return haystack;
	haystack++;
	}
return ('\0');
}
