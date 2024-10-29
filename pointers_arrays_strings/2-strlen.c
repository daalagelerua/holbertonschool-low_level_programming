#include <stdio.h>
#include "main.h"

/**
* _strlrn - entry
* @s: ptr s
* description: Return length of string
*/

int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
	len++;
return len;
}
