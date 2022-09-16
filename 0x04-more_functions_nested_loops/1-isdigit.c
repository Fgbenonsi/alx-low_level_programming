#include"main.h"

/**
 * _isdigit - checks if a char is a digit of not
 *
 * @c: the character
 *
 * Return: 1 if it is digit and 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}

	return (0);
}
