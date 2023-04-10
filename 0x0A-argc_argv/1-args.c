#include <stdio.h>

/**
  * main- a program that prints the number of arguments
  *       passed into it.
  * @argc: the number of the program arguments.
  * @argv: array of pointers to strings.
  * Return: Always (0) on Success.
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc >= 1)
		printf("%d\n", argc - 1);
	return (0);
}
