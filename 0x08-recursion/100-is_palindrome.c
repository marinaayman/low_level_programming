#include "main.h"

/**
  * _strlen_recursion-returns the length of a string.
  * @s: the string to be manipulated.
  * Return: int.
  */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len = _strlen_recursion(s + 1) + 1;
	}
	return (len);
}

/**
  * check- checks the string.
  * @s: the string.
  * @len: the length of the string.
  * @i: the index.
  * Return: 1 if palindrome.
  *         0 if not.
  */

int check(char *s, int len, int i)
{
	if (i < len / 2)
	{
		if (s[i] == s[len - i - 1])
			return (check(s, len, i + 1));
		return (0);
	}
	return (1);
}
/**
  * is_palindrome- checks f a string is a palindrome.
  * @s: the string.
  * Return: 1, on success.
  *         0, on failure.
  */

int is_palindrome(char *s)
{
	int len = 0, i = 0;

	len = _strlen_recursion(s);
	if (*s == '\0')
		return (1);
	return (check(s, len, i));
}
