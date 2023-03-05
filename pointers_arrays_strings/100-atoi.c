#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: pointer to convert
 *
 * Return: 0
 */

int _atoi(char *s)
{
	unsigned int a = 0;
	int b = 1;
	int c = 0;

	for (; s[c] && !((s[c] >= '0') && (s[c] <= '9')); c++)
		if (s[c] == '-')
			b = -b;
	for (; s[c] && ((s[c] >= '0') && (s[c] <= '9')); c++)
		a = a * 10 + s[c] - '0';
	if (b == -1)
		a = ~a + 1;
	return (*((int *) (&a)));
}
