#include "main.h"

/**
 * _memset - fills memo
 * @s: address
 * @b: character
 * @n: num of bytes
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n, x++)
		s[x] = b;

	return (s);
}
