#include"main.h"

/**
 * _isupper - checks if char is uppc or not
 *
 * @c: the character
 *
 * Return: 1 if it is upp and 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
