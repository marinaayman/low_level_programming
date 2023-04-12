#include "main.h"
#include <stdlib.h>

/**
  * word_length- returns length of each word.
  * @str: the string.
  * Return: int.
  */

int word_length(char *str)
{
	int len = 0;

	while (*str && *str != ' ')
	{
		len++;
		str++;
	}
	return (len);
}

/**
  * copy_word- copies words.
  * @dest: location.
  * @src: source location.
  * Return: void.
  */

void copy_word(char *dest, char *src)
{
	while (*src && *src != ' ')
		*dest++ = *src++;
	*dest = '\0';
}

/**
  * strtow- splits a string into words.
  * @str: the string.
  * Return: a pointer to an array of strings on success.
  *         str == NULL or str == "" or on fails.
  */

char **strtow(char *str)
{
	int num_words = 0, i, j = 0, k, size;
	char **words;

	if (!str || !*str)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			num_words++;
	}

	words = malloc(sizeof(char *) * (num_words + 1));
	if (!words)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			size = word_length(str + i);
			words[j] = malloc(sizeof(char) * (size + 1));
			if (!words[j])
			{
				for (k = 0; k < i; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			copy_word(words[j], str + i);
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}
