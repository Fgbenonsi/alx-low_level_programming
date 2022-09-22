#include "main.h"

/**
 * _strcmp - compare
 * @s1: first params
 * @s2: second params
 * Return: return difference
 */

int _strcmp(char *s1, char *s2)
{
	int x;
	int V;

	x = 0;

	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
	{
		x++;
	}
	V = s1[x] - s2[x];
	return (V);
}

