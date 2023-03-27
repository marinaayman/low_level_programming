#include "main.h"

/**
  * rev_string- reverses a string.
  * @s: the string to be manipulated.
  * Return: void.
  */

void rev_string(char *s)
{
	int len = 0, index = 0, i = 0;
	char str[500];

	while (s[index++])
		len++;
	for (index =  len - 1; index >= 0; index--)
	{
		str[i] = s[index];
		i++;
	}

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
}
