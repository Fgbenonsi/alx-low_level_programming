#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Provide: prind the last digit of n status: 0, greater that five or less than six and not 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand () - RAND_MAX / 2;

	/*My code goes here */
	digit = n % 10; /*calculate the last digit*/
	
	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	return (0);
}
