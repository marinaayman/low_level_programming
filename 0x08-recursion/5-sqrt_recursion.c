#include "main.h"

/**
  * _sqrt- find the square root.
  * @n: the number.
  * @i: the start.
  * Return: -1, on failure.
  *         i, on success.
  */

int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}

/**
  * _sqrt_recursion- returns the natural square root of a number.
  * @n: the number to manipulated.
  * Return: the natural square root.
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, 0));
	}
}
