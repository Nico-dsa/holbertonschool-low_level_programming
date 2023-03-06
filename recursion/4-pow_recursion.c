#include "main.h"

/**
 * _pow_recursion - function that returns value of x raised to the power of y
 * @x: the value to multiplie
 * @y: time to multiply the value
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
