#include "main.h"

/**
  * _strchr- locates a character in a string.
  * @s: the string to be manipulated.
  * @c: the character to be located.
  * Return: pointer to string passed by the function.
  */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (0);
}
