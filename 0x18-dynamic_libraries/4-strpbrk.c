#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: sourse string
 * @accept: searching string
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int m, n;

	for (m = 0; *(s + m); m++)
	{
		for (n = 0; *(accept + n); n++)
		{
			if (*(s + m) == *(accept + n))
			{
				break;
			}
		}
		if (*(accept + n) != '\0')
		{
			return (s + m);
		}
	}
	return (0);
}
