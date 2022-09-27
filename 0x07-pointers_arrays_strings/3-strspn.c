#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: the string to check
 * @accept: the string tocheck again
 * Return: num of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

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
