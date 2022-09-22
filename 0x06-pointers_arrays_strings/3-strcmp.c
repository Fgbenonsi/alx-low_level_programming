#include "main.h"

/**
 * _strcmp - function used to compare string
 * @s1: first string
 * @s2: second string
 * Retrurn: returns 0 if s1==s2; negative n if s1<s2; positive if s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0, dif = 0;

	while (x)
	{
		if (s1[x] == '\0' && s2[x] == '\0')
			break;
		else if (s1[x] == '\0')
		{
			dif = s2[x];
			break;
		}
		else if (s2[x] == '\0')
		{
			dif = s1[x];
			break;
		}
		else if (s1[x] != s2[x])
		{
			dif = s1[x] - s2[x];
			break;
		}
		else
			x++;
	}
	return (dif);
}

