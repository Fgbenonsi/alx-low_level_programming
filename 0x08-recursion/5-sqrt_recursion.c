#include "main.h"

/**
 * _sqrt_recursion - returns the natural sqrt of a num
 * @n: the num
 * Return: sqrt of the num
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return(_sqrt(0, n));
}
/**
 * _sqrt - returns the sqrt of a num
 * @n: the num
 * @x: the squared num
 * Return: sqrt of num
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
