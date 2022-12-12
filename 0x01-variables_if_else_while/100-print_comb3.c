#include <stdio.h>

/**
 * main - print single digit numbers starting from 0
 *
 * Return: returns zero at the end
 */

int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '0'; tens++)/* prints ten digit*/
	{
		for (ones = '0'; ones <= '0'; ones++)/* prints ten digit*/
		{
			if (!((ones == tens) || (tens > ones)))/* eliminates reputition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/*addes comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

