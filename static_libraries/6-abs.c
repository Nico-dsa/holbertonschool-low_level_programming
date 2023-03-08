#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _abs - computes the absolute value of an integer
 * @c: The number to be computed.
 *
 * Return: Absolute value of number or zero
 */

int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (-c);
}
