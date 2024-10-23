#include <stdio.h>
#include "main.h"

/**
* _islower - check
* @c: var
* Return: 1 0
*/

int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
