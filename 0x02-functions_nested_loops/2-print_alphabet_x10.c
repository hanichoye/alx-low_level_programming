#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int j;
	char x;

	for (j = 0; j <= 9; j++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(j);
		_putchar('\n');
	}
}
