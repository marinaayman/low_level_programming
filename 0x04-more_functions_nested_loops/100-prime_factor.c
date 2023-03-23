#include <stdio.h>
#include <math.h>

/**
  * main-Entry point.
  * Description: a program that finds and prints
  *              the largest prime factor of the number 612852475143,
  *              followed by a new line.
  * Return: 0 (success).
  */

int main(void)
{
	long int number = 612852475143;
	long int i;

	while (number % 2 == 0)
		number = number / 2;
	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
			number = number / i;
	}
	printf("%ld\n", number);

	return (0);
}
