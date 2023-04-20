#include "variadic_functions.h"

/**
  * sum_them_all- returns the sum of all its parameters.
  * @n: the number of arguments passed.
  * @...: variable function parameters.
  * Return: sum, on success.
  *           0, If n == 0.
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	return (sum);
}
