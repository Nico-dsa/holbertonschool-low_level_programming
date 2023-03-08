#include "main.h"
#include "stdio.h"

/**
 * _memset - unction that fills memory with a constant byte.
 * @s: menory area
 * @b: constant byte
 * @n: byte of memory area
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
