#include <stdio.h>

/**
 * main - print alphabet wthout e or q
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;

    for (a = 'a'; a <= 'z'; a++) /* iterate through each letter of the alphabet */
    {
        if (a == 'e' || a == 'q') /* if letter is e or q continue to the next letter */
        continue;
        putchar(a); /* otherwise print the letter */
    }

    putchar('\n');

return (0);
}
