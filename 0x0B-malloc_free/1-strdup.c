#include "main.h"
#include <stdlib.h>

/**
  * _strdup- returns pointer to a newly allocated
  *          space in memory, which contains a copy of
  *          the string given as a parameter.
  * @str: the string to be copied.
  * Return: NULL if str = NULL or insufficient memory was available.
  *         a pointer to the duplicated string on success.
  */
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

char *_strdup(char *str)
{
	char *newstr;

	if (str == NULL)
		return (NULL);

	newstr = malloc(sizeof(char) * (_strlen(str) + 1));

	if (newstr == NULL)
		return (NULL);

	_strcpy(newstr, str);

	return (newstr);
}

int _strlen(char *s)
{
	int i;

	for (i = 0; *s++ != '\0'; i++)
	{}

	return (i);
}

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
