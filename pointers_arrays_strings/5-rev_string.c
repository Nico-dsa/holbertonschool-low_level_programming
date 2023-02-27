#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: String to renverse
 *
 * Return: 0
 */

void rev_string(char *s)
{
	char a = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;

	for (i = 0; i < c; i++)
	{
		c--;
		a = s[i];
		s[i] = s[c];
		s[c] = a;
	}
}
