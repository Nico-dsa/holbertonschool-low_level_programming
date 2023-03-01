#include "main.h"
#include "stdio.h"

/**
 * string_toupper - function changes lowercase letters of string to uppercase
 * @p: string will be modified
 *
 * Return: 0
 */

char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
			p[i] = (int)p[i] - 32;
	}
	return (p);
}
