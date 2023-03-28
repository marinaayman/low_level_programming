#include "main.h"

/**
  * _strcpy- copies the string pointed to by src,
  *          including the terminating null byte (\0),
  *          to the buffer pointed to by dest.
  * @dest: copied string.
  * @src: source string.
  * Return: pointer to char.
  */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
