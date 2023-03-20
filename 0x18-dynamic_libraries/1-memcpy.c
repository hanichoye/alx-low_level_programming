#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: Sourse string
 * @src: String for filling
 * @n: length of buffer
 * Return: new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int j = 0;

	while (j < n)
	{

		*(dest + j) = *(src + j);
		j++;
	}
	return (dest);
}
