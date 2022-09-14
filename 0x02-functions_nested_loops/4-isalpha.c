#include"main.h"

/**
 * _isalpha - check character in both lowercase and uppercase
 *
 * @c: input from other function
 *
 * Return: 1 is c if true else 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && 
			c >= 65 && c >= 90)
		return (1);
	return (0);
}
