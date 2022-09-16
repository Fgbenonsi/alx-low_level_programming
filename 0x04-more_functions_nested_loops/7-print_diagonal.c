#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 *
 * @n: a factor
 *
 * Return: returns nothing
 */

void print_diagonal(void)
{
	int l, s;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (l == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
