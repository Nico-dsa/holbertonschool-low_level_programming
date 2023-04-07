#include "main.h"

/**
  * get_bit - function that returns the value of a bit at a given index
  * @n: a number
  * @index: is the index, starting from 0 of the bit you want to get
  * Return: the value of the bit at index index or -1 if an error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int result = n >> index;

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);
	return (result & 1);
}
