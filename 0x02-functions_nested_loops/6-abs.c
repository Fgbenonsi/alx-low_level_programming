#include"main.h"

/**
 * _abs - this function computes absolute values
 *
 * @n: takes in integer type input
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
