#include <stdio.h>

/**
  * main - Entry
  * Description : 'the program display a quote with putchar function'
  */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int counter = 0;

	while(str[counter] != '\0')
	{
		putchar(str[counter++]);
	}	
	return (1);
}
