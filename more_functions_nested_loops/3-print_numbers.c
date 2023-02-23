#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 0-9 followed by newline
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
