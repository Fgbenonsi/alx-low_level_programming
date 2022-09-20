#include <stdio.h>
#include "main.h"

/**
 * puts2 - every other character
 * @str: the string
 * Return: nothing
 */

void puts2(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		if (x % 2 == 0)
			putchar(*(str + x));
	}
	putchar(10);
}

