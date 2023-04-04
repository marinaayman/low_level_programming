#include "main.h"

/**
  * _strcat-concatenates two strings.
  * @dest: destination string.
  * @src: source string.
  * Return: char pointer.
  */

char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}

	*dest = '\0';

	return (dest);
}
