#include "main.h"

/**
 * rev_string - reverse string
 * @s: the sting
 * Return: nothing
 */

void rev_string(char *s)
{
	char *r = s;
	char x[1000];
	short v = 0;

	while (*s != '\0')
	{
		x[v] = *s;
		s++;
		v++;
	}
	v = 0;

	while (s > r)
	{
		s--;
		*s = x[v];
		v++;
	}
}

