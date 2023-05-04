#include "main.h"

/**
  * flip_bits- returns the number of bits
  *            you would need to flip to get from one number to another.
  * @n: the number.
  * @m: the another number.
  * Return: number of bits.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (__builtin_popcountl(n ^ m));
}
