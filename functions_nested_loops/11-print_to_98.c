#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Check Holberton
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: Nothing
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
		if (i != 98)
		{
		printf("%d, ", i);
		}
		else
		{
		printf("%d", i);
		}
		}
	}
	else if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
		if (i != 98)
		{
		printf("%d, ", i);
		}
		else
		{
		printf("%d", i);
		}
		}
	}
	else
	{
	printf("%d", n);

	}
	printf("\n");

}
