#include "main.h"

/**
 * factorial(int n)
 * @n: number to calculate the factorial
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
