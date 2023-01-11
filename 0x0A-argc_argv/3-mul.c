#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int h, e;

	if (argc == 3)
	{
		h = atoi(argv[1]);
		e = atoi(argv[2]);
		printf("%d\n", h * e);
		return (0);
	}
	printf("Error\n");
	return (1);
}
