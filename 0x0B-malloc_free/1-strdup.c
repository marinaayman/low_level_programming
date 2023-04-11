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

char *_strdup(char *str)
{
	char *newstr;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		size++;

	newstr = malloc(sizeof(char) * (size + 1));

	if (newstr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		newstr[i] = str[i];

	return (newstr);
}
