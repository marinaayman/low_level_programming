#include "main.h"

/**
  * isprime- checks primality.
  * @n: number.
  * @i: iterator.
  * Return: 1, it not primality.
  *         0, otherwise.
  */

int isprime(int n, int i, int c)
{	
	if (i <= n && c < 2)
	{	
		if (n % i == 0)
		{	
			c++;
		}
		return (isprime(n, i + 1, c));
	}
	else
		return (c);
}
/**
  * is_prime_number- checks if the number is prime.
  * @n: an integer value to be checked for primality.
  * Return: 1 if the input integer is a prime number,
  *         0, otherwise.
  */

int is_prime_number(int n)
{
	int c = 0;

	if (n <= 1)
		return (0);
	c = isprime(n, 2, c);
	if (c == 1)
		return (1);
	else
		return (0);
}
