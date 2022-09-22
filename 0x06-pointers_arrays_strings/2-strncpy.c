#include "main.h"

/**
 * _strncpy - function used to copy string including null byte
 * @dest: buffer comporting the string
 * @src: the source of the string
 * @n: maximum number of bytes copied
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for ( ; x < n; x++)
		dest[x] = '\0';

	return (dest);
}

