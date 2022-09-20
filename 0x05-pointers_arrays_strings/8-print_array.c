#include <stdio.h>
#include "main.h"

/**
 * print_array - n el in array
 * @a: is array
 * @n: is element
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	putchar(10);
}

