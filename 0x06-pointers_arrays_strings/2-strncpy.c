#include "main.h"

/**
  * _strncpy- copies a string and work exactly as strncpy.
  * @dest:the pointer to the destination array where the content is to be copied.
  * @src:the string to be copied.
  * @n: The number of characters to be copied from source.
  * Return: a pointer to the copied string.
  */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
