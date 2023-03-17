#include <stdio.h>

/**
  * main -Entry point.
  * Description: the program prints all possible combinations
  *              of single-digit numbers.
  * Return: Always 0 (Success).
  */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
