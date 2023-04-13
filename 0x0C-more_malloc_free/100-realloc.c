#include "main.h"
#include <stdlib.h>

/**
  * min- returns the minimum of the two sizes.
  * @old: first size.
  * @new: second size.
  * Return: the minimum.
  */

unsigned int min(unsigned int old, unsigned int new)
{
	return ((old < new) ? old : new);
}

/**
  * _realloc- reallocates a memory block using malloc and free.
  * @ptr: a pointer to the memory previously allocated with
  *       a call to malloc: malloc(old_size).
  * @old_size: the size, in bytes, of the allocated space for ptr.
  * @new_size: the new size, in bytes, of the new memory block.
  * Return: If new_size == old_size - ptr.
  *         If new_size == 0 and ptr is not NULL or on failure- NULL.
  *         Otherwise - a pointer to the reallocated memory block.
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem = NULL;
	unsigned int i = 0;
	char *ori_ptr = ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		new_mem = malloc(new_size);
		if (!new_mem)
			return (NULL);
		free(ptr);
		return (new_mem);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_mem = malloc(new_size);
	if (!new_mem)
		return (NULL);
	for (i = 0; i < min(old_size, new_size); i++)
	{
		new_mem[i] = ori_ptr[i];
	}
	free(ptr);
	return (new_mem);
}
