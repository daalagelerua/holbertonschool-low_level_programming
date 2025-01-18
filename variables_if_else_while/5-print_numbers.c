#include <stdio.h>
/**
* main - print numbers from 0 to 9
* Return: 0
*/
int main(void)
{
int i;

    for (i = 0; i <= 9; i++) /* iterate through each number */
        putchar(i + '0'); /* putchar only takes character as argument */
        /* adding '0' shift the number to its ascii value */

    putchar('\n');

return (0);
}
