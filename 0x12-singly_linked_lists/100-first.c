#include "lists.h"

/**
  * before_main- prints before main is executed.
  * Return: void.
  */

void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
