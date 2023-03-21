#include "main.h"

/**
  * _abs - computes the absolute value of an integer.
  * @n: the integer to be computed.
  * Return: integer.
  */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
