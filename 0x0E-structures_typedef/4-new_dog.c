#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcpy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_instance;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog_instance = malloc(sizeof(dog_t));
	if (dog_instance == NULL)
		return (NULL);

	dog_instance->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_instance->name == NULL)
	{
		free(dog_instance);
		return (NULL);
	}

	dog_instance->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_instance->owner == NULL)
	{
		free(dog_instance->name);
		free(dog_instance);
		return (NULL);
	}

	dog_instance->name = _strcpy(dog_instance->name, name);
	dog_instance->age = age;
	dog_instance->owner = _strcpy(dog_instance->owner, owner);

	return (dog_instance);
}
