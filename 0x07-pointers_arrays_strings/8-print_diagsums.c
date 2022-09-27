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
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x];
		a += size;
	}

	a -= size;

	for (x = 0; x < size; x++)
	{
		sum2 += a[x];
		a -= size;
	}

	printf ("%d, %d\n", sum1, sum2);
}
