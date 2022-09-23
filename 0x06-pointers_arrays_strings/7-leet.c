#include "main.h"

/**
 * leet - leet encorder
 * @str: this is the string to be encoded
 * Return: address of the string
 */

char *leet(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform(str[i]);
		i++;
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
	int i = 0;
	char replacement = x;

	while (i < 8)
	{
		if (x == mapping_low[i] || x == mapping_upper[i])
		{
			replacement = i + '0';
			break;
		}
		i++;
	}
	return (replacement);
}
