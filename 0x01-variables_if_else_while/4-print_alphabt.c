#include <stdio.h>

/**
  * main - Entry point.
  * Description: the program print the alphabet in lowercase except q and e.
  * Return: Always 0 (Success).
  */
int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		if (character == 'q' || character == 'e')
		{
			character++;
		}
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
