#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main- program that adds positive numbers.
  * @argc: arguments count.
  * @argv: arguments vector.
  * Return: 0 (Success)
  *         1 (Error).
  */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				sum += atoi(argv[i];
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
