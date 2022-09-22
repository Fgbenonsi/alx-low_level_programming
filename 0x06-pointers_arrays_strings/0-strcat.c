#include "main.h"

/**
 * _strcat - this concatenates string to the dest
 *
 * @dest: the sting to be appended
 * @src: the string t be concatenated
 *
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index]; index++)
		dest[dest_length++] = src[index];

	return (dest);
}

