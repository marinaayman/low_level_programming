#include "main.h"
#include <stdlib.h>

/**
  * _strlen- returns length of each string.
  * @str: the string.
  * Return: int.
  */

unsigned int _strlen(char *str)
{
	int len = 0, i = 0;

	while (str[i])
	{
		len++;
		i++;
	}
	if (len == 0)
		len = 1;
	return (len);
}

/**
  * string_nconcat- concatenates two strings.
  * @s1: the first string.
  * @s2: the second string.
  * @n: the first bytes of s2 to be printed.
  * Return: on Success, a pointer to new allocated memory.
  *         on Failure, NULL.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i = 0, index = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	ptr = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	if (n >= _strlen(s2))
		n = _strlen(s2);
	while (s2[index] && n--)
	{
		ptr[i] = s2[index];
		i++;
		index++;
	}
	ptr[i] = '\0';
	return (ptr);
}
