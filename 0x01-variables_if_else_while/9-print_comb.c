#include <stdio.h>

/**
 * main - Entry point
 *
 * provide: print combinations
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int y = 0;

	while (y <= 9)
	{
		putchar(y + 48);
		if (y != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++y;
	}
	putchar('\n');

	return (0);
}
