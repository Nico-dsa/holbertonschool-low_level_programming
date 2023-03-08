#include "main.h"
#include "stdio.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: accept string
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, c = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				c++;
			}
			b++;
		}
		a++;
	}
	return (c);
}
