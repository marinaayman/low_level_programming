#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#define PRINT_COMMA_IF_NOT_NULL(c) ((c) != '\0' ? printf(", ") : 0)
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
  * struct format_specifier- format.
  * @c: the format.
  * @format_func: the pointer to function assosiated.
  */
typedef struct format_specifier
{
	char c;
	void (*format_func)(va_list);
} format_specifier;
#endif /*VARIADIC_FUNCTIONS_H*/
