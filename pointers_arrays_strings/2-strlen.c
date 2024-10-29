#include <stdio.h>
#include "main.h"

/**
* _strlen - entry
* @s: ptr s
* description: Return length of string
* Return: length
*/

int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
	len++;
return (len);
}
