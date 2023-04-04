#include "main.h"

/**
  * _strspn- gets the length of a prefix substring.
  * @s: the string to be scanned.
  * @accept: the string bytes to be compared with.
  * Return: unsigned int.
  */

unsigned int _strspn(char *s, char *accept)
{
	char *p1, *p2;
	*p1 = s;
	*p2 = accept;

	while (*p1)
	{
		p1++;
		p2++;
		while (*p2)
		{
			if (*p1 == *p2)
				continue;
		}
	}
	return (p1 - 1 - s);
}
