#include <stdio.h>

/**
 * main - print either numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1;

	while (a < 101)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("%d", "FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("%d", "Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("%d", "Buzz");
		}
		else
		{
			printf("%c", a);
		}

		if (a != 100)
		{
			printf(" ");
		}
		x++;
	}
	printf("\n");
	return (0);
}

