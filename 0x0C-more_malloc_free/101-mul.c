#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _puts- prints a string, follwed be a newline,to stdout.
  * @str: the string to be printed.
  * Return: void.
  */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

/**
  * is_positive_deciaml_number- checks if the number is positive
  *                             decimal with only digits.
  * @num: the number to be checked.
  * Return: void on success.
  *         98 on failure.
  */

void is_positive_decimal_number(char *num)
{
	int i;

	if (num[0] == '0' || num[0] == '-')
	{
		_puts("Error");
		exit(98);
	}
	for (i = 0; num[i] != '\0'; i++)
	{
		if (!(num[i] >= '0' && num[i] <= '9'))
		{
			_puts("Error");
			exit(98);
		}
	}
}

/**
  * _len- computes length.
  * @strnum: the number.
  * Return: int.
  */

int _len(char *strnum)
{
	unsigned int len = 0, i = 0;

	while (strnum[i])
	{
		len++;
		i++;
	}
	return (len);
}

/**
  * _calloc- allocates memory for an array, using malloc.
  * @nmemb: the number of elements.
  * @size: each element is size bytes long.
  * Return: NULL , if nmemb, size is 0 or on fails.
  *         pointer to allocated memory, on success.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int total, i = 0;

	if (nmemb == 0 || size == 0)
	{
		_puts("Error");
		exit(98);
	}
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
	{
		_puts("Error");
		exit(98);
	}
	p = ptr;
	while (total--)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}

/**
  * _multiply- multiplies two long numbers.
  * @num1: first number.
  * @num2: second number.
  * Return: pointer of result on success.
  */

char *_multiply(char *num1, char *num2)
{
	int i, j, product, temp;
	int len1 = _len(num1);
	int len2 = _len(num2);
	int len_result = len1 + len2;
	char *result = _calloc(len_result, sizeof(char));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0');
			temp = result[i + j + 1] + product;
			result[i + j + 1] = temp % 10;
			result[i + j] += temp / 10;
		}
	}
	for (i = 0; i < len_result; i++)
		result[i] += '0';

	return (result);
}
/**
  * main- multiplies two positive numbers.
  * @argc: the arguments number plus the program name.
  * @argv: the arguments vector.
  * Return: 0, on Success.
  *         98, on failure.
  */
int main(int argc, char *argv[])
{
	char *result;
	int start = 0;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	is_positive_decimal_number(argv[1]);
	is_positive_decimal_number(argv[2]);

	result = _multiply(argv[1], argv[2]);
	while (result[start] == '0' && start < _len(result))
		start++;
	_puts(result + start);
	free(result);
	return (0);
}
