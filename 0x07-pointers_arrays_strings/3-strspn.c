#include "main.h"

/**
 * _strspn - function that get length of a prefix substring
 * @s: string to check
 * @accept: string to check again
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned x, y;
	
	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (!accept[y])
			break;
	}
	return (x);
}
