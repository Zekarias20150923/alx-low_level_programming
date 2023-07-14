#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int m = n + 0;
	/* your code goes there */
	while (n >= 10)
	{
		n = n/10;
	}
	if (n > 5)
		printf("the last digit of %d is and is greater than 5\n", m);
	else if (n < 6 && n != 0)
		printf("the last digit of %d is and is less than 6 and not 0\n", m);
	else
		printf("the last digit of %d is and is 0\n", m);
	return (0);
}
