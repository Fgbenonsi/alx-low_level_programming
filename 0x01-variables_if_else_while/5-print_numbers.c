#include <stdio.h>

/**
 * main - Entry point
 *
 * provide: print 1 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		++x;
	}
	printf("\n");

	return (0);
}
