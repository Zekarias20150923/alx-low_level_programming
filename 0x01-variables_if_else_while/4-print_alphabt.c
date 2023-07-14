#include <stdio.h>
/**
 * main- Entry point
 * Return: always 0 (success)
 */

int main(void)
{
        char c;

        c = 'a';
        while (c <= 'd')
        {
        putchar(c);
        c++;
        }
	c++;
	while (c <= 'p')
	{
		putchar(c);
		c++;
	}
	c++;
	while (c <='z')
	{
		putchar(c);
		c++;
	}

        putchar('\n');
        return (0);
}
