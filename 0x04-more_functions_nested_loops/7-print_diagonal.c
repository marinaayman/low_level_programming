#include "main.h"

/**
  * print_diagonal- draws a diagonal line on the terminal.
  * @n: the number of times the character \ should be printed.
  * Return: void.
  */

void print_diagonal(int n)
{
	int i, m;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			m = 1;
			for (; m <= i; m++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
