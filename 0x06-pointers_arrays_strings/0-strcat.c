#include "main.h"

/**
  * _strcat-concatenates two strings.
  * @dest: destination string.
  * @src: source string.
  * Return: char pointer.
  */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
		p++;

	for (; *src; src++)
	{
		*p = *src;
		p++;
	}


	return (dest);
}
