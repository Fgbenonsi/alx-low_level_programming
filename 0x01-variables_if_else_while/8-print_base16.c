#include <stdio.h>

/**
 * main -Entry point
 *
 * provide: print base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int y = 48;

	while (y <= 102)
	{
		putchar(y);
		if (y == 57)
			y += 39;
		++y;
	}
	putchar('\n');

	return (0);
}
