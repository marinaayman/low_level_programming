#include "main.h"

/**
  * main - Entry point
  * Description: the program prints _putchar, followed by a new line.
  * Return: always 0 (Success).
  */

int main(void)
{
	char string[] = "_putchar\n\0";
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	return (0);
}
