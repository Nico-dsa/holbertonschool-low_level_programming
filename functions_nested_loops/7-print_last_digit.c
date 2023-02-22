#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be treated
 *
 * Return: the value of the last digit
 */

int print_last_digit(int c)
{
	int last;

	last = c % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}