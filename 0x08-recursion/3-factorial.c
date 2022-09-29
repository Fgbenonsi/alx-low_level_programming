#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to be used
 * Return: the factorial
 */
int factorial(int n)
{
	int x = 0;

	if (n < 0)
		return(-1);
	else if (n == 0)
		return(1);
	x = factorial(n - 1);
	return (n * x);
}
