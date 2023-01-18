#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer the the comparing function
 * Return: index of the first element for which the cmp
 * function does not return 0, or -1 if no
 * match is found or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int h;
if (array && cmp)
{
	for (h = 0; h < size; h++)
	{
		if (cmp(array[h]) != 0)
			return (h);
	}
}
return (-1);
}
