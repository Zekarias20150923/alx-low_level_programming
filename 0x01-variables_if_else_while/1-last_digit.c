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
	int m;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	 m = n%10;
	/* your code goes there */
	if (n > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, m);
	else if (n < 6 && n != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, m);
	else
		printf("last digit of %d is %d and is 0\n", n, m);
	return (0);
}
