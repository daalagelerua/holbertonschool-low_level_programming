#include <stdio.h>
/**
* main - print number from 0 to 15 in base 16
* Return: 0
*/
int main(void)
{
int a;

    for (a = 0; a < 16; a++) /* iterate through 0 to 15 */
        if (a < 10) /* for number 0 to 9 */
            putchar(a + '0'); /* shift to ascii and print */

        else
            putchar(a - 10 + 'a'); /* for 10 to 15 remove 10 then add the ascii value of 'a' */
  
        putchar('\n');

return (0);
}
