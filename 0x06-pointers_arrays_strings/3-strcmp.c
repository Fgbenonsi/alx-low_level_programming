#include "main.h"

/**
 * _strcmp - function used to compare string
 * @s1: first string
 * @s2: second string
 * Retrurn: returns 0 if s1==s2; negative n if s1<s2; positive if s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int x;
	int v;

	x = 0;

	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
	{
		x++;
	}
	
	v = s1[x] - s2[x];

	return (v);
}


