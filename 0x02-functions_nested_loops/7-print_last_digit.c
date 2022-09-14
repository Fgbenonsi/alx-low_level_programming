#include"main.h"

/**
 * print_last_digit - this print the last digit of a number
 *
 * @n: any number
 *
 * Return: b
 */

int print_last_digit(int n)
{
	int b;

	if (n < 0)
		b = -1 * (n % 10);
	else
		b = n % 10;
	_putchar(b + '0');
	return (b);
}
