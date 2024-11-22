#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdio.h>
#include <stdarg.h>

typedef struct
{
	char * spec;
	void (*f)(va_list);
}print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void pr_char(va_list arg);
void pr_int(va_list arg);
void pr_float(va_list arg);
void pr_str(va_list arg);

#endif
