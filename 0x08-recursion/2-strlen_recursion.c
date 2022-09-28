#include "main.h"

/**
 * _strlen_recursion - claculates the lengh of a string
 * @s: the string length to be calculated
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s != '\0')
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x);
}
