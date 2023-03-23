#include "main.h"

/**
  * print_line- draws a straight line in the terminal.
  * @n: number of '_' to be printed.
  * Return: void.
  */

void print_line(int n)
{
	if (n > 0)
	{
		for (; n; n--)
			_putchar('_');
	}
	_putchar('\n');
}
