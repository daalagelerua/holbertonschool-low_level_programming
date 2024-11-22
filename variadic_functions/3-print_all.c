#include "variadic_functions.h"

/**
* pr_char - print letter
* @arg: pointer to va_list
*/
void pr_char(va_list arg)
{
printf("%c", va_arg(arg, int));
}
/**
* pr_int - print integer
* @arg: pointer to va_list
*/
void pr_int(va_list arg)
{
printf("%d", va_arg(arg, int));
}
/**
* pr_float - print a decimal
* @arg: pointer to va_list
*/
void pr_float(va_list arg)
{
printf("%f", va_arg(arg, double));
}
/**
* pr_str - print a string
* @arg: pointer to va_list
*/
void pr_str(va_list arg)
{
char *str;

str = va_arg(arg, char *);
if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}
/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	print_t print_func[] = {
	{"c", pr_char},
	{"i", pr_int},
	{"f", pr_float},
	{"s", pr_str},
	{NULL, NULL}
	};

va_list arg;
int i = 0;
int j = 0;
char *separator = "";


va_start(arg, format);

while (format && format[i])
{
	while (print_func[j].spec)
	{
	if (*print_func[j].spec == format[i])
	{
		printf("%s", separator);
		print_func[j].f(arg);
		separator = ", ";
	}
	j++;
	}
	j = 0;
	i++;
}
printf("\n");
va_end(arg);
}
