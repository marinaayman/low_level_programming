#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define true 1
#define false 0
typedef bool int;

/**
  * Isnum- checks the string contains only digits.
  * @str: the string argument.
  * Return : bool type 
  *          1 if it's a number.
  *          0 if not.
  */

bool Isnum(const char *str);

/**
  * main- program that adds positive numbers.
  * @argc: arguments count.
  * @argv: arguments vector.
  * Return: 0 (Success)
  *         1 (Error).
  */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (Isnum(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}

bool Isnum(const char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (!isdigit(str[j]))
				return (false);
	}

	return (true);
}
