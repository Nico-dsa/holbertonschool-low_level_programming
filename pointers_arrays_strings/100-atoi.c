#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: pointer to convert
 *
 * Return: 0
 */

int _atoi(char *s)
{
	int x = 0;

  if (atoi(s) != 0)
    {
      x = atoi(s);
    }
 return (x);
}
