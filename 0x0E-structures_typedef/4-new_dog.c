#include "dog.h"
#include <stdio.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 * Return: The length of string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * _strcopy - copie a string pointed to by src, including
 * the terminateing null byte
 * @dest: the buffer storing the string copy
 * @src: the source string
 * Return: the pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (ondex = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog
 * @owner: The owner of the dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(izeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(dogggo);
		return (NULL);
	}
	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));