#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: a factor
 *
 * Return: returns nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
