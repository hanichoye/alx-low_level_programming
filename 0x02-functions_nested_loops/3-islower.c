#include "main.h"

/**
 * _lslower - function to check for lowercase character
 * @c: Is the int thet will use for the argument of the function.
 * Return: 0
 */
int _lslower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
