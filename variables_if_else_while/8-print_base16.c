#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char c;

	for (num = 0; num < 10; num++)
		puthcar((num % 10) + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	Return (0);
}
