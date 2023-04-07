#include "main.h"

/**
  * binary_to_uint - function that converts a binary number to an unsigned int
  * @b: an array of char to convert into int
  * Return: the converted number
  */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, r = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			r = r << 1;
			r += (b[i] - '0');
			i++;
		}
		else
			return (0);
	}
	return (r);
}
