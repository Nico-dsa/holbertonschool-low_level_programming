#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %s bytes\n", sizeof(a));
	printf("Size of int: %s bytes\n", sizeof(b));
	printf("Size of long int: %s bytes\n", sizeof(c));
	printf("Size of long long int: %s bytes\n", sizeof(d));
	printf("Size of float: %s bytes\n", sizeof(e));

	return 0;
}
