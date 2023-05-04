#include "main.h"
/**
  * get_endianness- checks the endianness.
  * Return: 0 if big endian, 1 if little endian.
  */

int get_endianness(void)
{
	/**
	  * x- A union that contains a short unsigned int and a struct.
	  * @i: A short unsigned int member.
	  * @c: A struct with two unsigned char members.
	  */

	union
	{
		unsigned short int i;
		/**
		  * c- Astruct.
		  * @c0: member one.
		  * @c1: member two.
		  */
		struct
		{
			unsigned char c0;
			unsigned char c1;
		} c;
	} x;

	x.i = 1;

	if (x.c.c0)
		return (1);
	else
		return (0);
}
