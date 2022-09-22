#include "main.h"

/**
 * _strncat - concatenates strings but add n number of bytes
 * @dest: string to be appended
 * @src: string to be concatenated
 * n: integer to compare with index
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

