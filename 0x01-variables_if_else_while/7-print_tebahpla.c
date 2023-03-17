#include <stdio.h>

/**
  * main - Entry point.
  * Description: the program prints the lowercase alphabet in reverse order.
  * Return: Always 0 (Success).
  */
int main(void)
{
	char character;

	for (character = 'z'; character >= 'a'; character--)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
