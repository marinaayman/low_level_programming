#include "main.h"

/**
  * print_alphabet_x10- a function that prints 10 times the alphabet,
  *                     in lowercase, followed by a new line.
  */

void print_alphabet_x10(void)
{
	char char_lc;
	int i = 0;

	while (i < 10)
	{
		for (char_lc = 'a'; char_lc <= 'z'; char_lc++)
		{
			_putchar(char_lc);
		}
		_putchar('\n');
		i++;
	}
}
