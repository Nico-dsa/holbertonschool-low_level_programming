#include "main.h"
#include "stdio.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: the destination value
 * @src: the source value
 * @n: the limit
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0, i = 0;

	while (dest[d])
	{
		d++;
	}

	while (i < n && src[i])
	{
		dest[d] = src[i];
		d++;
		i++;
	}

	dest[d + n] = '\0';

	return (dest);
}
