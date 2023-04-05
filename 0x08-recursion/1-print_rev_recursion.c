#include "main.h"

/**
  * _print_rev_recursion- prints a string in reverse.
  * @s: the string to be printed.
  * Return: void.
  */

void _print_rev_recursion(char *s)
{
	char *p = s;
	unsigned int len = 0;

	while (*p)
		p++;
	len = p - s - 1;
	if (len--)
	{
		_putchar(*p);
		_print_rev_recursion(p - 1);
	}
}
