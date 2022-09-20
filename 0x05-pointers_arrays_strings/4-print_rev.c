#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - reverse string order
 * @s: the string
 * Return: nothing
 */

void print_rev(char *s)
{
	int l = strlen(s);

	while (l--)
		putchar(*(s + l));
	putchar(10);
}

