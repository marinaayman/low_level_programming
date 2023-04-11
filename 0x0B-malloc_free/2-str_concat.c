#include "main.h"
#include <stdlib.h>

/**
  * str_concat-  concatenates two strings.
  * @s1: first string.
  * @s2: second string.
  * Return: NULL on failure.
  *         pointer to newly allocated space on success.
  */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; s2[i]; i++)
		len2++;

	newstr = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; s1[i]; i++)
		newstr[i] = s1[i];

	for (j = 0; s2[j]; j++)
	{
		newstr[i] = s2[j];
		i++;
	}

	newstr[i] = '\0';
	return (newstr);
}
