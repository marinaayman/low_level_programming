#include <stdio.h>

/**
  * main - Entry point
  * Description: the program prints the alphabet in lowercase and uppercase.
  * Return: Always 0 (Success).
  */
int main(void)
{
	char character_lowercase = 'a';
	char character_uppercase = 'A';

	while (character_lowercase <= 'z')
	{
		putchar(character_lowercase);
		character_lowercase++;
	}
	while (character_uppercase <= 'Z')
	{
		putchar(character_uppercase);
		character_uppercase++;
	}
	putchar('\n');
	return (0);
}
