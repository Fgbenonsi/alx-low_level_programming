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
	int index = 0, dest_l = 0;

	while (dest[index++])
		dest_l++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_l++] = src[index];

	return (dest);
}

