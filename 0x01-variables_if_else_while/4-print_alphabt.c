#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'e' && alp != 'q')
			putchar(alp);
	}

	putchar ('\n');

	return (0);

}
