#include "main.h"
#include "stdio.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: menory area
 * @src: source memory area
 * @n: bytes formm memory area
 *
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
