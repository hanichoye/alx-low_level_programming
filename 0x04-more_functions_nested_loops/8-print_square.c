#include "main.h"

/**
 * print_square - prints n squares according n number of times
 * @size: Size of the square
 *
 * Return: empty
 */
void print_square(int size)
{
int x, y;

for (x = 0; x < size; x++)
{
	for (y = 0; y < size; y++)
	{
		_putchar(35);
	}
	if (x != size - 1)
		_putchar('\n');
}
_putchar('\n');
}
