#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - get_op_func has operators correlated with
 * func signs and funcs from op_func
 * if not 4 arguments, return Error & exit 98
 * if op is null, return Error & exit 99
 * if div or mod 0, return Error & exit 100
 * @argc: arguments
 * @argv: double pointers to arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	o = get_op_func(argv[2]);

	if (o == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", o(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
