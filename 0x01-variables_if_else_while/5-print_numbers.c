#include <stdio.h>

/**
  * main - Entry point.
  * Description: the program prints all single digit numbers of base 10.
  * Return: Always 0 (Success).
  */
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit++);
	}
	putchar('\n');
	return (0);
}
