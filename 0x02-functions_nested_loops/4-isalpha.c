#include"main.h"

/**
 * _isaplha - ajust character in lowercase and uppercase
 *
 * @c: input from other function
 *
 * Return: return 1 if it is c otherwise always 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c >= 90)
		return (1);
	return (0);
}
