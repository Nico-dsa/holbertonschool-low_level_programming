#include "main.h"
#include "stdio.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string to encode
 *
 * Return: 0
 */

char *leet(char *s)
{
	int a = 0, b = 0, c = 5;
	char l[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < c)
		{
			if (s[a] == l[b] || s[a] - 32 == l[b])
			{
				s[a] = n[b];
			}
			b++;
		}
		a++;
	}
	return (s);
}
