#include <stdio.h>

/**
  * main -Entry point.
  * Description: the program prints all possible
  *              different combinations of three digits.
  * Return: Always 0 (Success).
  */
int main(void)
{
	int i, j, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (m = 0; m <= 9; m++)
			{
				if (i == j && i == m && j == m)
					continue;
				if (i < j && i < m && j < m)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + m);
					if (!(i == 7 && j == 8 && m == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
