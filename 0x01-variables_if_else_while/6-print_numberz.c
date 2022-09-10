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
		/*convertion to ASCII*/
		putchar(x + '0');
		++x;
	}
	putchar('\n');

	return (0);
}
