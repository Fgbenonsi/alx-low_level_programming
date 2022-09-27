#include "main.h"

/**
 * _memcpy - function that copy memory space
 * @dest: buffer where to copy
 * @src: source of file
 * @n: number of bytes
 *
 * Return: return (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
