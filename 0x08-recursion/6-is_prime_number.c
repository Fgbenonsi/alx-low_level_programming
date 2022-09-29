#include "main.h"

/**
 * is_prime_number - returs the 1 if n is prim
 * @n: number to be checked
 * Return: 1 if n is prime and 0 if not
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - returns 1 if n is prime
 * @n: the number
 * @start: the number to start checking from
 * Return: 1 if n is prime and 0 if not
 */
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (_is_prime(n, start - 1));
}
