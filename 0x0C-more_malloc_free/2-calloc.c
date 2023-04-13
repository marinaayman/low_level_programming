#include "main.h"
#include <stdlib.h>

/**
  * _calloc- allocates memory for an array, using malloc.
  * @nmemb: the number of elements.
  * @size: each element is size bytes long.
  * Return: NULL , if nmemb, size is 0 or on fails.
  *         pointer to allocated memory, on success.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int total, i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	p = ptr;
	while (total--)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
