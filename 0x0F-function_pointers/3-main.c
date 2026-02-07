#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - coordinate everything
 * @argc: argument count
 * @argv: array of arguments' pointers
 *
 * Return: 1 if succesful, otherwise another number
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else if (((argv[2][0] == '/') || (argv[2][0] == '%')) && (argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	else if ((argv[2][0] == '+') || (argv[2][0] == '-')
			|| (argv[2][0] == '*') || (argv[2][0] == '/') || (argv[2][0] == '%'))
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[3]);

		f = get_op_func(argv[2]);
		result = f(a, b);
		printf("%d\n", result);
		return (0);
	}
	printf("Error\n");
	exit(99);
}
