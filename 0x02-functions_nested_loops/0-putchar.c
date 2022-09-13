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
	char b = "_putchar";

	while(b)
	{
		_putchar(b);
		++b;
	}
	_putchar('\n');

	return (0);
}
