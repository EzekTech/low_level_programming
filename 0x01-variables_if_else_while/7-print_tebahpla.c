#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}

	putchar('\n');

	return (0);
}
