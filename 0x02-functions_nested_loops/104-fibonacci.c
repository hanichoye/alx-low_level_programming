#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting
 * with 1 and 2 separated by comma followed by a space
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long f1_ha1, f1_ha2, f2_ha1, f2_ha2;
	unsigned long ha1, ha2;

	for (count = 0; count < 92; count++)
	{
	sum = f1 + f2;
	printf("%lu, ", sum);
	f1 = f2;
	f2 = sum;
	}
	f1_ha1 = f1 / 10000000000;
	f2_ha1 = f2 / 10000000000;
	f1_ha2 = f1 % 10000000000;
	f2_ha2 = f2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
	ha1 = f1_ha1 + f2_ha1;
	ha2 = f1_ha2 + f2_ha2;
	if (f1_ha2 + f2_ha2 > 9999999999)
	{
	ha1 += 1;
	ha2 %= 10000000000;
	}
	printf("%lu%lu", ha1, ha2);
	if (count != 98)
	printf(", ");
	f1_ha1 = f2_ha1;
	f1_ha2 = f2_ha2;
	f2_ha1 = ha1;
	f2_ha2 = ha2;
	}
	printf("\n");
	return (0);
}
