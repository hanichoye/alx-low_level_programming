#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array of pointers.
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0; m <= 7; m++)
	{
		for (n = 0; n <= 7; n++)
		{
			_putchar(a[m][n]);
		}
		_putchar(10);
	}
}
