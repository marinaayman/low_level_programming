#include <stdio.h>

/**
  * main - Entry point
  * Description: the program prints the alphabet in lowercase.
  * Return: Always 0 (Success).
  */
int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
