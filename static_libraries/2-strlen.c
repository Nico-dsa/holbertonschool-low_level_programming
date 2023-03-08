#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: char input
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
