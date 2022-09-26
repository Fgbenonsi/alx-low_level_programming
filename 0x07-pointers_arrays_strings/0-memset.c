#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: address to memory
 * @b: char to be used
 * @n: num of byte to be used
 * Return: memory block
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
