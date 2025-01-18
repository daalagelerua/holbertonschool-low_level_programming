#include <stdio.h>

/**
* main - print number 0 to 9 with coma and space
* Return: 0
*/
int main(void)
{
int a;
    for (a = 0; a <= 9; a++) /* iterate through 0 to 9 */
    {
        putchar(a + '0'); /* shift to ascii value and print */
        if (a < 9) /* if number is smaller than 9 */
        {
            putchar(','); /* add a coma and a space */
            putchar(' ');
        }
    }
    putchar('\n'); /* when 9 is reach just return to new line */

  return (0);
}
