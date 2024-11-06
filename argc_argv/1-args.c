#include <stdio.h>

/**
* main - print number of arguments passed into it
* @argc: parameter
* @argv: parameter
* Return: 0
*/

int main(int argc, char *argv[])
{
(void)argv;

printf("%d\n", argc - 1);

return (0);
}
