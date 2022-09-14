#include"main.h"

/**
 * print_alphabet - use the _putchar function to print a to z
 */

void print_alphabet(void)
{
	int b;

	for (b = 'a'; b <= 'z'; ++b)
		_putchar(b);
	_putchar('\n');
}
