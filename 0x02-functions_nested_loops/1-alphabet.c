#include"main.h"

/**
 * main - Entry point
 *
 * print_alphabet - use in _putchar funtion to print in lower case a to z
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int b;

	for (b = 'a'; b <= 'z'; ++b)
		_putchar(b);
	_putchar('\n');
}
