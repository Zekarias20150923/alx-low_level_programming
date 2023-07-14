#include <stdio.h>
/**
 * main- Entry point
 * Return: always 0 (success)
 */

int main(void)
{
        char c;

        c = 'a';
        while (c <= 'z')
        {
        putchar(c);
        c++;
	if (c == 'e' || c == 'q')
		c++;
        }

        putchar('\n');
        return (0);
}
