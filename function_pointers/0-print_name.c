#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - print a name
* @name: string
* @f: pointer to other function
*/


void print_name(char *name, void (*f)(char *))
{
if (name == NULL && f == NULL)
return;
f(name);
}
