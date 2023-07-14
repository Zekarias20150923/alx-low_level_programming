#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m=n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	while(n>=10)
	{
		n=n/10;
	}
	if(n>5)
		printf("the last digit of %d is and is greater than 5\n", m);
	else if(n<6&&n!=0)
		printf("the last digit of %d is and is less than 6 and not 0\n", m);
	else
		printf("the last digit of %d is and is 0\n", m);
	return (0);
}
