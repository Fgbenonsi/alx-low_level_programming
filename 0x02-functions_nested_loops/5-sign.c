#include"main.h"

/**
 * print_sign - + if n>0; 0 if n = 0; - if n<0
 *
 * @n: take integer type input
 *
 * Return: 1 if +, 0 if 0 and -1 if -
 */

int print_sign(int n)
{
	if ( n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
