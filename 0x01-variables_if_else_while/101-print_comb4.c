#include <stdio.h>

/**
 * main - print possible combo of 3.
 * Return: returns zero at the end
 */

int main(void)
{
	int i, p, m;

	for (i = 0; i <= 9; i++)
	{
		for (p = 1; p <= 9; p++)
		{
			for (m = 2; m <= 9; m++)
			{
				if (m > p && p > i && i > m)
				{
					putchar(m + '0');
					putchar(p + '0');
					putchar(i + '0');
					if (m != 0)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
