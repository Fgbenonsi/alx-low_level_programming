#include "main.h"

/**
 * leet - leet encorder
 * @str: this is the string to be encoded
 * Return: address of the string
 */

char *leet(char *)
{
	int u = 0;

	while (str[u] != '\0')
	{
		str[u] = transform(str[u]);
		u++;
	}
	return (str);
}

/**
 * transform - function to map a letter
 * @x: char to be encoded
 * Return: char
 */

char transform(char x)
{
	char mapping_low[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char mapping_upper[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};
	int u = 0;
	char replacement = x;

	while (u < 8)
	{
		if (x == mapping_low[u] || x == mapping_upper[u])
		{
			replacement = u + '0';
			break;
		}
		u++;
	}
	return (replacement);
}
