#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * _isupper - Check Holberton
 * @c: An input character
 * Description: function _isupper function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _isupper(int c)
{
char l = (char)c;
if (isupper(l))
{
return (1);
}
else
{
return (0);
}
}
