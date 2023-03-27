#include "main.h"

/**
  * puts2- prints every other character of a string,
  *        starting with the first character, followed by a new line.
  * @str: string to be manipulated.
  * Return: void.
  */

void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (index % 2 == 0)
			_putchar(str[index]);
		else
			continue;
	}
	_putchar('\n');
}
