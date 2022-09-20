#include "main.h"

/**
 * puts_half - void
 *
 * @str: the sting
 */

void puts_half(char *str)
{
	int l, x, u;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		for (u = l / 2; str[u] != '\0'; u++)
		{
			_putchar(str[u]);
		}
	}
	else if (l % 2)
	{
		for (x = (l - 1) / 2; x < l - 1; x++)
		{
			_putchar(str[x + 1]);
		}
	}
	_putchar('\n');
}

