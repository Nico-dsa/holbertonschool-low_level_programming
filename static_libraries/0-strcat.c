#include "main.h"
#include "stdio.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: the destination string
 * @src: the source string
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int d = 0, i;

	while (dest[d])
	{
		d++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[d] = src[i];
		d++;
	}

	dest[d] = '\0';
	return (dest);
}
