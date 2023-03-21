#include "main.h"

/**
  * print_alphabet- print alphabet.
  * Description: a function that prints the alphabet, in lowercase,
  *              followed by a new line.
  * Return: void.
  */
void print_alphabet(void)
{
	char char_lowercase;

	for (char_lowercase = 'a'; char_lowercase <= 'z'; char_lowercase++)
	{
		_putchar(char_lowercase);
	}
	_putchar('\n');
}
