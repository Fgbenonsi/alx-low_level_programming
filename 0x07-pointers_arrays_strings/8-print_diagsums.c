#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of the two diagonal of a matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, y, u, v = 0, w = 0;

	for (x = 0; x < size; x++)
	{
		u = (x * size) + x;
		v += *(a + u);
	}
	for (y = 0; y < size; y++)
	{
		u = (y * size) + (size - 1 - y);
		w += *(a + u);
	}
	printf("%x, %x\n", v, w);
}
