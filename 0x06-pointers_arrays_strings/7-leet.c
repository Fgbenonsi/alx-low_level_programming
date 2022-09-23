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
