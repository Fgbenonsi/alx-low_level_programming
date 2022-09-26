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
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
