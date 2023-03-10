#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size : size of the triangle
 * Return: triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= (size - 1); i++)
		{
			for (j = 0; j < (size - 1) - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
