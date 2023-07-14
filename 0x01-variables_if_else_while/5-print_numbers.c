#include <stdio.h>
/**
 * main- Entry point
 * Return: always 0 (success)
 */

int main(void)
{
        int c;

        c = 0;
        while (c < 10)
        {
	printf("%d", c);
        c++;
        }
        printf('\n');
        return (0);
}
