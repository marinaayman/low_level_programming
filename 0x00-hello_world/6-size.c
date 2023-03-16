#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program prints the sizes of computer types'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int ln;
	long long int lln;
	float f;

	printf("Size of a char: %u byte(s)\n", (unsigned int)sizeof(c));
	printf("Size of an int: %u byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long int: %u byte(s)\n", (unsigned int)sizeof(ln));
	printf("Size of a long long int: %u byte(s)\n", (unsigned int)sizeof(lln));
	printf("Size of a float: %u byte(s)\n", (unsigned int)sizeof(f));
	return (0);
}
