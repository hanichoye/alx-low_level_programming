#include "main.h"

/**
 * _strlen_recursion - Return the length of a string.
 * @s: The string to be measured
 * Return: The length if the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
}
