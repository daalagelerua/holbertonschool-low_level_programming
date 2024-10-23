#include <stdio.h>
#include "main.h"

/**
* _isalpha - entry
* @c: yes
* Return: 1 0
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
