#include "variadic_functions.h"

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	print_t print_func[] = {
	{"", char},
	{"", int},
	{"", float},
	{"", str},
	{NULL, NULL}
	};
va_list arg;
int total = 0;
int i = 0;

}
