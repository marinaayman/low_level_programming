#include <stdio.h>

/**
  * main- a program that prints its name.
  * @argc: the number of arguments.
  * @argv: array to pointers to strings.(program arguments).
  * Return: (0) when Success.
  */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
