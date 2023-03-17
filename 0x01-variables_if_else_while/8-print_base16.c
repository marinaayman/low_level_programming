#include <stdio.h>

/**
  * main -Entry point.
  * Description: the program prints all the numbers of base 16 in lowercase.
  * Return: Always 0 (Success).
  */
int main(void)
{
	char digit, character;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (character = 'a'; character <= 'f'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
