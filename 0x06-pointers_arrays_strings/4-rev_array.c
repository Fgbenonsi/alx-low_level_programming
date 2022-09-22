#include "main.h"

/**
 * reverse_arry - reverse arrays
 * @a: first parameter
 * @n: second parameter
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;
	int R;

	x = 0;
	y = n - 1;

	while (x < y)
	{
		R = a[x];
		a[x] = a[y];
		a[y] = R;
		x++;
		y--;
	}
}

