#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to array.
 * @size: size of array.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int n, size1;
	unsigned int sumDiag1, sumDiag2;

	size1 = 0;
	sumDiag1 = 0;
	sumDiag2 = 0;

	size1 = (size * size) - 1;

	for (n = 0; n <= size1; n = n + (size + 1))
	{
		sumDiag1 = sumDiag1 + a[n];
	}
	for (n = (size - 1); n < size1; n = n + (size - 1))
	{
		sumDiag2 = sumDiag2 + a[n];
	}
	printf("%d, %d\n", sumDiag1, sumDiag2);
}
