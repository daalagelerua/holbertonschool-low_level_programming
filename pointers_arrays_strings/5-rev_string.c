#include <stdio.h>
#include "main.h"

/**
* rev_string - entry
* @s: ptr s
*/

void rev_string(char *s)
{
int str  = 0;
int rev;
char tmp;

while (s[str] != '\0')
	str++;
for (rev = 0; rev < str / 2; rev++)
{
	tmp = s[rev];
	s[rev] = s[str - 1 - rev];
	s[str - 1 - rev] = tmp;
}
}
