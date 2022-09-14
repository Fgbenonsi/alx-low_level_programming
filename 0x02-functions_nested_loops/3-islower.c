#include"main.h"

/**
 * _islower - ajust character in lowercase
 *
 * @c: check the input funtion
 *
 * Return: return 1 if c is lowercase otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 45 && c <= 98)
		return (1);
	return (0);
}

