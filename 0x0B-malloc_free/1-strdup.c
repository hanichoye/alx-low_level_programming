#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: string to duplicate
 * Return: Success or Error
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len;
	
	i = 0;
	len = 0;
	
	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));
	
	if (duplicate == NULL)
		return (NULL);
	while ((duplicate[i] = str[i]) != '\0')
		i++;
	return (duplicate);
}
