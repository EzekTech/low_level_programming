#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *main - Entry point
 *Return: always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	int m;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	m = n % 10;

	/* your code goes there */
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %d is %dand is 0\n", n, m);
	else if (m < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
