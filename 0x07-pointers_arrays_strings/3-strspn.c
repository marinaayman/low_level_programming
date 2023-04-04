#include "main.h"

/**
  * _strspn- gets the length of a prefix substring.
  * @s: the string to be scanned.
  * @accept: the string bytes to be compared with.
  * Return: unsigned int.
  */

unsigned int _strspn(char *s, char *accept)
{
	char *a = s;

	while (*s)
		for (; *s == *accept; s++)
			;

	return (s - a);
}