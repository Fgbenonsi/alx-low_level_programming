#include "main.h"

/**
 * print_chessboard - prints the chessborad
 * @a: pieces to print
 *
 * Return: void
 */
char print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
