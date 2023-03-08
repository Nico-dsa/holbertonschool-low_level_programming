#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _isdigit(int c)
{
char l = (char)c;
if (isdigit(l))
{
return (1);
}
else
{
return (0);
}
}
