#include "main.h"

/**
 * _strcat - concatenates strings
 *
 * @dest: string to be appended
 * @scr: string to be concatenated
 *
 * Return: return to dest
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

