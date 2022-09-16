#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print a form of triangle
 *
 * @size: a parameter
 *
 * Return: return nothing
 */

void print_triangle(int size)
{
	int a = 1, b;

	while (a <= size && size > 0)
	{
		b = 0;
		
		while (b < size -1)
		{
			_putchar(' ');
			b++;
		}

		_putchar('\n');
		a++;
	}
	if (a == 1)
		_putchar('\n');
}
