#include <stdio.h>

/**
 * main - Entry point
 *
 * provide: print a to z and A to Z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';
	char X = 'A';

	while (x <= 'z')
	{
		putchar(x);
		++x;
	}
	
	while (X <= 'Z')
	{
		putchar(X);
		++X;
	}
	putchar('\n');

	return (0);
}
