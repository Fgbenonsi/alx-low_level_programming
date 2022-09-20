#include "main.h"

/**
 * _strlen - returs len
 * @s: the string
 * Return: returns the lengh as an integer
 */

int _strlen(char *s)
{
	int l = 0;
	while (*(s + l) != '\0')
		l++;

	return (l);
}

