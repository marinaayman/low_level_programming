#include "variadic_functions.h"

/**
  * print_numbers- prints numbers, followed by a new line.
  * @separator: the string to be printed between numbers.
  * @n: the number of integers passed to the function.
  * Return: nothing.
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
	return;
}
