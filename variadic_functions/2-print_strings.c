#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char*);
		if (separator == NULL || i == (n - 1))
			separator = "";
		if (s == NULL)
			printf("(nil)%s", separator);
		else
			printf("%s%s", s, separator);
	}
	va_end(ap);
	printf("\n");
}
