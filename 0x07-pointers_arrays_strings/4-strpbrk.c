#include "main.h"

/**
 * _strpbrk - seaches a string for any of a set of bytes
 * @s: the string to check
 * @accept: the string to check against
 * Return: s or null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accpet[y])
				break;
		}
		if (accpet[y])
			return (s + x);
	}
	return (0);
}
