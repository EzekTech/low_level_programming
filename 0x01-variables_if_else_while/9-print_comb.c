#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*Return: Alwats 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');

		putchar(',');

		putchar(' ');

		num++;

	}

	putchar('\n');

	return (0);
}
