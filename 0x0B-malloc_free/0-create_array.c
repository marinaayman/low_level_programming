#include "main.h"
#include <stdlib.h>

/**
  * create_array- creates an array of chars,
  *               and initializes it with a specific char.
  * @size: the size required for the array.
  * @c: the charachter required to intialize the array.
  * Return: pointer to the array, or NULL if it fails.
  */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
