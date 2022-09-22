#include "main.h"

/**
 * _strncat - concatenates string but add n numbers
 * @dest: the string to be appended
 * @src: the string to be concatenated
 * n: factor to compare with ind
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int u;

	x = 0;

	for (u = 0; u < 1000; u++)
	{
		if (dest[u] == '\0')
		{
			break;
		}
		x++;
	}

	for (u = 0; src[x] != '\0' && u < n; u++)
	{
		dest[x + u] = src[u];
	}
	dest[x + u] = '\0';
	return (dest);
}

