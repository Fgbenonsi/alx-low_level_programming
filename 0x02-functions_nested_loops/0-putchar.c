#include "main.h"

/**
 * main - Entry point
 *
 * Print putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b[] = "_putchar";
	int x;

	for (x = 0; x < 8; ++x)
		_putchar(b[x]);
	_putchar('\n');

	return (0);
}
