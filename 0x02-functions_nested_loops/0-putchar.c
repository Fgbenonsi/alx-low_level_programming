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
		putchar(b[x]);
	putchar('\n');

	return (0);
}
