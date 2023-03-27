#include "main.h"

/**
  * print_rev- prints a string, in reverse, followed by a new line.
  * @s: the string to be manipulated.
  * Return: void.
  */

void print_rev(char *s)
{

	int len = 0, index = 0;

	while (s[index++])
		len++;

	for (index =  len - 1; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
