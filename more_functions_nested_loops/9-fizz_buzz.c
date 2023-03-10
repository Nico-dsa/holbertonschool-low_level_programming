#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program that prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of number
 * 5 multiples print Fizz instead of number
 * 15 multiples print Fizz instead of number
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int n = 100;

	for (i = 1; i <= n; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != n)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
