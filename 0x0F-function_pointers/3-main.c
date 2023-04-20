#include "3-calc.h"

/**
  * main- performs simple operations..
  * @argc: arguments count.
  * @argv: arguments vector.
  * Return: 98, if the number of arguments is wrong.
  *         99, if the operator is none of the above.
  *         100,if the user tries to divide (/ or %) by 0.
  *         result, otherwise.
  */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *operator = argv[2];
	int (*func_ptr)(int, int) = get_op_func(operator);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (((strspn(argv[1], "0123456789") != strlen(argv[1])) &&
	    (strspn(argv[3], "0123456789") != strlen(argv[3]))) && 
	    (get_op_func(operator) == NULL ||
	    *(operator + 1) != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func_ptr(num1, num2));
	return (0);

}
