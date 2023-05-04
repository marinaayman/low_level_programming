#include "main.h"

/**
  * print_binary- prints the binary representation of a number.
  * @n: the number required.
  * Return: void.
  */

void print_binary(unsigned long int n)
{
	unsigned int i, size = sizeof(n) * 4;
	int flag = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		for (i = size - 1; i > 0; i--)
		{
			if (n & (1 << i))
			{
				_putchar('1');
				flag = 1;
			}
			else if (flag)
				_putchar('0');
		}
		if (n & 1)
			_putchar('1');
		else if (flag)
			_putchar('0');
	}
}
