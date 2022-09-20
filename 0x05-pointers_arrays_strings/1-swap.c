#include "main.h"

/**
 * swap_int - swaps two ints
 * @a: first int
 * @b: second int
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}

