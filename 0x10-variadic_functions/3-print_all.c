#include "variadic_functions.h"

/**
  * print_char- print a character.
  * @args: variable argument.
  * Return: void.
  */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
  * print_int- print a character.
  * @args: variable argument.
  * Return: void.
  */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
  * print_float- print a character.
  * @args: variable argument.
  * Return: void.
  */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
  * print_string- print a character.
  * @args: variable argument.
  * Return: void.
  */

void print_string(va_list args)
{
	char *str = va_arg(args, char*);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
  * print_all- prints anything.
  * @format: a list of types of arguments passed to the function.
  * @...: variable arguments.
  * Return: nothing.
  */

void print_all(const char * const format, ...)
{
	va_list string;
	int i;
	const char *format_str = format;
	format_specifier s[] = {{'c', print_char},
				{'i', print_int},
				{'f', print_float},
				{'s', print_string}};

	va_start(string, format);
	while (*format_str)
	{
		i = 0;
		while (i < 4 && *format_str != s[i].c)
		{
			i++;
		}

		if (i != 4)
		{
			s[i].format_func(string);
			if (*(format_str + 1) != '\0')
				printf(", ");
		}
		format_str++;
	}
	va_end(string);
	printf("\n");
}
