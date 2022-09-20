#include <stdio.h>
#include "main.h"

/**
 * _puts - prints str
 * @str: the str
 * Return: no error
 */

void _puts(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		putchar(*(str + x));
		x++;
	}
	putchar(10);
}

