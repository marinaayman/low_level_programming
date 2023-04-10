#include <stdio.h>
#include <stdlib.h>

/**
  * main- a program that prints the minimum number of coins
  *       to make change for an amount of money.
  * @argc: arguments count.
  * @argv: argument vector.
  * Return: 0 (success)
  *         1 (error).
  */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int cents, i, counts = 0;
		int coins[] = {25, 10, 5, 2, 1};
		int numcoins = sizeof(coins) / sizeof(coins[0]);

		if (argv[1][0] == '-')
		{
			printf("0\n");
			return (0);
		}
		cents = atoi(argv[1]);

		for (i = 0; i < numcoins; i++)
		{
			counts += cents / coins[i];
			cents %= coins[i];
		}

		printf("%d\n", counts);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
